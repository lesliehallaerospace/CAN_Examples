/* Retreive the relevant messages from CAN buffer (if any) */
/* Function implementation */
#include "mcp2515.h"
#include "RxCANmsg.h"
#define LED3                           8U

void retreive_RxCAN()
{
  uint8_t isNotFinished;
  uint8_t i;
  tCAN tempCANmsg;

  /* Retreive CAN messages */
  if (mcp2515_check_message()) {
    isNotFinished = 0;

    /* Loop through CAN messages and assign it to the right place*/
    isNotFinished = mcp2515_get_message(&tempCANmsg);
    while (isNotFinished) {
      if (tempCANmsg.id == RMsg_CAN_RX_ID20.id) {
        for (i=0;i<RMsg_CAN_RX_ID20.header.length;i++) {
          RMsg_CAN_RX_ID20.data[i] = tempCANmsg.data[i];
        }

        isReceived_CAN_RX_ID20 = 1;
      } else {
      }

      if (tempCANmsg.id == RMsg_CAN_RX_ID30.id) {
        for (i=0;i<RMsg_CAN_RX_ID30.header.length;i++) {
          RMsg_CAN_RX_ID30.data[i] = tempCANmsg.data[i];
        }

        isReceived_CAN_RX_ID30 = 1;
      } else {
      }

      /* Keep going */
      isNotFinished = mcp2515_get_message(&tempCANmsg);
    }
  } else {
  }
}
