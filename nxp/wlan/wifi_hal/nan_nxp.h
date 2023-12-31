/*
* Copyright (C) 2014 The Android Open Source Project
* Portion copyright 2017-2020 NXP
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef __NAN_NXP_H__
#define __NAN_NXP_H__

/*
  NAN Status codes exchanged between firmware
  and WifiHal.
*/
typedef enum {
    /* NAN Protocol Response Codes */
    NAN_I_STATUS_SUCCESS = 0,
    NAN_I_STATUS_TIMEOUT = 1,
    NAN_I_STATUS_DE_FAILURE = 2,
    NAN_I_STATUS_INVALID_MSG_VERSION = 3,
    NAN_I_STATUS_INVALID_MSG_LEN = 4,
    NAN_I_STATUS_INVALID_MSG_ID = 5,
    NAN_I_STATUS_INVALID_HANDLE = 6,
    NAN_I_STATUS_NO_SPACE_AVAILABLE = 7,
    NAN_I_STATUS_INVALID_PUBLISH_TYPE = 8,
    NAN_I_STATUS_INVALID_TX_TYPE = 9,
    NAN_I_STATUS_INVALID_MATCH_ALGORITHM = 10,
    NAN_I_STATUS_DISABLE_IN_PROGRESS = 11,
    NAN_I_STATUS_INVALID_TLV_LEN = 12,
    NAN_I_STATUS_INVALID_TLV_TYPE = 13,
    NAN_I_STATUS_MISSING_TLV_TYPE = 14,
    NAN_I_STATUS_INVALID_TOTAL_TLVS_LEN = 15,
    NAN_I_STATUS_INVALID_REQUESTER_INSTANCE_ID= 16,
    NAN_I_STATUS_INVALID_TLV_VALUE = 17,
    NAN_I_STATUS_INVALID_TX_PRIORITY = 18,
    NAN_I_STATUS_INVALID_CONNECTION_MAP = 19,
    NAN_I_STATUS_INVALID_THRESHOLD_CROSSING_ALERT_ID = 20,
    NAN_I_STATUS_INVALID_STATS_ID = 21,
    NAN_I_STATUS_NAN_NOT_ALLOWED = 22,
    NAN_I_STATUS_NO_OTA_ACK = 23,
    NAN_I_STATUS_TX_FAIL = 24,
    NAN_I_STATUS_NAN_ALREADY_ENABLED = 25,
    NAN_I_STATUS_FOLLOWUP_QUEUE_FULL = 26,
    /* 27-4095 Reserved */
    /* NAN Configuration Response codes */
    NAN_I_STATUS_INVALID_RSSI_CLOSE_VALUE = 4096,
    NAN_I_STATUS_INVALID_RSSI_MIDDLE_VALUE = 4097,
    NAN_I_STATUS_INVALID_HOP_COUNT_LIMIT = 4098,
    NAN_I_STATUS_INVALID_MASTER_PREFERENCE_VALUE = 4099,
    NAN_I_STATUS_INVALID_LOW_CLUSTER_ID_VALUE = 4100,
    NAN_I_STATUS_INVALID_HIGH_CLUSTER_ID_VALUE = 4101,
    NAN_I_STATUS_INVALID_BACKGROUND_SCAN_PERIOD = 4102,
    NAN_I_STATUS_INVALID_RSSI_PROXIMITY_VALUE = 4103,
    NAN_I_STATUS_INVALID_SCAN_CHANNEL = 4104,
    NAN_I_STATUS_INVALID_POST_NAN_CONNECTIVITY_CAPABILITIES_BITMAP = 4105,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_NUMCHAN_VALUE = 4106,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_DURATION_VALUE = 4107,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_CLASS_VALUE = 4108,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_CHANNEL_VALUE = 4109,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_AVAILABILITY_INTERVAL_BITMAP_VALUE = 4110,
    NAN_I_STATUS_INVALID_FURTHER_AVAILABILITY_MAP_MAP_ID = 4111,
    NAN_I_STATUS_INVALID_POST_NAN_DISCOVERY_CONN_TYPE_VALUE = 4112,
    NAN_I_STATUS_INVALID_POST_NAN_DISCOVERY_DEVICE_ROLE_VALUE = 4113,
    NAN_I_STATUS_INVALID_POST_NAN_DISCOVERY_DURATION_VALUE = 4114,
    NAN_I_STATUS_INVALID_POST_NAN_DISCOVERY_BITMAP_VALUE = 4115,
    NAN_I_STATUS_MISSING_FUTHER_AVAILABILITY_MAP = 4116,
    NAN_I_STATUS_INVALID_BAND_CONFIG_FLAGS = 4117,
    NAN_I_STATUS_INVALID_RANDOM_FACTOR_UPDATE_TIME_VALUE = 4118,
    NAN_I_STATUS_INVALID_ONGOING_SCAN_PERIOD = 4119,
    NAN_I_STATUS_INVALID_DW_INTERVAL_VALUE = 4120,
    NAN_I_STATUS_INVALID_DB_INTERVAL_VALUE = 4121,
    /* 4122-8191 RESERVED */
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_INVALID = 8192,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_TIMEOUT = 8193,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_USER_REQUEST = 8194,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_FAILURE = 8195,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_COUNT_REACHED = 8196,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_DE_SHUTDOWN = 8197,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_DISABLE_IN_PROGRESS = 8198,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_POST_DISC_ATTR_EXPIRED = 8199,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_POST_DISC_LEN_EXCEEDED = 8200,
    NAN_I_PUBLISH_SUBSCRIBE_TERMINATED_REASON_FURTHER_AVAIL_MAP_EMPTY = 8201,
    /* 9000-9500 NDP Status type */
    NDP_I_UNSUPPORTED_CONCURRENCY = 9000,
    NDP_I_NAN_DATA_IFACE_CREATE_FAILED = 9001,
    NDP_I_NAN_DATA_IFACE_DELETE_FAILED = 9002,
    NDP_I_DATA_INITIATOR_REQUEST_FAILED = 9003,
    NDP_I_DATA_RESPONDER_REQUEST_FAILED = 9004,
    NDP_I_INVALID_SERVICE_INSTANCE_ID = 9005,
    NDP_I_INVALID_NDP_INSTANCE_ID = 9006,
    NDP_I_INVALID_RESPONSE_CODE = 9007,
    NDP_I_INVALID_APP_INFO_LEN = 9008,
    /* OTA failures and timeouts during negotiation */
    NDP_I_MGMT_FRAME_REQUEST_FAILED = 9009,
    NDP_I_MGMT_FRAME_RESPONSE_FAILED = 9010,
    NDP_I_MGMT_FRAME_CONFIRM_FAILED = 9011,
    NDP_I_END_FAILED = 9012,
    NDP_I_MGMT_FRAME_END_REQUEST_FAILED = 9013,

    /* 9500 onwards vendor specific error codes */
    NDP_I_VENDOR_SPECIFIC_ERROR = 9500
} NanInternalStatusType;

