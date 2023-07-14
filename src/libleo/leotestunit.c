#include <ultra64.h>
#include "libleo/internal.h"

void leoTest_unit_rdy(void) {
  ((LEOCmdTestUnitReady*)LEOcur_command)->test = leoChk_cur_drvmode();
  LEOcur_command->header.sense = LEO_SENSE_NO_ADDITIONAL_SENSE_INFOMATION;
  LEOcur_command->header.status = LEO_STATUS_GOOD;
}
