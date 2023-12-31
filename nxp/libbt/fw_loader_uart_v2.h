/******************************************************************************
 *
 *  Copyright 2009-2021 NXP
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#ifndef _FW_LOADER_V2_H
#define _FW_LOADER_V2_H
/*===================== Include Files ============================================*/
#include "bt_vendor_nxp.h"

/*==================== Typedefs =================================================*/


/*===================== Macros ===================================================*/

extern int mchar_fd;

/*===================== Global Vars ==============================================*/

/*==================== Function Prototypes ======================================*/

void init_crc8();
BOOLEAN bt_vnd_mrvl_check_fw_status_v2();
int bt_vnd_mrvl_download_fw_v2(int8 *pPortName, int32 iBaudRate, int8 *pFileName);
#endif  // _FW_LOADER_H