/*
  Definition of various NanResponseType
*/
typedef enum {
    NAN_REQUEST_ENABLED = 0x3000,
    NAN_REQUEST_DISABLED,
    NAN_REQUEST_PUBLISH,
    NAN_REQUEST_PUBLISH_CANCEL,
    NAN_REQUEST_TRANSMIT_FOLLOWUP,
    NAN_REQUEST_SUBSCRIBE,
    NAN_REQUEST_SUBSCRIBE_CANCEL,
    NAN_REQUEST_STATS,
    NAN_REQUEST_CONFIG,
    NAN_REQUEST_TCA,
    NAN_REQUEST_ERROR,
    NAN_REQUEST_BEACON_SDF_PAYLOAD,
    NAN_GET_CAPABILITIES_REQUEST,
    NAN_DP_INTERFACE_CREATE_REQUEST,
    NAN_DP_INTERFACE_DELETE_REQUEST,
    NAN_DP_INITIATOR_RESPONSE_REQUEST,
    NAN_DP_RESPONDER_RESPONSE_REQUES,
    NAN_DP_END_REQUEST,
    NAN_REQUEST_MAX
} NanNxpRequestType;

typedef enum {
    NAN_MSG_ID_ERROR_RSP                    = 0,
    NAN_MSG_ID_ENABLE,
    NAN_MSG_ID_DISABLE,
    NAN_MSG_ID_PUBLISH_SERVICE,
    NAN_MSG_ID_PUBLISH_SERVICE_CANCEL,
    NAN_MSG_ID_PUBLISH_REPLIED_IND,
    NAN_MSG_ID_PUBLISH_TERMINATED_IND,
    NAN_MSG_ID_SUBSCRIBE_SERVICE,
    NAN_MSG_ID_SUBSCRIBE_SERVICE_CANCEL,
    NAN_MSG_ID_SUBSCRIBE_TERMINATED_IND,
    NAN_MSG_ID_TRANSMIT_FOLLOWUP,
    NAN_MSG_ID_FOLLOWUP_IND,
    NAN_MSG_ID_STATS,
    NAN_MSG_ID_CONFIGURATION,
    NAN_MSG_ID_TCA,
    NAN_MSG_ID_TCA_IND,
    NAN_MSG_ID_BEACON_SDF,
    NAN_MSG_ID_BEACON_SDF_IND,
    NAN_MSG_ID_CAPABILITIES ,
    NAN_MSG_ID_NDP_IF_CREATE,
    NAN_MSG_ID_NDP_IF_DELETE,
    NAN_MSG_ID_NDP_REQ_INITIATOR,
    NAN_MSG_ID_NDP_IND_RESP,
    NAN_MSG_ID_NDP_END,
    NAN_MSG_ID_MATCH_IND,
    NAN_MSG_ID_MATCH_EXPIRED_IND,
    NAN_MSG_ID_DE_EVENT_IND,
    NAN_MSG_ID_DISABLE_IND,
    NAN_MSG_ID_SELF_TRANSMIT_FOLLOWUP_IND,
    NAN_MSG_ID_RANGING_REQUEST_RECEVD_IND,
    NAN_MSG_ID_RANGING_RESULT_IND,
} NanMsgIdType;

typedef enum {
    NAN_DE_MAC_ADDR = 10,
    NAN_DE_START_CLUSTER,
    NAN_DE_JOIN_CLUSTER,
} NanDEtype;

#endif
