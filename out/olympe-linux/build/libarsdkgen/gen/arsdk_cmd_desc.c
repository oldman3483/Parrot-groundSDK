#include "arsdk/arsdk.h"

/* Disable compilation warnings*/
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-const-variable"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#if __GNUC__ > 5
#pragma GCC diagnostic ignored "-Wunused-const-variable"
#else
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif
#endif

static const struct arsdk_enum_desc s_enum_desc_Common_NetworkEvent_Disconnection_Cause[] = {
	{"OFF_BUTTON", ARSDK_COMMON_NETWORKEVENT_DISCONNECTION_CAUSE_OFF_BUTTON},
	{"UNKNOWN", ARSDK_COMMON_NETWORKEVENT_DISCONNECTION_CAUSE_UNKNOWN},
	{"RESET_FACTORY", ARSDK_COMMON_NETWORKEVENT_DISCONNECTION_CAUSE_RESET_FACTORY},
};

static const struct arsdk_enum_desc s_enum_desc_Common_CommonState_SensorsStatesListChanged_SensorName[] = {
	{"IMU", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_IMU},
	{"BAROMETER", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_BAROMETER},
	{"ULTRASOUND", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_ULTRASOUND},
	{"GPS", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_GPS},
	{"MAGNETOMETER", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_MAGNETOMETER},
	{"VERTICAL_CAMERA", ARSDK_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME_VERTICAL_CAMERA},
};

static const struct arsdk_enum_desc s_enum_desc_Common_CommonState_ProductModel_Model[] = {
	{"RS_TRAVIS", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_TRAVIS},
	{"RS_MARS", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_MARS},
	{"RS_SWAT", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_SWAT},
	{"RS_MCLANE", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_MCLANE},
	{"RS_BLAZE", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_BLAZE},
	{"RS_ORAK", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_ORAK},
	{"RS_NEWZ", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_RS_NEWZ},
	{"JS_MARSHALL", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_MARSHALL},
	{"JS_DIESEL", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_DIESEL},
	{"JS_BUZZ", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_BUZZ},
	{"JS_MAX", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_MAX},
	{"JS_JETT", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_JETT},
	{"JS_TUKTUK", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_JS_TUKTUK},
	{"SW_BLACK", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_SW_BLACK},
	{"SW_WHITE", ARSDK_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL_SW_WHITE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Controller_PeerStateChanged_State[] = {
	{"CONNECTED", ARSDK_COMMON_CONTROLLER_PEERSTATECHANGED_STATE_CONNECTED},
	{"DISCONNECTED", ARSDK_COMMON_CONTROLLER_PEERSTATECHANGED_STATE_DISCONNECTED},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Controller_PeerStateChanged_Type[] = {
	{"UNKNOWN", ARSDK_COMMON_CONTROLLER_PEERSTATECHANGED_TYPE_UNKNOWN},
	{"NET", ARSDK_COMMON_CONTROLLER_PEERSTATECHANGED_TYPE_NET},
	{"MUX", ARSDK_COMMON_CONTROLLER_PEERSTATECHANGED_TYPE_MUX},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Mavlink_Start_Type[] = {
	{"FLIGHTPLAN", ARSDK_COMMON_MAVLINK_START_TYPE_FLIGHTPLAN},
	{"MAPMYHOUSE", ARSDK_COMMON_MAVLINK_START_TYPE_MAPMYHOUSE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_State[] = {
	{"PLAYING", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_STATE_PLAYING},
	{"STOPPED", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_STATE_STOPPED},
	{"PAUSED", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_STATE_PAUSED},
	{"LOADED", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_STATE_LOADED},
};

static const struct arsdk_enum_desc s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_Type[] = {
	{"FLIGHTPLAN", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_TYPE_FLIGHTPLAN},
	{"MAPMYHOUSE", ARSDK_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_TYPE_MAPMYHOUSE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged_Error[] = {
	{"NONE", ARSDK_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED_ERROR_NONE},
	{"NOTINOUTDOORMODE", ARSDK_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED_ERROR_NOTINOUTDOORMODE},
	{"GPSNOTFIXED", ARSDK_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED_ERROR_GPSNOTFIXED},
	{"NOTCALIBRATED", ARSDK_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED_ERROR_NOTCALIBRATED},
};

static const struct arsdk_enum_desc s_enum_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged_Axis[] = {
	{"XAXIS", ARSDK_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED_AXIS_XAXIS},
	{"YAXIS", ARSDK_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED_AXIS_YAXIS},
	{"ZAXIS", ARSDK_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED_AXIS_ZAXIS},
	{"NONE", ARSDK_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED_AXIS_NONE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_CalibrationState_PitotCalibrationStateChanged_State[] = {
	{"DONE", ARSDK_COMMON_CALIBRATIONSTATE_PITOTCALIBRATIONSTATECHANGED_STATE_DONE},
	{"READY", ARSDK_COMMON_CALIBRATIONSTATE_PITOTCALIBRATIONSTATECHANGED_STATE_READY},
	{"IN_PROGRESS", ARSDK_COMMON_CALIBRATIONSTATE_PITOTCALIBRATIONSTATECHANGED_STATE_IN_PROGRESS},
	{"REQUIRED", ARSDK_COMMON_CALIBRATIONSTATE_PITOTCALIBRATIONSTATECHANGED_STATE_REQUIRED},
};

static const struct arsdk_enum_desc s_enum_desc_Common_FlightPlanState_ComponentStateListChanged_Component[] = {
	{"GPS", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_GPS},
	{"CALIBRATION", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_CALIBRATION},
	{"MAVLINK_FILE", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_MAVLINK_FILE},
	{"TAKEOFF", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_TAKEOFF},
	{"WAYPOINTSBEYONDGEOFENCE", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_WAYPOINTSBEYONDGEOFENCE},
	{"CAMERAAVAILABLE", ARSDK_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT_CAMERAAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Animations_StartAnimation_Anim[] = {
	{"HEADLIGHTS_FLASH", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_HEADLIGHTS_FLASH},
	{"HEADLIGHTS_BLINK", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_HEADLIGHTS_BLINK},
	{"HEADLIGHTS_OSCILLATION", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_HEADLIGHTS_OSCILLATION},
	{"SPIN", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SPIN},
	{"TAP", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_TAP},
	{"SLOW_SHAKE", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SLOW_SHAKE},
	{"METRONOME", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_METRONOME},
	{"ONDULATION", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_ONDULATION},
	{"SPIN_JUMP", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SPIN_JUMP},
	{"SPIN_TO_POSTURE", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SPIN_TO_POSTURE},
	{"SPIRAL", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SPIRAL},
	{"SLALOM", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_SLALOM},
	{"BOOST", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_BOOST},
	{"LOOPING", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_LOOPING},
	{"BARREL_ROLL_180_RIGHT", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_BARREL_ROLL_180_RIGHT},
	{"BARREL_ROLL_180_LEFT", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_BARREL_ROLL_180_LEFT},
	{"BACKSWAP", ARSDK_COMMON_ANIMATIONS_STARTANIMATION_ANIM_BACKSWAP},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Animations_StopAnimation_Anim[] = {
	{"HEADLIGHTS_FLASH", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_HEADLIGHTS_FLASH},
	{"HEADLIGHTS_BLINK", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_HEADLIGHTS_BLINK},
	{"HEADLIGHTS_OSCILLATION", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_HEADLIGHTS_OSCILLATION},
	{"SPIN", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SPIN},
	{"TAP", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_TAP},
	{"SLOW_SHAKE", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SLOW_SHAKE},
	{"METRONOME", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_METRONOME},
	{"ONDULATION", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_ONDULATION},
	{"SPIN_JUMP", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SPIN_JUMP},
	{"SPIN_TO_POSTURE", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SPIN_TO_POSTURE},
	{"SPIRAL", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SPIRAL},
	{"SLALOM", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_SLALOM},
	{"BOOST", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_BOOST},
	{"LOOPING", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_LOOPING},
	{"BARREL_ROLL_180_RIGHT", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_BARREL_ROLL_180_RIGHT},
	{"BARREL_ROLL_180_LEFT", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_BARREL_ROLL_180_LEFT},
	{"BACKSWAP", ARSDK_COMMON_ANIMATIONS_STOPANIMATION_ANIM_BACKSWAP},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AnimationsState_List_Anim[] = {
	{"HEADLIGHTS_FLASH", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_HEADLIGHTS_FLASH},
	{"HEADLIGHTS_BLINK", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_HEADLIGHTS_BLINK},
	{"HEADLIGHTS_OSCILLATION", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_HEADLIGHTS_OSCILLATION},
	{"SPIN", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SPIN},
	{"TAP", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_TAP},
	{"SLOW_SHAKE", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SLOW_SHAKE},
	{"METRONOME", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_METRONOME},
	{"ONDULATION", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_ONDULATION},
	{"SPIN_JUMP", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SPIN_JUMP},
	{"SPIN_TO_POSTURE", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SPIN_TO_POSTURE},
	{"SPIRAL", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SPIRAL},
	{"SLALOM", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_SLALOM},
	{"BOOST", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_BOOST},
	{"LOOPING", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_LOOPING},
	{"BARREL_ROLL_180_RIGHT", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_BARREL_ROLL_180_RIGHT},
	{"BARREL_ROLL_180_LEFT", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_BARREL_ROLL_180_LEFT},
	{"BACKSWAP", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ANIM_BACKSWAP},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AnimationsState_List_State[] = {
	{"STOPPED", ARSDK_COMMON_ANIMATIONSSTATE_LIST_STATE_STOPPED},
	{"STARTED", ARSDK_COMMON_ANIMATIONSSTATE_LIST_STATE_STARTED},
	{"NOTAVAILABLE", ARSDK_COMMON_ANIMATIONSSTATE_LIST_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AnimationsState_List_Error[] = {
	{"OK", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ERROR_OK},
	{"UNKNOWN", ARSDK_COMMON_ANIMATIONSSTATE_LIST_ERROR_UNKNOWN},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Accessory_Config_Accessory[] = {
	{"NO_ACCESSORY", ARSDK_COMMON_ACCESSORY_CONFIG_ACCESSORY_NO_ACCESSORY},
	{"STD_WHEELS", ARSDK_COMMON_ACCESSORY_CONFIG_ACCESSORY_STD_WHEELS},
	{"TRUCK_WHEELS", ARSDK_COMMON_ACCESSORY_CONFIG_ACCESSORY_TRUCK_WHEELS},
	{"HULL", ARSDK_COMMON_ACCESSORY_CONFIG_ACCESSORY_HULL},
	{"HYDROFOIL", ARSDK_COMMON_ACCESSORY_CONFIG_ACCESSORY_HYDROFOIL},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AccessoryState_SupportedAccessoriesListChanged_Accessory[] = {
	{"NO_ACCESSORY", ARSDK_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY_NO_ACCESSORY},
	{"STD_WHEELS", ARSDK_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY_STD_WHEELS},
	{"TRUCK_WHEELS", ARSDK_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY_TRUCK_WHEELS},
	{"HULL", ARSDK_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY_HULL},
	{"HYDROFOIL", ARSDK_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY_HYDROFOIL},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_NewAccessory[] = {
	{"UNCONFIGURED", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_UNCONFIGURED},
	{"NO_ACCESSORY", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_NO_ACCESSORY},
	{"STD_WHEELS", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_STD_WHEELS},
	{"TRUCK_WHEELS", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_TRUCK_WHEELS},
	{"HULL", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_HULL},
	{"HYDROFOIL", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_HYDROFOIL},
	{"IN_PROGRESS", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY_IN_PROGRESS},
};

static const struct arsdk_enum_desc s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_Error[] = {
	{"OK", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_ERROR_UNKNOWN},
	{"FLYING", ARSDK_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_ERROR_FLYING},
};

static const struct arsdk_enum_desc s_enum_desc_Common_Charger_SetMaxChargeRate_Rate[] = {
	{"SLOW", ARSDK_COMMON_CHARGER_SETMAXCHARGERATE_RATE_SLOW},
	{"MODERATE", ARSDK_COMMON_CHARGER_SETMAXCHARGERATE_RATE_MODERATE},
	{"FAST", ARSDK_COMMON_CHARGER_SETMAXCHARGERATE_RATE_FAST},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_MaxChargeRateChanged_Rate[] = {
	{"SLOW", ARSDK_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED_RATE_SLOW},
	{"MODERATE", ARSDK_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED_RATE_MODERATE},
	{"FAST", ARSDK_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED_RATE_FAST},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Status[] = {
	{"DISCHARGING", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS_DISCHARGING},
	{"CHARGING_SLOW", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS_CHARGING_SLOW},
	{"CHARGING_MODERATE", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS_CHARGING_MODERATE},
	{"CHARGING_FAST", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS_CHARGING_FAST},
	{"BATTERY_FULL", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS_BATTERY_FULL},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Phase[] = {
	{"UNKNOWN", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE_UNKNOWN},
	{"CONSTANT_CURRENT_1", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE_CONSTANT_CURRENT_1},
	{"CONSTANT_CURRENT_2", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE_CONSTANT_CURRENT_2},
	{"CONSTANT_VOLTAGE", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE_CONSTANT_VOLTAGE},
	{"CHARGED", ARSDK_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE_CHARGED},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_LastChargeRateChanged_Rate[] = {
	{"UNKNOWN", ARSDK_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED_RATE_UNKNOWN},
	{"SLOW", ARSDK_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED_RATE_SLOW},
	{"MODERATE", ARSDK_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED_RATE_MODERATE},
	{"FAST", ARSDK_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED_RATE_FAST},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_ChargingInfo_Phase[] = {
	{"UNKNOWN", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_UNKNOWN},
	{"CONSTANT_CURRENT_1", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_CONSTANT_CURRENT_1},
	{"CONSTANT_CURRENT_2", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_CONSTANT_CURRENT_2},
	{"CONSTANT_VOLTAGE", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_CONSTANT_VOLTAGE},
	{"CHARGED", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_CHARGED},
	{"DISCHARGING", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE_DISCHARGING},
};

static const struct arsdk_enum_desc s_enum_desc_Common_ChargerState_ChargingInfo_Rate[] = {
	{"UNKNOWN", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_RATE_UNKNOWN},
	{"SLOW", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_RATE_SLOW},
	{"MODERATE", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_RATE_MODERATE},
	{"FAST", ARSDK_COMMON_CHARGERSTATE_CHARGINGINFO_RATE_FAST},
};

static const struct arsdk_enum_desc s_enum_desc_Common_UpdateState_UpdateStateChanged_Status[] = {
	{"SUCCESS", ARSDK_COMMON_UPDATESTATE_UPDATESTATECHANGED_STATUS_SUCCESS},
	{"FAILURE_BAD_FILE", ARSDK_COMMON_UPDATESTATE_UPDATESTATECHANGED_STATUS_FAILURE_BAD_FILE},
	{"FAILURE_BAT_LEVEL_TOO_LOW", ARSDK_COMMON_UPDATESTATE_UPDATESTATECHANGED_STATUS_FAILURE_BAT_LEVEL_TOO_LOW},
	{"FAILURE", ARSDK_COMMON_UPDATESTATE_UPDATESTATECHANGED_STATUS_FAILURE},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Network_Disconnect = {
	"Common.Network.Disconnect",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_NETWORK,
	ARSDK_CMD_COMMON_NETWORK_DISCONNECT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Settings_AllSettings = {
	"Common.Settings.AllSettings",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGS,
	ARSDK_CMD_COMMON_SETTINGS_ALLSETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Settings_Reset = {
	"Common.Settings.Reset",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGS,
	ARSDK_CMD_COMMON_SETTINGS_RESET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_Settings_ProductName[] = {
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Settings_ProductName = {
	"Common.Settings.ProductName",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGS,
	ARSDK_CMD_COMMON_SETTINGS_PRODUCTNAME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Settings_ProductName,
	sizeof(s_arg_desc_Common_Settings_ProductName) / sizeof(s_arg_desc_Common_Settings_ProductName[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Settings_Country[] = {
	{
		"Code",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Settings_Country = {
	"Common.Settings.Country",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGS,
	ARSDK_CMD_COMMON_SETTINGS_COUNTRY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Settings_Country,
	sizeof(s_arg_desc_Common_Settings_Country) / sizeof(s_arg_desc_Common_Settings_Country[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Settings_AutoCountry[] = {
	{
		"Automatic",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Settings_AutoCountry = {
	"Common.Settings.AutoCountry",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGS,
	ARSDK_CMD_COMMON_SETTINGS_AUTOCOUNTRY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Settings_AutoCountry,
	sizeof(s_arg_desc_Common_Settings_AutoCountry) / sizeof(s_arg_desc_Common_Settings_AutoCountry[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Common_AllStates = {
	"Common.Common.AllStates",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMON,
	ARSDK_CMD_COMMON_COMMON_ALLSTATES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_Common_CurrentDate[] = {
	{
		"Date",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Common_CurrentDate = {
	"Common.Common.CurrentDate",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMON,
	ARSDK_CMD_COMMON_COMMON_CURRENTDATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Common_CurrentDate,
	sizeof(s_arg_desc_Common_Common_CurrentDate) / sizeof(s_arg_desc_Common_Common_CurrentDate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Common_CurrentTime[] = {
	{
		"Time",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Common_CurrentTime = {
	"Common.Common.CurrentTime",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMON,
	ARSDK_CMD_COMMON_COMMON_CURRENTTIME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Common_CurrentTime,
	sizeof(s_arg_desc_Common_Common_CurrentTime) / sizeof(s_arg_desc_Common_Common_CurrentTime[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Common_Reboot = {
	"Common.Common.Reboot",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMON,
	ARSDK_CMD_COMMON_COMMON_REBOOT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_Common_CurrentDateTime[] = {
	{
		"Datetime",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Common_CurrentDateTime = {
	"Common.Common.CurrentDateTime",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMON,
	ARSDK_CMD_COMMON_COMMON_CURRENTDATETIME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Common_CurrentDateTime,
	sizeof(s_arg_desc_Common_Common_CurrentDateTime) / sizeof(s_arg_desc_Common_Common_CurrentDateTime[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_OverHeat_SwitchOff = {
	"Common.OverHeat.SwitchOff",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_OVERHEAT,
	ARSDK_CMD_COMMON_OVERHEAT_SWITCHOFF,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_OverHeat_Ventilate = {
	"Common.OverHeat.Ventilate",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_OVERHEAT,
	ARSDK_CMD_COMMON_OVERHEAT_VENTILATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_Controller_IsPiloting[] = {
	{
		"Piloting",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Controller_IsPiloting = {
	"Common.Controller.IsPiloting",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CONTROLLER,
	ARSDK_CMD_COMMON_CONTROLLER_ISPILOTING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Controller_IsPiloting,
	sizeof(s_arg_desc_Common_Controller_IsPiloting) / sizeof(s_arg_desc_Common_Controller_IsPiloting[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Controller_PeerStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Controller_PeerStateChanged_State,
		sizeof(s_enum_desc_Common_Controller_PeerStateChanged_State) / sizeof(s_enum_desc_Common_Controller_PeerStateChanged_State[0])
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Controller_PeerStateChanged_Type,
		sizeof(s_enum_desc_Common_Controller_PeerStateChanged_Type) / sizeof(s_enum_desc_Common_Controller_PeerStateChanged_Type[0])
	},
	{
		"PeerName",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"PeerId",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"PeerType",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Controller_PeerStateChanged = {
	"Common.Controller.PeerStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CONTROLLER,
	ARSDK_CMD_COMMON_CONTROLLER_PEERSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Controller_PeerStateChanged,
	sizeof(s_arg_desc_Common_Controller_PeerStateChanged) / sizeof(s_arg_desc_Common_Controller_PeerStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_WifiSettings_OutdoorSetting[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_WifiSettings_OutdoorSetting = {
	"Common.WifiSettings.OutdoorSetting",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_WIFISETTINGS,
	ARSDK_CMD_COMMON_WIFISETTINGS_OUTDOORSETTING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_WifiSettings_OutdoorSetting,
	sizeof(s_arg_desc_Common_WifiSettings_OutdoorSetting) / sizeof(s_arg_desc_Common_WifiSettings_OutdoorSetting[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Mavlink_Start[] = {
	{
		"Filepath",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Mavlink_Start_Type,
		sizeof(s_enum_desc_Common_Mavlink_Start_Type) / sizeof(s_enum_desc_Common_Mavlink_Start_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Mavlink_Start = {
	"Common.Mavlink.Start",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINK,
	ARSDK_CMD_COMMON_MAVLINK_START,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Mavlink_Start,
	sizeof(s_arg_desc_Common_Mavlink_Start) / sizeof(s_arg_desc_Common_Mavlink_Start[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Mavlink_Pause = {
	"Common.Mavlink.Pause",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINK,
	ARSDK_CMD_COMMON_MAVLINK_PAUSE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Mavlink_Stop = {
	"Common.Mavlink.Stop",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINK,
	ARSDK_CMD_COMMON_MAVLINK_STOP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect = {
	"Common.FlightPlanSettings.ReturnHomeOnDisconnect",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANSETTINGS,
	ARSDK_CMD_COMMON_FLIGHTPLANSETTINGS_RETURNHOMEONDISCONNECT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect,
	sizeof(s_arg_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect) / sizeof(s_arg_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Calibration_MagnetoCalibration[] = {
	{
		"Calibrate",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Calibration_MagnetoCalibration = {
	"Common.Calibration.MagnetoCalibration",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATION,
	ARSDK_CMD_COMMON_CALIBRATION_MAGNETOCALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Calibration_MagnetoCalibration,
	sizeof(s_arg_desc_Common_Calibration_MagnetoCalibration) / sizeof(s_arg_desc_Common_Calibration_MagnetoCalibration[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Calibration_PitotCalibration[] = {
	{
		"Calibrate",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Calibration_PitotCalibration = {
	"Common.Calibration.PitotCalibration",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATION,
	ARSDK_CMD_COMMON_CALIBRATION_PITOTCALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Calibration_PitotCalibration,
	sizeof(s_arg_desc_Common_Calibration_PitotCalibration) / sizeof(s_arg_desc_Common_Calibration_PitotCalibration[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_GPS_ControllerPositionForRun[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_GPS_ControllerPositionForRun = {
	"Common.GPS.ControllerPositionForRun",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_GPS,
	ARSDK_CMD_COMMON_GPS_CONTROLLERPOSITIONFORRUN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_GPS_ControllerPositionForRun,
	sizeof(s_arg_desc_Common_GPS_ControllerPositionForRun) / sizeof(s_arg_desc_Common_GPS_ControllerPositionForRun[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Audio_ControllerReadyForStreaming[] = {
	{
		"Ready",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Audio_ControllerReadyForStreaming = {
	"Common.Audio.ControllerReadyForStreaming",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_AUDIO,
	ARSDK_CMD_COMMON_AUDIO_CONTROLLERREADYFORSTREAMING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Audio_ControllerReadyForStreaming,
	sizeof(s_arg_desc_Common_Audio_ControllerReadyForStreaming) / sizeof(s_arg_desc_Common_Audio_ControllerReadyForStreaming[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Headlights_Intensity[] = {
	{
		"Left",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Right",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Headlights_Intensity = {
	"Common.Headlights.Intensity",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_HEADLIGHTS,
	ARSDK_CMD_COMMON_HEADLIGHTS_INTENSITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Headlights_Intensity,
	sizeof(s_arg_desc_Common_Headlights_Intensity) / sizeof(s_arg_desc_Common_Headlights_Intensity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Animations_StartAnimation[] = {
	{
		"Anim",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Animations_StartAnimation_Anim,
		sizeof(s_enum_desc_Common_Animations_StartAnimation_Anim) / sizeof(s_enum_desc_Common_Animations_StartAnimation_Anim[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Animations_StartAnimation = {
	"Common.Animations.StartAnimation",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ANIMATIONS,
	ARSDK_CMD_COMMON_ANIMATIONS_STARTANIMATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Animations_StartAnimation,
	sizeof(s_arg_desc_Common_Animations_StartAnimation) / sizeof(s_arg_desc_Common_Animations_StartAnimation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Animations_StopAnimation[] = {
	{
		"Anim",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Animations_StopAnimation_Anim,
		sizeof(s_enum_desc_Common_Animations_StopAnimation_Anim) / sizeof(s_enum_desc_Common_Animations_StopAnimation_Anim[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Animations_StopAnimation = {
	"Common.Animations.StopAnimation",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ANIMATIONS,
	ARSDK_CMD_COMMON_ANIMATIONS_STOPANIMATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Animations_StopAnimation,
	sizeof(s_arg_desc_Common_Animations_StopAnimation) / sizeof(s_arg_desc_Common_Animations_StopAnimation[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Animations_StopAllAnimations = {
	"Common.Animations.StopAllAnimations",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ANIMATIONS,
	ARSDK_CMD_COMMON_ANIMATIONS_STOPALLANIMATIONS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_Accessory_Config[] = {
	{
		"Accessory",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Accessory_Config_Accessory,
		sizeof(s_enum_desc_Common_Accessory_Config_Accessory) / sizeof(s_enum_desc_Common_Accessory_Config_Accessory[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Accessory_Config = {
	"Common.Accessory.Config",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ACCESSORY,
	ARSDK_CMD_COMMON_ACCESSORY_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Accessory_Config,
	sizeof(s_arg_desc_Common_Accessory_Config) / sizeof(s_arg_desc_Common_Accessory_Config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_Charger_SetMaxChargeRate[] = {
	{
		"Rate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_Charger_SetMaxChargeRate_Rate,
		sizeof(s_enum_desc_Common_Charger_SetMaxChargeRate_Rate) / sizeof(s_enum_desc_Common_Charger_SetMaxChargeRate_Rate[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Charger_SetMaxChargeRate = {
	"Common.Charger.SetMaxChargeRate",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CHARGER,
	ARSDK_CMD_COMMON_CHARGER_SETMAXCHARGERATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_Charger_SetMaxChargeRate,
	sizeof(s_arg_desc_Common_Charger_SetMaxChargeRate) / sizeof(s_arg_desc_Common_Charger_SetMaxChargeRate[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_Factory_Reset = {
	"Common.Factory.Reset",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FACTORY,
	ARSDK_CMD_COMMON_FACTORY_RESET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_NetworkEvent_Disconnection[] = {
	{
		"Cause",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_NetworkEvent_Disconnection_Cause,
		sizeof(s_enum_desc_Common_NetworkEvent_Disconnection_Cause) / sizeof(s_enum_desc_Common_NetworkEvent_Disconnection_Cause[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_NetworkEvent_Disconnection = {
	"Common.NetworkEvent.Disconnection",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_NETWORKEVENT,
	ARSDK_CMD_COMMON_NETWORKEVENT_DISCONNECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_NetworkEvent_Disconnection,
	sizeof(s_arg_desc_Common_NetworkEvent_Disconnection) / sizeof(s_arg_desc_Common_NetworkEvent_Disconnection[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_AllSettingsChanged = {
	"Common.SettingsState.AllSettingsChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_ALLSETTINGSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_ResetChanged = {
	"Common.SettingsState.ResetChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_RESETCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_ProductNameChanged[] = {
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_ProductNameChanged = {
	"Common.SettingsState.ProductNameChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_PRODUCTNAMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_ProductNameChanged,
	sizeof(s_arg_desc_Common_SettingsState_ProductNameChanged) / sizeof(s_arg_desc_Common_SettingsState_ProductNameChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_ProductVersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_ProductVersionChanged = {
	"Common.SettingsState.ProductVersionChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_PRODUCTVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_ProductVersionChanged,
	sizeof(s_arg_desc_Common_SettingsState_ProductVersionChanged) / sizeof(s_arg_desc_Common_SettingsState_ProductVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_ProductSerialHighChanged[] = {
	{
		"High",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_ProductSerialHighChanged = {
	"Common.SettingsState.ProductSerialHighChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_PRODUCTSERIALHIGHCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_ProductSerialHighChanged,
	sizeof(s_arg_desc_Common_SettingsState_ProductSerialHighChanged) / sizeof(s_arg_desc_Common_SettingsState_ProductSerialHighChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_ProductSerialLowChanged[] = {
	{
		"Low",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_ProductSerialLowChanged = {
	"Common.SettingsState.ProductSerialLowChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_PRODUCTSERIALLOWCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_ProductSerialLowChanged,
	sizeof(s_arg_desc_Common_SettingsState_ProductSerialLowChanged) / sizeof(s_arg_desc_Common_SettingsState_ProductSerialLowChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_CountryChanged[] = {
	{
		"Code",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_CountryChanged = {
	"Common.SettingsState.CountryChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_COUNTRYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	s_arg_desc_Common_SettingsState_CountryChanged,
	sizeof(s_arg_desc_Common_SettingsState_CountryChanged) / sizeof(s_arg_desc_Common_SettingsState_CountryChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_AutoCountryChanged[] = {
	{
		"Automatic",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_AutoCountryChanged = {
	"Common.SettingsState.AutoCountryChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_AUTOCOUNTRYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_AutoCountryChanged,
	sizeof(s_arg_desc_Common_SettingsState_AutoCountryChanged) / sizeof(s_arg_desc_Common_SettingsState_AutoCountryChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_SettingsState_BoardIdChanged[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_SettingsState_BoardIdChanged = {
	"Common.SettingsState.BoardIdChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_SETTINGSSTATE,
	ARSDK_CMD_COMMON_SETTINGSSTATE_BOARDIDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_SettingsState_BoardIdChanged,
	sizeof(s_arg_desc_Common_SettingsState_BoardIdChanged) / sizeof(s_arg_desc_Common_SettingsState_BoardIdChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_AllStatesChanged = {
	"Common.CommonState.AllStatesChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_ALLSTATESCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_BatteryStateChanged[] = {
	{
		"Percent",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_BatteryStateChanged = {
	"Common.CommonState.BatteryStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_BATTERYSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_BatteryStateChanged,
	sizeof(s_arg_desc_Common_CommonState_BatteryStateChanged) / sizeof(s_arg_desc_Common_CommonState_BatteryStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_MassStorageStateListChanged[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_MassStorageStateListChanged = {
	"Common.CommonState.MassStorageStateListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_MASSSTORAGESTATELISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_MassStorageStateListChanged,
	sizeof(s_arg_desc_Common_CommonState_MassStorageStateListChanged) / sizeof(s_arg_desc_Common_CommonState_MassStorageStateListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_MassStorageInfoStateListChanged[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Size",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Used_size",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Plugged",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Full",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Internal",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoStateListChanged = {
	"Common.CommonState.MassStorageInfoStateListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_MassStorageInfoStateListChanged,
	sizeof(s_arg_desc_Common_CommonState_MassStorageInfoStateListChanged) / sizeof(s_arg_desc_Common_CommonState_MassStorageInfoStateListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_CurrentDateChanged[] = {
	{
		"Date",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_CurrentDateChanged = {
	"Common.CommonState.CurrentDateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_CURRENTDATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_CurrentDateChanged,
	sizeof(s_arg_desc_Common_CommonState_CurrentDateChanged) / sizeof(s_arg_desc_Common_CommonState_CurrentDateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_CurrentTimeChanged[] = {
	{
		"Time",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_CurrentTimeChanged = {
	"Common.CommonState.CurrentTimeChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_CURRENTTIMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_CurrentTimeChanged,
	sizeof(s_arg_desc_Common_CommonState_CurrentTimeChanged) / sizeof(s_arg_desc_Common_CommonState_CurrentTimeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_MassStorageInfoRemainingListChanged[] = {
	{
		"Free_space",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Rec_time",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Photo_remaining",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoRemainingListChanged = {
	"Common.CommonState.MassStorageInfoRemainingListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_MassStorageInfoRemainingListChanged,
	sizeof(s_arg_desc_Common_CommonState_MassStorageInfoRemainingListChanged) / sizeof(s_arg_desc_Common_CommonState_MassStorageInfoRemainingListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_WifiSignalChanged[] = {
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_WifiSignalChanged = {
	"Common.CommonState.WifiSignalChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_WIFISIGNALCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_WifiSignalChanged,
	sizeof(s_arg_desc_Common_CommonState_WifiSignalChanged) / sizeof(s_arg_desc_Common_CommonState_WifiSignalChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_SensorsStatesListChanged[] = {
	{
		"SensorName",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_CommonState_SensorsStatesListChanged_SensorName,
		sizeof(s_enum_desc_Common_CommonState_SensorsStatesListChanged_SensorName) / sizeof(s_enum_desc_Common_CommonState_SensorsStatesListChanged_SensorName[0])
	},
	{
		"SensorState",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_SensorsStatesListChanged = {
	"Common.CommonState.SensorsStatesListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_SensorsStatesListChanged,
	sizeof(s_arg_desc_Common_CommonState_SensorsStatesListChanged) / sizeof(s_arg_desc_Common_CommonState_SensorsStatesListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_ProductModel[] = {
	{
		"Model",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_CommonState_ProductModel_Model,
		sizeof(s_enum_desc_Common_CommonState_ProductModel_Model) / sizeof(s_enum_desc_Common_CommonState_ProductModel_Model[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_ProductModel = {
	"Common.CommonState.ProductModel",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_PRODUCTMODEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_ProductModel,
	sizeof(s_arg_desc_Common_CommonState_ProductModel) / sizeof(s_arg_desc_Common_CommonState_ProductModel[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_CountryListKnown[] = {
	{
		"ListFlags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"CountryCodes",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_CountryListKnown = {
	"Common.CommonState.CountryListKnown",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_COUNTRYLISTKNOWN,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_CountryListKnown,
	sizeof(s_arg_desc_Common_CommonState_CountryListKnown) / sizeof(s_arg_desc_Common_CommonState_CountryListKnown[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_DeprecatedMassStorageContentChanged[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"NbPhotos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbVideos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbPuds",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbCrashLogs",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_DeprecatedMassStorageContentChanged = {
	"Common.CommonState.DeprecatedMassStorageContentChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_DEPRECATEDMASSSTORAGECONTENTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_DeprecatedMassStorageContentChanged,
	sizeof(s_arg_desc_Common_CommonState_DeprecatedMassStorageContentChanged) / sizeof(s_arg_desc_Common_CommonState_DeprecatedMassStorageContentChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_MassStorageContent[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"NbPhotos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbVideos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbPuds",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbCrashLogs",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbRawPhotos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_MassStorageContent = {
	"Common.CommonState.MassStorageContent",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_MASSSTORAGECONTENT,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_MassStorageContent,
	sizeof(s_arg_desc_Common_CommonState_MassStorageContent) / sizeof(s_arg_desc_Common_CommonState_MassStorageContent[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_MassStorageContentForCurrentRun[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"NbPhotos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbVideos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"NbRawPhotos",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_MassStorageContentForCurrentRun = {
	"Common.CommonState.MassStorageContentForCurrentRun",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_MASSSTORAGECONTENTFORCURRENTRUN,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_MassStorageContentForCurrentRun,
	sizeof(s_arg_desc_Common_CommonState_MassStorageContentForCurrentRun) / sizeof(s_arg_desc_Common_CommonState_MassStorageContentForCurrentRun[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_VideoRecordingTimestamp[] = {
	{
		"StartTimestamp",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
	{
		"StopTimestamp",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_VideoRecordingTimestamp = {
	"Common.CommonState.VideoRecordingTimestamp",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_VIDEORECORDINGTIMESTAMP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_VideoRecordingTimestamp,
	sizeof(s_arg_desc_Common_CommonState_VideoRecordingTimestamp) / sizeof(s_arg_desc_Common_CommonState_VideoRecordingTimestamp[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_CurrentDateTimeChanged[] = {
	{
		"Datetime",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_CurrentDateTimeChanged = {
	"Common.CommonState.CurrentDateTimeChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_CURRENTDATETIMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_CurrentDateTimeChanged,
	sizeof(s_arg_desc_Common_CommonState_CurrentDateTimeChanged) / sizeof(s_arg_desc_Common_CommonState_CurrentDateTimeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_LinkSignalQuality[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_LinkSignalQuality = {
	"Common.CommonState.LinkSignalQuality",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_LINKSIGNALQUALITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_LinkSignalQuality,
	sizeof(s_arg_desc_Common_CommonState_LinkSignalQuality) / sizeof(s_arg_desc_Common_CommonState_LinkSignalQuality[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CommonState_BootId[] = {
	{
		"BootId",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CommonState_BootId = {
	"Common.CommonState.BootId",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_COMMONSTATE,
	ARSDK_CMD_COMMON_COMMONSTATE_BOOTID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CommonState_BootId,
	sizeof(s_arg_desc_Common_CommonState_BootId) / sizeof(s_arg_desc_Common_CommonState_BootId[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_OverHeatState_OverHeatChanged = {
	"Common.OverHeatState.OverHeatChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_OVERHEATSTATE,
	ARSDK_CMD_COMMON_OVERHEATSTATE_OVERHEATCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_OverHeatState_OverHeatRegulationChanged[] = {
	{
		"RegulationType",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_OverHeatState_OverHeatRegulationChanged = {
	"Common.OverHeatState.OverHeatRegulationChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_OVERHEATSTATE,
	ARSDK_CMD_COMMON_OVERHEATSTATE_OVERHEATREGULATIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_OverHeatState_OverHeatRegulationChanged,
	sizeof(s_arg_desc_Common_OverHeatState_OverHeatRegulationChanged) / sizeof(s_arg_desc_Common_OverHeatState_OverHeatRegulationChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_WifiSettingsState_OutdoorSettingsChanged[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_WifiSettingsState_OutdoorSettingsChanged = {
	"Common.WifiSettingsState.OutdoorSettingsChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_WIFISETTINGSSTATE,
	ARSDK_CMD_COMMON_WIFISETTINGSSTATE_OUTDOORSETTINGSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_WifiSettingsState_OutdoorSettingsChanged,
	sizeof(s_arg_desc_Common_WifiSettingsState_OutdoorSettingsChanged) / sizeof(s_arg_desc_Common_WifiSettingsState_OutdoorSettingsChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_State,
		sizeof(s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_State) / sizeof(s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_State[0])
	},
	{
		"Filepath",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_Type,
		sizeof(s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_Type) / sizeof(s_enum_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged = {
	"Common.MavlinkState.MavlinkFilePlayingStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINKSTATE,
	ARSDK_CMD_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged,
	sizeof(s_arg_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged) / sizeof(s_arg_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged[] = {
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged_Error,
		sizeof(s_enum_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged_Error) / sizeof(s_enum_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged = {
	"Common.MavlinkState.MavlinkPlayErrorStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINKSTATE,
	ARSDK_CMD_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged,
	sizeof(s_arg_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged) / sizeof(s_arg_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_MavlinkState_MissionItemExecuted[] = {
	{
		"Idx",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_MavlinkState_MissionItemExecuted = {
	"Common.MavlinkState.MissionItemExecuted",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_MAVLINKSTATE,
	ARSDK_CMD_COMMON_MAVLINKSTATE_MISSIONITEMEXECUTED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_MavlinkState_MissionItemExecuted,
	sizeof(s_arg_desc_Common_MavlinkState_MissionItemExecuted) / sizeof(s_arg_desc_Common_MavlinkState_MissionItemExecuted[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"IsReadOnly",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged = {
	"Common.FlightPlanSettingsState.ReturnHomeOnDisconnectChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANSETTINGSSTATE,
	ARSDK_CMD_COMMON_FLIGHTPLANSETTINGSSTATE_RETURNHOMEONDISCONNECTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged,
	sizeof(s_arg_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged) / sizeof(s_arg_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CalibrationState_MagnetoCalibrationStateChanged[] = {
	{
		"XAxisCalibration",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"YAxisCalibration",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"ZAxisCalibration",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"CalibrationFailed",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStateChanged = {
	"Common.CalibrationState.MagnetoCalibrationStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATIONSTATE,
	ARSDK_CMD_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CalibrationState_MagnetoCalibrationStateChanged,
	sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationStateChanged) / sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CalibrationState_MagnetoCalibrationRequiredState[] = {
	{
		"Required",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationRequiredState = {
	"Common.CalibrationState.MagnetoCalibrationRequiredState",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATIONSTATE,
	ARSDK_CMD_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONREQUIREDSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CalibrationState_MagnetoCalibrationRequiredState,
	sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationRequiredState) / sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationRequiredState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged[] = {
	{
		"Axis",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged_Axis,
		sizeof(s_enum_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged_Axis) / sizeof(s_enum_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged_Axis[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged = {
	"Common.CalibrationState.MagnetoCalibrationAxisToCalibrateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATIONSTATE,
	ARSDK_CMD_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged,
	sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged) / sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged[] = {
	{
		"Started",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged = {
	"Common.CalibrationState.MagnetoCalibrationStartedChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATIONSTATE,
	ARSDK_CMD_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTARTEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged,
	sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged) / sizeof(s_arg_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CalibrationState_PitotCalibrationStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_CalibrationState_PitotCalibrationStateChanged_State,
		sizeof(s_enum_desc_Common_CalibrationState_PitotCalibrationStateChanged_State) / sizeof(s_enum_desc_Common_CalibrationState_PitotCalibrationStateChanged_State[0])
	},
	{
		"LastError",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CalibrationState_PitotCalibrationStateChanged = {
	"Common.CalibrationState.PitotCalibrationStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CALIBRATIONSTATE,
	ARSDK_CMD_COMMON_CALIBRATIONSTATE_PITOTCALIBRATIONSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CalibrationState_PitotCalibrationStateChanged,
	sizeof(s_arg_desc_Common_CalibrationState_PitotCalibrationStateChanged) / sizeof(s_arg_desc_Common_CalibrationState_PitotCalibrationStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_CameraSettingsState_CameraSettingsChanged[] = {
	{
		"Fov",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"PanMax",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"PanMin",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"TiltMax",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"TiltMin",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_CameraSettingsState_CameraSettingsChanged = {
	"Common.CameraSettingsState.CameraSettingsChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CAMERASETTINGSSTATE,
	ARSDK_CMD_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_CameraSettingsState_CameraSettingsChanged,
	sizeof(s_arg_desc_Common_CameraSettingsState_CameraSettingsChanged) / sizeof(s_arg_desc_Common_CameraSettingsState_CameraSettingsChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_FlightPlanState_AvailabilityStateChanged[] = {
	{
		"AvailabilityState",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanState_AvailabilityStateChanged = {
	"Common.FlightPlanState.AvailabilityStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANSTATE,
	ARSDK_CMD_COMMON_FLIGHTPLANSTATE_AVAILABILITYSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_FlightPlanState_AvailabilityStateChanged,
	sizeof(s_arg_desc_Common_FlightPlanState_AvailabilityStateChanged) / sizeof(s_arg_desc_Common_FlightPlanState_AvailabilityStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_FlightPlanState_ComponentStateListChanged[] = {
	{
		"Component",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_FlightPlanState_ComponentStateListChanged_Component,
		sizeof(s_enum_desc_Common_FlightPlanState_ComponentStateListChanged_Component) / sizeof(s_enum_desc_Common_FlightPlanState_ComponentStateListChanged_Component[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanState_ComponentStateListChanged = {
	"Common.FlightPlanState.ComponentStateListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANSTATE,
	ARSDK_CMD_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_FlightPlanState_ComponentStateListChanged,
	sizeof(s_arg_desc_Common_FlightPlanState_ComponentStateListChanged) / sizeof(s_arg_desc_Common_FlightPlanState_ComponentStateListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_FlightPlanState_LockStateChanged[] = {
	{
		"LockState",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanState_LockStateChanged = {
	"Common.FlightPlanState.LockStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANSTATE,
	ARSDK_CMD_COMMON_FLIGHTPLANSTATE_LOCKSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_FlightPlanState_LockStateChanged,
	sizeof(s_arg_desc_Common_FlightPlanState_LockStateChanged) / sizeof(s_arg_desc_Common_FlightPlanState_LockStateChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanEvent_StartingErrorEvent = {
	"Common.FlightPlanEvent.StartingErrorEvent",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANEVENT,
	ARSDK_CMD_COMMON_FLIGHTPLANEVENT_STARTINGERROREVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_FlightPlanEvent_SpeedBridleEvent = {
	"Common.FlightPlanEvent.SpeedBridleEvent",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_FLIGHTPLANEVENT,
	ARSDK_CMD_COMMON_FLIGHTPLANEVENT_SPEEDBRIDLEEVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion[] = {
	{
		"Version",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion = {
	"Common.ARLibsVersionsState.ControllerLibARCommandsVersion",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ARLIBSVERSIONSSTATE,
	ARSDK_CMD_COMMON_ARLIBSVERSIONSSTATE_CONTROLLERLIBARCOMMANDSVERSION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion,
	sizeof(s_arg_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion) / sizeof(s_arg_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion[] = {
	{
		"Version",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion = {
	"Common.ARLibsVersionsState.SkyControllerLibARCommandsVersion",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ARLIBSVERSIONSSTATE,
	ARSDK_CMD_COMMON_ARLIBSVERSIONSSTATE_SKYCONTROLLERLIBARCOMMANDSVERSION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion,
	sizeof(s_arg_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion) / sizeof(s_arg_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion[] = {
	{
		"Version",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion = {
	"Common.ARLibsVersionsState.DeviceLibARCommandsVersion",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ARLIBSVERSIONSSTATE,
	ARSDK_CMD_COMMON_ARLIBSVERSIONSSTATE_DEVICELIBARCOMMANDSVERSION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion,
	sizeof(s_arg_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion) / sizeof(s_arg_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_AudioState_AudioStreamingRunning[] = {
	{
		"Running",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_AudioState_AudioStreamingRunning = {
	"Common.AudioState.AudioStreamingRunning",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_AUDIOSTATE,
	ARSDK_CMD_COMMON_AUDIOSTATE_AUDIOSTREAMINGRUNNING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_AudioState_AudioStreamingRunning,
	sizeof(s_arg_desc_Common_AudioState_AudioStreamingRunning) / sizeof(s_arg_desc_Common_AudioState_AudioStreamingRunning[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_HeadlightsState_IntensityChanged[] = {
	{
		"Left",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Right",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_HeadlightsState_IntensityChanged = {
	"Common.HeadlightsState.IntensityChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_HEADLIGHTSSTATE,
	ARSDK_CMD_COMMON_HEADLIGHTSSTATE_INTENSITYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_HeadlightsState_IntensityChanged,
	sizeof(s_arg_desc_Common_HeadlightsState_IntensityChanged) / sizeof(s_arg_desc_Common_HeadlightsState_IntensityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_AnimationsState_List[] = {
	{
		"Anim",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AnimationsState_List_Anim,
		sizeof(s_enum_desc_Common_AnimationsState_List_Anim) / sizeof(s_enum_desc_Common_AnimationsState_List_Anim[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AnimationsState_List_State,
		sizeof(s_enum_desc_Common_AnimationsState_List_State) / sizeof(s_enum_desc_Common_AnimationsState_List_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AnimationsState_List_Error,
		sizeof(s_enum_desc_Common_AnimationsState_List_Error) / sizeof(s_enum_desc_Common_AnimationsState_List_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_AnimationsState_List = {
	"Common.AnimationsState.List",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ANIMATIONSSTATE,
	ARSDK_CMD_COMMON_ANIMATIONSSTATE_LIST,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_AnimationsState_List,
	sizeof(s_arg_desc_Common_AnimationsState_List) / sizeof(s_arg_desc_Common_AnimationsState_List[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_AccessoryState_SupportedAccessoriesListChanged[] = {
	{
		"Accessory",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AccessoryState_SupportedAccessoriesListChanged_Accessory,
		sizeof(s_enum_desc_Common_AccessoryState_SupportedAccessoriesListChanged_Accessory) / sizeof(s_enum_desc_Common_AccessoryState_SupportedAccessoriesListChanged_Accessory[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_AccessoryState_SupportedAccessoriesListChanged = {
	"Common.AccessoryState.SupportedAccessoriesListChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ACCESSORYSTATE,
	ARSDK_CMD_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_AccessoryState_SupportedAccessoriesListChanged,
	sizeof(s_arg_desc_Common_AccessoryState_SupportedAccessoriesListChanged) / sizeof(s_arg_desc_Common_AccessoryState_SupportedAccessoriesListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_AccessoryState_AccessoryConfigChanged[] = {
	{
		"NewAccessory",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_NewAccessory,
		sizeof(s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_NewAccessory) / sizeof(s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_NewAccessory[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_Error,
		sizeof(s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_Error) / sizeof(s_enum_desc_Common_AccessoryState_AccessoryConfigChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigChanged = {
	"Common.AccessoryState.AccessoryConfigChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ACCESSORYSTATE,
	ARSDK_CMD_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_AccessoryState_AccessoryConfigChanged,
	sizeof(s_arg_desc_Common_AccessoryState_AccessoryConfigChanged) / sizeof(s_arg_desc_Common_AccessoryState_AccessoryConfigChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_AccessoryState_AccessoryConfigModificationEnabled[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigModificationEnabled = {
	"Common.AccessoryState.AccessoryConfigModificationEnabled",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_ACCESSORYSTATE,
	ARSDK_CMD_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGMODIFICATIONENABLED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_AccessoryState_AccessoryConfigModificationEnabled,
	sizeof(s_arg_desc_Common_AccessoryState_AccessoryConfigModificationEnabled) / sizeof(s_arg_desc_Common_AccessoryState_AccessoryConfigModificationEnabled[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ChargerState_MaxChargeRateChanged[] = {
	{
		"Rate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_MaxChargeRateChanged_Rate,
		sizeof(s_enum_desc_Common_ChargerState_MaxChargeRateChanged_Rate) / sizeof(s_enum_desc_Common_ChargerState_MaxChargeRateChanged_Rate[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ChargerState_MaxChargeRateChanged = {
	"Common.ChargerState.MaxChargeRateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CHARGERSTATE,
	ARSDK_CMD_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ChargerState_MaxChargeRateChanged,
	sizeof(s_arg_desc_Common_ChargerState_MaxChargeRateChanged) / sizeof(s_arg_desc_Common_ChargerState_MaxChargeRateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ChargerState_CurrentChargeStateChanged[] = {
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Status,
		sizeof(s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Status) / sizeof(s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Status[0])
	},
	{
		"Phase",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Phase,
		sizeof(s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Phase) / sizeof(s_enum_desc_Common_ChargerState_CurrentChargeStateChanged_Phase[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ChargerState_CurrentChargeStateChanged = {
	"Common.ChargerState.CurrentChargeStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CHARGERSTATE,
	ARSDK_CMD_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ChargerState_CurrentChargeStateChanged,
	sizeof(s_arg_desc_Common_ChargerState_CurrentChargeStateChanged) / sizeof(s_arg_desc_Common_ChargerState_CurrentChargeStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ChargerState_LastChargeRateChanged[] = {
	{
		"Rate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_LastChargeRateChanged_Rate,
		sizeof(s_enum_desc_Common_ChargerState_LastChargeRateChanged_Rate) / sizeof(s_enum_desc_Common_ChargerState_LastChargeRateChanged_Rate[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ChargerState_LastChargeRateChanged = {
	"Common.ChargerState.LastChargeRateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CHARGERSTATE,
	ARSDK_CMD_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ChargerState_LastChargeRateChanged,
	sizeof(s_arg_desc_Common_ChargerState_LastChargeRateChanged) / sizeof(s_arg_desc_Common_ChargerState_LastChargeRateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_ChargerState_ChargingInfo[] = {
	{
		"Phase",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_ChargingInfo_Phase,
		sizeof(s_enum_desc_Common_ChargerState_ChargingInfo_Phase) / sizeof(s_enum_desc_Common_ChargerState_ChargingInfo_Phase[0])
	},
	{
		"Rate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_ChargerState_ChargingInfo_Rate,
		sizeof(s_enum_desc_Common_ChargerState_ChargingInfo_Rate) / sizeof(s_enum_desc_Common_ChargerState_ChargingInfo_Rate[0])
	},
	{
		"Intensity",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"FullChargingTime",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_ChargerState_ChargingInfo = {
	"Common.ChargerState.ChargingInfo",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_CHARGERSTATE,
	ARSDK_CMD_COMMON_CHARGERSTATE_CHARGINGINFO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_ChargerState_ChargingInfo,
	sizeof(s_arg_desc_Common_ChargerState_ChargingInfo) / sizeof(s_arg_desc_Common_ChargerState_ChargingInfo[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_RunState_RunIdChanged[] = {
	{
		"RunId",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_RunState_RunIdChanged = {
	"Common.RunState.RunIdChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_RUNSTATE,
	ARSDK_CMD_COMMON_RUNSTATE_RUNIDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_RunState_RunIdChanged,
	sizeof(s_arg_desc_Common_RunState_RunIdChanged) / sizeof(s_arg_desc_Common_RunState_RunIdChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Common_UpdateState_UpdateStateChanged[] = {
	{
		"SourceVersion",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"TargetVersion",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Common_UpdateState_UpdateStateChanged_Status,
		sizeof(s_enum_desc_Common_UpdateState_UpdateStateChanged_Status) / sizeof(s_enum_desc_Common_UpdateState_UpdateStateChanged_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Common_UpdateState_UpdateStateChanged = {
	"Common.UpdateState.UpdateStateChanged",
	ARSDK_PRJ_COMMON,
	ARSDK_CLS_COMMON_UPDATESTATE,
	ARSDK_CMD_COMMON_UPDATESTATE_UPDATESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Common_UpdateState_UpdateStateChanged,
	sizeof(s_arg_desc_Common_UpdateState_UpdateStateChanged) / sizeof(s_arg_desc_Common_UpdateState_UpdateStateChanged[0])
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Piloting_Circle_Direction[] = {
	{"CW", ARSDK_ARDRONE3_PILOTING_CIRCLE_DIRECTION_CW},
	{"CCW", ARSDK_ARDRONE3_PILOTING_CIRCLE_DIRECTION_CCW},
	{"DEFAULT", ARSDK_ARDRONE3_PILOTING_CIRCLE_DIRECTION_DEFAULT},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Piloting_MoveTo_Orientation_mode[] = {
	{"NONE", ARSDK_ARDRONE3_PILOTING_MOVETO_ORIENTATION_MODE_NONE},
	{"TO_TARGET", ARSDK_ARDRONE3_PILOTING_MOVETO_ORIENTATION_MODE_TO_TARGET},
	{"HEADING_START", ARSDK_ARDRONE3_PILOTING_MOVETO_ORIENTATION_MODE_HEADING_START},
	{"HEADING_DURING", ARSDK_ARDRONE3_PILOTING_MOVETO_ORIENTATION_MODE_HEADING_DURING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Piloting_StartPilotedPOIV2_Mode[] = {
	{"LOCKED_GIMBAL", ARSDK_ARDRONE3_PILOTING_STARTPILOTEDPOIV2_MODE_LOCKED_GIMBAL},
	{"FREE_GIMBAL", ARSDK_ARDRONE3_PILOTING_STARTPILOTEDPOIV2_MODE_FREE_GIMBAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Animations_Flip_Direction[] = {
	{"FRONT", ARSDK_ARDRONE3_ANIMATIONS_FLIP_DIRECTION_FRONT},
	{"BACK", ARSDK_ARDRONE3_ANIMATIONS_FLIP_DIRECTION_BACK},
	{"RIGHT", ARSDK_ARDRONE3_ANIMATIONS_FLIP_DIRECTION_RIGHT},
	{"LEFT", ARSDK_ARDRONE3_ANIMATIONS_FLIP_DIRECTION_LEFT},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecord_Video_Record[] = {
	{"STOP", ARSDK_ARDRONE3_MEDIARECORD_VIDEO_RECORD_STOP},
	{"START", ARSDK_ARDRONE3_MEDIARECORD_VIDEO_RECORD_START},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecord_VideoV2_Record[] = {
	{"STOP", ARSDK_ARDRONE3_MEDIARECORD_VIDEOV2_RECORD_STOP},
	{"START", ARSDK_ARDRONE3_MEDIARECORD_VIDEOV2_RECORD_START},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_VideoStateChanged_State[] = {
	{"STOPPED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_STOPPED},
	{"STARTED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_STARTED},
	{"FAILED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_FAILED},
	{"AUTOSTOPPED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_AUTOSTOPPED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_State[] = {
	{"READY", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_READY},
	{"BUSY", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_BUSY},
	{"NOTAVAILABLE", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_Error[] = {
	{"OK", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_State[] = {
	{"STOPPED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STOPPED},
	{"STARTED", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STARTED},
	{"NOTAVAILABLE", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_Error[] = {
	{"OK", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Streaming[] = {
	{"RES360P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_STREAMING_RES360P},
	{"RES480P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_STREAMING_RES480P},
	{"RES720P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_STREAMING_RES720P},
	{"RES1080P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_STREAMING_RES1080P},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Recording[] = {
	{"RES360P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_RECORDING_RES360P},
	{"RES480P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_RECORDING_RES480P},
	{"RES720P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_RECORDING_RES720P},
	{"RES1080P", ARSDK_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE_RECORDING_RES1080P},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Event[] = {
	{"TAKEN", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_TAKEN},
	{"FAILED", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Error[] = {
	{"OK", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Event[] = {
	{"START", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_START},
	{"STOP", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_STOP},
	{"FAILED", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Error[] = {
	{"OK", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_LOWBATTERY},
	{"AUTOSTOPPED", ARSDK_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_AUTOSTOPPED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_FlyingStateChanged_State[] = {
	{"LANDED", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_LANDED},
	{"TAKINGOFF", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_TAKINGOFF},
	{"HOVERING", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_HOVERING},
	{"FLYING", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_FLYING},
	{"LANDING", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_LANDING},
	{"EMERGENCY", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_EMERGENCY},
	{"USERTAKEOFF", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_USERTAKEOFF},
	{"MOTOR_RAMPING", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_MOTOR_RAMPING},
	{"EMERGENCY_LANDING", ARSDK_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_EMERGENCY_LANDING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_AlertStateChanged_State[] = {
	{"NONE", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_NONE},
	{"USER", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_USER},
	{"CUT_OUT", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CUT_OUT},
	{"CRITICAL_BATTERY", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CRITICAL_BATTERY},
	{"LOW_BATTERY", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_LOW_BATTERY},
	{"TOO_MUCH_ANGLE", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_TOO_MUCH_ANGLE},
	{"ALMOST_EMPTY_BATTERY", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_ALMOST_EMPTY_BATTERY},
	{"MAGNETO_PERTUBATION", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_MAGNETO_PERTUBATION},
	{"MAGNETO_LOW_EARTH_FIELD", ARSDK_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED_STATE_MAGNETO_LOW_EARTH_FIELD},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_State[] = {
	{"AVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_STATE_AVAILABLE},
	{"INPROGRESS", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_STATE_INPROGRESS},
	{"UNAVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_STATE_UNAVAILABLE},
	{"PENDING", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_STATE_PENDING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_Reason[] = {
	{"USERREQUEST", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_USERREQUEST},
	{"CONNECTIONLOST", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_CONNECTIONLOST},
	{"LOWBATTERY", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_LOWBATTERY},
	{"FINISHED", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_FINISHED},
	{"STOPPED", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_STOPPED},
	{"DISABLED", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_DISABLED},
	{"ENABLED", ARSDK_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED_REASON_ENABLED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_LandingStateChanged_State[] = {
	{"LINEAR", ARSDK_ARDRONE3_PILOTINGSTATE_LANDINGSTATECHANGED_STATE_LINEAR},
	{"SPIRAL", ARSDK_ARDRONE3_PILOTINGSTATE_LANDINGSTATECHANGED_STATE_SPIRAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Orientation_mode[] = {
	{"NONE", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_ORIENTATION_MODE_NONE},
	{"TO_TARGET", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_ORIENTATION_MODE_TO_TARGET},
	{"HEADING_START", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_ORIENTATION_MODE_HEADING_START},
	{"HEADING_DURING", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_ORIENTATION_MODE_HEADING_DURING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Status[] = {
	{"RUNNING", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_STATUS_RUNNING},
	{"DONE", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_STATUS_DONE},
	{"CANCELED", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_STATUS_CANCELED},
	{"ERROR", ARSDK_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED_STATUS_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_MotionState_State[] = {
	{"STEADY", ARSDK_ARDRONE3_PILOTINGSTATE_MOTIONSTATE_STATE_STEADY},
	{"MOVING", ARSDK_ARDRONE3_PILOTINGSTATE_MOTIONSTATE_STATE_MOVING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_PilotedPOI_Status[] = {
	{"UNAVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOI_STATUS_UNAVAILABLE},
	{"AVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOI_STATUS_AVAILABLE},
	{"PENDING", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOI_STATUS_PENDING},
	{"RUNNING", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOI_STATUS_RUNNING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Mode[] = {
	{"LOCKED_GIMBAL", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_MODE_LOCKED_GIMBAL},
	{"FREE_GIMBAL", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_MODE_FREE_GIMBAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Status[] = {
	{"UNAVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_STATUS_UNAVAILABLE},
	{"AVAILABLE", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_STATUS_AVAILABLE},
	{"PENDING", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_STATUS_PENDING},
	{"RUNNING", ARSDK_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2_STATUS_RUNNING},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity_Status[] = {
	{"OK", ARSDK_ARDRONE3_PILOTINGSTATE_RETURNHOMEBATTERYCAPACITY_STATUS_OK},
	{"WARNING", ARSDK_ARDRONE3_PILOTINGSTATE_RETURNHOMEBATTERYCAPACITY_STATUS_WARNING},
	{"CRITICAL", ARSDK_ARDRONE3_PILOTINGSTATE_RETURNHOMEBATTERYCAPACITY_STATUS_CRITICAL},
	{"UNKNOWN", ARSDK_ARDRONE3_PILOTINGSTATE_RETURNHOMEBATTERYCAPACITY_STATUS_UNKNOWN},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_MoveByChanged_Status[] = {
	{"RUNNING", ARSDK_ARDRONE3_PILOTINGSTATE_MOVEBYCHANGED_STATUS_RUNNING},
	{"DONE", ARSDK_ARDRONE3_PILOTINGSTATE_MOVEBYCHANGED_STATUS_DONE},
	{"CANCELED", ARSDK_ARDRONE3_PILOTINGSTATE_MOVEBYCHANGED_STATUS_CANCELED},
	{"ERROR", ARSDK_ARDRONE3_PILOTINGSTATE_MOVEBYCHANGED_STATUS_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger_Reason[] = {
	{"NONE", ARSDK_ARDRONE3_PILOTINGSTATE_FORCEDLANDINGAUTOTRIGGER_REASON_NONE},
	{"BATTERY_CRITICAL_SOON", ARSDK_ARDRONE3_PILOTINGSTATE_FORCEDLANDINGAUTOTRIGGER_REASON_BATTERY_CRITICAL_SOON},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_WindStateChanged_State[] = {
	{"OK", ARSDK_ARDRONE3_PILOTINGSTATE_WINDSTATECHANGED_STATE_OK},
	{"WARNING", ARSDK_ARDRONE3_PILOTINGSTATE_WINDSTATECHANGED_STATE_WARNING},
	{"CRITICAL", ARSDK_ARDRONE3_PILOTINGSTATE_WINDSTATECHANGED_STATE_CRITICAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_VibrationLevelChanged_State[] = {
	{"OK", ARSDK_ARDRONE3_PILOTINGSTATE_VIBRATIONLEVELCHANGED_STATE_OK},
	{"WARNING", ARSDK_ARDRONE3_PILOTINGSTATE_VIBRATIONLEVELCHANGED_STATE_WARNING},
	{"CRITICAL", ARSDK_ARDRONE3_PILOTINGSTATE_VIBRATIONLEVELCHANGED_STATE_CRITICAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingState_HeadingLockedStateChanged_State[] = {
	{"OK", ARSDK_ARDRONE3_PILOTINGSTATE_HEADINGLOCKEDSTATECHANGED_STATE_OK},
	{"WARNING", ARSDK_ARDRONE3_PILOTINGSTATE_HEADINGLOCKEDSTATECHANGED_STATE_WARNING},
	{"CRITICAL", ARSDK_ARDRONE3_PILOTINGSTATE_HEADINGLOCKEDSTATECHANGED_STATE_CRITICAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingEvent_MoveByEnd_Error[] = {
	{"OK", ARSDK_ARDRONE3_PILOTINGEVENT_MOVEBYEND_ERROR_OK},
	{"UNKNOWN", ARSDK_ARDRONE3_PILOTINGEVENT_MOVEBYEND_ERROR_UNKNOWN},
	{"BUSY", ARSDK_ARDRONE3_PILOTINGEVENT_MOVEBYEND_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_ARDRONE3_PILOTINGEVENT_MOVEBYEND_ERROR_NOTAVAILABLE},
	{"INTERRUPTED", ARSDK_ARDRONE3_PILOTINGEVENT_MOVEBYEND_ERROR_INTERRUPTED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Network_WifiScan_Band[] = {
	{"2_4GHZ", ARSDK_ARDRONE3_NETWORK_WIFISCAN_BAND_2_4GHZ},
	{"5GHZ", ARSDK_ARDRONE3_NETWORK_WIFISCAN_BAND_5GHZ},
	{"ALL", ARSDK_ARDRONE3_NETWORK_WIFISCAN_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkState_WifiScanListChanged_Band[] = {
	{"2_4GHZ", ARSDK_ARDRONE3_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_ARDRONE3_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged_Band[] = {
	{"2_4GHZ", ARSDK_ARDRONE3_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_ARDRONE3_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingSettings_CirclingDirection_Value[] = {
	{"CW", ARSDK_ARDRONE3_PILOTINGSETTINGS_CIRCLINGDIRECTION_VALUE_CW},
	{"CCW", ARSDK_ARDRONE3_PILOTINGSETTINGS_CIRCLINGDIRECTION_VALUE_CCW},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingSettings_PitchMode_Value[] = {
	{"NORMAL", ARSDK_ARDRONE3_PILOTINGSETTINGS_PITCHMODE_VALUE_NORMAL},
	{"INVERTED", ARSDK_ARDRONE3_PILOTINGSETTINGS_PITCHMODE_VALUE_INVERTED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged_Value[] = {
	{"CW", ARSDK_ARDRONE3_PILOTINGSETTINGSSTATE_CIRCLINGDIRECTIONCHANGED_VALUE_CW},
	{"CCW", ARSDK_ARDRONE3_PILOTINGSETTINGSSTATE_CIRCLINGDIRECTIONCHANGED_VALUE_CCW},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PilotingSettingsState_PitchModeChanged_Value[] = {
	{"NORMAL", ARSDK_ARDRONE3_PILOTINGSETTINGSSTATE_PITCHMODECHANGED_VALUE_NORMAL},
	{"INVERTED", ARSDK_ARDRONE3_PILOTINGSETTINGSSTATE_PITCHMODECHANGED_VALUE_INVERTED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Type[] = {
	{"AUTO", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISELECTION_TYPE_AUTO},
	{"MANUAL", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISELECTION_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Band[] = {
	{"2_4GHZ", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISELECTION_BAND_2_4GHZ},
	{"5GHZ", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISELECTION_BAND_5GHZ},
	{"ALL", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISELECTION_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_Type[] = {
	{"OPEN", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISECURITY_TYPE_OPEN},
	{"WPA2", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISECURITY_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_KeyType[] = {
	{"PLAIN", ARSDK_ARDRONE3_NETWORKSETTINGS_WIFISECURITY_KEYTYPE_PLAIN},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Type[] = {
	{"AUTO_ALL", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_ALL},
	{"AUTO_2_4GHZ", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_2_4GHZ},
	{"AUTO_5GHZ", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_5GHZ},
	{"MANUAL", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Band[] = {
	{"2_4GHZ", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_5GHZ},
	{"ALL", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged_Type[] = {
	{"OPEN", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITYCHANGED_TYPE_OPEN},
	{"WPA2", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITYCHANGED_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_Type[] = {
	{"OPEN", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITY_TYPE_OPEN},
	{"WPA2", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITY_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_KeyType[] = {
	{"PLAIN", ARSDK_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITY_KEYTYPE_PLAIN},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_SettingsState_MotorErrorStateChanged_MotorError[] = {
	{"NOERROR", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_NOERROR},
	{"ERROREEPROM", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERROREEPROM},
	{"ERRORMOTORSTALLED", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORMOTORSTALLED},
	{"ERRORPROPELLERSECURITY", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORPROPELLERSECURITY},
	{"ERRORCOMMLOST", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORCOMMLOST},
	{"ERRORRCEMERGENCYSTOP", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORRCEMERGENCYSTOP},
	{"ERRORREALTIME", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORREALTIME},
	{"ERRORMOTORSETTING", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORMOTORSETTING},
	{"ERRORTEMPERATURE", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORTEMPERATURE},
	{"ERRORBATTERYVOLTAGE", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORBATTERYVOLTAGE},
	{"ERRORLIPOCELLS", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORLIPOCELLS},
	{"ERRORMOSFET", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORMOSFET},
	{"ERRORBOOTLOADER", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORBOOTLOADER},
	{"ERRORASSERT", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED_MOTORERROR_ERRORASSERT},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged_MotorError[] = {
	{"NOERROR", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_NOERROR},
	{"ERROREEPROM", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERROREEPROM},
	{"ERRORMOTORSTALLED", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORMOTORSTALLED},
	{"ERRORPROPELLERSECURITY", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORPROPELLERSECURITY},
	{"ERRORCOMMLOST", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORCOMMLOST},
	{"ERRORRCEMERGENCYSTOP", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORRCEMERGENCYSTOP},
	{"ERRORREALTIME", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORREALTIME},
	{"ERRORMOTORSETTING", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORMOTORSETTING},
	{"ERRORBATTERYVOLTAGE", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORBATTERYVOLTAGE},
	{"ERRORLIPOCELLS", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORLIPOCELLS},
	{"ERRORMOSFET", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORMOSFET},
	{"ERRORTEMPERATURE", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORTEMPERATURE},
	{"ERRORBOOTLOADER", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORBOOTLOADER},
	{"ERRORASSERT", ARSDK_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED_MOTORERROR_ERRORASSERT},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_PictureFormatSelection_Type[] = {
	{"RAW", ARSDK_ARDRONE3_PICTURESETTINGS_PICTUREFORMATSELECTION_TYPE_RAW},
	{"JPEG", ARSDK_ARDRONE3_PICTURESETTINGS_PICTUREFORMATSELECTION_TYPE_JPEG},
	{"SNAPSHOT", ARSDK_ARDRONE3_PICTURESETTINGS_PICTUREFORMATSELECTION_TYPE_SNAPSHOT},
	{"JPEG_FISHEYE", ARSDK_ARDRONE3_PICTURESETTINGS_PICTUREFORMATSELECTION_TYPE_JPEG_FISHEYE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection_Type[] = {
	{"AUTO", ARSDK_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION_TYPE_AUTO},
	{"TUNGSTEN", ARSDK_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION_TYPE_TUNGSTEN},
	{"DAYLIGHT", ARSDK_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION_TYPE_DAYLIGHT},
	{"CLOUDY", ARSDK_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION_TYPE_CLOUDY},
	{"COOL_WHITE", ARSDK_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION_TYPE_COOL_WHITE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_VideoStabilizationMode_Mode[] = {
	{"ROLL_PITCH", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOSTABILIZATIONMODE_MODE_ROLL_PITCH},
	{"PITCH", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOSTABILIZATIONMODE_MODE_PITCH},
	{"ROLL", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOSTABILIZATIONMODE_MODE_ROLL},
	{"NONE", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOSTABILIZATIONMODE_MODE_NONE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_VideoRecordingMode_Mode[] = {
	{"QUALITY", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEORECORDINGMODE_MODE_QUALITY},
	{"TIME", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEORECORDINGMODE_MODE_TIME},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_VideoFramerate_Framerate[] = {
	{"24_FPS", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOFRAMERATE_FRAMERATE_24_FPS},
	{"25_FPS", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOFRAMERATE_FRAMERATE_25_FPS},
	{"30_FPS", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEOFRAMERATE_FRAMERATE_30_FPS},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettings_VideoResolutions_Type[] = {
	{"REC1080_STREAM480", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEORESOLUTIONS_TYPE_REC1080_STREAM480},
	{"REC720_STREAM720", ARSDK_ARDRONE3_PICTURESETTINGS_VIDEORESOLUTIONS_TYPE_REC720_STREAM720},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_PictureFormatChanged_Type[] = {
	{"RAW", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED_TYPE_RAW},
	{"JPEG", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED_TYPE_JPEG},
	{"SNAPSHOT", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED_TYPE_SNAPSHOT},
	{"JPEG_FISHEYE", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED_TYPE_JPEG_FISHEYE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged_Type[] = {
	{"AUTO", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED_TYPE_AUTO},
	{"TUNGSTEN", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED_TYPE_TUNGSTEN},
	{"DAYLIGHT", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED_TYPE_DAYLIGHT},
	{"CLOUDY", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED_TYPE_CLOUDY},
	{"COOL_WHITE", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED_TYPE_COOL_WHITE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged_Mode[] = {
	{"ROLL_PITCH", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOSTABILIZATIONMODECHANGED_MODE_ROLL_PITCH},
	{"PITCH", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOSTABILIZATIONMODECHANGED_MODE_PITCH},
	{"ROLL", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOSTABILIZATIONMODECHANGED_MODE_ROLL},
	{"NONE", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOSTABILIZATIONMODECHANGED_MODE_NONE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged_Mode[] = {
	{"QUALITY", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEORECORDINGMODECHANGED_MODE_QUALITY},
	{"TIME", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEORECORDINGMODECHANGED_MODE_TIME},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged_Framerate[] = {
	{"24_FPS", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOFRAMERATECHANGED_FRAMERATE_24_FPS},
	{"25_FPS", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOFRAMERATECHANGED_FRAMERATE_25_FPS},
	{"30_FPS", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEOFRAMERATECHANGED_FRAMERATE_30_FPS},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged_Type[] = {
	{"REC1080_STREAM480", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEORESOLUTIONSCHANGED_TYPE_REC1080_STREAM480},
	{"REC720_STREAM720", ARSDK_ARDRONE3_PICTURESETTINGSSTATE_VIDEORESOLUTIONSCHANGED_TYPE_REC720_STREAM720},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaStreaming_VideoStreamMode_Mode[] = {
	{"LOW_LATENCY", ARSDK_ARDRONE3_MEDIASTREAMING_VIDEOSTREAMMODE_MODE_LOW_LATENCY},
	{"HIGH_RELIABILITY", ARSDK_ARDRONE3_MEDIASTREAMING_VIDEOSTREAMMODE_MODE_HIGH_RELIABILITY},
	{"HIGH_RELIABILITY_LOW_FRAMERATE", ARSDK_ARDRONE3_MEDIASTREAMING_VIDEOSTREAMMODE_MODE_HIGH_RELIABILITY_LOW_FRAMERATE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaStreamingState_VideoEnableChanged_Enabled[] = {
	{"ENABLED", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ENABLED},
	{"DISABLED", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_DISABLED},
	{"ERROR", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged_Mode[] = {
	{"LOW_LATENCY", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOSTREAMMODECHANGED_MODE_LOW_LATENCY},
	{"HIGH_RELIABILITY", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOSTREAMMODECHANGED_MODE_HIGH_RELIABILITY},
	{"HIGH_RELIABILITY_LOW_FRAMERATE", ARSDK_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOSTREAMMODECHANGED_MODE_HIGH_RELIABILITY_LOW_FRAMERATE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_GPSSettings_HomeType_Type[] = {
	{"TAKEOFF", ARSDK_ARDRONE3_GPSSETTINGS_HOMETYPE_TYPE_TAKEOFF},
	{"PILOT", ARSDK_ARDRONE3_GPSSETTINGS_HOMETYPE_TYPE_PILOT},
	{"FOLLOWEE", ARSDK_ARDRONE3_GPSSETTINGS_HOMETYPE_TYPE_FOLLOWEE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged_State[] = {
	{"UPDATED", ARSDK_ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED_STATE_UPDATED},
	{"INPROGRESS", ARSDK_ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED_STATE_INPROGRESS},
	{"FAILED", ARSDK_ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED_STATE_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_GPSSettingsState_HomeTypeChanged_Type[] = {
	{"TAKEOFF", ARSDK_ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED_TYPE_TAKEOFF},
	{"PILOT", ARSDK_ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED_TYPE_PILOT},
	{"FOLLOWEE", ARSDK_ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED_TYPE_FOLLOWEE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Antiflickering_ElectricFrequency_Frequency[] = {
	{"FIFTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERING_ELECTRICFREQUENCY_FREQUENCY_FIFTYHERTZ},
	{"SIXTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERING_ELECTRICFREQUENCY_FREQUENCY_SIXTYHERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_Antiflickering_SetMode_Mode[] = {
	{"AUTO", ARSDK_ARDRONE3_ANTIFLICKERING_SETMODE_MODE_AUTO},
	{"FIXEDFIFTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERING_SETMODE_MODE_FIXEDFIFTYHERTZ},
	{"FIXEDSIXTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERING_SETMODE_MODE_FIXEDSIXTYHERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged_Frequency[] = {
	{"FIFTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERINGSTATE_ELECTRICFREQUENCYCHANGED_FREQUENCY_FIFTYHERTZ},
	{"SIXTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERINGSTATE_ELECTRICFREQUENCYCHANGED_FREQUENCY_SIXTYHERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_AntiflickeringState_ModeChanged_Mode[] = {
	{"AUTO", ARSDK_ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED_MODE_AUTO},
	{"FIXEDFIFTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED_MODE_FIXEDFIFTYHERTZ},
	{"FIXEDSIXTYHERTZ", ARSDK_ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED_MODE_FIXEDSIXTYHERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged_Type[] = {
	{"TAKEOFF", ARSDK_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED_TYPE_TAKEOFF},
	{"PILOT", ARSDK_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED_TYPE_PILOT},
	{"FIRST_FIX", ARSDK_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED_TYPE_FIRST_FIX},
	{"FOLLOWEE", ARSDK_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED_TYPE_FOLLOWEE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_GPSState_HomeTypeChosenChanged_Type[] = {
	{"TAKEOFF", ARSDK_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED_TYPE_TAKEOFF},
	{"PILOT", ARSDK_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED_TYPE_PILOT},
	{"FIRST_FIX", ARSDK_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED_TYPE_FIRST_FIX},
	{"FOLLOWEE", ARSDK_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED_TYPE_FOLLOWEE},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_AccessoryState_ConnectedAccessories_Accessory_type[] = {
	{"SEQUOIA", ARSDK_ARDRONE3_ACCESSORYSTATE_CONNECTEDACCESSORIES_ACCESSORY_TYPE_SEQUOIA},
	{"FLIR", ARSDK_ARDRONE3_ACCESSORYSTATE_CONNECTEDACCESSORIES_ACCESSORY_TYPE_FLIR},
};

static const struct arsdk_enum_desc s_enum_desc_Ardrone3_SoundState_AlertSound_State[] = {
	{"STOPPED", ARSDK_ARDRONE3_SOUNDSTATE_ALERTSOUND_STATE_STOPPED},
	{"PLAYING", ARSDK_ARDRONE3_SOUNDSTATE_ALERTSOUND_STATE_PLAYING},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_TakeOff = {
	"Ardrone3.Piloting.TakeOff",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_TAKEOFF,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_PCMD[] = {
	{
		"Flag",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Gaz",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"TimestampAndSeqNum",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_PCMD = {
	"Ardrone3.Piloting.PCMD",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_PCMD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_PCMD,
	sizeof(s_arg_desc_Ardrone3_Piloting_PCMD) / sizeof(s_arg_desc_Ardrone3_Piloting_PCMD[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_Landing = {
	"Ardrone3.Piloting.Landing",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_LANDING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_Emergency = {
	"Ardrone3.Piloting.Emergency",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_EMERGENCY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_NavigateHome[] = {
	{
		"Start",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_NavigateHome = {
	"Ardrone3.Piloting.NavigateHome",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_NAVIGATEHOME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_NavigateHome,
	sizeof(s_arg_desc_Ardrone3_Piloting_NavigateHome) / sizeof(s_arg_desc_Ardrone3_Piloting_NavigateHome[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_MoveBy[] = {
	{
		"DX",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DY",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DZ",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DPsi",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_MoveBy = {
	"Ardrone3.Piloting.MoveBy",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_MOVEBY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_MoveBy,
	sizeof(s_arg_desc_Ardrone3_Piloting_MoveBy) / sizeof(s_arg_desc_Ardrone3_Piloting_MoveBy[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_UserTakeOff[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_UserTakeOff = {
	"Ardrone3.Piloting.UserTakeOff",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_USERTAKEOFF,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_UserTakeOff,
	sizeof(s_arg_desc_Ardrone3_Piloting_UserTakeOff) / sizeof(s_arg_desc_Ardrone3_Piloting_UserTakeOff[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_Circle[] = {
	{
		"Direction",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Piloting_Circle_Direction,
		sizeof(s_enum_desc_Ardrone3_Piloting_Circle_Direction) / sizeof(s_enum_desc_Ardrone3_Piloting_Circle_Direction[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_Circle = {
	"Ardrone3.Piloting.Circle",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_CIRCLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_Circle,
	sizeof(s_arg_desc_Ardrone3_Piloting_Circle) / sizeof(s_arg_desc_Ardrone3_Piloting_Circle[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_MoveTo[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Orientation_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Piloting_MoveTo_Orientation_mode,
		sizeof(s_enum_desc_Ardrone3_Piloting_MoveTo_Orientation_mode) / sizeof(s_enum_desc_Ardrone3_Piloting_MoveTo_Orientation_mode[0])
	},
	{
		"Heading",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_MoveTo = {
	"Ardrone3.Piloting.MoveTo",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_MOVETO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_MoveTo,
	sizeof(s_arg_desc_Ardrone3_Piloting_MoveTo) / sizeof(s_arg_desc_Ardrone3_Piloting_MoveTo[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveTo = {
	"Ardrone3.Piloting.CancelMoveTo",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_CANCELMOVETO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_StartPilotedPOI[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOI = {
	"Ardrone3.Piloting.StartPilotedPOI",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_STARTPILOTEDPOI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_StartPilotedPOI,
	sizeof(s_arg_desc_Ardrone3_Piloting_StartPilotedPOI) / sizeof(s_arg_desc_Ardrone3_Piloting_StartPilotedPOI[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Piloting_StartPilotedPOIV2[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Piloting_StartPilotedPOIV2_Mode,
		sizeof(s_enum_desc_Ardrone3_Piloting_StartPilotedPOIV2_Mode) / sizeof(s_enum_desc_Ardrone3_Piloting_StartPilotedPOIV2_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOIV2 = {
	"Ardrone3.Piloting.StartPilotedPOIV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_STARTPILOTEDPOIV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Piloting_StartPilotedPOIV2,
	sizeof(s_arg_desc_Ardrone3_Piloting_StartPilotedPOIV2) / sizeof(s_arg_desc_Ardrone3_Piloting_StartPilotedPOIV2[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_StopPilotedPOI = {
	"Ardrone3.Piloting.StopPilotedPOI",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_STOPPILOTEDPOI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveBy = {
	"Ardrone3.Piloting.CancelMoveBy",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTING,
	ARSDK_CMD_ARDRONE3_PILOTING_CANCELMOVEBY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Animations_Flip[] = {
	{
		"Direction",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Animations_Flip_Direction,
		sizeof(s_enum_desc_Ardrone3_Animations_Flip_Direction) / sizeof(s_enum_desc_Ardrone3_Animations_Flip_Direction[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Animations_Flip = {
	"Ardrone3.Animations.Flip",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ANIMATIONS,
	ARSDK_CMD_ARDRONE3_ANIMATIONS_FLIP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Animations_Flip,
	sizeof(s_arg_desc_Ardrone3_Animations_Flip) / sizeof(s_arg_desc_Ardrone3_Animations_Flip[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Camera_Orientation[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Camera_Orientation = {
	"Ardrone3.Camera.Orientation",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERA,
	ARSDK_CMD_ARDRONE3_CAMERA_ORIENTATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Camera_Orientation,
	sizeof(s_arg_desc_Ardrone3_Camera_Orientation) / sizeof(s_arg_desc_Ardrone3_Camera_Orientation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Camera_OrientationV2[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Camera_OrientationV2 = {
	"Ardrone3.Camera.OrientationV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERA,
	ARSDK_CMD_ARDRONE3_CAMERA_ORIENTATIONV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Camera_OrientationV2,
	sizeof(s_arg_desc_Ardrone3_Camera_OrientationV2) / sizeof(s_arg_desc_Ardrone3_Camera_OrientationV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Camera_Velocity[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Camera_Velocity = {
	"Ardrone3.Camera.Velocity",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERA,
	ARSDK_CMD_ARDRONE3_CAMERA_VELOCITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Camera_Velocity,
	sizeof(s_arg_desc_Ardrone3_Camera_Velocity) / sizeof(s_arg_desc_Ardrone3_Camera_Velocity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecord_Picture[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecord_Picture = {
	"Ardrone3.MediaRecord.Picture",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORD,
	ARSDK_CMD_ARDRONE3_MEDIARECORD_PICTURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecord_Picture,
	sizeof(s_arg_desc_Ardrone3_MediaRecord_Picture) / sizeof(s_arg_desc_Ardrone3_MediaRecord_Picture[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecord_Video[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecord_Video_Record,
		sizeof(s_enum_desc_Ardrone3_MediaRecord_Video_Record) / sizeof(s_enum_desc_Ardrone3_MediaRecord_Video_Record[0])
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecord_Video = {
	"Ardrone3.MediaRecord.Video",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORD,
	ARSDK_CMD_ARDRONE3_MEDIARECORD_VIDEO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecord_Video,
	sizeof(s_arg_desc_Ardrone3_MediaRecord_Video) / sizeof(s_arg_desc_Ardrone3_MediaRecord_Video[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecord_PictureV2 = {
	"Ardrone3.MediaRecord.PictureV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORD,
	ARSDK_CMD_ARDRONE3_MEDIARECORD_PICTUREV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecord_VideoV2[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecord_VideoV2_Record,
		sizeof(s_enum_desc_Ardrone3_MediaRecord_VideoV2_Record) / sizeof(s_enum_desc_Ardrone3_MediaRecord_VideoV2_Record[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecord_VideoV2 = {
	"Ardrone3.MediaRecord.VideoV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORD,
	ARSDK_CMD_ARDRONE3_MEDIARECORD_VIDEOV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecord_VideoV2,
	sizeof(s_arg_desc_Ardrone3_MediaRecord_VideoV2) / sizeof(s_arg_desc_Ardrone3_MediaRecord_VideoV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Network_WifiScan[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Network_WifiScan_Band,
		sizeof(s_enum_desc_Ardrone3_Network_WifiScan_Band) / sizeof(s_enum_desc_Ardrone3_Network_WifiScan_Band[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Network_WifiScan = {
	"Ardrone3.Network.WifiScan",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORK,
	ARSDK_CMD_ARDRONE3_NETWORK_WIFISCAN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Network_WifiScan,
	sizeof(s_arg_desc_Ardrone3_Network_WifiScan) / sizeof(s_arg_desc_Ardrone3_Network_WifiScan[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Network_WifiAuthChannel = {
	"Ardrone3.Network.WifiAuthChannel",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORK,
	ARSDK_CMD_ARDRONE3_NETWORK_WIFIAUTHCHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_MaxAltitude[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxAltitude = {
	"Ardrone3.PilotingSettings.MaxAltitude",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_MAXALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_MaxAltitude,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxAltitude) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_MaxTilt[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxTilt = {
	"Ardrone3.PilotingSettings.MaxTilt",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_MAXTILT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_MaxTilt,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxTilt) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxTilt[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_AbsolutControl[] = {
	{
		"On",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_AbsolutControl = {
	"Ardrone3.PilotingSettings.AbsolutControl",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_ABSOLUTCONTROL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_AbsolutControl,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_AbsolutControl) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_AbsolutControl[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_MaxDistance[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxDistance = {
	"Ardrone3.PilotingSettings.MaxDistance",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_MAXDISTANCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_MaxDistance,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxDistance) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_MaxDistance[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance[] = {
	{
		"ShouldNotFlyOver",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance = {
	"Ardrone3.PilotingSettings.NoFlyOverMaxDistance",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_NOFLYOVERMAXDISTANCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_BankedTurn[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_BankedTurn = {
	"Ardrone3.PilotingSettings.BankedTurn",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_BANKEDTURN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_BankedTurn,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_BankedTurn) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_BankedTurn[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_MinAltitude[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MinAltitude = {
	"Ardrone3.PilotingSettings.MinAltitude",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_MINALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_MinAltitude,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_MinAltitude) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_MinAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_CirclingDirection[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingSettings_CirclingDirection_Value,
		sizeof(s_enum_desc_Ardrone3_PilotingSettings_CirclingDirection_Value) / sizeof(s_enum_desc_Ardrone3_PilotingSettings_CirclingDirection_Value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingDirection = {
	"Ardrone3.PilotingSettings.CirclingDirection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_CIRCLINGDIRECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_CirclingDirection,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingDirection) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingDirection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_CirclingRadius[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingRadius = {
	"Ardrone3.PilotingSettings.CirclingRadius",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_CIRCLINGRADIUS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_CirclingRadius,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingRadius) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingRadius[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_CirclingAltitude[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingAltitude = {
	"Ardrone3.PilotingSettings.CirclingAltitude",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_CIRCLINGALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_CirclingAltitude,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingAltitude) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_CirclingAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_PitchMode[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingSettings_PitchMode_Value,
		sizeof(s_enum_desc_Ardrone3_PilotingSettings_PitchMode_Value) / sizeof(s_enum_desc_Ardrone3_PilotingSettings_PitchMode_Value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_PitchMode = {
	"Ardrone3.PilotingSettings.PitchMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_PITCHMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_PitchMode,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_PitchMode) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_PitchMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode = {
	"Ardrone3.PilotingSettings.SetMotionDetectionMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGS,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGS_SETMOTIONDETECTIONMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode,
	sizeof(s_arg_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode) / sizeof(s_arg_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed = {
	"Ardrone3.SpeedSettings.MaxVerticalSpeed",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGS,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGS_MAXVERTICALSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed,
	sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed) / sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettings_MaxRotationSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxRotationSpeed = {
	"Ardrone3.SpeedSettings.MaxRotationSpeed",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGS,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGS_MAXROTATIONSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettings_MaxRotationSpeed,
	sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxRotationSpeed) / sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxRotationSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettings_HullProtection[] = {
	{
		"Present",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettings_HullProtection = {
	"Ardrone3.SpeedSettings.HullProtection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGS,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGS_HULLPROTECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettings_HullProtection,
	sizeof(s_arg_desc_Ardrone3_SpeedSettings_HullProtection) / sizeof(s_arg_desc_Ardrone3_SpeedSettings_HullProtection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettings_Outdoor[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettings_Outdoor = {
	"Ardrone3.SpeedSettings.Outdoor",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGS,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGS_OUTDOOR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettings_Outdoor,
	sizeof(s_arg_desc_Ardrone3_SpeedSettings_Outdoor) / sizeof(s_arg_desc_Ardrone3_SpeedSettings_Outdoor[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed = {
	"Ardrone3.SpeedSettings.MaxPitchRollRotationSpeed",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGS,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGS_MAXPITCHROLLROTATIONSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed,
	sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed) / sizeof(s_arg_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkSettings_WifiSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Type,
		sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Type) / sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Band,
		sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Band) / sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSelection_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSelection = {
	"Ardrone3.NetworkSettings.WifiSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSETTINGS,
	ARSDK_CMD_ARDRONE3_NETWORKSETTINGS_WIFISELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkSettings_WifiSelection,
	sizeof(s_arg_desc_Ardrone3_NetworkSettings_WifiSelection) / sizeof(s_arg_desc_Ardrone3_NetworkSettings_WifiSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkSettings_WifiSecurity[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_Type,
		sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_Type) / sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_Type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"KeyType",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_KeyType,
		sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_KeyType) / sizeof(s_enum_desc_Ardrone3_NetworkSettings_WifiSecurity_KeyType[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSecurity = {
	"Ardrone3.NetworkSettings.WifiSecurity",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSETTINGS,
	ARSDK_CMD_ARDRONE3_NETWORKSETTINGS_WIFISECURITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkSettings_WifiSecurity,
	sizeof(s_arg_desc_Ardrone3_NetworkSettings_WifiSecurity) / sizeof(s_arg_desc_Ardrone3_NetworkSettings_WifiSecurity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_PictureFormatSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_PictureFormatSelection_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_PictureFormatSelection_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettings_PictureFormatSelection_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_PictureFormatSelection = {
	"Ardrone3.PictureSettings.PictureFormatSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_PICTUREFORMATSELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_PictureFormatSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_PictureFormatSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_PictureFormatSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection = {
	"Ardrone3.PictureSettings.AutoWhiteBalanceSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_AUTOWHITEBALANCESELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_ExpositionSelection[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_ExpositionSelection = {
	"Ardrone3.PictureSettings.ExpositionSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_EXPOSITIONSELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_ExpositionSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_ExpositionSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_ExpositionSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_SaturationSelection[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_SaturationSelection = {
	"Ardrone3.PictureSettings.SaturationSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_SATURATIONSELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_SaturationSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_SaturationSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_SaturationSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_TimelapseSelection[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Interval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_TimelapseSelection = {
	"Ardrone3.PictureSettings.TimelapseSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_TIMELAPSESELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_TimelapseSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_TimelapseSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_TimelapseSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_VideoAutorecordSelection[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoAutorecordSelection = {
	"Ardrone3.PictureSettings.VideoAutorecordSelection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_VIDEOAUTORECORDSELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_VideoAutorecordSelection,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoAutorecordSelection) / sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoAutorecordSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_VideoStabilizationMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_VideoStabilizationMode_Mode,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoStabilizationMode_Mode) / sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoStabilizationMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoStabilizationMode = {
	"Ardrone3.PictureSettings.VideoStabilizationMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_VIDEOSTABILIZATIONMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_VideoStabilizationMode,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoStabilizationMode) / sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoStabilizationMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_VideoRecordingMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_VideoRecordingMode_Mode,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoRecordingMode_Mode) / sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoRecordingMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoRecordingMode = {
	"Ardrone3.PictureSettings.VideoRecordingMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_VIDEORECORDINGMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_VideoRecordingMode,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoRecordingMode) / sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoRecordingMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_VideoFramerate[] = {
	{
		"Framerate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_VideoFramerate_Framerate,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoFramerate_Framerate) / sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoFramerate_Framerate[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoFramerate = {
	"Ardrone3.PictureSettings.VideoFramerate",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_VIDEOFRAMERATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_VideoFramerate,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoFramerate) / sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoFramerate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettings_VideoResolutions[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettings_VideoResolutions_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoResolutions_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettings_VideoResolutions_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoResolutions = {
	"Ardrone3.PictureSettings.VideoResolutions",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGS,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGS_VIDEORESOLUTIONS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettings_VideoResolutions,
	sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoResolutions) / sizeof(s_arg_desc_Ardrone3_PictureSettings_VideoResolutions[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaStreaming_VideoEnable[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoEnable = {
	"Ardrone3.MediaStreaming.VideoEnable",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIASTREAMING,
	ARSDK_CMD_ARDRONE3_MEDIASTREAMING_VIDEOENABLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaStreaming_VideoEnable,
	sizeof(s_arg_desc_Ardrone3_MediaStreaming_VideoEnable) / sizeof(s_arg_desc_Ardrone3_MediaStreaming_VideoEnable[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaStreaming_VideoStreamMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaStreaming_VideoStreamMode_Mode,
		sizeof(s_enum_desc_Ardrone3_MediaStreaming_VideoStreamMode_Mode) / sizeof(s_enum_desc_Ardrone3_MediaStreaming_VideoStreamMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoStreamMode = {
	"Ardrone3.MediaStreaming.VideoStreamMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIASTREAMING,
	ARSDK_CMD_ARDRONE3_MEDIASTREAMING_VIDEOSTREAMMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaStreaming_VideoStreamMode,
	sizeof(s_arg_desc_Ardrone3_MediaStreaming_VideoStreamMode) / sizeof(s_arg_desc_Ardrone3_MediaStreaming_VideoStreamMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettings_SetHome[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_SetHome = {
	"Ardrone3.GPSSettings.SetHome",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_SETHOME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettings_SetHome,
	sizeof(s_arg_desc_Ardrone3_GPSSettings_SetHome) / sizeof(s_arg_desc_Ardrone3_GPSSettings_SetHome[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_ResetHome = {
	"Ardrone3.GPSSettings.ResetHome",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_RESETHOME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettings_SendControllerGPS[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"HorizontalAccuracy",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"VerticalAccuracy",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_SendControllerGPS = {
	"Ardrone3.GPSSettings.SendControllerGPS",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_SENDCONTROLLERGPS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettings_SendControllerGPS,
	sizeof(s_arg_desc_Ardrone3_GPSSettings_SendControllerGPS) / sizeof(s_arg_desc_Ardrone3_GPSSettings_SendControllerGPS[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettings_HomeType[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_GPSSettings_HomeType_Type,
		sizeof(s_enum_desc_Ardrone3_GPSSettings_HomeType_Type) / sizeof(s_enum_desc_Ardrone3_GPSSettings_HomeType_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_HomeType = {
	"Ardrone3.GPSSettings.HomeType",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_HOMETYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettings_HomeType,
	sizeof(s_arg_desc_Ardrone3_GPSSettings_HomeType) / sizeof(s_arg_desc_Ardrone3_GPSSettings_HomeType[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettings_ReturnHomeDelay[] = {
	{
		"Delay",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeDelay = {
	"Ardrone3.GPSSettings.ReturnHomeDelay",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_RETURNHOMEDELAY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettings_ReturnHomeDelay,
	sizeof(s_arg_desc_Ardrone3_GPSSettings_ReturnHomeDelay) / sizeof(s_arg_desc_Ardrone3_GPSSettings_ReturnHomeDelay[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude = {
	"Ardrone3.GPSSettings.ReturnHomeMinAltitude",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGS,
	ARSDK_CMD_ARDRONE3_GPSSETTINGS_RETURNHOMEMINALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude,
	sizeof(s_arg_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude) / sizeof(s_arg_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Antiflickering_ElectricFrequency[] = {
	{
		"Frequency",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Antiflickering_ElectricFrequency_Frequency,
		sizeof(s_enum_desc_Ardrone3_Antiflickering_ElectricFrequency_Frequency) / sizeof(s_enum_desc_Ardrone3_Antiflickering_ElectricFrequency_Frequency[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Antiflickering_ElectricFrequency = {
	"Ardrone3.Antiflickering.ElectricFrequency",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ANTIFLICKERING,
	ARSDK_CMD_ARDRONE3_ANTIFLICKERING_ELECTRICFREQUENCY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Antiflickering_ElectricFrequency,
	sizeof(s_arg_desc_Ardrone3_Antiflickering_ElectricFrequency) / sizeof(s_arg_desc_Ardrone3_Antiflickering_ElectricFrequency[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_Antiflickering_SetMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_Antiflickering_SetMode_Mode,
		sizeof(s_enum_desc_Ardrone3_Antiflickering_SetMode_Mode) / sizeof(s_enum_desc_Ardrone3_Antiflickering_SetMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Antiflickering_SetMode = {
	"Ardrone3.Antiflickering.SetMode",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ANTIFLICKERING,
	ARSDK_CMD_ARDRONE3_ANTIFLICKERING_SETMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_Antiflickering_SetMode,
	sizeof(s_arg_desc_Ardrone3_Antiflickering_SetMode) / sizeof(s_arg_desc_Ardrone3_Antiflickering_SetMode[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Sound_StartAlertSound = {
	"Ardrone3.Sound.StartAlertSound",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SOUND,
	ARSDK_CMD_ARDRONE3_SOUND_STARTALERTSOUND,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_Sound_StopAlertSound = {
	"Ardrone3.Sound.StopAlertSound",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SOUND,
	ARSDK_CMD_ARDRONE3_SOUND_STOPALERTSOUND,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordState_PictureStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChanged = {
	"Ardrone3.MediaRecordState.PictureStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDSTATE,
	ARSDK_CMD_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordState_PictureStateChanged,
	sizeof(s_arg_desc_Ardrone3_MediaRecordState_PictureStateChanged) / sizeof(s_arg_desc_Ardrone3_MediaRecordState_PictureStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordState_VideoStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_VideoStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChanged_State) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChanged_State[0])
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChanged = {
	"Ardrone3.MediaRecordState.VideoStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDSTATE,
	ARSDK_CMD_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordState_VideoStateChanged,
	sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoStateChanged) / sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordState_PictureStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_State,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_State) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_Error,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_Error) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_PictureStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChangedV2 = {
	"Ardrone3.MediaRecordState.PictureStateChangedV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDSTATE,
	ARSDK_CMD_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordState_PictureStateChangedV2,
	sizeof(s_arg_desc_Ardrone3_MediaRecordState_PictureStateChangedV2) / sizeof(s_arg_desc_Ardrone3_MediaRecordState_PictureStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordState_VideoStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_State,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_State) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_Error,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_Error) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChangedV2 = {
	"Ardrone3.MediaRecordState.VideoStateChangedV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDSTATE,
	ARSDK_CMD_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordState_VideoStateChangedV2,
	sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoStateChangedV2) / sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordState_VideoResolutionState[] = {
	{
		"Streaming",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Streaming,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Streaming) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Streaming[0])
	},
	{
		"Recording",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Recording,
		sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Recording) / sizeof(s_enum_desc_Ardrone3_MediaRecordState_VideoResolutionState_Recording[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoResolutionState = {
	"Ardrone3.MediaRecordState.VideoResolutionState",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDSTATE,
	ARSDK_CMD_ARDRONE3_MEDIARECORDSTATE_VIDEORESOLUTIONSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordState_VideoResolutionState,
	sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoResolutionState) / sizeof(s_arg_desc_Ardrone3_MediaRecordState_VideoResolutionState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordEvent_PictureEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Event,
		sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Event) / sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Error,
		sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Error) / sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_PictureEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_PictureEventChanged = {
	"Ardrone3.MediaRecordEvent.PictureEventChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDEVENT,
	ARSDK_CMD_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordEvent_PictureEventChanged,
	sizeof(s_arg_desc_Ardrone3_MediaRecordEvent_PictureEventChanged) / sizeof(s_arg_desc_Ardrone3_MediaRecordEvent_PictureEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaRecordEvent_VideoEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Event,
		sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Event) / sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Error,
		sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Error) / sizeof(s_enum_desc_Ardrone3_MediaRecordEvent_VideoEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_VideoEventChanged = {
	"Ardrone3.MediaRecordEvent.VideoEventChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIARECORDEVENT,
	ARSDK_CMD_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaRecordEvent_VideoEventChanged,
	sizeof(s_arg_desc_Ardrone3_MediaRecordEvent_VideoEventChanged) / sizeof(s_arg_desc_Ardrone3_MediaRecordEvent_VideoEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_FlyingStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_FlyingStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_FlyingStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_FlyingStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_FlyingStateChanged = {
	"Ardrone3.PilotingState.FlyingStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_FlyingStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_FlyingStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_FlyingStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_AlertStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_AlertStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_AlertStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_AlertStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_AlertStateChanged = {
	"Ardrone3.PilotingState.AlertStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_AlertStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_AlertStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_AlertStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_NavigateHomeStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_State[0])
	},
	{
		"Reason",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_Reason,
		sizeof(s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_Reason) / sizeof(s_enum_desc_Ardrone3_PilotingState_NavigateHomeStateChanged_Reason[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_NavigateHomeStateChanged = {
	"Ardrone3.PilotingState.NavigateHomeStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_NavigateHomeStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_NavigateHomeStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_NavigateHomeStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_PositionChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_PositionChanged = {
	"Ardrone3.PilotingState.PositionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_POSITIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_PositionChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_PositionChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_PositionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_SpeedChanged[] = {
	{
		"SpeedX",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"SpeedY",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"SpeedZ",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_SpeedChanged = {
	"Ardrone3.PilotingState.SpeedChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_SPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_SpeedChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_SpeedChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_SpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_AttitudeChanged[] = {
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_AttitudeChanged = {
	"Ardrone3.PilotingState.AttitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_ATTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_AttitudeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_AttitudeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_AttitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_AltitudeChanged[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeChanged = {
	"Ardrone3.PilotingState.AltitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_ALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_AltitudeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_AltitudeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_AltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_GpsLocationChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Latitude_accuracy",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Longitude_accuracy",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Altitude_accuracy",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_GpsLocationChanged = {
	"Ardrone3.PilotingState.GpsLocationChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_GPSLOCATIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_GpsLocationChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_GpsLocationChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_GpsLocationChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_LandingStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_LandingStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_LandingStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_LandingStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_LandingStateChanged = {
	"Ardrone3.PilotingState.LandingStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_LANDINGSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_LandingStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_LandingStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_LandingStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_AirSpeedChanged[] = {
	{
		"AirSpeed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_AirSpeedChanged = {
	"Ardrone3.PilotingState.AirSpeedChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_AIRSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_AirSpeedChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_AirSpeedChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_AirSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_MoveToChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Orientation_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Orientation_mode,
		sizeof(s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Orientation_mode) / sizeof(s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Orientation_mode[0])
	},
	{
		"Heading",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Status,
		sizeof(s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Status) / sizeof(s_enum_desc_Ardrone3_PilotingState_MoveToChanged_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveToChanged = {
	"Ardrone3.PilotingState.MoveToChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_MOVETOCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_MoveToChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_MoveToChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_MoveToChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_MotionState[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_MotionState_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_MotionState_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_MotionState_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_MotionState = {
	"Ardrone3.PilotingState.MotionState",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_MOTIONSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_MotionState,
	sizeof(s_arg_desc_Ardrone3_PilotingState_MotionState) / sizeof(s_arg_desc_Ardrone3_PilotingState_MotionState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_PilotedPOI[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_PilotedPOI_Status,
		sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOI_Status) / sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOI_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOI = {
	"Ardrone3.PilotingState.PilotedPOI",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_PILOTEDPOI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_PilotedPOI,
	sizeof(s_arg_desc_Ardrone3_PilotingState_PilotedPOI) / sizeof(s_arg_desc_Ardrone3_PilotingState_PilotedPOI[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_PilotedPOIV2[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Mode,
		sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Mode) / sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Mode[0])
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Status,
		sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Status) / sizeof(s_enum_desc_Ardrone3_PilotingState_PilotedPOIV2_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOIV2 = {
	"Ardrone3.PilotingState.PilotedPOIV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_PILOTEDPOIV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_PilotedPOIV2,
	sizeof(s_arg_desc_Ardrone3_PilotingState_PilotedPOIV2) / sizeof(s_arg_desc_Ardrone3_PilotingState_PilotedPOIV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity[] = {
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity_Status,
		sizeof(s_enum_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity_Status) / sizeof(s_enum_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity = {
	"Ardrone3.PilotingState.ReturnHomeBatteryCapacity",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_RETURNHOMEBATTERYCAPACITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity,
	sizeof(s_arg_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity) / sizeof(s_arg_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_MoveByChanged[] = {
	{
		"DXAsked",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DYAsked",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DZAsked",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DPsiAsked",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DX",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DY",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DZ",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DPsi",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_MoveByChanged_Status,
		sizeof(s_enum_desc_Ardrone3_PilotingState_MoveByChanged_Status) / sizeof(s_enum_desc_Ardrone3_PilotingState_MoveByChanged_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveByChanged = {
	"Ardrone3.PilotingState.MoveByChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_MOVEBYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_MoveByChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_MoveByChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_MoveByChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_HoveringWarning[] = {
	{
		"No_gps_too_dark",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"No_gps_too_high",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_HoveringWarning = {
	"Ardrone3.PilotingState.HoveringWarning",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_HOVERINGWARNING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_HoveringWarning,
	sizeof(s_arg_desc_Ardrone3_PilotingState_HoveringWarning) / sizeof(s_arg_desc_Ardrone3_PilotingState_HoveringWarning[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger[] = {
	{
		"Reason",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger_Reason,
		sizeof(s_enum_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger_Reason) / sizeof(s_enum_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger_Reason[0])
	},
	{
		"Delay",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger = {
	"Ardrone3.PilotingState.ForcedLandingAutoTrigger",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_FORCEDLANDINGAUTOTRIGGER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger,
	sizeof(s_arg_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger) / sizeof(s_arg_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_WindStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_WindStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_WindStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_WindStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_WindStateChanged = {
	"Ardrone3.PilotingState.WindStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_WINDSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_WindStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_WindStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_WindStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_VibrationLevelChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_VibrationLevelChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_VibrationLevelChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_VibrationLevelChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_VibrationLevelChanged = {
	"Ardrone3.PilotingState.VibrationLevelChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_VIBRATIONLEVELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_VibrationLevelChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_VibrationLevelChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_VibrationLevelChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged = {
	"Ardrone3.PilotingState.AltitudeAboveGroundChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_ALTITUDEABOVEGROUNDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingState_HeadingLockedStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingState_HeadingLockedStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_PilotingState_HeadingLockedStateChanged_State) / sizeof(s_enum_desc_Ardrone3_PilotingState_HeadingLockedStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingState_HeadingLockedStateChanged = {
	"Ardrone3.PilotingState.HeadingLockedStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSTATE_HEADINGLOCKEDSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingState_HeadingLockedStateChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingState_HeadingLockedStateChanged) / sizeof(s_arg_desc_Ardrone3_PilotingState_HeadingLockedStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingEvent_MoveByEnd[] = {
	{
		"DX",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DY",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DZ",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"DPsi",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingEvent_MoveByEnd_Error,
		sizeof(s_enum_desc_Ardrone3_PilotingEvent_MoveByEnd_Error) / sizeof(s_enum_desc_Ardrone3_PilotingEvent_MoveByEnd_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingEvent_MoveByEnd = {
	"Ardrone3.PilotingEvent.MoveByEnd",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGEVENT,
	ARSDK_CMD_ARDRONE3_PILOTINGEVENT_MOVEBYEND,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingEvent_MoveByEnd,
	sizeof(s_arg_desc_Ardrone3_PilotingEvent_MoveByEnd) / sizeof(s_arg_desc_Ardrone3_PilotingEvent_MoveByEnd[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkState_WifiScanListChanged[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkState_WifiScanListChanged_Band,
		sizeof(s_enum_desc_Ardrone3_NetworkState_WifiScanListChanged_Band) / sizeof(s_enum_desc_Ardrone3_NetworkState_WifiScanListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiScanListChanged = {
	"Ardrone3.NetworkState.WifiScanListChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSTATE_WIFISCANLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkState_WifiScanListChanged,
	sizeof(s_arg_desc_Ardrone3_NetworkState_WifiScanListChanged) / sizeof(s_arg_desc_Ardrone3_NetworkState_WifiScanListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiScanChanged = {
	"Ardrone3.NetworkState.AllWifiScanChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSTATE_ALLWIFISCANCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged_Band,
		sizeof(s_enum_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged_Band) / sizeof(s_enum_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"In_or_out",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged = {
	"Ardrone3.NetworkState.WifiAuthChannelListChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged,
	sizeof(s_arg_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged) / sizeof(s_arg_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiAuthChannelChanged = {
	"Ardrone3.NetworkState.AllWifiAuthChannelChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged = {
	"Ardrone3.PilotingSettingsState.MaxAltitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged = {
	"Ardrone3.PilotingSettingsState.MaxTiltChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_MAXTILTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged[] = {
	{
		"On",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged = {
	"Ardrone3.PilotingSettingsState.AbsolutControlChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_ABSOLUTCONTROLCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged = {
	"Ardrone3.PilotingSettingsState.MaxDistanceChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_MAXDISTANCECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged[] = {
	{
		"ShouldNotFlyOver",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged = {
	"Ardrone3.PilotingSettingsState.NoFlyOverMaxDistanceChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_NOFLYOVERMAXDISTANCECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged = {
	"Ardrone3.PilotingSettingsState.BankedTurnChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_BANKEDTURNCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged = {
	"Ardrone3.PilotingSettingsState.MinAltitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_MINALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged_Value,
		sizeof(s_enum_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged_Value) / sizeof(s_enum_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged_Value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged = {
	"Ardrone3.PilotingSettingsState.CirclingDirectionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_CIRCLINGDIRECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged = {
	"Ardrone3.PilotingSettingsState.CirclingRadiusChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_CIRCLINGRADIUSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged = {
	"Ardrone3.PilotingSettingsState.CirclingAltitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_CIRCLINGALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_PitchModeChanged[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PilotingSettingsState_PitchModeChanged_Value,
		sizeof(s_enum_desc_Ardrone3_PilotingSettingsState_PitchModeChanged_Value) / sizeof(s_enum_desc_Ardrone3_PilotingSettingsState_PitchModeChanged_Value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_PitchModeChanged = {
	"Ardrone3.PilotingSettingsState.PitchModeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_PITCHMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_PitchModeChanged,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_PitchModeChanged) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_PitchModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PilotingSettingsState_MotionDetection[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MotionDetection = {
	"Ardrone3.PilotingSettingsState.MotionDetection",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PILOTINGSETTINGSSTATE_MOTIONDETECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PilotingSettingsState_MotionDetection,
	sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MotionDetection) / sizeof(s_arg_desc_Ardrone3_PilotingSettingsState_MotionDetection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged = {
	"Ardrone3.SpeedSettingsState.MaxVerticalSpeedChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged,
	sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged) / sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged = {
	"Ardrone3.SpeedSettingsState.MaxRotationSpeedChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged,
	sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged) / sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged[] = {
	{
		"Present",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged = {
	"Ardrone3.SpeedSettingsState.HullProtectionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGSSTATE_HULLPROTECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged,
	sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged) / sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettingsState_OutdoorChanged[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_OutdoorChanged = {
	"Ardrone3.SpeedSettingsState.OutdoorChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGSSTATE_OUTDOORCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettingsState_OutdoorChanged,
	sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_OutdoorChanged) / sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_OutdoorChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged = {
	"Ardrone3.SpeedSettingsState.MaxPitchRollRotationSpeedChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SPEEDSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SPEEDSETTINGSSTATE_MAXPITCHROLLROTATIONSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged,
	sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged) / sizeof(s_arg_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Type,
		sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Type) / sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Band,
		sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Band) / sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged = {
	"Ardrone3.NetworkSettingsState.WifiSelectionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged,
	sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged) / sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged_Type,
		sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged_Type) / sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged = {
	"Ardrone3.NetworkSettingsState.WifiSecurityChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged,
	sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged) / sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurity[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_Type,
		sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_Type) / sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_Type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"KeyType",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_KeyType,
		sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_KeyType) / sizeof(s_enum_desc_Ardrone3_NetworkSettingsState_WifiSecurity_KeyType[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurity = {
	"Ardrone3.NetworkSettingsState.WifiSecurity",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_NETWORKSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurity,
	sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurity) / sizeof(s_arg_desc_Ardrone3_NetworkSettingsState_WifiSecurity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged[] = {
	{
		"Motor_number",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged = {
	"Ardrone3.SettingsState.ProductMotorVersionListChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_PRODUCTMOTORVERSIONLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_ProductGPSVersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductGPSVersionChanged = {
	"Ardrone3.SettingsState.ProductGPSVersionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_ProductGPSVersionChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_ProductGPSVersionChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_ProductGPSVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_MotorErrorStateChanged[] = {
	{
		"MotorIds",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"MotorError",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_SettingsState_MotorErrorStateChanged_MotorError,
		sizeof(s_enum_desc_Ardrone3_SettingsState_MotorErrorStateChanged_MotorError) / sizeof(s_enum_desc_Ardrone3_SettingsState_MotorErrorStateChanged_MotorError[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorStateChanged = {
	"Ardrone3.SettingsState.MotorErrorStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_MotorErrorStateChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_MotorErrorStateChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_MotorErrorStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged[] = {
	{
		"Version",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged = {
	"Ardrone3.SettingsState.MotorSoftwareVersionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_MOTORSOFTWAREVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged[] = {
	{
		"NbFlights",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"LastFlightDuration",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"TotalFlightDuration",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged = {
	"Ardrone3.SettingsState.MotorFlightsStatusChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_MOTORFLIGHTSSTATUSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged[] = {
	{
		"MotorError",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged_MotorError,
		sizeof(s_enum_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged_MotorError) / sizeof(s_enum_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged_MotorError[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged = {
	"Ardrone3.SettingsState.MotorErrorLastErrorChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged,
	sizeof(s_arg_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged) / sizeof(s_arg_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_P7ID[] = {
	{
		"SerialID",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_P7ID = {
	"Ardrone3.SettingsState.P7ID",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_P7ID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_P7ID,
	sizeof(s_arg_desc_Ardrone3_SettingsState_P7ID) / sizeof(s_arg_desc_Ardrone3_SettingsState_P7ID[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SettingsState_CPUID[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SettingsState_CPUID = {
	"Ardrone3.SettingsState.CPUID",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_SETTINGSSTATE_CPUID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SettingsState_CPUID,
	sizeof(s_arg_desc_Ardrone3_SettingsState_CPUID) / sizeof(s_arg_desc_Ardrone3_SettingsState_CPUID[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_PictureFormatChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_PictureFormatChanged_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_PictureFormatChanged_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_PictureFormatChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_PictureFormatChanged = {
	"Ardrone3.PictureSettingsState.PictureFormatChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_PictureFormatChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_PictureFormatChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_PictureFormatChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged = {
	"Ardrone3.PictureSettingsState.AutoWhiteBalanceChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_ExpositionChanged[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_ExpositionChanged = {
	"Ardrone3.PictureSettingsState.ExpositionChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_EXPOSITIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_ExpositionChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_ExpositionChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_ExpositionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_SaturationChanged[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_SaturationChanged = {
	"Ardrone3.PictureSettingsState.SaturationChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_SATURATIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_SaturationChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_SaturationChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_SaturationChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_TimelapseChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Interval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"MinInterval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"MaxInterval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_TimelapseChanged = {
	"Ardrone3.PictureSettingsState.TimelapseChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_TIMELAPSECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_TimelapseChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_TimelapseChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_TimelapseChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged = {
	"Ardrone3.PictureSettingsState.VideoAutorecordChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_VIDEOAUTORECORDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged_Mode,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged_Mode) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged = {
	"Ardrone3.PictureSettingsState.VideoStabilizationModeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_VIDEOSTABILIZATIONMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged_Mode,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged_Mode) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged = {
	"Ardrone3.PictureSettingsState.VideoRecordingModeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_VIDEORECORDINGMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged[] = {
	{
		"Framerate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged_Framerate,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged_Framerate) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged_Framerate[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged = {
	"Ardrone3.PictureSettingsState.VideoFramerateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_VIDEOFRAMERATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged_Type,
		sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged_Type) / sizeof(s_enum_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged = {
	"Ardrone3.PictureSettingsState.VideoResolutionsChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PICTURESETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_PICTURESETTINGSSTATE_VIDEORESOLUTIONSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged,
	sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged) / sizeof(s_arg_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaStreamingState_VideoEnableChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaStreamingState_VideoEnableChanged_Enabled,
		sizeof(s_enum_desc_Ardrone3_MediaStreamingState_VideoEnableChanged_Enabled) / sizeof(s_enum_desc_Ardrone3_MediaStreamingState_VideoEnableChanged_Enabled[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoEnableChanged = {
	"Ardrone3.MediaStreamingState.VideoEnableChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIASTREAMINGSTATE,
	ARSDK_CMD_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaStreamingState_VideoEnableChanged,
	sizeof(s_arg_desc_Ardrone3_MediaStreamingState_VideoEnableChanged) / sizeof(s_arg_desc_Ardrone3_MediaStreamingState_VideoEnableChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged_Mode,
		sizeof(s_enum_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged_Mode) / sizeof(s_enum_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged = {
	"Ardrone3.MediaStreamingState.VideoStreamModeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_MEDIASTREAMINGSTATE,
	ARSDK_CMD_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOSTREAMMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged,
	sizeof(s_arg_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged) / sizeof(s_arg_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_HomeChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeChanged = {
	"Ardrone3.GPSSettingsState.HomeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_HOMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_HomeChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_HomeChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_HomeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_ResetHomeChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ResetHomeChanged = {
	"Ardrone3.GPSSettingsState.ResetHomeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_RESETHOMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_ResetHomeChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ResetHomeChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ResetHomeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged[] = {
	{
		"Fixed",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged = {
	"Ardrone3.GPSSettingsState.GPSFixStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_GPSFIXSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged_State,
		sizeof(s_enum_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged_State) / sizeof(s_enum_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged = {
	"Ardrone3.GPSSettingsState.GPSUpdateStateChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_HomeTypeChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_GPSSettingsState_HomeTypeChanged_Type,
		sizeof(s_enum_desc_Ardrone3_GPSSettingsState_HomeTypeChanged_Type) / sizeof(s_enum_desc_Ardrone3_GPSSettingsState_HomeTypeChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeTypeChanged = {
	"Ardrone3.GPSSettingsState.HomeTypeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_HomeTypeChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_HomeTypeChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_HomeTypeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged[] = {
	{
		"Delay",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged = {
	"Ardrone3.GPSSettingsState.ReturnHomeDelayChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_RETURNHOMEDELAYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged = {
	"Ardrone3.GPSSettingsState.GeofenceCenterChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_GEOFENCECENTERCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged = {
	"Ardrone3.GPSSettingsState.ReturnHomeMinAltitudeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSETTINGSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSETTINGSSTATE_RETURNHOMEMINALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged,
	sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged) / sizeof(s_arg_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_CameraState_Orientation[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_CameraState_Orientation = {
	"Ardrone3.CameraState.Orientation",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERASTATE,
	ARSDK_CMD_ARDRONE3_CAMERASTATE_ORIENTATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_CameraState_Orientation,
	sizeof(s_arg_desc_Ardrone3_CameraState_Orientation) / sizeof(s_arg_desc_Ardrone3_CameraState_Orientation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientation[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientation = {
	"Ardrone3.CameraState.DefaultCameraOrientation",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERASTATE,
	ARSDK_CMD_ARDRONE3_CAMERASTATE_DEFAULTCAMERAORIENTATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientation,
	sizeof(s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientation) / sizeof(s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_CameraState_OrientationV2[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_CameraState_OrientationV2 = {
	"Ardrone3.CameraState.OrientationV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERASTATE,
	ARSDK_CMD_ARDRONE3_CAMERASTATE_ORIENTATIONV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_CameraState_OrientationV2,
	sizeof(s_arg_desc_Ardrone3_CameraState_OrientationV2) / sizeof(s_arg_desc_Ardrone3_CameraState_OrientationV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientationV2[] = {
	{
		"Tilt",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pan",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientationV2 = {
	"Ardrone3.CameraState.DefaultCameraOrientationV2",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERASTATE,
	ARSDK_CMD_ARDRONE3_CAMERASTATE_DEFAULTCAMERAORIENTATIONV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientationV2,
	sizeof(s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientationV2) / sizeof(s_arg_desc_Ardrone3_CameraState_DefaultCameraOrientationV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_CameraState_VelocityRange[] = {
	{
		"Max_tilt",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_pan",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_CameraState_VelocityRange = {
	"Ardrone3.CameraState.VelocityRange",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_CAMERASTATE,
	ARSDK_CMD_ARDRONE3_CAMERASTATE_VELOCITYRANGE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_CameraState_VelocityRange,
	sizeof(s_arg_desc_Ardrone3_CameraState_VelocityRange) / sizeof(s_arg_desc_Ardrone3_CameraState_VelocityRange[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged[] = {
	{
		"Frequency",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged_Frequency,
		sizeof(s_enum_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged_Frequency) / sizeof(s_enum_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged_Frequency[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged = {
	"Ardrone3.AntiflickeringState.ElectricFrequencyChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ANTIFLICKERINGSTATE,
	ARSDK_CMD_ARDRONE3_ANTIFLICKERINGSTATE_ELECTRICFREQUENCYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged,
	sizeof(s_arg_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged) / sizeof(s_arg_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_AntiflickeringState_ModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_AntiflickeringState_ModeChanged_Mode,
		sizeof(s_enum_desc_Ardrone3_AntiflickeringState_ModeChanged_Mode) / sizeof(s_enum_desc_Ardrone3_AntiflickeringState_ModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ModeChanged = {
	"Ardrone3.AntiflickeringState.ModeChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ANTIFLICKERINGSTATE,
	ARSDK_CMD_ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_AntiflickeringState_ModeChanged,
	sizeof(s_arg_desc_Ardrone3_AntiflickeringState_ModeChanged) / sizeof(s_arg_desc_Ardrone3_AntiflickeringState_ModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSState_NumberOfSatelliteChanged[] = {
	{
		"NumberOfSatellite",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSState_NumberOfSatelliteChanged = {
	"Ardrone3.GPSState.NumberOfSatelliteChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSTATE_NUMBEROFSATELLITECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSState_NumberOfSatelliteChanged,
	sizeof(s_arg_desc_Ardrone3_GPSState_NumberOfSatelliteChanged) / sizeof(s_arg_desc_Ardrone3_GPSState_NumberOfSatelliteChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged_Type,
		sizeof(s_enum_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged_Type) / sizeof(s_enum_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged_Type[0])
	},
	{
		"Available",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged = {
	"Ardrone3.GPSState.HomeTypeAvailabilityChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged,
	sizeof(s_arg_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged) / sizeof(s_arg_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_GPSState_HomeTypeChosenChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_GPSState_HomeTypeChosenChanged_Type,
		sizeof(s_enum_desc_Ardrone3_GPSState_HomeTypeChosenChanged_Type) / sizeof(s_enum_desc_Ardrone3_GPSState_HomeTypeChosenChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeChosenChanged = {
	"Ardrone3.GPSState.HomeTypeChosenChanged",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_GPSSTATE,
	ARSDK_CMD_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_GPSState_HomeTypeChosenChanged,
	sizeof(s_arg_desc_Ardrone3_GPSState_HomeTypeChosenChanged) / sizeof(s_arg_desc_Ardrone3_GPSState_HomeTypeChosenChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_PROState_Features[] = {
	{
		"Features",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_PROState_Features = {
	"Ardrone3.PROState.Features",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_PROSTATE,
	ARSDK_CMD_ARDRONE3_PROSTATE_FEATURES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_PROState_Features,
	sizeof(s_arg_desc_Ardrone3_PROState_Features) / sizeof(s_arg_desc_Ardrone3_PROState_Features[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_AccessoryState_ConnectedAccessories[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Accessory_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_AccessoryState_ConnectedAccessories_Accessory_type,
		sizeof(s_enum_desc_Ardrone3_AccessoryState_ConnectedAccessories_Accessory_type) / sizeof(s_enum_desc_Ardrone3_AccessoryState_ConnectedAccessories_Accessory_type[0])
	},
	{
		"Uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"SwVersion",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_AccessoryState_ConnectedAccessories = {
	"Ardrone3.AccessoryState.ConnectedAccessories",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ACCESSORYSTATE,
	ARSDK_CMD_ARDRONE3_ACCESSORYSTATE_CONNECTEDACCESSORIES,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_AccessoryState_ConnectedAccessories,
	sizeof(s_arg_desc_Ardrone3_AccessoryState_ConnectedAccessories) / sizeof(s_arg_desc_Ardrone3_AccessoryState_ConnectedAccessories[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_AccessoryState_Battery[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"BatteryLevel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_AccessoryState_Battery = {
	"Ardrone3.AccessoryState.Battery",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_ACCESSORYSTATE,
	ARSDK_CMD_ARDRONE3_ACCESSORYSTATE_BATTERY,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_AccessoryState_Battery,
	sizeof(s_arg_desc_Ardrone3_AccessoryState_Battery) / sizeof(s_arg_desc_Ardrone3_AccessoryState_Battery[0])
};

static const struct arsdk_arg_desc s_arg_desc_Ardrone3_SoundState_AlertSound[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Ardrone3_SoundState_AlertSound_State,
		sizeof(s_enum_desc_Ardrone3_SoundState_AlertSound_State) / sizeof(s_enum_desc_Ardrone3_SoundState_AlertSound_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Ardrone3_SoundState_AlertSound = {
	"Ardrone3.SoundState.AlertSound",
	ARSDK_PRJ_ARDRONE3,
	ARSDK_CLS_ARDRONE3_SOUNDSTATE,
	ARSDK_CMD_ARDRONE3_SOUNDSTATE_ALERTSOUND,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Ardrone3_SoundState_AlertSound,
	sizeof(s_arg_desc_Ardrone3_SoundState_AlertSound) / sizeof(s_arg_desc_Ardrone3_SoundState_AlertSound[0])
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_Piloting_FlyingMode_Mode[] = {
	{"QUADRICOPTER", ARSDK_MINIDRONE_PILOTING_FLYINGMODE_MODE_QUADRICOPTER},
	{"PLANE_FORWARD", ARSDK_MINIDRONE_PILOTING_FLYINGMODE_MODE_PLANE_FORWARD},
	{"PLANE_BACKWARD", ARSDK_MINIDRONE_PILOTING_FLYINGMODE_MODE_PLANE_BACKWARD},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_Piloting_PlaneGearBox_State[] = {
	{"GEAR_1", ARSDK_MINIDRONE_PILOTING_PLANEGEARBOX_STATE_GEAR_1},
	{"GEAR_2", ARSDK_MINIDRONE_PILOTING_PLANEGEARBOX_STATE_GEAR_2},
	{"GEAR_3", ARSDK_MINIDRONE_PILOTING_PLANEGEARBOX_STATE_GEAR_3},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingState_FlyingStateChanged_State[] = {
	{"LANDED", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_LANDED},
	{"TAKINGOFF", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_TAKINGOFF},
	{"HOVERING", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_HOVERING},
	{"FLYING", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_FLYING},
	{"LANDING", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_LANDING},
	{"EMERGENCY", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_EMERGENCY},
	{"ROLLING", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_ROLLING},
	{"INIT", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_INIT},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingState_AlertStateChanged_State[] = {
	{"NONE", ARSDK_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED_STATE_NONE},
	{"USER", ARSDK_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED_STATE_USER},
	{"CUT_OUT", ARSDK_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CUT_OUT},
	{"CRITICAL_BATTERY", ARSDK_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CRITICAL_BATTERY},
	{"LOW_BATTERY", ARSDK_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED_STATE_LOW_BATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingState_FlyingModeChanged_Mode[] = {
	{"QUADRICOPTER", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGMODECHANGED_MODE_QUADRICOPTER},
	{"PLANE_FORWARD", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGMODECHANGED_MODE_PLANE_FORWARD},
	{"PLANE_BACKWARD", ARSDK_MINIDRONE_PILOTINGSTATE_FLYINGMODECHANGED_MODE_PLANE_BACKWARD},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingState_PlaneGearBoxChanged_State[] = {
	{"GEAR_1", ARSDK_MINIDRONE_PILOTINGSTATE_PLANEGEARBOXCHANGED_STATE_GEAR_1},
	{"GEAR_2", ARSDK_MINIDRONE_PILOTINGSTATE_PLANEGEARBOXCHANGED_STATE_GEAR_2},
	{"GEAR_3", ARSDK_MINIDRONE_PILOTINGSTATE_PLANEGEARBOXCHANGED_STATE_GEAR_3},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingState_PilotingModeChanged_Mode[] = {
	{"EASY", ARSDK_MINIDRONE_PILOTINGSTATE_PILOTINGMODECHANGED_MODE_EASY},
	{"MEDIUM", ARSDK_MINIDRONE_PILOTINGSTATE_PILOTINGMODECHANGED_MODE_MEDIUM},
	{"DIFFICULT", ARSDK_MINIDRONE_PILOTINGSTATE_PILOTINGMODECHANGED_MODE_DIFFICULT},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_Animations_Flip_Direction[] = {
	{"FRONT", ARSDK_MINIDRONE_ANIMATIONS_FLIP_DIRECTION_FRONT},
	{"BACK", ARSDK_MINIDRONE_ANIMATIONS_FLIP_DIRECTION_BACK},
	{"RIGHT", ARSDK_MINIDRONE_ANIMATIONS_FLIP_DIRECTION_RIGHT},
	{"LEFT", ARSDK_MINIDRONE_ANIMATIONS_FLIP_DIRECTION_LEFT},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_State[] = {
	{"READY", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_READY},
	{"BUSY", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_BUSY},
	{"NOTAVAILABLE", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_Error[] = {
	{"OK", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Event[] = {
	{"TAKEN", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_TAKEN},
	{"FAILED", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Error[] = {
	{"OK", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingSettings_PreferredPilotingMode_Mode[] = {
	{"EASY", ARSDK_MINIDRONE_PILOTINGSETTINGS_PREFERREDPILOTINGMODE_MODE_EASY},
	{"MEDIUM", ARSDK_MINIDRONE_PILOTINGSETTINGS_PREFERREDPILOTINGMODE_MODE_MEDIUM},
	{"DIFFICULT", ARSDK_MINIDRONE_PILOTINGSETTINGS_PREFERREDPILOTINGMODE_MODE_DIFFICULT},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged_Mode[] = {
	{"EASY", ARSDK_MINIDRONE_PILOTINGSETTINGSSTATE_PREFERREDPILOTINGMODECHANGED_MODE_EASY},
	{"MEDIUM", ARSDK_MINIDRONE_PILOTINGSETTINGSSTATE_PREFERREDPILOTINGMODECHANGED_MODE_MEDIUM},
	{"DIFFICULT", ARSDK_MINIDRONE_PILOTINGSETTINGSSTATE_PREFERREDPILOTINGMODECHANGED_MODE_DIFFICULT},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessoryState_LightState_State[] = {
	{"FIXED", ARSDK_MINIDRONE_USBACCESSORYSTATE_LIGHTSTATE_STATE_FIXED},
	{"BLINKED", ARSDK_MINIDRONE_USBACCESSORYSTATE_LIGHTSTATE_STATE_BLINKED},
	{"OSCILLATED", ARSDK_MINIDRONE_USBACCESSORYSTATE_LIGHTSTATE_STATE_OSCILLATED},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessoryState_ClawState_State[] = {
	{"OPENED", ARSDK_MINIDRONE_USBACCESSORYSTATE_CLAWSTATE_STATE_OPENED},
	{"OPENING", ARSDK_MINIDRONE_USBACCESSORYSTATE_CLAWSTATE_STATE_OPENING},
	{"CLOSED", ARSDK_MINIDRONE_USBACCESSORYSTATE_CLAWSTATE_STATE_CLOSED},
	{"CLOSING", ARSDK_MINIDRONE_USBACCESSORYSTATE_CLAWSTATE_STATE_CLOSING},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessoryState_GunState_State[] = {
	{"READY", ARSDK_MINIDRONE_USBACCESSORYSTATE_GUNSTATE_STATE_READY},
	{"BUSY", ARSDK_MINIDRONE_USBACCESSORYSTATE_GUNSTATE_STATE_BUSY},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessory_LightControl_Mode[] = {
	{"FIXED", ARSDK_MINIDRONE_USBACCESSORY_LIGHTCONTROL_MODE_FIXED},
	{"BLINKED", ARSDK_MINIDRONE_USBACCESSORY_LIGHTCONTROL_MODE_BLINKED},
	{"OSCILLATED", ARSDK_MINIDRONE_USBACCESSORY_LIGHTCONTROL_MODE_OSCILLATED},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessory_ClawControl_Action[] = {
	{"OPEN", ARSDK_MINIDRONE_USBACCESSORY_CLAWCONTROL_ACTION_OPEN},
	{"CLOSE", ARSDK_MINIDRONE_USBACCESSORY_CLAWCONTROL_ACTION_CLOSE},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_UsbAccessory_GunControl_Action[] = {
	{"FIRE", ARSDK_MINIDRONE_USBACCESSORY_GUNCONTROL_ACTION_FIRE},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_PowerModeChanged_Power_mode[] = {
	{"LOW", ARSDK_MINIDRONE_MINICAMSTATE_POWERMODECHANGED_POWER_MODE_LOW},
	{"MEDIUM", ARSDK_MINIDRONE_MINICAMSTATE_POWERMODECHANGED_POWER_MODE_MEDIUM},
	{"NORMAL", ARSDK_MINIDRONE_MINICAMSTATE_POWERMODECHANGED_POWER_MODE_NORMAL},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_StateChanged_State[] = {
	{"UNPLUGGED", ARSDK_MINIDRONE_MINICAMSTATE_STATECHANGED_STATE_UNPLUGGED},
	{"PLUGGED", ARSDK_MINIDRONE_MINICAMSTATE_STATECHANGED_STATE_PLUGGED},
	{"READY", ARSDK_MINIDRONE_MINICAMSTATE_STATECHANGED_STATE_READY},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_PictureChanged_State[] = {
	{"READY", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_STATE_READY},
	{"BUSY", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_STATE_BUSY},
	{"NOT_AVAILABLE", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_STATE_NOT_AVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_PictureChanged_Result[] = {
	{"SUCCESS", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_SUCCESS},
	{"FULL_DEVICE", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_FULL_DEVICE},
	{"CONTINUOUS_SHOOTING", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_CONTINUOUS_SHOOTING},
	{"FULL_QUEUE", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_FULL_QUEUE},
	{"ERROR", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_ERROR},
	{"NO_SD", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_NO_SD},
	{"SD_BAD_FORMAT", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_SD_BAD_FORMAT},
	{"SD_FORMATTING", ARSDK_MINIDRONE_MINICAMSTATE_PICTURECHANGED_RESULT_SD_FORMATTING},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_VideoStateChanged_State[] = {
	{"STOPPED", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_STATE_STOPPED},
	{"STARTED", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_STATE_STARTED},
	{"NOTAVAILABLE", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_MinicamState_VideoStateChanged_Error[] = {
	{"OK", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_LOWBATTERY},
	{"NO_SD", ARSDK_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED_ERROR_NO_SD},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_VideoSettings_ElectricFrequency_Frequency[] = {
	{"FIFTY_HERTZ", ARSDK_MINIDRONE_VIDEOSETTINGS_ELECTRICFREQUENCY_FREQUENCY_FIFTY_HERTZ},
	{"SIXTY_HERTZ", ARSDK_MINIDRONE_VIDEOSETTINGS_ELECTRICFREQUENCY_FREQUENCY_SIXTY_HERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_VideoSettings_VideoResolution_Type[] = {
	{"VGA", ARSDK_MINIDRONE_VIDEOSETTINGS_VIDEORESOLUTION_TYPE_VGA},
	{"HD", ARSDK_MINIDRONE_VIDEOSETTINGS_VIDEORESOLUTION_TYPE_HD},
	{"HQ", ARSDK_MINIDRONE_VIDEOSETTINGS_VIDEORESOLUTION_TYPE_HQ},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged_Frequency[] = {
	{"FIFTY_HERTZ", ARSDK_MINIDRONE_VIDEOSETTINGSSTATE_ELECTRICFREQUENCYCHANGED_FREQUENCY_FIFTY_HERTZ},
	{"SIXTY_HERTZ", ARSDK_MINIDRONE_VIDEOSETTINGSSTATE_ELECTRICFREQUENCYCHANGED_FREQUENCY_SIXTY_HERTZ},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_VideoSettingsState_VideoResolutionChanged_Type[] = {
	{"VGA", ARSDK_MINIDRONE_VIDEOSETTINGSSTATE_VIDEORESOLUTIONCHANGED_TYPE_VGA},
	{"HD", ARSDK_MINIDRONE_VIDEOSETTINGSSTATE_VIDEORESOLUTIONCHANGED_TYPE_HD},
	{"HQ", ARSDK_MINIDRONE_VIDEOSETTINGSSTATE_VIDEORESOLUTIONCHANGED_TYPE_HQ},
};

static const struct arsdk_enum_desc s_enum_desc_Minidrone_Minicam_Video_Record[] = {
	{"STOP", ARSDK_MINIDRONE_MINICAM_VIDEO_RECORD_STOP},
	{"START", ARSDK_MINIDRONE_MINICAM_VIDEO_RECORD_START},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_FlatTrim = {
	"Minidrone.Piloting.FlatTrim",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_FLATTRIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_TakeOff = {
	"Minidrone.Piloting.TakeOff",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_TAKEOFF,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Piloting_PCMD[] = {
	{
		"Flag",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Gaz",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Timestamp",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_PCMD = {
	"Minidrone.Piloting.PCMD",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_PCMD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Piloting_PCMD,
	sizeof(s_arg_desc_Minidrone_Piloting_PCMD) / sizeof(s_arg_desc_Minidrone_Piloting_PCMD[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_Landing = {
	"Minidrone.Piloting.Landing",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_LANDING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_Emergency = {
	"Minidrone.Piloting.Emergency",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_EMERGENCY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Piloting_AutoTakeOffMode[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_AutoTakeOffMode = {
	"Minidrone.Piloting.AutoTakeOffMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_AUTOTAKEOFFMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Piloting_AutoTakeOffMode,
	sizeof(s_arg_desc_Minidrone_Piloting_AutoTakeOffMode) / sizeof(s_arg_desc_Minidrone_Piloting_AutoTakeOffMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Piloting_FlyingMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_Piloting_FlyingMode_Mode,
		sizeof(s_enum_desc_Minidrone_Piloting_FlyingMode_Mode) / sizeof(s_enum_desc_Minidrone_Piloting_FlyingMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_FlyingMode = {
	"Minidrone.Piloting.FlyingMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_FLYINGMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Piloting_FlyingMode,
	sizeof(s_arg_desc_Minidrone_Piloting_FlyingMode) / sizeof(s_arg_desc_Minidrone_Piloting_FlyingMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Piloting_PlaneGearBox[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_Piloting_PlaneGearBox_State,
		sizeof(s_enum_desc_Minidrone_Piloting_PlaneGearBox_State) / sizeof(s_enum_desc_Minidrone_Piloting_PlaneGearBox_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_PlaneGearBox = {
	"Minidrone.Piloting.PlaneGearBox",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_PLANEGEARBOX,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Piloting_PlaneGearBox,
	sizeof(s_arg_desc_Minidrone_Piloting_PlaneGearBox) / sizeof(s_arg_desc_Minidrone_Piloting_PlaneGearBox[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Piloting_TogglePilotingMode = {
	"Minidrone.Piloting.TogglePilotingMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTING,
	ARSDK_CMD_MINIDRONE_PILOTING_TOGGLEPILOTINGMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Animations_Flip[] = {
	{
		"Direction",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_Animations_Flip_Direction,
		sizeof(s_enum_desc_Minidrone_Animations_Flip_Direction) / sizeof(s_enum_desc_Minidrone_Animations_Flip_Direction[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Animations_Flip = {
	"Minidrone.Animations.Flip",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_ANIMATIONS,
	ARSDK_CMD_MINIDRONE_ANIMATIONS_FLIP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Animations_Flip,
	sizeof(s_arg_desc_Minidrone_Animations_Flip) / sizeof(s_arg_desc_Minidrone_Animations_Flip[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Animations_Cap[] = {
	{
		"Offset",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Animations_Cap = {
	"Minidrone.Animations.Cap",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_ANIMATIONS,
	ARSDK_CMD_MINIDRONE_ANIMATIONS_CAP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Animations_Cap,
	sizeof(s_arg_desc_Minidrone_Animations_Cap) / sizeof(s_arg_desc_Minidrone_Animations_Cap[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MediaRecord_Picture[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MediaRecord_Picture = {
	"Minidrone.MediaRecord.Picture",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MEDIARECORD,
	ARSDK_CMD_MINIDRONE_MEDIARECORD_PICTURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MediaRecord_Picture,
	sizeof(s_arg_desc_Minidrone_MediaRecord_Picture) / sizeof(s_arg_desc_Minidrone_MediaRecord_Picture[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MediaRecord_PictureV2 = {
	"Minidrone.MediaRecord.PictureV2",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MEDIARECORD,
	ARSDK_CMD_MINIDRONE_MEDIARECORD_PICTUREV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettings_MaxAltitude[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxAltitude = {
	"Minidrone.PilotingSettings.MaxAltitude",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGS,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGS_MAXALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettings_MaxAltitude,
	sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxAltitude) / sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettings_MaxTilt[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxTilt = {
	"Minidrone.PilotingSettings.MaxTilt",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGS,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGS_MAXTILT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettings_MaxTilt,
	sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxTilt) / sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxTilt[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettings_BankedTurn[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettings_BankedTurn = {
	"Minidrone.PilotingSettings.BankedTurn",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGS,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGS_BANKEDTURN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettings_BankedTurn,
	sizeof(s_arg_desc_Minidrone_PilotingSettings_BankedTurn) / sizeof(s_arg_desc_Minidrone_PilotingSettings_BankedTurn[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettings_MaxThrottle[] = {
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxThrottle = {
	"Minidrone.PilotingSettings.MaxThrottle",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGS,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGS_MAXTHROTTLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettings_MaxThrottle,
	sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxThrottle) / sizeof(s_arg_desc_Minidrone_PilotingSettings_MaxThrottle[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettings_PreferredPilotingMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingSettings_PreferredPilotingMode_Mode,
		sizeof(s_enum_desc_Minidrone_PilotingSettings_PreferredPilotingMode_Mode) / sizeof(s_enum_desc_Minidrone_PilotingSettings_PreferredPilotingMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettings_PreferredPilotingMode = {
	"Minidrone.PilotingSettings.PreferredPilotingMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGS,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGS_PREFERREDPILOTINGMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettings_PreferredPilotingMode,
	sizeof(s_arg_desc_Minidrone_PilotingSettings_PreferredPilotingMode) / sizeof(s_arg_desc_Minidrone_PilotingSettings_PreferredPilotingMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettings_MaxVerticalSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxVerticalSpeed = {
	"Minidrone.SpeedSettings.MaxVerticalSpeed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGS,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGS_MAXVERTICALSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettings_MaxVerticalSpeed,
	sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxVerticalSpeed) / sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxVerticalSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettings_MaxRotationSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxRotationSpeed = {
	"Minidrone.SpeedSettings.MaxRotationSpeed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGS,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGS_MAXROTATIONSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettings_MaxRotationSpeed,
	sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxRotationSpeed) / sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxRotationSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettings_Wheels[] = {
	{
		"Present",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettings_Wheels = {
	"Minidrone.SpeedSettings.Wheels",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGS,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGS_WHEELS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettings_Wheels,
	sizeof(s_arg_desc_Minidrone_SpeedSettings_Wheels) / sizeof(s_arg_desc_Minidrone_SpeedSettings_Wheels[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed = {
	"Minidrone.SpeedSettings.MaxHorizontalSpeed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGS,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGS_MAXHORIZONTALSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed,
	sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed) / sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed = {
	"Minidrone.SpeedSettings.MaxPlaneModeRotationSpeed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGS,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGS_MAXPLANEMODEROTATIONSPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed,
	sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed) / sizeof(s_arg_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Settings_CutOutMode[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Settings_CutOutMode = {
	"Minidrone.Settings.CutOutMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SETTINGS,
	ARSDK_CMD_MINIDRONE_SETTINGS_CUTOUTMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Settings_CutOutMode,
	sizeof(s_arg_desc_Minidrone_Settings_CutOutMode) / sizeof(s_arg_desc_Minidrone_Settings_CutOutMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_GPS_ControllerLatitudeForRun[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_GPS_ControllerLatitudeForRun = {
	"Minidrone.GPS.ControllerLatitudeForRun",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_GPS,
	ARSDK_CMD_MINIDRONE_GPS_CONTROLLERLATITUDEFORRUN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_GPS_ControllerLatitudeForRun,
	sizeof(s_arg_desc_Minidrone_GPS_ControllerLatitudeForRun) / sizeof(s_arg_desc_Minidrone_GPS_ControllerLatitudeForRun[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_GPS_ControllerLongitudeForRun[] = {
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_GPS_ControllerLongitudeForRun = {
	"Minidrone.GPS.ControllerLongitudeForRun",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_GPS,
	ARSDK_CMD_MINIDRONE_GPS_CONTROLLERLONGITUDEFORRUN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_GPS_ControllerLongitudeForRun,
	sizeof(s_arg_desc_Minidrone_GPS_ControllerLongitudeForRun) / sizeof(s_arg_desc_Minidrone_GPS_ControllerLongitudeForRun[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Configuration_ControllerType[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Configuration_ControllerType = {
	"Minidrone.Configuration.ControllerType",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_CONFIGURATION,
	ARSDK_CMD_MINIDRONE_CONFIGURATION_CONTROLLERTYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Configuration_ControllerType,
	sizeof(s_arg_desc_Minidrone_Configuration_ControllerType) / sizeof(s_arg_desc_Minidrone_Configuration_ControllerType[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Configuration_ControllerName[] = {
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Configuration_ControllerName = {
	"Minidrone.Configuration.ControllerName",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_CONFIGURATION,
	ARSDK_CMD_MINIDRONE_CONFIGURATION_CONTROLLERNAME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Configuration_ControllerName,
	sizeof(s_arg_desc_Minidrone_Configuration_ControllerName) / sizeof(s_arg_desc_Minidrone_Configuration_ControllerName[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessory_LightControl[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessory_LightControl_Mode,
		sizeof(s_enum_desc_Minidrone_UsbAccessory_LightControl_Mode) / sizeof(s_enum_desc_Minidrone_UsbAccessory_LightControl_Mode[0])
	},
	{
		"Intensity",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessory_LightControl = {
	"Minidrone.UsbAccessory.LightControl",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORY,
	ARSDK_CMD_MINIDRONE_USBACCESSORY_LIGHTCONTROL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessory_LightControl,
	sizeof(s_arg_desc_Minidrone_UsbAccessory_LightControl) / sizeof(s_arg_desc_Minidrone_UsbAccessory_LightControl[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessory_ClawControl[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessory_ClawControl_Action,
		sizeof(s_enum_desc_Minidrone_UsbAccessory_ClawControl_Action) / sizeof(s_enum_desc_Minidrone_UsbAccessory_ClawControl_Action[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessory_ClawControl = {
	"Minidrone.UsbAccessory.ClawControl",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORY,
	ARSDK_CMD_MINIDRONE_USBACCESSORY_CLAWCONTROL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessory_ClawControl,
	sizeof(s_arg_desc_Minidrone_UsbAccessory_ClawControl) / sizeof(s_arg_desc_Minidrone_UsbAccessory_ClawControl[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessory_GunControl[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessory_GunControl_Action,
		sizeof(s_enum_desc_Minidrone_UsbAccessory_GunControl_Action) / sizeof(s_enum_desc_Minidrone_UsbAccessory_GunControl_Action[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessory_GunControl = {
	"Minidrone.UsbAccessory.GunControl",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORY,
	ARSDK_CMD_MINIDRONE_USBACCESSORY_GUNCONTROL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessory_GunControl,
	sizeof(s_arg_desc_Minidrone_UsbAccessory_GunControl) / sizeof(s_arg_desc_Minidrone_UsbAccessory_GunControl[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteController_SetPairedRemote[] = {
	{
		"Msb_mac",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Mid_mac",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Lsb_mac",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteController_SetPairedRemote = {
	"Minidrone.RemoteController.SetPairedRemote",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLER,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLER_SETPAIREDREMOTE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteController_SetPairedRemote,
	sizeof(s_arg_desc_Minidrone_RemoteController_SetPairedRemote) / sizeof(s_arg_desc_Minidrone_RemoteController_SetPairedRemote[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteController_RawMode[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteController_RawMode = {
	"Minidrone.RemoteController.RawMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLER,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLER_RAWMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteController_RawMode,
	sizeof(s_arg_desc_Minidrone_RemoteController_RawMode) / sizeof(s_arg_desc_Minidrone_RemoteController_RawMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettings_Autorecord[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettings_Autorecord = {
	"Minidrone.VideoSettings.Autorecord",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGS,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGS_AUTORECORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettings_Autorecord,
	sizeof(s_arg_desc_Minidrone_VideoSettings_Autorecord) / sizeof(s_arg_desc_Minidrone_VideoSettings_Autorecord[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettings_ElectricFrequency[] = {
	{
		"Frequency",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_VideoSettings_ElectricFrequency_Frequency,
		sizeof(s_enum_desc_Minidrone_VideoSettings_ElectricFrequency_Frequency) / sizeof(s_enum_desc_Minidrone_VideoSettings_ElectricFrequency_Frequency[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettings_ElectricFrequency = {
	"Minidrone.VideoSettings.ElectricFrequency",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGS,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGS_ELECTRICFREQUENCY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettings_ElectricFrequency,
	sizeof(s_arg_desc_Minidrone_VideoSettings_ElectricFrequency) / sizeof(s_arg_desc_Minidrone_VideoSettings_ElectricFrequency[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettings_VideoResolution[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_VideoSettings_VideoResolution_Type,
		sizeof(s_enum_desc_Minidrone_VideoSettings_VideoResolution_Type) / sizeof(s_enum_desc_Minidrone_VideoSettings_VideoResolution_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettings_VideoResolution = {
	"Minidrone.VideoSettings.VideoResolution",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGS,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGS_VIDEORESOLUTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettings_VideoResolution,
	sizeof(s_arg_desc_Minidrone_VideoSettings_VideoResolution) / sizeof(s_arg_desc_Minidrone_VideoSettings_VideoResolution[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Minicam_Picture = {
	"Minidrone.Minicam.Picture",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAM,
	ARSDK_CMD_MINIDRONE_MINICAM_PICTURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_Minicam_Video[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_Minicam_Video_Record,
		sizeof(s_enum_desc_Minidrone_Minicam_Video_Record) / sizeof(s_enum_desc_Minidrone_Minicam_Video_Record[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Minicam_Video = {
	"Minidrone.Minicam.Video",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAM,
	ARSDK_CMD_MINIDRONE_MINICAM_VIDEO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_Minicam_Video,
	sizeof(s_arg_desc_Minidrone_Minicam_Video) / sizeof(s_arg_desc_Minidrone_Minicam_Video[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_Minicam_MassStorageFormat = {
	"Minidrone.Minicam.MassStorageFormat",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAM,
	ARSDK_CMD_MINIDRONE_MINICAM_MASSSTORAGEFORMAT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_FlatTrimChanged = {
	"Minidrone.PilotingState.FlatTrimChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_FLATTRIMCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_FlyingStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingState_FlyingStateChanged_State,
		sizeof(s_enum_desc_Minidrone_PilotingState_FlyingStateChanged_State) / sizeof(s_enum_desc_Minidrone_PilotingState_FlyingStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingStateChanged = {
	"Minidrone.PilotingState.FlyingStateChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_FlyingStateChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_FlyingStateChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_FlyingStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_AlertStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingState_AlertStateChanged_State,
		sizeof(s_enum_desc_Minidrone_PilotingState_AlertStateChanged_State) / sizeof(s_enum_desc_Minidrone_PilotingState_AlertStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_AlertStateChanged = {
	"Minidrone.PilotingState.AlertStateChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_AlertStateChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_AlertStateChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_AlertStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_AutoTakeOffModeChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_AutoTakeOffModeChanged = {
	"Minidrone.PilotingState.AutoTakeOffModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_AUTOTAKEOFFMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_AutoTakeOffModeChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_AutoTakeOffModeChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_AutoTakeOffModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_FlyingModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingState_FlyingModeChanged_Mode,
		sizeof(s_enum_desc_Minidrone_PilotingState_FlyingModeChanged_Mode) / sizeof(s_enum_desc_Minidrone_PilotingState_FlyingModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingModeChanged = {
	"Minidrone.PilotingState.FlyingModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_FLYINGMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_FlyingModeChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_FlyingModeChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_FlyingModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_PlaneGearBoxChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingState_PlaneGearBoxChanged_State,
		sizeof(s_enum_desc_Minidrone_PilotingState_PlaneGearBoxChanged_State) / sizeof(s_enum_desc_Minidrone_PilotingState_PlaneGearBoxChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_PlaneGearBoxChanged = {
	"Minidrone.PilotingState.PlaneGearBoxChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_PLANEGEARBOXCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_PlaneGearBoxChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_PlaneGearBoxChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_PlaneGearBoxChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingState_PilotingModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingState_PilotingModeChanged_Mode,
		sizeof(s_enum_desc_Minidrone_PilotingState_PilotingModeChanged_Mode) / sizeof(s_enum_desc_Minidrone_PilotingState_PilotingModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingState_PilotingModeChanged = {
	"Minidrone.PilotingState.PilotingModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSTATE_PILOTINGMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingState_PilotingModeChanged,
	sizeof(s_arg_desc_Minidrone_PilotingState_PilotingModeChanged) / sizeof(s_arg_desc_Minidrone_PilotingState_PilotingModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MediaRecordState_PictureStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChanged = {
	"Minidrone.MediaRecordState.PictureStateChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MEDIARECORDSTATE,
	ARSDK_CMD_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MediaRecordState_PictureStateChanged,
	sizeof(s_arg_desc_Minidrone_MediaRecordState_PictureStateChanged) / sizeof(s_arg_desc_Minidrone_MediaRecordState_PictureStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MediaRecordState_PictureStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_State,
		sizeof(s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_State) / sizeof(s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_Error,
		sizeof(s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_Error) / sizeof(s_enum_desc_Minidrone_MediaRecordState_PictureStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChangedV2 = {
	"Minidrone.MediaRecordState.PictureStateChangedV2",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MEDIARECORDSTATE,
	ARSDK_CMD_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MediaRecordState_PictureStateChangedV2,
	sizeof(s_arg_desc_Minidrone_MediaRecordState_PictureStateChangedV2) / sizeof(s_arg_desc_Minidrone_MediaRecordState_PictureStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MediaRecordEvent_PictureEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Event,
		sizeof(s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Event) / sizeof(s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Error,
		sizeof(s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Error) / sizeof(s_enum_desc_Minidrone_MediaRecordEvent_PictureEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MediaRecordEvent_PictureEventChanged = {
	"Minidrone.MediaRecordEvent.PictureEventChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MEDIARECORDEVENT,
	ARSDK_CMD_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MediaRecordEvent_PictureEventChanged,
	sizeof(s_arg_desc_Minidrone_MediaRecordEvent_PictureEventChanged) / sizeof(s_arg_desc_Minidrone_MediaRecordEvent_PictureEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged = {
	"Minidrone.PilotingSettingsState.MaxAltitudeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged,
	sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged) / sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettingsState_MaxTiltChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxTiltChanged = {
	"Minidrone.PilotingSettingsState.MaxTiltChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGSSTATE_MAXTILTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettingsState_MaxTiltChanged,
	sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxTiltChanged) / sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxTiltChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettingsState_BankedTurnChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_BankedTurnChanged = {
	"Minidrone.PilotingSettingsState.BankedTurnChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGSSTATE_BANKEDTURNCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettingsState_BankedTurnChanged,
	sizeof(s_arg_desc_Minidrone_PilotingSettingsState_BankedTurnChanged) / sizeof(s_arg_desc_Minidrone_PilotingSettingsState_BankedTurnChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged[] = {
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged = {
	"Minidrone.PilotingSettingsState.MaxThrottleChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGSSTATE_MAXTHROTTLECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged,
	sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged) / sizeof(s_arg_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged_Mode,
		sizeof(s_enum_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged_Mode) / sizeof(s_enum_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged = {
	"Minidrone.PilotingSettingsState.PreferredPilotingModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_PILOTINGSETTINGSSTATE_PREFERREDPILOTINGMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged,
	sizeof(s_arg_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged) / sizeof(s_arg_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged = {
	"Minidrone.SpeedSettingsState.MaxVerticalSpeedChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged,
	sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged) / sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged = {
	"Minidrone.SpeedSettingsState.MaxRotationSpeedChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged,
	sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged) / sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettingsState_WheelsChanged[] = {
	{
		"Present",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_WheelsChanged = {
	"Minidrone.SpeedSettingsState.WheelsChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGSSTATE_WHEELSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettingsState_WheelsChanged,
	sizeof(s_arg_desc_Minidrone_SpeedSettingsState_WheelsChanged) / sizeof(s_arg_desc_Minidrone_SpeedSettingsState_WheelsChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged = {
	"Minidrone.SpeedSettingsState.MaxHorizontalSpeedChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGSSTATE_MAXHORIZONTALSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged,
	sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged) / sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged = {
	"Minidrone.SpeedSettingsState.MaxPlaneModeRotationSpeedChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SPEEDSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SPEEDSETTINGSSTATE_MAXPLANEMODEROTATIONSPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged,
	sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged) / sizeof(s_arg_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SettingsState_ProductMotorsVersionChanged[] = {
	{
		"Motor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SettingsState_ProductMotorsVersionChanged = {
	"Minidrone.SettingsState.ProductMotorsVersionChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SETTINGSSTATE_PRODUCTMOTORSVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SettingsState_ProductMotorsVersionChanged,
	sizeof(s_arg_desc_Minidrone_SettingsState_ProductMotorsVersionChanged) / sizeof(s_arg_desc_Minidrone_SettingsState_ProductMotorsVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SettingsState_ProductInertialVersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SettingsState_ProductInertialVersionChanged = {
	"Minidrone.SettingsState.ProductInertialVersionChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SETTINGSSTATE_PRODUCTINERTIALVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SettingsState_ProductInertialVersionChanged,
	sizeof(s_arg_desc_Minidrone_SettingsState_ProductInertialVersionChanged) / sizeof(s_arg_desc_Minidrone_SettingsState_ProductInertialVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_SettingsState_CutOutModeChanged[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_SettingsState_CutOutModeChanged = {
	"Minidrone.SettingsState.CutOutModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_SETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_SETTINGSSTATE_CUTOUTMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_SettingsState_CutOutModeChanged,
	sizeof(s_arg_desc_Minidrone_SettingsState_CutOutModeChanged) / sizeof(s_arg_desc_Minidrone_SettingsState_CutOutModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_FloodControlState_FloodControlChanged[] = {
	{
		"Delay",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_FloodControlState_FloodControlChanged = {
	"Minidrone.FloodControlState.FloodControlChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_FLOODCONTROLSTATE,
	ARSDK_CMD_MINIDRONE_FLOODCONTROLSTATE_FLOODCONTROLCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_FloodControlState_FloodControlChanged,
	sizeof(s_arg_desc_Minidrone_FloodControlState_FloodControlChanged) / sizeof(s_arg_desc_Minidrone_FloodControlState_FloodControlChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessoryState_LightState[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessoryState_LightState_State,
		sizeof(s_enum_desc_Minidrone_UsbAccessoryState_LightState_State) / sizeof(s_enum_desc_Minidrone_UsbAccessoryState_LightState_State[0])
	},
	{
		"Intensity",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_LightState = {
	"Minidrone.UsbAccessoryState.LightState",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORYSTATE,
	ARSDK_CMD_MINIDRONE_USBACCESSORYSTATE_LIGHTSTATE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessoryState_LightState,
	sizeof(s_arg_desc_Minidrone_UsbAccessoryState_LightState) / sizeof(s_arg_desc_Minidrone_UsbAccessoryState_LightState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessoryState_ClawState[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessoryState_ClawState_State,
		sizeof(s_enum_desc_Minidrone_UsbAccessoryState_ClawState_State) / sizeof(s_enum_desc_Minidrone_UsbAccessoryState_ClawState_State[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_ClawState = {
	"Minidrone.UsbAccessoryState.ClawState",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORYSTATE,
	ARSDK_CMD_MINIDRONE_USBACCESSORYSTATE_CLAWSTATE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessoryState_ClawState,
	sizeof(s_arg_desc_Minidrone_UsbAccessoryState_ClawState) / sizeof(s_arg_desc_Minidrone_UsbAccessoryState_ClawState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_UsbAccessoryState_GunState[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_UsbAccessoryState_GunState_State,
		sizeof(s_enum_desc_Minidrone_UsbAccessoryState_GunState_State) / sizeof(s_enum_desc_Minidrone_UsbAccessoryState_GunState_State[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_GunState = {
	"Minidrone.UsbAccessoryState.GunState",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_USBACCESSORYSTATE,
	ARSDK_CMD_MINIDRONE_USBACCESSORYSTATE_GUNSTATE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_UsbAccessoryState_GunState,
	sizeof(s_arg_desc_Minidrone_UsbAccessoryState_GunState) / sizeof(s_arg_desc_Minidrone_UsbAccessoryState_GunState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_NavigationDataState_DronePosition[] = {
	{
		"Posx",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Posy",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Posz",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Psi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Ts",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_NavigationDataState_DronePosition = {
	"Minidrone.NavigationDataState.DronePosition",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_NAVIGATIONDATASTATE,
	ARSDK_CMD_MINIDRONE_NAVIGATIONDATASTATE_DRONEPOSITION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_NavigationDataState_DronePosition,
	sizeof(s_arg_desc_Minidrone_NavigationDataState_DronePosition) / sizeof(s_arg_desc_Minidrone_NavigationDataState_DronePosition[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_NavigationDataState_DroneSpeed[] = {
	{
		"Speed_x",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Speed_y",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Speed_z",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Ts",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneSpeed = {
	"Minidrone.NavigationDataState.DroneSpeed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_NAVIGATIONDATASTATE,
	ARSDK_CMD_MINIDRONE_NAVIGATIONDATASTATE_DRONESPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_NavigationDataState_DroneSpeed,
	sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneSpeed) / sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneSpeed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_NavigationDataState_DroneAltitude[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Ts",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneAltitude = {
	"Minidrone.NavigationDataState.DroneAltitude",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_NAVIGATIONDATASTATE,
	ARSDK_CMD_MINIDRONE_NAVIGATIONDATASTATE_DRONEALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_NavigationDataState_DroneAltitude,
	sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneAltitude) / sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneAltitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_NavigationDataState_DroneQuaternion[] = {
	{
		"Q_w",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q_x",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q_y",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q_z",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Ts",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneQuaternion = {
	"Minidrone.NavigationDataState.DroneQuaternion",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_NAVIGATIONDATASTATE,
	ARSDK_CMD_MINIDRONE_NAVIGATIONDATASTATE_DRONEQUATERNION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_NavigationDataState_DroneQuaternion,
	sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneQuaternion) / sizeof(s_arg_desc_Minidrone_NavigationDataState_DroneQuaternion[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_PowerModeChanged[] = {
	{
		"Power_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_PowerModeChanged_Power_mode,
		sizeof(s_enum_desc_Minidrone_MinicamState_PowerModeChanged_Power_mode) / sizeof(s_enum_desc_Minidrone_MinicamState_PowerModeChanged_Power_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_PowerModeChanged = {
	"Minidrone.MinicamState.PowerModeChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_POWERMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_PowerModeChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_PowerModeChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_PowerModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_ProductSerialChanged[] = {
	{
		"Serial_number",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_ProductSerialChanged = {
	"Minidrone.MinicamState.ProductSerialChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_PRODUCTSERIALCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_ProductSerialChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_ProductSerialChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_ProductSerialChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_StateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_StateChanged_State,
		sizeof(s_enum_desc_Minidrone_MinicamState_StateChanged_State) / sizeof(s_enum_desc_Minidrone_MinicamState_StateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_StateChanged = {
	"Minidrone.MinicamState.StateChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_STATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_StateChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_StateChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_StateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_VersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_VersionChanged = {
	"Minidrone.MinicamState.VersionChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_VERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_VersionChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_VersionChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_VersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_PictureChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_PictureChanged_State,
		sizeof(s_enum_desc_Minidrone_MinicamState_PictureChanged_State) / sizeof(s_enum_desc_Minidrone_MinicamState_PictureChanged_State[0])
	},
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_PictureChanged_Result,
		sizeof(s_enum_desc_Minidrone_MinicamState_PictureChanged_Result) / sizeof(s_enum_desc_Minidrone_MinicamState_PictureChanged_Result[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_PictureChanged = {
	"Minidrone.MinicamState.PictureChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_PICTURECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_PictureChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_PictureChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_PictureChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_VideoStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_VideoStateChanged_State,
		sizeof(s_enum_desc_Minidrone_MinicamState_VideoStateChanged_State) / sizeof(s_enum_desc_Minidrone_MinicamState_VideoStateChanged_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_MinicamState_VideoStateChanged_Error,
		sizeof(s_enum_desc_Minidrone_MinicamState_VideoStateChanged_Error) / sizeof(s_enum_desc_Minidrone_MinicamState_VideoStateChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_VideoStateChanged = {
	"Minidrone.MinicamState.VideoStateChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_VIDEOSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_VideoStateChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_VideoStateChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_VideoStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_MinicamState_MassStorageFormatChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_MinicamState_MassStorageFormatChanged = {
	"Minidrone.MinicamState.MassStorageFormatChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_MINICAMSTATE,
	ARSDK_CMD_MINIDRONE_MINICAMSTATE_MASSSTORAGEFORMATCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_MinicamState_MassStorageFormatChanged,
	sizeof(s_arg_desc_Minidrone_MinicamState_MassStorageFormatChanged) / sizeof(s_arg_desc_Minidrone_MinicamState_MassStorageFormatChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettingsState_AutorecordChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettingsState_AutorecordChanged = {
	"Minidrone.VideoSettingsState.AutorecordChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGSSTATE_AUTORECORDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettingsState_AutorecordChanged,
	sizeof(s_arg_desc_Minidrone_VideoSettingsState_AutorecordChanged) / sizeof(s_arg_desc_Minidrone_VideoSettingsState_AutorecordChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged[] = {
	{
		"Frequency",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged_Frequency,
		sizeof(s_enum_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged_Frequency) / sizeof(s_enum_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged_Frequency[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged = {
	"Minidrone.VideoSettingsState.ElectricFrequencyChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGSSTATE_ELECTRICFREQUENCYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged,
	sizeof(s_arg_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged) / sizeof(s_arg_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_VideoSettingsState_VideoResolutionChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Minidrone_VideoSettingsState_VideoResolutionChanged_Type,
		sizeof(s_enum_desc_Minidrone_VideoSettingsState_VideoResolutionChanged_Type) / sizeof(s_enum_desc_Minidrone_VideoSettingsState_VideoResolutionChanged_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_VideoSettingsState_VideoResolutionChanged = {
	"Minidrone.VideoSettingsState.VideoResolutionChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_VIDEOSETTINGSSTATE,
	ARSDK_CMD_MINIDRONE_VIDEOSETTINGSSTATE_VIDEORESOLUTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_VideoSettingsState_VideoResolutionChanged,
	sizeof(s_arg_desc_Minidrone_VideoSettingsState_VideoResolutionChanged) / sizeof(s_arg_desc_Minidrone_VideoSettingsState_VideoResolutionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteControllerState_ConnectionChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_ConnectionChanged = {
	"Minidrone.RemoteControllerState.ConnectionChanged",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_CONNECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteControllerState_ConnectionChanged,
	sizeof(s_arg_desc_Minidrone_RemoteControllerState_ConnectionChanged) / sizeof(s_arg_desc_Minidrone_RemoteControllerState_ConnectionChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RecordButtonPressed = {
	"Minidrone.RemoteControllerState.RecordButtonPressed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_RECORDBUTTONPRESSED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_TakePictureButtonPressed = {
	"Minidrone.RemoteControllerState.TakePictureButtonPressed",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_TAKEPICTUREBUTTONPRESSED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteControllerState_RawMode[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawMode = {
	"Minidrone.RemoteControllerState.RawMode",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_RAWMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteControllerState_RawMode,
	sizeof(s_arg_desc_Minidrone_RemoteControllerState_RawMode) / sizeof(s_arg_desc_Minidrone_RemoteControllerState_RawMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteControllerState_RawCommands[] = {
	{
		"Joy0x",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Joy0y",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Joy1x",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Joy1y",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawCommands = {
	"Minidrone.RemoteControllerState.RawCommands",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_RAWCOMMANDS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteControllerState_RawCommands,
	sizeof(s_arg_desc_Minidrone_RemoteControllerState_RawCommands) / sizeof(s_arg_desc_Minidrone_RemoteControllerState_RawCommands[0])
};

static const struct arsdk_arg_desc s_arg_desc_Minidrone_RemoteControllerState_BatteryLevel[] = {
	{
		"Level",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Minidrone_RemoteControllerState_BatteryLevel = {
	"Minidrone.RemoteControllerState.BatteryLevel",
	ARSDK_PRJ_MINIDRONE,
	ARSDK_CLS_MINIDRONE_REMOTECONTROLLERSTATE,
	ARSDK_CMD_MINIDRONE_REMOTECONTROLLERSTATE_BATTERYLEVEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Minidrone_RemoteControllerState_BatteryLevel,
	sizeof(s_arg_desc_Minidrone_RemoteControllerState_BatteryLevel) / sizeof(s_arg_desc_Minidrone_RemoteControllerState_BatteryLevel[0])
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_Piloting_Posture_Type[] = {
	{"STANDING", ARSDK_JPSUMO_PILOTING_POSTURE_TYPE_STANDING},
	{"JUMPER", ARSDK_JPSUMO_PILOTING_POSTURE_TYPE_JUMPER},
	{"KICKER", ARSDK_JPSUMO_PILOTING_POSTURE_TYPE_KICKER},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_PilotingState_PostureChanged_State[] = {
	{"STANDING", ARSDK_JPSUMO_PILOTINGSTATE_POSTURECHANGED_STATE_STANDING},
	{"JUMPER", ARSDK_JPSUMO_PILOTINGSTATE_POSTURECHANGED_STATE_JUMPER},
	{"KICKER", ARSDK_JPSUMO_PILOTINGSTATE_POSTURECHANGED_STATE_KICKER},
	{"STUCK", ARSDK_JPSUMO_PILOTINGSTATE_POSTURECHANGED_STATE_STUCK},
	{"UNKNOWN", ARSDK_JPSUMO_PILOTINGSTATE_POSTURECHANGED_STATE_UNKNOWN},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_PilotingState_AlertStateChanged_State[] = {
	{"NONE", ARSDK_JPSUMO_PILOTINGSTATE_ALERTSTATECHANGED_STATE_NONE},
	{"CRITICAL_BATTERY", ARSDK_JPSUMO_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CRITICAL_BATTERY},
	{"LOW_BATTERY", ARSDK_JPSUMO_PILOTINGSTATE_ALERTSTATECHANGED_STATE_LOW_BATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_Animations_Jump_Type[] = {
	{"LONG", ARSDK_JPSUMO_ANIMATIONS_JUMP_TYPE_LONG},
	{"HIGH", ARSDK_JPSUMO_ANIMATIONS_JUMP_TYPE_HIGH},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_Animations_SimpleAnimation_Id[] = {
	{"STOP", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_STOP},
	{"SPIN", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SPIN},
	{"TAP", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_TAP},
	{"SLOWSHAKE", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SLOWSHAKE},
	{"METRONOME", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_METRONOME},
	{"ONDULATION", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_ONDULATION},
	{"SPINJUMP", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SPINJUMP},
	{"SPINTOPOSTURE", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SPINTOPOSTURE},
	{"SPIRAL", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SPIRAL},
	{"SLALOM", ARSDK_JPSUMO_ANIMATIONS_SIMPLEANIMATION_ID_SLALOM},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_AnimationsState_JumpLoadChanged_State[] = {
	{"UNKNOWN", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_UNKNOWN},
	{"UNLOADED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_UNLOADED},
	{"LOADED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_LOADED},
	{"BUSY", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_BUSY},
	{"LOW_BATTERY_UNLOADED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_LOW_BATTERY_UNLOADED},
	{"LOW_BATTERY_LOADED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED_STATE_LOW_BATTERY_LOADED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_AnimationsState_JumpTypeChanged_State[] = {
	{"NONE", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED_STATE_NONE},
	{"LONG", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED_STATE_LONG},
	{"HIGH", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED_STATE_HIGH},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged_Error[] = {
	{"NONE", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED_ERROR_NONE},
	{"BLOCKED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED_ERROR_BLOCKED},
	{"OVER_HEATED", ARSDK_JPSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED_ERROR_OVER_HEATED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecord_Video_Record[] = {
	{"STOP", ARSDK_JPSUMO_MEDIARECORD_VIDEO_RECORD_STOP},
	{"START", ARSDK_JPSUMO_MEDIARECORD_VIDEO_RECORD_START},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecord_VideoV2_Record[] = {
	{"STOP", ARSDK_JPSUMO_MEDIARECORD_VIDEOV2_RECORD_STOP},
	{"START", ARSDK_JPSUMO_MEDIARECORD_VIDEOV2_RECORD_START},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordState_VideoStateChanged_State[] = {
	{"STOPPED", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_STOPPED},
	{"STARTED", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_STARTED},
	{"FAILED", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED_STATE_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_State[] = {
	{"READY", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_READY},
	{"BUSY", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_BUSY},
	{"NOTAVAILABLE", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_Error[] = {
	{"OK", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_State[] = {
	{"STOPPED", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STOPPED},
	{"STARTED", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STARTED},
	{"NOTAVAILABLE", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_Error[] = {
	{"OK", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Event[] = {
	{"TAKEN", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_TAKEN},
	{"FAILED", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Error[] = {
	{"OK", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Event[] = {
	{"START", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_START},
	{"STOP", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_STOP},
	{"FAILED", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Error[] = {
	{"OK", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_LOWBATTERY},
	{"AUTOSTOPPED", ARSDK_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_AUTOSTOPPED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Type[] = {
	{"AUTO", ARSDK_JPSUMO_NETWORKSETTINGS_WIFISELECTION_TYPE_AUTO},
	{"MANUAL", ARSDK_JPSUMO_NETWORKSETTINGS_WIFISELECTION_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Band[] = {
	{"2_4GHZ", ARSDK_JPSUMO_NETWORKSETTINGS_WIFISELECTION_BAND_2_4GHZ},
	{"5GHZ", ARSDK_JPSUMO_NETWORKSETTINGS_WIFISELECTION_BAND_5GHZ},
	{"ALL", ARSDK_JPSUMO_NETWORKSETTINGS_WIFISELECTION_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Type[] = {
	{"AUTO_ALL", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_ALL},
	{"AUTO_2_4GHZ", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_2_4GHZ},
	{"AUTO_5GHZ", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_5GHZ},
	{"MANUAL", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Band[] = {
	{"2_4GHZ", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_5GHZ},
	{"ALL", ARSDK_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_Network_WifiScan_Band[] = {
	{"2_4GHZ", ARSDK_JPSUMO_NETWORK_WIFISCAN_BAND_2_4GHZ},
	{"5GHZ", ARSDK_JPSUMO_NETWORK_WIFISCAN_BAND_5GHZ},
	{"ALL", ARSDK_JPSUMO_NETWORK_WIFISCAN_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkState_WifiScanListChanged_Band[] = {
	{"2_4GHZ", ARSDK_JPSUMO_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_JPSUMO_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged_Band[] = {
	{"2_4GHZ", ARSDK_JPSUMO_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_JPSUMO_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_AudioSettings_Theme_Theme[] = {
	{"DEFAULT", ARSDK_JPSUMO_AUDIOSETTINGS_THEME_THEME_DEFAULT},
	{"ROBOT", ARSDK_JPSUMO_AUDIOSETTINGS_THEME_THEME_ROBOT},
	{"INSECT", ARSDK_JPSUMO_AUDIOSETTINGS_THEME_THEME_INSECT},
	{"MONSTER", ARSDK_JPSUMO_AUDIOSETTINGS_THEME_THEME_MONSTER},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_AudioSettingsState_ThemeChanged_Theme[] = {
	{"DEFAULT", ARSDK_JPSUMO_AUDIOSETTINGSSTATE_THEMECHANGED_THEME_DEFAULT},
	{"ROBOT", ARSDK_JPSUMO_AUDIOSETTINGSSTATE_THEMECHANGED_THEME_ROBOT},
	{"INSECT", ARSDK_JPSUMO_AUDIOSETTINGSSTATE_THEMECHANGED_THEME_INSECT},
	{"MONSTER", ARSDK_JPSUMO_AUDIOSETTINGSSTATE_THEMECHANGED_THEME_MONSTER},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_RoadPlanState_ScriptUploadChanged_ResultCode[] = {
	{"ERROR_OK", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED_RESULTCODE_ERROR_OK},
	{"ERROR_FILE_CORRUPTED", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED_RESULTCODE_ERROR_FILE_CORRUPTED},
	{"ERROR_INVALID_FORMAT", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED_RESULTCODE_ERROR_INVALID_FORMAT},
	{"ERROR_FILE_TOO_LARGE", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED_RESULTCODE_ERROR_FILE_TOO_LARGE},
	{"ERROR_UNSUPPORTED", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED_RESULTCODE_ERROR_UNSUPPORTED},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged_ResultCode[] = {
	{"ERROR_OK", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED_RESULTCODE_ERROR_OK},
	{"ERROR_NO_SUCH_SCRIPT", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED_RESULTCODE_ERROR_NO_SUCH_SCRIPT},
	{"ERROR_INTERNAL_FAILURE", ARSDK_JPSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED_RESULTCODE_ERROR_INTERNAL_FAILURE},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_RoadPlanState_PlayScriptChanged_ResultCode[] = {
	{"SCRIPT_STARTED", ARSDK_JPSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED_RESULTCODE_SCRIPT_STARTED},
	{"SCRIPT_FINISHED", ARSDK_JPSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED_RESULTCODE_SCRIPT_FINISHED},
	{"SCRIPT_NO_SUCH_SCRIPT", ARSDK_JPSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED_RESULTCODE_SCRIPT_NO_SUCH_SCRIPT},
	{"SCRIPT_ERROR", ARSDK_JPSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED_RESULTCODE_SCRIPT_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Jpsumo_MediaStreamingState_VideoEnableChanged_Enabled[] = {
	{"ENABLED", ARSDK_JPSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ENABLED},
	{"DISABLED", ARSDK_JPSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_DISABLED},
	{"ERROR", ARSDK_JPSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ERROR},
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Piloting_PCMD[] = {
	{
		"Flag",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Turn",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Piloting_PCMD = {
	"Jpsumo.Piloting.PCMD",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTING,
	ARSDK_CMD_JPSUMO_PILOTING_PCMD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Piloting_PCMD,
	sizeof(s_arg_desc_Jpsumo_Piloting_PCMD) / sizeof(s_arg_desc_Jpsumo_Piloting_PCMD[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Piloting_Posture[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_Piloting_Posture_Type,
		sizeof(s_enum_desc_Jpsumo_Piloting_Posture_Type) / sizeof(s_enum_desc_Jpsumo_Piloting_Posture_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Piloting_Posture = {
	"Jpsumo.Piloting.Posture",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTING,
	ARSDK_CMD_JPSUMO_PILOTING_POSTURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Piloting_Posture,
	sizeof(s_arg_desc_Jpsumo_Piloting_Posture) / sizeof(s_arg_desc_Jpsumo_Piloting_Posture[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Piloting_AddCapOffset[] = {
	{
		"Offset",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Piloting_AddCapOffset = {
	"Jpsumo.Piloting.AddCapOffset",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTING,
	ARSDK_CMD_JPSUMO_PILOTING_ADDCAPOFFSET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Piloting_AddCapOffset,
	sizeof(s_arg_desc_Jpsumo_Piloting_AddCapOffset) / sizeof(s_arg_desc_Jpsumo_Piloting_AddCapOffset[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Animations_JumpStop = {
	"Jpsumo.Animations.JumpStop",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONS,
	ARSDK_CMD_JPSUMO_ANIMATIONS_JUMPSTOP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Animations_JumpCancel = {
	"Jpsumo.Animations.JumpCancel",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONS,
	ARSDK_CMD_JPSUMO_ANIMATIONS_JUMPCANCEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Animations_JumpLoad = {
	"Jpsumo.Animations.JumpLoad",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONS,
	ARSDK_CMD_JPSUMO_ANIMATIONS_JUMPLOAD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Animations_Jump[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_Animations_Jump_Type,
		sizeof(s_enum_desc_Jpsumo_Animations_Jump_Type) / sizeof(s_enum_desc_Jpsumo_Animations_Jump_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Animations_Jump = {
	"Jpsumo.Animations.Jump",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONS,
	ARSDK_CMD_JPSUMO_ANIMATIONS_JUMP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Animations_Jump,
	sizeof(s_arg_desc_Jpsumo_Animations_Jump) / sizeof(s_arg_desc_Jpsumo_Animations_Jump[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Animations_SimpleAnimation[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_Animations_SimpleAnimation_Id,
		sizeof(s_enum_desc_Jpsumo_Animations_SimpleAnimation_Id) / sizeof(s_enum_desc_Jpsumo_Animations_SimpleAnimation_Id[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Animations_SimpleAnimation = {
	"Jpsumo.Animations.SimpleAnimation",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONS,
	ARSDK_CMD_JPSUMO_ANIMATIONS_SIMPLEANIMATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Animations_SimpleAnimation,
	sizeof(s_arg_desc_Jpsumo_Animations_SimpleAnimation) / sizeof(s_arg_desc_Jpsumo_Animations_SimpleAnimation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecord_Picture[] = {
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecord_Picture = {
	"Jpsumo.MediaRecord.Picture",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORD,
	ARSDK_CMD_JPSUMO_MEDIARECORD_PICTURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecord_Picture,
	sizeof(s_arg_desc_Jpsumo_MediaRecord_Picture) / sizeof(s_arg_desc_Jpsumo_MediaRecord_Picture[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecord_Video[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecord_Video_Record,
		sizeof(s_enum_desc_Jpsumo_MediaRecord_Video_Record) / sizeof(s_enum_desc_Jpsumo_MediaRecord_Video_Record[0])
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecord_Video = {
	"Jpsumo.MediaRecord.Video",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORD,
	ARSDK_CMD_JPSUMO_MEDIARECORD_VIDEO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecord_Video,
	sizeof(s_arg_desc_Jpsumo_MediaRecord_Video) / sizeof(s_arg_desc_Jpsumo_MediaRecord_Video[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecord_PictureV2 = {
	"Jpsumo.MediaRecord.PictureV2",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORD,
	ARSDK_CMD_JPSUMO_MEDIARECORD_PICTUREV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecord_VideoV2[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecord_VideoV2_Record,
		sizeof(s_enum_desc_Jpsumo_MediaRecord_VideoV2_Record) / sizeof(s_enum_desc_Jpsumo_MediaRecord_VideoV2_Record[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecord_VideoV2 = {
	"Jpsumo.MediaRecord.VideoV2",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORD,
	ARSDK_CMD_JPSUMO_MEDIARECORD_VIDEOV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecord_VideoV2,
	sizeof(s_arg_desc_Jpsumo_MediaRecord_VideoV2) / sizeof(s_arg_desc_Jpsumo_MediaRecord_VideoV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_NetworkSettings_WifiSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Type,
		sizeof(s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Type) / sizeof(s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Band,
		sizeof(s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Band) / sizeof(s_enum_desc_Jpsumo_NetworkSettings_WifiSelection_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkSettings_WifiSelection = {
	"Jpsumo.NetworkSettings.WifiSelection",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSETTINGS,
	ARSDK_CMD_JPSUMO_NETWORKSETTINGS_WIFISELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_NetworkSettings_WifiSelection,
	sizeof(s_arg_desc_Jpsumo_NetworkSettings_WifiSelection) / sizeof(s_arg_desc_Jpsumo_NetworkSettings_WifiSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_Network_WifiScan[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_Network_WifiScan_Band,
		sizeof(s_enum_desc_Jpsumo_Network_WifiScan_Band) / sizeof(s_enum_desc_Jpsumo_Network_WifiScan_Band[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Network_WifiScan = {
	"Jpsumo.Network.WifiScan",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORK,
	ARSDK_CMD_JPSUMO_NETWORK_WIFISCAN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_Network_WifiScan,
	sizeof(s_arg_desc_Jpsumo_Network_WifiScan) / sizeof(s_arg_desc_Jpsumo_Network_WifiScan[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_Network_WifiAuthChannel = {
	"Jpsumo.Network.WifiAuthChannel",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORK,
	ARSDK_CMD_JPSUMO_NETWORK_WIFIAUTHCHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AudioSettings_MasterVolume[] = {
	{
		"Volume",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AudioSettings_MasterVolume = {
	"Jpsumo.AudioSettings.MasterVolume",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_AUDIOSETTINGS,
	ARSDK_CMD_JPSUMO_AUDIOSETTINGS_MASTERVOLUME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AudioSettings_MasterVolume,
	sizeof(s_arg_desc_Jpsumo_AudioSettings_MasterVolume) / sizeof(s_arg_desc_Jpsumo_AudioSettings_MasterVolume[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AudioSettings_Theme[] = {
	{
		"Theme",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_AudioSettings_Theme_Theme,
		sizeof(s_enum_desc_Jpsumo_AudioSettings_Theme_Theme) / sizeof(s_enum_desc_Jpsumo_AudioSettings_Theme_Theme[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AudioSettings_Theme = {
	"Jpsumo.AudioSettings.Theme",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_AUDIOSETTINGS,
	ARSDK_CMD_JPSUMO_AUDIOSETTINGS_THEME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AudioSettings_Theme,
	sizeof(s_arg_desc_Jpsumo_AudioSettings_Theme) / sizeof(s_arg_desc_Jpsumo_AudioSettings_Theme[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlan_AllScriptsMetadata = {
	"Jpsumo.RoadPlan.AllScriptsMetadata",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLAN,
	ARSDK_CMD_JPSUMO_ROADPLAN_ALLSCRIPTSMETADATA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlan_ScriptUploaded[] = {
	{
		"Uuid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Md5Hash",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptUploaded = {
	"Jpsumo.RoadPlan.ScriptUploaded",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLAN,
	ARSDK_CMD_JPSUMO_ROADPLAN_SCRIPTUPLOADED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlan_ScriptUploaded,
	sizeof(s_arg_desc_Jpsumo_RoadPlan_ScriptUploaded) / sizeof(s_arg_desc_Jpsumo_RoadPlan_ScriptUploaded[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlan_ScriptDelete[] = {
	{
		"Uuid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptDelete = {
	"Jpsumo.RoadPlan.ScriptDelete",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLAN,
	ARSDK_CMD_JPSUMO_ROADPLAN_SCRIPTDELETE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlan_ScriptDelete,
	sizeof(s_arg_desc_Jpsumo_RoadPlan_ScriptDelete) / sizeof(s_arg_desc_Jpsumo_RoadPlan_ScriptDelete[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlan_PlayScript[] = {
	{
		"Uuid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlan_PlayScript = {
	"Jpsumo.RoadPlan.PlayScript",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLAN,
	ARSDK_CMD_JPSUMO_ROADPLAN_PLAYSCRIPT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlan_PlayScript,
	sizeof(s_arg_desc_Jpsumo_RoadPlan_PlayScript) / sizeof(s_arg_desc_Jpsumo_RoadPlan_PlayScript[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_SpeedSettings_Outdoor[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_SpeedSettings_Outdoor = {
	"Jpsumo.SpeedSettings.Outdoor",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_SPEEDSETTINGS,
	ARSDK_CMD_JPSUMO_SPEEDSETTINGS_OUTDOOR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_SpeedSettings_Outdoor,
	sizeof(s_arg_desc_Jpsumo_SpeedSettings_Outdoor) / sizeof(s_arg_desc_Jpsumo_SpeedSettings_Outdoor[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaStreaming_VideoEnable[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaStreaming_VideoEnable = {
	"Jpsumo.MediaStreaming.VideoEnable",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIASTREAMING,
	ARSDK_CMD_JPSUMO_MEDIASTREAMING_VIDEOENABLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaStreaming_VideoEnable,
	sizeof(s_arg_desc_Jpsumo_MediaStreaming_VideoEnable) / sizeof(s_arg_desc_Jpsumo_MediaStreaming_VideoEnable[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_VideoSettings_Autorecord[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_VideoSettings_Autorecord = {
	"Jpsumo.VideoSettings.Autorecord",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_VIDEOSETTINGS,
	ARSDK_CMD_JPSUMO_VIDEOSETTINGS_AUTORECORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_VideoSettings_Autorecord,
	sizeof(s_arg_desc_Jpsumo_VideoSettings_Autorecord) / sizeof(s_arg_desc_Jpsumo_VideoSettings_Autorecord[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_PilotingState_PostureChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_PilotingState_PostureChanged_State,
		sizeof(s_enum_desc_Jpsumo_PilotingState_PostureChanged_State) / sizeof(s_enum_desc_Jpsumo_PilotingState_PostureChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_PilotingState_PostureChanged = {
	"Jpsumo.PilotingState.PostureChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTINGSTATE,
	ARSDK_CMD_JPSUMO_PILOTINGSTATE_POSTURECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_PilotingState_PostureChanged,
	sizeof(s_arg_desc_Jpsumo_PilotingState_PostureChanged) / sizeof(s_arg_desc_Jpsumo_PilotingState_PostureChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_PilotingState_AlertStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_PilotingState_AlertStateChanged_State,
		sizeof(s_enum_desc_Jpsumo_PilotingState_AlertStateChanged_State) / sizeof(s_enum_desc_Jpsumo_PilotingState_AlertStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_PilotingState_AlertStateChanged = {
	"Jpsumo.PilotingState.AlertStateChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTINGSTATE,
	ARSDK_CMD_JPSUMO_PILOTINGSTATE_ALERTSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_PilotingState_AlertStateChanged,
	sizeof(s_arg_desc_Jpsumo_PilotingState_AlertStateChanged) / sizeof(s_arg_desc_Jpsumo_PilotingState_AlertStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_PilotingState_SpeedChanged[] = {
	{
		"Speed",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"RealSpeed",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_PilotingState_SpeedChanged = {
	"Jpsumo.PilotingState.SpeedChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_PILOTINGSTATE,
	ARSDK_CMD_JPSUMO_PILOTINGSTATE_SPEEDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_PilotingState_SpeedChanged,
	sizeof(s_arg_desc_Jpsumo_PilotingState_SpeedChanged) / sizeof(s_arg_desc_Jpsumo_PilotingState_SpeedChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AnimationsState_JumpLoadChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_AnimationsState_JumpLoadChanged_State,
		sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpLoadChanged_State) / sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpLoadChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpLoadChanged = {
	"Jpsumo.AnimationsState.JumpLoadChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONSSTATE,
	ARSDK_CMD_JPSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AnimationsState_JumpLoadChanged,
	sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpLoadChanged) / sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpLoadChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AnimationsState_JumpTypeChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_AnimationsState_JumpTypeChanged_State,
		sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpTypeChanged_State) / sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpTypeChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpTypeChanged = {
	"Jpsumo.AnimationsState.JumpTypeChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONSSTATE,
	ARSDK_CMD_JPSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AnimationsState_JumpTypeChanged,
	sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpTypeChanged) / sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpTypeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged[] = {
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged_Error,
		sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged_Error) / sizeof(s_enum_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged = {
	"Jpsumo.AnimationsState.JumpMotorProblemChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ANIMATIONSSTATE,
	ARSDK_CMD_JPSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged,
	sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged) / sizeof(s_arg_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_SettingsState_ProductGPSVersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_SettingsState_ProductGPSVersionChanged = {
	"Jpsumo.SettingsState.ProductGPSVersionChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_SETTINGSSTATE,
	ARSDK_CMD_JPSUMO_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_SettingsState_ProductGPSVersionChanged,
	sizeof(s_arg_desc_Jpsumo_SettingsState_ProductGPSVersionChanged) / sizeof(s_arg_desc_Jpsumo_SettingsState_ProductGPSVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordState_PictureStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChanged = {
	"Jpsumo.MediaRecordState.PictureStateChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDSTATE,
	ARSDK_CMD_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordState_PictureStateChanged,
	sizeof(s_arg_desc_Jpsumo_MediaRecordState_PictureStateChanged) / sizeof(s_arg_desc_Jpsumo_MediaRecordState_PictureStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordState_VideoStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordState_VideoStateChanged_State,
		sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChanged_State) / sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChanged_State[0])
	},
	{
		"Mass_storage_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChanged = {
	"Jpsumo.MediaRecordState.VideoStateChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDSTATE,
	ARSDK_CMD_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordState_VideoStateChanged,
	sizeof(s_arg_desc_Jpsumo_MediaRecordState_VideoStateChanged) / sizeof(s_arg_desc_Jpsumo_MediaRecordState_VideoStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordState_PictureStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_State,
		sizeof(s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_State) / sizeof(s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_Error,
		sizeof(s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_Error) / sizeof(s_enum_desc_Jpsumo_MediaRecordState_PictureStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChangedV2 = {
	"Jpsumo.MediaRecordState.PictureStateChangedV2",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDSTATE,
	ARSDK_CMD_JPSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordState_PictureStateChangedV2,
	sizeof(s_arg_desc_Jpsumo_MediaRecordState_PictureStateChangedV2) / sizeof(s_arg_desc_Jpsumo_MediaRecordState_PictureStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordState_VideoStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_State,
		sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_State) / sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_Error,
		sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_Error) / sizeof(s_enum_desc_Jpsumo_MediaRecordState_VideoStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChangedV2 = {
	"Jpsumo.MediaRecordState.VideoStateChangedV2",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDSTATE,
	ARSDK_CMD_JPSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordState_VideoStateChangedV2,
	sizeof(s_arg_desc_Jpsumo_MediaRecordState_VideoStateChangedV2) / sizeof(s_arg_desc_Jpsumo_MediaRecordState_VideoStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordEvent_PictureEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Event,
		sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Event) / sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Error,
		sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Error) / sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_PictureEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_PictureEventChanged = {
	"Jpsumo.MediaRecordEvent.PictureEventChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDEVENT,
	ARSDK_CMD_JPSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordEvent_PictureEventChanged,
	sizeof(s_arg_desc_Jpsumo_MediaRecordEvent_PictureEventChanged) / sizeof(s_arg_desc_Jpsumo_MediaRecordEvent_PictureEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaRecordEvent_VideoEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Event,
		sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Event) / sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Error,
		sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Error) / sizeof(s_enum_desc_Jpsumo_MediaRecordEvent_VideoEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_VideoEventChanged = {
	"Jpsumo.MediaRecordEvent.VideoEventChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIARECORDEVENT,
	ARSDK_CMD_JPSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaRecordEvent_VideoEventChanged,
	sizeof(s_arg_desc_Jpsumo_MediaRecordEvent_VideoEventChanged) / sizeof(s_arg_desc_Jpsumo_MediaRecordEvent_VideoEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Type,
		sizeof(s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Type) / sizeof(s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Band,
		sizeof(s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Band) / sizeof(s_enum_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged = {
	"Jpsumo.NetworkSettingsState.WifiSelectionChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSETTINGSSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged,
	sizeof(s_arg_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged) / sizeof(s_arg_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_NetworkState_WifiScanListChanged[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkState_WifiScanListChanged_Band,
		sizeof(s_enum_desc_Jpsumo_NetworkState_WifiScanListChanged_Band) / sizeof(s_enum_desc_Jpsumo_NetworkState_WifiScanListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiScanListChanged = {
	"Jpsumo.NetworkState.WifiScanListChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSTATE_WIFISCANLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_NetworkState_WifiScanListChanged,
	sizeof(s_arg_desc_Jpsumo_NetworkState_WifiScanListChanged) / sizeof(s_arg_desc_Jpsumo_NetworkState_WifiScanListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiScanChanged = {
	"Jpsumo.NetworkState.AllWifiScanChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSTATE_ALLWIFISCANCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged_Band,
		sizeof(s_enum_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged_Band) / sizeof(s_enum_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"In_or_out",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged = {
	"Jpsumo.NetworkState.WifiAuthChannelListChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged,
	sizeof(s_arg_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged) / sizeof(s_arg_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiAuthChannelChanged = {
	"Jpsumo.NetworkState.AllWifiAuthChannelChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_NetworkState_LinkQualityChanged[] = {
	{
		"Quality",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_NetworkState_LinkQualityChanged = {
	"Jpsumo.NetworkState.LinkQualityChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_NETWORKSTATE,
	ARSDK_CMD_JPSUMO_NETWORKSTATE_LINKQUALITYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_NetworkState_LinkQualityChanged,
	sizeof(s_arg_desc_Jpsumo_NetworkState_LinkQualityChanged) / sizeof(s_arg_desc_Jpsumo_NetworkState_LinkQualityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged[] = {
	{
		"Volume",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged = {
	"Jpsumo.AudioSettingsState.MasterVolumeChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_AUDIOSETTINGSSTATE,
	ARSDK_CMD_JPSUMO_AUDIOSETTINGSSTATE_MASTERVOLUMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged,
	sizeof(s_arg_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged) / sizeof(s_arg_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_AudioSettingsState_ThemeChanged[] = {
	{
		"Theme",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_AudioSettingsState_ThemeChanged_Theme,
		sizeof(s_enum_desc_Jpsumo_AudioSettingsState_ThemeChanged_Theme) / sizeof(s_enum_desc_Jpsumo_AudioSettingsState_ThemeChanged_Theme[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_ThemeChanged = {
	"Jpsumo.AudioSettingsState.ThemeChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_AUDIOSETTINGSSTATE,
	ARSDK_CMD_JPSUMO_AUDIOSETTINGSSTATE_THEMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_AudioSettingsState_ThemeChanged,
	sizeof(s_arg_desc_Jpsumo_AudioSettingsState_ThemeChanged) / sizeof(s_arg_desc_Jpsumo_AudioSettingsState_ThemeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged[] = {
	{
		"Uuid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Version",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Product",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"LastModified",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged = {
	"Jpsumo.RoadPlanState.ScriptMetadataListChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLANSTATE,
	ARSDK_CMD_JPSUMO_ROADPLANSTATE_SCRIPTMETADATALISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged,
	sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged) / sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlanState_AllScriptsMetadataChanged = {
	"Jpsumo.RoadPlanState.AllScriptsMetadataChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLANSTATE,
	ARSDK_CMD_JPSUMO_ROADPLANSTATE_ALLSCRIPTSMETADATACHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlanState_ScriptUploadChanged[] = {
	{
		"ResultCode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_RoadPlanState_ScriptUploadChanged_ResultCode,
		sizeof(s_enum_desc_Jpsumo_RoadPlanState_ScriptUploadChanged_ResultCode) / sizeof(s_enum_desc_Jpsumo_RoadPlanState_ScriptUploadChanged_ResultCode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptUploadChanged = {
	"Jpsumo.RoadPlanState.ScriptUploadChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLANSTATE,
	ARSDK_CMD_JPSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlanState_ScriptUploadChanged,
	sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptUploadChanged) / sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptUploadChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged[] = {
	{
		"ResultCode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged_ResultCode,
		sizeof(s_enum_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged_ResultCode) / sizeof(s_enum_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged_ResultCode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged = {
	"Jpsumo.RoadPlanState.ScriptDeleteChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLANSTATE,
	ARSDK_CMD_JPSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged,
	sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged) / sizeof(s_arg_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_RoadPlanState_PlayScriptChanged[] = {
	{
		"ResultCode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_RoadPlanState_PlayScriptChanged_ResultCode,
		sizeof(s_enum_desc_Jpsumo_RoadPlanState_PlayScriptChanged_ResultCode) / sizeof(s_enum_desc_Jpsumo_RoadPlanState_PlayScriptChanged_ResultCode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_RoadPlanState_PlayScriptChanged = {
	"Jpsumo.RoadPlanState.PlayScriptChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_ROADPLANSTATE,
	ARSDK_CMD_JPSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_RoadPlanState_PlayScriptChanged,
	sizeof(s_arg_desc_Jpsumo_RoadPlanState_PlayScriptChanged) / sizeof(s_arg_desc_Jpsumo_RoadPlanState_PlayScriptChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_SpeedSettingsState_OutdoorChanged[] = {
	{
		"Outdoor",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_SpeedSettingsState_OutdoorChanged = {
	"Jpsumo.SpeedSettingsState.OutdoorChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_SPEEDSETTINGSSTATE,
	ARSDK_CMD_JPSUMO_SPEEDSETTINGSSTATE_OUTDOORCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_SpeedSettingsState_OutdoorChanged,
	sizeof(s_arg_desc_Jpsumo_SpeedSettingsState_OutdoorChanged) / sizeof(s_arg_desc_Jpsumo_SpeedSettingsState_OutdoorChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_MediaStreamingState_VideoEnableChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Jpsumo_MediaStreamingState_VideoEnableChanged_Enabled,
		sizeof(s_enum_desc_Jpsumo_MediaStreamingState_VideoEnableChanged_Enabled) / sizeof(s_enum_desc_Jpsumo_MediaStreamingState_VideoEnableChanged_Enabled[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_MediaStreamingState_VideoEnableChanged = {
	"Jpsumo.MediaStreamingState.VideoEnableChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_MEDIASTREAMINGSTATE,
	ARSDK_CMD_JPSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_MediaStreamingState_VideoEnableChanged,
	sizeof(s_arg_desc_Jpsumo_MediaStreamingState_VideoEnableChanged) / sizeof(s_arg_desc_Jpsumo_MediaStreamingState_VideoEnableChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Jpsumo_VideoSettingsState_AutorecordChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Jpsumo_VideoSettingsState_AutorecordChanged = {
	"Jpsumo.VideoSettingsState.AutorecordChanged",
	ARSDK_PRJ_JPSUMO,
	ARSDK_CLS_JPSUMO_VIDEOSETTINGSSTATE,
	ARSDK_CMD_JPSUMO_VIDEOSETTINGSSTATE_AUTORECORDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Jpsumo_VideoSettingsState_AutorecordChanged,
	sizeof(s_arg_desc_Jpsumo_VideoSettingsState_AutorecordChanged) / sizeof(s_arg_desc_Jpsumo_VideoSettingsState_AutorecordChanged[0])
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_WifiState_ConnexionChanged_Status[] = {
	{"CONNECTED", ARSDK_SKYCTRL_WIFISTATE_CONNEXIONCHANGED_STATUS_CONNECTED},
	{"ERROR", ARSDK_SKYCTRL_WIFISTATE_CONNEXIONCHANGED_STATUS_ERROR},
	{"DISCONNECTED", ARSDK_SKYCTRL_WIFISTATE_CONNEXIONCHANGED_STATUS_DISCONNECTED},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChanged_Band[] = {
	{"2_4GHZ", ARSDK_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2_Band[] = {
	{"2_4GHZ", ARSDK_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGEDV2_BAND_2_4GHZ},
	{"5GHZ", ARSDK_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGEDV2_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_WifiState_WifiEnvironmentChanged_Environment[] = {
	{"INDOOR", ARSDK_SKYCTRL_WIFISTATE_WIFIENVIRONMENTCHANGED_ENVIRONMENT_INDOOR},
	{"OUTDOOR", ARSDK_SKYCTRL_WIFISTATE_WIFIENVIRONMENTCHANGED_ENVIRONMENT_OUTDOOR},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_DeviceState_ConnexionChanged_Status[] = {
	{"NOTCONNECTED", ARSDK_SKYCTRL_DEVICESTATE_CONNEXIONCHANGED_STATUS_NOTCONNECTED},
	{"CONNECTING", ARSDK_SKYCTRL_DEVICESTATE_CONNEXIONCHANGED_STATUS_CONNECTING},
	{"CONNECTED", ARSDK_SKYCTRL_DEVICESTATE_CONNEXIONCHANGED_STATUS_CONNECTED},
	{"DISCONNECTING", ARSDK_SKYCTRL_DEVICESTATE_CONNEXIONCHANGED_STATUS_DISCONNECTING},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_SettingsState_ProductVariantChanged_Variant[] = {
	{"BEBOP", ARSDK_SKYCTRL_SETTINGSSTATE_PRODUCTVARIANTCHANGED_VARIANT_BEBOP},
	{"BEBOP2", ARSDK_SKYCTRL_SETTINGSSTATE_PRODUCTVARIANTCHANGED_VARIANT_BEBOP2},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_SkyControllerState_BatteryState_State[] = {
	{"CHARGING", ARSDK_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE_STATE_CHARGING},
	{"CHARGED", ARSDK_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE_STATE_CHARGED},
	{"DISCHARGING", ARSDK_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE_STATE_DISCHARGING},
	{"DISCHARGING_LOW", ARSDK_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE_STATE_DISCHARGING_LOW},
	{"DISCHARGING_CRITICAL", ARSDK_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE_STATE_DISCHARGING_CRITICAL},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Type[] = {
	{"MANUAL", ARSDK_SKYCTRL_ACCESSPOINTSETTINGS_WIFISELECTION_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Band[] = {
	{"2_4GHZ", ARSDK_SKYCTRL_ACCESSPOINTSETTINGS_WIFISELECTION_BAND_2_4GHZ},
	{"5GHZ", ARSDK_SKYCTRL_ACCESSPOINTSETTINGS_WIFISELECTION_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettings_WifiSecurity_Security_type[] = {
	{"OPEN", ARSDK_SKYCTRL_ACCESSPOINTSETTINGS_WIFISECURITY_SECURITY_TYPE_OPEN},
	{"WPA2", ARSDK_SKYCTRL_ACCESSPOINTSETTINGS_WIFISECURITY_SECURITY_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Type[] = {
	{"MANUAL", ARSDK_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Band[] = {
	{"2_4GHZ", ARSDK_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged_Security_type[] = {
	{"OPEN", ARSDK_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISECURITYCHANGED_SECURITY_TYPE_OPEN},
	{"WPA2", ARSDK_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISECURITYCHANGED_SECURITY_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_GamepadInfosState_GamepadControl_Type[] = {
	{"AXIS", ARSDK_SKYCTRL_GAMEPADINFOSSTATE_GAMEPADCONTROL_TYPE_AXIS},
	{"BUTTON", ARSDK_SKYCTRL_GAMEPADINFOSSTATE_GAMEPADCONTROL_TYPE_BUTTON},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_CoPiloting_SetPilotingSource_Source[] = {
	{"SKYCONTROLLER", ARSDK_SKYCTRL_COPILOTING_SETPILOTINGSOURCE_SOURCE_SKYCONTROLLER},
	{"CONTROLLER", ARSDK_SKYCTRL_COPILOTING_SETPILOTINGSOURCE_SOURCE_CONTROLLER},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_CoPilotingState_PilotingSource_Source[] = {
	{"SKYCONTROLLER", ARSDK_SKYCTRL_COPILOTINGSTATE_PILOTINGSOURCE_SOURCE_SKYCONTROLLER},
	{"CONTROLLER", ARSDK_SKYCTRL_COPILOTINGSTATE_PILOTINGSOURCE_SOURCE_CONTROLLER},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationState_Status[] = {
	{"UNRELIABLE", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE_STATUS_UNRELIABLE},
	{"ASSESSING", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE_STATUS_ASSESSING},
	{"CALIBRATED", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE_STATUS_CALIBRATED},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2_State[] = {
	{"NOTCALIBRATED", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2_STATE_NOTCALIBRATED},
	{"CALIBRATINGX", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2_STATE_CALIBRATINGX},
	{"CALIBRATINGY", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2_STATE_CALIBRATINGY},
	{"CALIBRATINGZ", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2_STATE_CALIBRATINGZ},
	{"CALIBRATED", ARSDK_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2_STATE_CALIBRATED},
};

static const struct arsdk_enum_desc s_enum_desc_Skyctrl_CommonEventState_Shutdown_Reason[] = {
	{"POWEROFF_BUTTON", ARSDK_SKYCTRL_COMMONEVENTSTATE_SHUTDOWN_REASON_POWEROFF_BUTTON},
	{"UPDATE", ARSDK_SKYCTRL_COMMONEVENTSTATE_SHUTDOWN_REASON_UPDATE},
	{"LOW_BATTERY", ARSDK_SKYCTRL_COMMONEVENTSTATE_SHUTDOWN_REASON_LOW_BATTERY},
	{"FACTORY_RESET", ARSDK_SKYCTRL_COMMONEVENTSTATE_SHUTDOWN_REASON_FACTORY_RESET},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Wifi_RequestWifiList = {
	"Skyctrl.Wifi.RequestWifiList",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFI,
	ARSDK_CMD_SKYCTRL_WIFI_REQUESTWIFILIST,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Wifi_RequestCurrentWifi = {
	"Skyctrl.Wifi.RequestCurrentWifi",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFI,
	ARSDK_CMD_SKYCTRL_WIFI_REQUESTCURRENTWIFI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_Wifi_ConnectToWifi[] = {
	{
		"Bssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Passphrase",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Wifi_ConnectToWifi = {
	"Skyctrl.Wifi.ConnectToWifi",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFI,
	ARSDK_CMD_SKYCTRL_WIFI_CONNECTTOWIFI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_Wifi_ConnectToWifi,
	sizeof(s_arg_desc_Skyctrl_Wifi_ConnectToWifi) / sizeof(s_arg_desc_Skyctrl_Wifi_ConnectToWifi[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_Wifi_ForgetWifi[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Wifi_ForgetWifi = {
	"Skyctrl.Wifi.ForgetWifi",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFI,
	ARSDK_CMD_SKYCTRL_WIFI_FORGETWIFI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_Wifi_ForgetWifi,
	sizeof(s_arg_desc_Skyctrl_Wifi_ForgetWifi) / sizeof(s_arg_desc_Skyctrl_Wifi_ForgetWifi[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Wifi_WifiAuthChannel = {
	"Skyctrl.Wifi.WifiAuthChannel",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFI,
	ARSDK_CMD_SKYCTRL_WIFI_WIFIAUTHCHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Device_RequestDeviceList = {
	"Skyctrl.Device.RequestDeviceList",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_DEVICE,
	ARSDK_CMD_SKYCTRL_DEVICE_REQUESTDEVICELIST,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Device_RequestCurrentDevice = {
	"Skyctrl.Device.RequestCurrentDevice",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_DEVICE,
	ARSDK_CMD_SKYCTRL_DEVICE_REQUESTCURRENTDEVICE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_Device_ConnectToDevice[] = {
	{
		"DeviceName",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Device_ConnectToDevice = {
	"Skyctrl.Device.ConnectToDevice",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_DEVICE,
	ARSDK_CMD_SKYCTRL_DEVICE_CONNECTTODEVICE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_Device_ConnectToDevice,
	sizeof(s_arg_desc_Skyctrl_Device_ConnectToDevice) / sizeof(s_arg_desc_Skyctrl_Device_ConnectToDevice[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Settings_AllSettings = {
	"Skyctrl.Settings.AllSettings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGS,
	ARSDK_CMD_SKYCTRL_SETTINGS_ALLSETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Settings_Reset = {
	"Skyctrl.Settings.Reset",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGS,
	ARSDK_CMD_SKYCTRL_SETTINGS_RESET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Common_AllStates = {
	"Skyctrl.Common.AllStates",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COMMON,
	ARSDK_CMD_SKYCTRL_COMMON_ALLSTATES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_Common_CurrentDateTime[] = {
	{
		"Datetime",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Common_CurrentDateTime = {
	"Skyctrl.Common.CurrentDateTime",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COMMON,
	ARSDK_CMD_SKYCTRL_COMMON_CURRENTDATETIME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_Common_CurrentDateTime,
	sizeof(s_arg_desc_Skyctrl_Common_CurrentDateTime) / sizeof(s_arg_desc_Skyctrl_Common_CurrentDateTime[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettings_AccessPointSSID[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointSSID = {
	"Skyctrl.AccessPointSettings.AccessPointSSID",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGS,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGS_ACCESSPOINTSSID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettings_AccessPointSSID,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettings_AccessPointSSID) / sizeof(s_arg_desc_Skyctrl_AccessPointSettings_AccessPointSSID[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettings_AccessPointChannel[] = {
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointChannel = {
	"Skyctrl.AccessPointSettings.AccessPointChannel",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGS,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGS_ACCESSPOINTCHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettings_AccessPointChannel,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettings_AccessPointChannel) / sizeof(s_arg_desc_Skyctrl_AccessPointSettings_AccessPointChannel[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettings_WifiSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Type,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Type) / sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Band,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Band) / sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSelection_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSelection = {
	"Skyctrl.AccessPointSettings.WifiSelection",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGS,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGS_WIFISELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettings_WifiSelection,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettings_WifiSelection) / sizeof(s_arg_desc_Skyctrl_AccessPointSettings_WifiSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettings_WifiSecurity[] = {
	{
		"Security_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettings_WifiSecurity_Security_type,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSecurity_Security_type) / sizeof(s_enum_desc_Skyctrl_AccessPointSettings_WifiSecurity_Security_type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSecurity = {
	"Skyctrl.AccessPointSettings.WifiSecurity",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGS,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGS_WIFISECURITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettings_WifiSecurity,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettings_WifiSecurity) / sizeof(s_arg_desc_Skyctrl_AccessPointSettings_WifiSecurity[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Camera_ResetOrientation = {
	"Skyctrl.Camera.ResetOrientation",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CAMERA,
	ARSDK_CMD_SKYCTRL_CAMERA_RESETORIENTATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_GamepadInfos_GetGamepadControls = {
	"Skyctrl.GamepadInfos.GetGamepadControls",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_GAMEPADINFOS,
	ARSDK_CMD_SKYCTRL_GAMEPADINFOS_GETGAMEPADCONTROLS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetCurrentButtonMappings = {
	"Skyctrl.ButtonMappings.GetCurrentButtonMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGS,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGS_GETCURRENTBUTTONMAPPINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetAvailableButtonMappings = {
	"Skyctrl.ButtonMappings.GetAvailableButtonMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGS,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGS_GETAVAILABLEBUTTONMAPPINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_ButtonMappings_SetButtonMapping[] = {
	{
		"Key_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappings_SetButtonMapping = {
	"Skyctrl.ButtonMappings.SetButtonMapping",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGS,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGS_SETBUTTONMAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_ButtonMappings_SetButtonMapping,
	sizeof(s_arg_desc_Skyctrl_ButtonMappings_SetButtonMapping) / sizeof(s_arg_desc_Skyctrl_ButtonMappings_SetButtonMapping[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappings_DefaultButtonMapping = {
	"Skyctrl.ButtonMappings.DefaultButtonMapping",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGS,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGS_DEFAULTBUTTONMAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetCurrentAxisMappings = {
	"Skyctrl.AxisMappings.GetCurrentAxisMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGS,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGS_GETCURRENTAXISMAPPINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetAvailableAxisMappings = {
	"Skyctrl.AxisMappings.GetAvailableAxisMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGS,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGS_GETAVAILABLEAXISMAPPINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisMappings_SetAxisMapping[] = {
	{
		"Axis_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappings_SetAxisMapping = {
	"Skyctrl.AxisMappings.SetAxisMapping",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGS,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGS_SETAXISMAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisMappings_SetAxisMapping,
	sizeof(s_arg_desc_Skyctrl_AxisMappings_SetAxisMapping) / sizeof(s_arg_desc_Skyctrl_AxisMappings_SetAxisMapping[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappings_DefaultAxisMapping = {
	"Skyctrl.AxisMappings.DefaultAxisMapping",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGS,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGS_DEFAULTAXISMAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetCurrentAxisFilters = {
	"Skyctrl.AxisFilters.GetCurrentAxisFilters",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERS,
	ARSDK_CMD_SKYCTRL_AXISFILTERS_GETCURRENTAXISFILTERS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetPresetAxisFilters = {
	"Skyctrl.AxisFilters.GetPresetAxisFilters",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERS,
	ARSDK_CMD_SKYCTRL_AXISFILTERS_GETPRESETAXISFILTERS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisFilters_SetAxisFilter[] = {
	{
		"Axis_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Filter_uid_or_builder",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFilters_SetAxisFilter = {
	"Skyctrl.AxisFilters.SetAxisFilter",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERS,
	ARSDK_CMD_SKYCTRL_AXISFILTERS_SETAXISFILTER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisFilters_SetAxisFilter,
	sizeof(s_arg_desc_Skyctrl_AxisFilters_SetAxisFilter) / sizeof(s_arg_desc_Skyctrl_AxisFilters_SetAxisFilter[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFilters_DefaultAxisFilters = {
	"Skyctrl.AxisFilters.DefaultAxisFilters",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERS,
	ARSDK_CMD_SKYCTRL_AXISFILTERS_DEFAULTAXISFILTERS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CoPiloting_SetPilotingSource[] = {
	{
		"Source",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_CoPiloting_SetPilotingSource_Source,
		sizeof(s_enum_desc_Skyctrl_CoPiloting_SetPilotingSource_Source) / sizeof(s_enum_desc_Skyctrl_CoPiloting_SetPilotingSource_Source[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CoPiloting_SetPilotingSource = {
	"Skyctrl.CoPiloting.SetPilotingSource",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COPILOTING,
	ARSDK_CMD_SKYCTRL_COPILOTING_SETPILOTINGSOURCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CoPiloting_SetPilotingSource,
	sizeof(s_arg_desc_Skyctrl_CoPiloting_SetPilotingSource) / sizeof(s_arg_desc_Skyctrl_CoPiloting_SetPilotingSource[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates = {
	"Skyctrl.Calibration.EnableMagnetoCalibrationQualityUpdates",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATION,
	ARSDK_CMD_SKYCTRL_CALIBRATION_ENABLEMAGNETOCALIBRATIONQUALITYUPDATES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates,
	sizeof(s_arg_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates) / sizeof(s_arg_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Calibration_StartCalibration = {
	"Skyctrl.Calibration.StartCalibration",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATION,
	ARSDK_CMD_SKYCTRL_CALIBRATION_STARTCALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Calibration_AbortCalibration = {
	"Skyctrl.Calibration.AbortCalibration",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATION,
	ARSDK_CMD_SKYCTRL_CALIBRATION_ABORTCALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_Factory_Reset = {
	"Skyctrl.Factory.Reset",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_FACTORY,
	ARSDK_CMD_SKYCTRL_FACTORY_RESET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiList[] = {
	{
		"Bssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Secured",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Saved",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Frequency",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiList = {
	"Skyctrl.WifiState.WifiList",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFILIST,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiList,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiList) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiList[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_ConnexionChanged[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_WifiState_ConnexionChanged_Status,
		sizeof(s_enum_desc_Skyctrl_WifiState_ConnexionChanged_Status) / sizeof(s_enum_desc_Skyctrl_WifiState_ConnexionChanged_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_ConnexionChanged = {
	"Skyctrl.WifiState.ConnexionChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_CONNEXIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_ConnexionChanged,
	sizeof(s_arg_desc_Skyctrl_WifiState_ConnexionChanged) / sizeof(s_arg_desc_Skyctrl_WifiState_ConnexionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChanged[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChanged_Band,
		sizeof(s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChanged_Band) / sizeof(s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"In_or_out",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChanged = {
	"Skyctrl.WifiState.WifiAuthChannelListChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChanged,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChanged) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_AllWifiAuthChannelChanged = {
	"Skyctrl.WifiState.AllWifiAuthChannelChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_ALLWIFIAUTHCHANNELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiSignalChanged[] = {
	{
		"Level",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiSignalChanged = {
	"Skyctrl.WifiState.WifiSignalChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFISIGNALCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiSignalChanged,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiSignalChanged) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiSignalChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2_Band,
		sizeof(s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2_Band) / sizeof(s_enum_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"In_or_out",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2 = {
	"Skyctrl.WifiState.WifiAuthChannelListChangedV2",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFIAUTHCHANNELLISTCHANGEDV2,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiCountryChanged[] = {
	{
		"Code",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiCountryChanged = {
	"Skyctrl.WifiState.WifiCountryChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFICOUNTRYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiCountryChanged,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiCountryChanged) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiCountryChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_WifiState_WifiEnvironmentChanged[] = {
	{
		"Environment",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_WifiState_WifiEnvironmentChanged_Environment,
		sizeof(s_enum_desc_Skyctrl_WifiState_WifiEnvironmentChanged_Environment) / sizeof(s_enum_desc_Skyctrl_WifiState_WifiEnvironmentChanged_Environment[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_WifiState_WifiEnvironmentChanged = {
	"Skyctrl.WifiState.WifiEnvironmentChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_WIFISTATE,
	ARSDK_CMD_SKYCTRL_WIFISTATE_WIFIENVIRONMENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_WifiState_WifiEnvironmentChanged,
	sizeof(s_arg_desc_Skyctrl_WifiState_WifiEnvironmentChanged) / sizeof(s_arg_desc_Skyctrl_WifiState_WifiEnvironmentChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_DeviceState_DeviceList[] = {
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_DeviceState_DeviceList = {
	"Skyctrl.DeviceState.DeviceList",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_DEVICESTATE,
	ARSDK_CMD_SKYCTRL_DEVICESTATE_DEVICELIST,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_DeviceState_DeviceList,
	sizeof(s_arg_desc_Skyctrl_DeviceState_DeviceList) / sizeof(s_arg_desc_Skyctrl_DeviceState_DeviceList[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_DeviceState_ConnexionChanged[] = {
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_DeviceState_ConnexionChanged_Status,
		sizeof(s_enum_desc_Skyctrl_DeviceState_ConnexionChanged_Status) / sizeof(s_enum_desc_Skyctrl_DeviceState_ConnexionChanged_Status[0])
	},
	{
		"DeviceName",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"DeviceProductID",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_DeviceState_ConnexionChanged = {
	"Skyctrl.DeviceState.ConnexionChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_DEVICESTATE,
	ARSDK_CMD_SKYCTRL_DEVICESTATE_CONNEXIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_DeviceState_ConnexionChanged,
	sizeof(s_arg_desc_Skyctrl_DeviceState_ConnexionChanged) / sizeof(s_arg_desc_Skyctrl_DeviceState_ConnexionChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_AllSettingsChanged = {
	"Skyctrl.SettingsState.AllSettingsChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_ALLSETTINGSCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_ResetChanged = {
	"Skyctrl.SettingsState.ResetChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_RESETCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SettingsState_ProductSerialChanged[] = {
	{
		"SerialNumber",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductSerialChanged = {
	"Skyctrl.SettingsState.ProductSerialChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_PRODUCTSERIALCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SettingsState_ProductSerialChanged,
	sizeof(s_arg_desc_Skyctrl_SettingsState_ProductSerialChanged) / sizeof(s_arg_desc_Skyctrl_SettingsState_ProductSerialChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SettingsState_ProductVariantChanged[] = {
	{
		"Variant",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_SettingsState_ProductVariantChanged_Variant,
		sizeof(s_enum_desc_Skyctrl_SettingsState_ProductVariantChanged_Variant) / sizeof(s_enum_desc_Skyctrl_SettingsState_ProductVariantChanged_Variant[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVariantChanged = {
	"Skyctrl.SettingsState.ProductVariantChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_PRODUCTVARIANTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SettingsState_ProductVariantChanged,
	sizeof(s_arg_desc_Skyctrl_SettingsState_ProductVariantChanged) / sizeof(s_arg_desc_Skyctrl_SettingsState_ProductVariantChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SettingsState_ProductVersionChanged[] = {
	{
		"Software",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Hardware",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVersionChanged = {
	"Skyctrl.SettingsState.ProductVersionChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_PRODUCTVERSIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SettingsState_ProductVersionChanged,
	sizeof(s_arg_desc_Skyctrl_SettingsState_ProductVersionChanged) / sizeof(s_arg_desc_Skyctrl_SettingsState_ProductVersionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SettingsState_CPUID[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SettingsState_CPUID = {
	"Skyctrl.SettingsState.CPUID",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_SETTINGSSTATE_CPUID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SettingsState_CPUID,
	sizeof(s_arg_desc_Skyctrl_SettingsState_CPUID) / sizeof(s_arg_desc_Skyctrl_SettingsState_CPUID[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CommonState_AllStatesChanged = {
	"Skyctrl.CommonState.AllStatesChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COMMONSTATE,
	ARSDK_CMD_SKYCTRL_COMMONSTATE_ALLSTATESCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_RETRY,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CommonState_CurrentDateTimeChanged[] = {
	{
		"Datetime",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CommonState_CurrentDateTimeChanged = {
	"Skyctrl.CommonState.CurrentDateTimeChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COMMONSTATE,
	ARSDK_CMD_SKYCTRL_COMMONSTATE_CURRENTDATETIMECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CommonState_CurrentDateTimeChanged,
	sizeof(s_arg_desc_Skyctrl_CommonState_CurrentDateTimeChanged) / sizeof(s_arg_desc_Skyctrl_CommonState_CurrentDateTimeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SkyControllerState_BatteryChanged[] = {
	{
		"Percent",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryChanged = {
	"Skyctrl.SkyControllerState.BatteryChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SKYCONTROLLERSTATE,
	ARSDK_CMD_SKYCTRL_SKYCONTROLLERSTATE_BATTERYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SkyControllerState_BatteryChanged,
	sizeof(s_arg_desc_Skyctrl_SkyControllerState_BatteryChanged) / sizeof(s_arg_desc_Skyctrl_SkyControllerState_BatteryChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SkyControllerState_GpsFixChanged[] = {
	{
		"Fixed",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsFixChanged = {
	"Skyctrl.SkyControllerState.GpsFixChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SKYCONTROLLERSTATE,
	ARSDK_CMD_SKYCTRL_SKYCONTROLLERSTATE_GPSFIXCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SkyControllerState_GpsFixChanged,
	sizeof(s_arg_desc_Skyctrl_SkyControllerState_GpsFixChanged) / sizeof(s_arg_desc_Skyctrl_SkyControllerState_GpsFixChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SkyControllerState_GpsPositionChanged[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Heading",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsPositionChanged = {
	"Skyctrl.SkyControllerState.GpsPositionChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SKYCONTROLLERSTATE,
	ARSDK_CMD_SKYCTRL_SKYCONTROLLERSTATE_GPSPOSITIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SkyControllerState_GpsPositionChanged,
	sizeof(s_arg_desc_Skyctrl_SkyControllerState_GpsPositionChanged) / sizeof(s_arg_desc_Skyctrl_SkyControllerState_GpsPositionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SkyControllerState_BatteryState[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_SkyControllerState_BatteryState_State,
		sizeof(s_enum_desc_Skyctrl_SkyControllerState_BatteryState_State) / sizeof(s_enum_desc_Skyctrl_SkyControllerState_BatteryState_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryState = {
	"Skyctrl.SkyControllerState.BatteryState",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SKYCONTROLLERSTATE,
	ARSDK_CMD_SKYCTRL_SKYCONTROLLERSTATE_BATTERYSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SkyControllerState_BatteryState,
	sizeof(s_arg_desc_Skyctrl_SkyControllerState_BatteryState) / sizeof(s_arg_desc_Skyctrl_SkyControllerState_BatteryState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_SkyControllerState_AttitudeChanged[] = {
	{
		"Q0",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q1",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q2",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Q3",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_SkyControllerState_AttitudeChanged = {
	"Skyctrl.SkyControllerState.AttitudeChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_SKYCONTROLLERSTATE,
	ARSDK_CMD_SKYCTRL_SKYCONTROLLERSTATE_ATTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_SkyControllerState_AttitudeChanged,
	sizeof(s_arg_desc_Skyctrl_SkyControllerState_AttitudeChanged) / sizeof(s_arg_desc_Skyctrl_SkyControllerState_AttitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged = {
	"Skyctrl.AccessPointSettingsState.AccessPointSSIDChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTSSIDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged) / sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged[] = {
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged = {
	"Skyctrl.AccessPointSettingsState.AccessPointChannelChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTCHANNELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged) / sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Type,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Type) / sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Band,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Band) / sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged = {
	"Skyctrl.AccessPointSettingsState.WifiSelectionChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged) / sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged[] = {
	{
		"Security_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged_Security_type,
		sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged_Security_type) / sizeof(s_enum_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged_Security_type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged = {
	"Skyctrl.AccessPointSettingsState.WifiSecurityChanged",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_ACCESSPOINTSETTINGSSTATE,
	ARSDK_CMD_SKYCTRL_ACCESSPOINTSETTINGSSTATE_WIFISECURITYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged,
	sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged) / sizeof(s_arg_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_GamepadInfosState_GamepadControl[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_GamepadInfosState_GamepadControl_Type,
		sizeof(s_enum_desc_Skyctrl_GamepadInfosState_GamepadControl_Type) / sizeof(s_enum_desc_Skyctrl_GamepadInfosState_GamepadControl_Type[0])
	},
	{
		"Id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_GamepadControl = {
	"Skyctrl.GamepadInfosState.GamepadControl",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_GAMEPADINFOSSTATE,
	ARSDK_CMD_SKYCTRL_GAMEPADINFOSSTATE_GAMEPADCONTROL,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_GamepadInfosState_GamepadControl,
	sizeof(s_arg_desc_Skyctrl_GamepadInfosState_GamepadControl) / sizeof(s_arg_desc_Skyctrl_GamepadInfosState_GamepadControl[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_AllGamepadControlsSent = {
	"Skyctrl.GamepadInfosState.AllGamepadControlsSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_GAMEPADINFOSSTATE,
	ARSDK_CMD_SKYCTRL_GAMEPADINFOSSTATE_ALLGAMEPADCONTROLSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings[] = {
	{
		"Key_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings = {
	"Skyctrl.ButtonMappingsState.CurrentButtonMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGSSTATE_CURRENTBUTTONMAPPINGS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings,
	sizeof(s_arg_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings) / sizeof(s_arg_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent = {
	"Skyctrl.ButtonMappingsState.AllCurrentButtonMappingsSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGSSTATE_ALLCURRENTBUTTONMAPPINGSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings[] = {
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings = {
	"Skyctrl.ButtonMappingsState.AvailableButtonMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGSSTATE_AVAILABLEBUTTONMAPPINGS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings,
	sizeof(s_arg_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings) / sizeof(s_arg_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent = {
	"Skyctrl.ButtonMappingsState.AllAvailableButtonsMappingsSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_BUTTONMAPPINGSSTATE_ALLAVAILABLEBUTTONSMAPPINGSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings[] = {
	{
		"Axis_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings = {
	"Skyctrl.AxisMappingsState.CurrentAxisMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGSSTATE_CURRENTAXISMAPPINGS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings,
	sizeof(s_arg_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings) / sizeof(s_arg_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent = {
	"Skyctrl.AxisMappingsState.AllCurrentAxisMappingsSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGSSTATE_ALLCURRENTAXISMAPPINGSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings[] = {
	{
		"Mapping_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings = {
	"Skyctrl.AxisMappingsState.AvailableAxisMappings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGSSTATE_AVAILABLEAXISMAPPINGS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings,
	sizeof(s_arg_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings) / sizeof(s_arg_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent = {
	"Skyctrl.AxisMappingsState.AllAvailableAxisMappingsSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISMAPPINGSSTATE,
	ARSDK_CMD_SKYCTRL_AXISMAPPINGSSTATE_ALLAVAILABLEAXISMAPPINGSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters[] = {
	{
		"Axis_id",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Filter_uid_or_builder",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters = {
	"Skyctrl.AxisFiltersState.CurrentAxisFilters",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERSSTATE,
	ARSDK_CMD_SKYCTRL_AXISFILTERSSTATE_CURRENTAXISFILTERS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters,
	sizeof(s_arg_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters) / sizeof(s_arg_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllCurrentFiltersSent = {
	"Skyctrl.AxisFiltersState.AllCurrentFiltersSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERSSTATE,
	ARSDK_CMD_SKYCTRL_AXISFILTERSSTATE_ALLCURRENTFILTERSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_AxisFiltersState_PresetAxisFilters[] = {
	{
		"Filter_uid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_PresetAxisFilters = {
	"Skyctrl.AxisFiltersState.PresetAxisFilters",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERSSTATE,
	ARSDK_CMD_SKYCTRL_AXISFILTERSSTATE_PRESETAXISFILTERS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_AxisFiltersState_PresetAxisFilters,
	sizeof(s_arg_desc_Skyctrl_AxisFiltersState_PresetAxisFilters) / sizeof(s_arg_desc_Skyctrl_AxisFiltersState_PresetAxisFilters[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllPresetFiltersSent = {
	"Skyctrl.AxisFiltersState.AllPresetFiltersSent",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_AXISFILTERSSTATE,
	ARSDK_CMD_SKYCTRL_AXISFILTERSSTATE_ALLPRESETFILTERSSENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CoPilotingState_PilotingSource[] = {
	{
		"Source",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_CoPilotingState_PilotingSource_Source,
		sizeof(s_enum_desc_Skyctrl_CoPilotingState_PilotingSource_Source) / sizeof(s_enum_desc_Skyctrl_CoPilotingState_PilotingSource_Source[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CoPilotingState_PilotingSource = {
	"Skyctrl.CoPilotingState.PilotingSource",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COPILOTINGSTATE,
	ARSDK_CMD_SKYCTRL_COPILOTINGSTATE_PILOTINGSOURCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CoPilotingState_PilotingSource,
	sizeof(s_arg_desc_Skyctrl_CoPilotingState_PilotingSource) / sizeof(s_arg_desc_Skyctrl_CoPilotingState_PilotingSource[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationState[] = {
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationState_Status,
		sizeof(s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationState_Status) / sizeof(s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationState_Status[0])
	},
	{
		"X_Quality",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Y_Quality",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Z_Quality",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationState = {
	"Skyctrl.CalibrationState.MagnetoCalibrationState",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATIONSTATE,
	ARSDK_CMD_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationState,
	sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationState) / sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState = {
	"Skyctrl.CalibrationState.MagnetoCalibrationQualityUpdatesState",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATIONSTATE,
	ARSDK_CMD_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONQUALITYUPDATESSTATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState,
	sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState) / sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState[0])
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2_State,
		sizeof(s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2_State) / sizeof(s_enum_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2 = {
	"Skyctrl.CalibrationState.MagnetoCalibrationStateV2",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_CALIBRATIONSTATE,
	ARSDK_CMD_SKYCTRL_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATEV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2,
	sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2) / sizeof(s_arg_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_ButtonEvents_Settings = {
	"Skyctrl.ButtonEvents.Settings",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_BUTTONEVENTS,
	ARSDK_CMD_SKYCTRL_BUTTONEVENTS_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Skyctrl_CommonEventState_Shutdown[] = {
	{
		"Reason",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Skyctrl_CommonEventState_Shutdown_Reason,
		sizeof(s_enum_desc_Skyctrl_CommonEventState_Shutdown_Reason) / sizeof(s_enum_desc_Skyctrl_CommonEventState_Shutdown_Reason[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Skyctrl_CommonEventState_Shutdown = {
	"Skyctrl.CommonEventState.Shutdown",
	ARSDK_PRJ_SKYCTRL,
	ARSDK_CLS_SKYCTRL_COMMONEVENTSTATE,
	ARSDK_CMD_SKYCTRL_COMMONEVENTSTATE_SHUTDOWN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Skyctrl_CommonEventState_Shutdown,
	sizeof(s_arg_desc_Skyctrl_CommonEventState_Shutdown) / sizeof(s_arg_desc_Skyctrl_CommonEventState_Shutdown[0])
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_Piloting_MotorMode_Mode[] = {
	{"NORMAL", ARSDK_POWERUP_PILOTING_MOTORMODE_MODE_NORMAL},
	{"FORCED", ARSDK_POWERUP_PILOTING_MOTORMODE_MODE_FORCED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_PilotingState_AlertStateChanged_State[] = {
	{"NONE", ARSDK_POWERUP_PILOTINGSTATE_ALERTSTATECHANGED_STATE_NONE},
	{"CRITICAL_BATTERY", ARSDK_POWERUP_PILOTINGSTATE_ALERTSTATECHANGED_STATE_CRITICAL_BATTERY},
	{"LOW_BATTERY", ARSDK_POWERUP_PILOTINGSTATE_ALERTSTATECHANGED_STATE_LOW_BATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_PilotingState_FlyingStateChanged_State[] = {
	{"LANDED", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_LANDED},
	{"TAKINGOFF", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_TAKINGOFF},
	{"FLYING", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_FLYING},
	{"RECOVERY", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_RECOVERY},
	{"EMERGENCY", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_EMERGENCY},
	{"USERTAKEOFF", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_USERTAKEOFF},
	{"INIT", ARSDK_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED_STATE_INIT},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_PilotingState_MotorModeChanged_Mode[] = {
	{"NORMAL", ARSDK_POWERUP_PILOTINGSTATE_MOTORMODECHANGED_MODE_NORMAL},
	{"FORCED", ARSDK_POWERUP_PILOTINGSTATE_MOTORMODECHANGED_MODE_FORCED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_PilotingSettings_Set_Setting[] = {
	{"MAX_ROLL", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_MAX_ROLL},
	{"ROLL_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ROLL_KP},
	{"ROLL_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ROLL_RATE_KP},
	{"MAX_PITCH", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_MAX_PITCH},
	{"MIN_PITCH", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_MIN_PITCH},
	{"PITCH_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_PITCH_KP},
	{"PITCH_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_PITCH_RATE_KP},
	{"YAW_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_YAW_KP},
	{"YAW_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_YAW_RATE_KP},
	{"ROLL_TO_THROTTLE_RATE", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ROLL_TO_THROTTLE_RATE},
	{"ANGLE_OF_ATTACK", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ANGLE_OF_ATTACK},
	{"ALT_HOLD", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ALT_HOLD},
	{"ALT_HOLD_THROTTLE", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_ALT_HOLD_THROTTLE},
	{"DR_RSSI_EDGE", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_DR_RSSI_EDGE},
	{"RECOVERY_DURATION_LIMIT", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_RECOVERY_DURATION_LIMIT},
	{"WIND_SPEED", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_WIND_SPEED},
	{"PLANE_SPEED", ARSDK_POWERUP_PILOTINGSETTINGS_SET_SETTING_PLANE_SPEED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_PilotingSettingsState_SettingChanged_Setting[] = {
	{"MAX_ROLL", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_MAX_ROLL},
	{"ROLL_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ROLL_KP},
	{"ROLL_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ROLL_RATE_KP},
	{"MAX_PITCH", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_MAX_PITCH},
	{"MIN_PITCH", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_MIN_PITCH},
	{"PITCH_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_PITCH_KP},
	{"PITCH_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_PITCH_RATE_KP},
	{"YAW_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_YAW_KP},
	{"YAW_RATE_KP", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_YAW_RATE_KP},
	{"ROLL_TO_THROTTLE_RATE", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ROLL_TO_THROTTLE_RATE},
	{"ANGLE_OF_ATTACK", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ANGLE_OF_ATTACK},
	{"ALT_HOLD", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ALT_HOLD},
	{"ALT_HOLD_THROTTLE", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_ALT_HOLD_THROTTLE},
	{"DR_RSSI_EDGE", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_DR_RSSI_EDGE},
	{"RECOVERY_DURATION_LIMIT", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_RECOVERY_DURATION_LIMIT},
	{"WIND_SPEED", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_WIND_SPEED},
	{"PLANE_SPEED", ARSDK_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED_SETTING_PLANE_SPEED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecord_VideoV2_Record[] = {
	{"STOP", ARSDK_POWERUP_MEDIARECORD_VIDEOV2_RECORD_STOP},
	{"START", ARSDK_POWERUP_MEDIARECORD_VIDEOV2_RECORD_START},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_State[] = {
	{"READY", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_READY},
	{"BUSY", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_BUSY},
	{"NOTAVAILABLE", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_Error[] = {
	{"OK", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_State[] = {
	{"STOPPED", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STOPPED},
	{"STARTED", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_STARTED},
	{"NOTAVAILABLE", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_STATE_NOTAVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_Error[] = {
	{"OK", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_OK},
	{"UNKNOWN", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_UNKNOWN},
	{"CAMERA_KO", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_CAMERA_KO},
	{"MEMORYFULL", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Event[] = {
	{"TAKEN", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_TAKEN},
	{"FAILED", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Error[] = {
	{"OK", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED_ERROR_LOWBATTERY},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Event[] = {
	{"START", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_START},
	{"STOP", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_STOP},
	{"FAILED", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_EVENT_FAILED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Error[] = {
	{"OK", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_OK},
	{"UNKNOWN", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_UNKNOWN},
	{"BUSY", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_BUSY},
	{"NOTAVAILABLE", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_NOTAVAILABLE},
	{"MEMORYFULL", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_MEMORYFULL},
	{"LOWBATTERY", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_LOWBATTERY},
	{"AUTOSTOPPED", ARSDK_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED_ERROR_AUTOSTOPPED},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkSettings_WifiSelection_Type[] = {
	{"AUTO", ARSDK_POWERUP_NETWORKSETTINGS_WIFISELECTION_TYPE_AUTO},
	{"MANUAL", ARSDK_POWERUP_NETWORKSETTINGS_WIFISELECTION_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkSettings_WifiSelection_Band[] = {
	{"2_4GHZ", ARSDK_POWERUP_NETWORKSETTINGS_WIFISELECTION_BAND_2_4GHZ},
	{"5GHZ", ARSDK_POWERUP_NETWORKSETTINGS_WIFISELECTION_BAND_5GHZ},
	{"ALL", ARSDK_POWERUP_NETWORKSETTINGS_WIFISELECTION_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Type[] = {
	{"AUTO_ALL", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_ALL},
	{"AUTO_2_4GHZ", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_2_4GHZ},
	{"AUTO_5GHZ", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_AUTO_5GHZ},
	{"MANUAL", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Band[] = {
	{"2_4GHZ", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_5GHZ},
	{"ALL", ARSDK_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_Network_WifiScan_Band[] = {
	{"2_4GHZ", ARSDK_POWERUP_NETWORK_WIFISCAN_BAND_2_4GHZ},
	{"5GHZ", ARSDK_POWERUP_NETWORK_WIFISCAN_BAND_5GHZ},
	{"ALL", ARSDK_POWERUP_NETWORK_WIFISCAN_BAND_ALL},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkState_WifiScanListChanged_Band[] = {
	{"2_4GHZ", ARSDK_POWERUP_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_POWERUP_NETWORKSTATE_WIFISCANLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_NetworkState_WifiAuthChannelListChanged_Band[] = {
	{"2_4GHZ", ARSDK_POWERUP_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_2_4GHZ},
	{"5GHZ", ARSDK_POWERUP_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED_BAND_5GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_MediaStreamingState_VideoEnableChanged_Enabled[] = {
	{"ENABLED", ARSDK_POWERUP_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ENABLED},
	{"DISABLED", ARSDK_POWERUP_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_DISABLED},
	{"ERROR", ARSDK_POWERUP_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED_ENABLED_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_VideoSettings_VideoMode_Mode[] = {
	{"QUALITY", ARSDK_POWERUP_VIDEOSETTINGS_VIDEOMODE_MODE_QUALITY},
	{"PERFORMANCE", ARSDK_POWERUP_VIDEOSETTINGS_VIDEOMODE_MODE_PERFORMANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Powerup_VideoSettingsState_VideoModeChanged_Mode[] = {
	{"QUALITY", ARSDK_POWERUP_VIDEOSETTINGSSTATE_VIDEOMODECHANGED_MODE_QUALITY},
	{"PERFORMANCE", ARSDK_POWERUP_VIDEOSETTINGSSTATE_VIDEOMODECHANGED_MODE_PERFORMANCE},
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_Piloting_PCMD[] = {
	{
		"Flag",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Throttle",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Piloting_PCMD = {
	"Powerup.Piloting.PCMD",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTING,
	ARSDK_CMD_POWERUP_PILOTING_PCMD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_Piloting_PCMD,
	sizeof(s_arg_desc_Powerup_Piloting_PCMD) / sizeof(s_arg_desc_Powerup_Piloting_PCMD[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_Piloting_UserTakeOff[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Piloting_UserTakeOff = {
	"Powerup.Piloting.UserTakeOff",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTING,
	ARSDK_CMD_POWERUP_PILOTING_USERTAKEOFF,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_Piloting_UserTakeOff,
	sizeof(s_arg_desc_Powerup_Piloting_UserTakeOff) / sizeof(s_arg_desc_Powerup_Piloting_UserTakeOff[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_Piloting_MotorMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_Piloting_MotorMode_Mode,
		sizeof(s_enum_desc_Powerup_Piloting_MotorMode_Mode) / sizeof(s_enum_desc_Powerup_Piloting_MotorMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Piloting_MotorMode = {
	"Powerup.Piloting.MotorMode",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTING,
	ARSDK_CMD_POWERUP_PILOTING_MOTORMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_Piloting_MotorMode,
	sizeof(s_arg_desc_Powerup_Piloting_MotorMode) / sizeof(s_arg_desc_Powerup_Piloting_MotorMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingSettings_Set[] = {
	{
		"Setting",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_PilotingSettings_Set_Setting,
		sizeof(s_enum_desc_Powerup_PilotingSettings_Set_Setting) / sizeof(s_enum_desc_Powerup_PilotingSettings_Set_Setting[0])
	},
	{
		"Value",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingSettings_Set = {
	"Powerup.PilotingSettings.Set",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSETTINGS,
	ARSDK_CMD_POWERUP_PILOTINGSETTINGS_SET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingSettings_Set,
	sizeof(s_arg_desc_Powerup_PilotingSettings_Set) / sizeof(s_arg_desc_Powerup_PilotingSettings_Set[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecord_PictureV2 = {
	"Powerup.MediaRecord.PictureV2",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORD,
	ARSDK_CMD_POWERUP_MEDIARECORD_PICTUREV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaRecord_VideoV2[] = {
	{
		"Record",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecord_VideoV2_Record,
		sizeof(s_enum_desc_Powerup_MediaRecord_VideoV2_Record) / sizeof(s_enum_desc_Powerup_MediaRecord_VideoV2_Record[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecord_VideoV2 = {
	"Powerup.MediaRecord.VideoV2",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORD,
	ARSDK_CMD_POWERUP_MEDIARECORD_VIDEOV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaRecord_VideoV2,
	sizeof(s_arg_desc_Powerup_MediaRecord_VideoV2) / sizeof(s_arg_desc_Powerup_MediaRecord_VideoV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_NetworkSettings_WifiSelection[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkSettings_WifiSelection_Type,
		sizeof(s_enum_desc_Powerup_NetworkSettings_WifiSelection_Type) / sizeof(s_enum_desc_Powerup_NetworkSettings_WifiSelection_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkSettings_WifiSelection_Band,
		sizeof(s_enum_desc_Powerup_NetworkSettings_WifiSelection_Band) / sizeof(s_enum_desc_Powerup_NetworkSettings_WifiSelection_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkSettings_WifiSelection = {
	"Powerup.NetworkSettings.WifiSelection",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSETTINGS,
	ARSDK_CMD_POWERUP_NETWORKSETTINGS_WIFISELECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_NetworkSettings_WifiSelection,
	sizeof(s_arg_desc_Powerup_NetworkSettings_WifiSelection) / sizeof(s_arg_desc_Powerup_NetworkSettings_WifiSelection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_Network_WifiScan[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_Network_WifiScan_Band,
		sizeof(s_enum_desc_Powerup_Network_WifiScan_Band) / sizeof(s_enum_desc_Powerup_Network_WifiScan_Band[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Network_WifiScan = {
	"Powerup.Network.WifiScan",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORK,
	ARSDK_CMD_POWERUP_NETWORK_WIFISCAN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_Network_WifiScan,
	sizeof(s_arg_desc_Powerup_Network_WifiScan) / sizeof(s_arg_desc_Powerup_Network_WifiScan[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Network_WifiAuthChannel = {
	"Powerup.Network.WifiAuthChannel",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORK,
	ARSDK_CMD_POWERUP_NETWORK_WIFIAUTHCHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaStreaming_VideoEnable[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaStreaming_VideoEnable = {
	"Powerup.MediaStreaming.VideoEnable",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIASTREAMING,
	ARSDK_CMD_POWERUP_MEDIASTREAMING_VIDEOENABLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaStreaming_VideoEnable,
	sizeof(s_arg_desc_Powerup_MediaStreaming_VideoEnable) / sizeof(s_arg_desc_Powerup_MediaStreaming_VideoEnable[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_VideoSettings_Autorecord[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_VideoSettings_Autorecord = {
	"Powerup.VideoSettings.Autorecord",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_VIDEOSETTINGS,
	ARSDK_CMD_POWERUP_VIDEOSETTINGS_AUTORECORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_VideoSettings_Autorecord,
	sizeof(s_arg_desc_Powerup_VideoSettings_Autorecord) / sizeof(s_arg_desc_Powerup_VideoSettings_Autorecord[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_VideoSettings_VideoMode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_VideoSettings_VideoMode_Mode,
		sizeof(s_enum_desc_Powerup_VideoSettings_VideoMode_Mode) / sizeof(s_enum_desc_Powerup_VideoSettings_VideoMode_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_VideoSettings_VideoMode = {
	"Powerup.VideoSettings.VideoMode",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_VIDEOSETTINGS,
	ARSDK_CMD_POWERUP_VIDEOSETTINGS_VIDEOMODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_VideoSettings_VideoMode,
	sizeof(s_arg_desc_Powerup_VideoSettings_VideoMode) / sizeof(s_arg_desc_Powerup_VideoSettings_VideoMode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_Sounds_Buzz[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_Sounds_Buzz = {
	"Powerup.Sounds.Buzz",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_SOUNDS,
	ARSDK_CMD_POWERUP_SOUNDS_BUZZ,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_Sounds_Buzz,
	sizeof(s_arg_desc_Powerup_Sounds_Buzz) / sizeof(s_arg_desc_Powerup_Sounds_Buzz[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingState_AlertStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_PilotingState_AlertStateChanged_State,
		sizeof(s_enum_desc_Powerup_PilotingState_AlertStateChanged_State) / sizeof(s_enum_desc_Powerup_PilotingState_AlertStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingState_AlertStateChanged = {
	"Powerup.PilotingState.AlertStateChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSTATE_ALERTSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingState_AlertStateChanged,
	sizeof(s_arg_desc_Powerup_PilotingState_AlertStateChanged) / sizeof(s_arg_desc_Powerup_PilotingState_AlertStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingState_FlyingStateChanged[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_PilotingState_FlyingStateChanged_State,
		sizeof(s_enum_desc_Powerup_PilotingState_FlyingStateChanged_State) / sizeof(s_enum_desc_Powerup_PilotingState_FlyingStateChanged_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingState_FlyingStateChanged = {
	"Powerup.PilotingState.FlyingStateChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSTATE_FLYINGSTATECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingState_FlyingStateChanged,
	sizeof(s_arg_desc_Powerup_PilotingState_FlyingStateChanged) / sizeof(s_arg_desc_Powerup_PilotingState_FlyingStateChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingState_MotorModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_PilotingState_MotorModeChanged_Mode,
		sizeof(s_enum_desc_Powerup_PilotingState_MotorModeChanged_Mode) / sizeof(s_enum_desc_Powerup_PilotingState_MotorModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingState_MotorModeChanged = {
	"Powerup.PilotingState.MotorModeChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSTATE_MOTORMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingState_MotorModeChanged,
	sizeof(s_arg_desc_Powerup_PilotingState_MotorModeChanged) / sizeof(s_arg_desc_Powerup_PilotingState_MotorModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingState_AttitudeChanged[] = {
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingState_AttitudeChanged = {
	"Powerup.PilotingState.AttitudeChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSTATE_ATTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingState_AttitudeChanged,
	sizeof(s_arg_desc_Powerup_PilotingState_AttitudeChanged) / sizeof(s_arg_desc_Powerup_PilotingState_AttitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingState_AltitudeChanged[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingState_AltitudeChanged = {
	"Powerup.PilotingState.AltitudeChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSTATE_ALTITUDECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingState_AltitudeChanged,
	sizeof(s_arg_desc_Powerup_PilotingState_AltitudeChanged) / sizeof(s_arg_desc_Powerup_PilotingState_AltitudeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_PilotingSettingsState_SettingChanged[] = {
	{
		"Setting",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_PilotingSettingsState_SettingChanged_Setting,
		sizeof(s_enum_desc_Powerup_PilotingSettingsState_SettingChanged_Setting) / sizeof(s_enum_desc_Powerup_PilotingSettingsState_SettingChanged_Setting[0])
	},
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_PilotingSettingsState_SettingChanged = {
	"Powerup.PilotingSettingsState.SettingChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_PILOTINGSETTINGSSTATE,
	ARSDK_CMD_POWERUP_PILOTINGSETTINGSSTATE_SETTINGCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_PilotingSettingsState_SettingChanged,
	sizeof(s_arg_desc_Powerup_PilotingSettingsState_SettingChanged) / sizeof(s_arg_desc_Powerup_PilotingSettingsState_SettingChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaRecordState_PictureStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_State,
		sizeof(s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_State) / sizeof(s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_Error,
		sizeof(s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_Error) / sizeof(s_enum_desc_Powerup_MediaRecordState_PictureStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecordState_PictureStateChangedV2 = {
	"Powerup.MediaRecordState.PictureStateChangedV2",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORDSTATE,
	ARSDK_CMD_POWERUP_MEDIARECORDSTATE_PICTURESTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaRecordState_PictureStateChangedV2,
	sizeof(s_arg_desc_Powerup_MediaRecordState_PictureStateChangedV2) / sizeof(s_arg_desc_Powerup_MediaRecordState_PictureStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaRecordState_VideoStateChangedV2[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_State,
		sizeof(s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_State) / sizeof(s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_State[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_Error,
		sizeof(s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_Error) / sizeof(s_enum_desc_Powerup_MediaRecordState_VideoStateChangedV2_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecordState_VideoStateChangedV2 = {
	"Powerup.MediaRecordState.VideoStateChangedV2",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORDSTATE,
	ARSDK_CMD_POWERUP_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaRecordState_VideoStateChangedV2,
	sizeof(s_arg_desc_Powerup_MediaRecordState_VideoStateChangedV2) / sizeof(s_arg_desc_Powerup_MediaRecordState_VideoStateChangedV2[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaRecordEvent_PictureEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Event,
		sizeof(s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Event) / sizeof(s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Error,
		sizeof(s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Error) / sizeof(s_enum_desc_Powerup_MediaRecordEvent_PictureEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecordEvent_PictureEventChanged = {
	"Powerup.MediaRecordEvent.PictureEventChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORDEVENT,
	ARSDK_CMD_POWERUP_MEDIARECORDEVENT_PICTUREEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaRecordEvent_PictureEventChanged,
	sizeof(s_arg_desc_Powerup_MediaRecordEvent_PictureEventChanged) / sizeof(s_arg_desc_Powerup_MediaRecordEvent_PictureEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaRecordEvent_VideoEventChanged[] = {
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Event,
		sizeof(s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Event) / sizeof(s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Event[0])
	},
	{
		"Error",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Error,
		sizeof(s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Error) / sizeof(s_enum_desc_Powerup_MediaRecordEvent_VideoEventChanged_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaRecordEvent_VideoEventChanged = {
	"Powerup.MediaRecordEvent.VideoEventChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIARECORDEVENT,
	ARSDK_CMD_POWERUP_MEDIARECORDEVENT_VIDEOEVENTCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaRecordEvent_VideoEventChanged,
	sizeof(s_arg_desc_Powerup_MediaRecordEvent_VideoEventChanged) / sizeof(s_arg_desc_Powerup_MediaRecordEvent_VideoEventChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_NetworkSettingsState_WifiSelectionChanged[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Type,
		sizeof(s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Type) / sizeof(s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Band,
		sizeof(s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Band) / sizeof(s_enum_desc_Powerup_NetworkSettingsState_WifiSelectionChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkSettingsState_WifiSelectionChanged = {
	"Powerup.NetworkSettingsState.WifiSelectionChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSETTINGSSTATE,
	ARSDK_CMD_POWERUP_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_NetworkSettingsState_WifiSelectionChanged,
	sizeof(s_arg_desc_Powerup_NetworkSettingsState_WifiSelectionChanged) / sizeof(s_arg_desc_Powerup_NetworkSettingsState_WifiSelectionChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_NetworkState_WifiScanListChanged[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkState_WifiScanListChanged_Band,
		sizeof(s_enum_desc_Powerup_NetworkState_WifiScanListChanged_Band) / sizeof(s_enum_desc_Powerup_NetworkState_WifiScanListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkState_WifiScanListChanged = {
	"Powerup.NetworkState.WifiScanListChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSTATE,
	ARSDK_CMD_POWERUP_NETWORKSTATE_WIFISCANLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_NetworkState_WifiScanListChanged,
	sizeof(s_arg_desc_Powerup_NetworkState_WifiScanListChanged) / sizeof(s_arg_desc_Powerup_NetworkState_WifiScanListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiScanChanged = {
	"Powerup.NetworkState.AllWifiScanChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSTATE,
	ARSDK_CMD_POWERUP_NETWORKSTATE_ALLWIFISCANCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_NetworkState_WifiAuthChannelListChanged[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_NetworkState_WifiAuthChannelListChanged_Band,
		sizeof(s_enum_desc_Powerup_NetworkState_WifiAuthChannelListChanged_Band) / sizeof(s_enum_desc_Powerup_NetworkState_WifiAuthChannelListChanged_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"In_or_out",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkState_WifiAuthChannelListChanged = {
	"Powerup.NetworkState.WifiAuthChannelListChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSTATE,
	ARSDK_CMD_POWERUP_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_NetworkState_WifiAuthChannelListChanged,
	sizeof(s_arg_desc_Powerup_NetworkState_WifiAuthChannelListChanged) / sizeof(s_arg_desc_Powerup_NetworkState_WifiAuthChannelListChanged[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiAuthChannelChanged = {
	"Powerup.NetworkState.AllWifiAuthChannelChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSTATE,
	ARSDK_CMD_POWERUP_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_NetworkState_LinkQualityChanged[] = {
	{
		"Quality",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_NetworkState_LinkQualityChanged = {
	"Powerup.NetworkState.LinkQualityChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_NETWORKSTATE,
	ARSDK_CMD_POWERUP_NETWORKSTATE_LINKQUALITYCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_NetworkState_LinkQualityChanged,
	sizeof(s_arg_desc_Powerup_NetworkState_LinkQualityChanged) / sizeof(s_arg_desc_Powerup_NetworkState_LinkQualityChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_MediaStreamingState_VideoEnableChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_MediaStreamingState_VideoEnableChanged_Enabled,
		sizeof(s_enum_desc_Powerup_MediaStreamingState_VideoEnableChanged_Enabled) / sizeof(s_enum_desc_Powerup_MediaStreamingState_VideoEnableChanged_Enabled[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_MediaStreamingState_VideoEnableChanged = {
	"Powerup.MediaStreamingState.VideoEnableChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_MEDIASTREAMINGSTATE,
	ARSDK_CMD_POWERUP_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_MediaStreamingState_VideoEnableChanged,
	sizeof(s_arg_desc_Powerup_MediaStreamingState_VideoEnableChanged) / sizeof(s_arg_desc_Powerup_MediaStreamingState_VideoEnableChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_VideoSettingsState_AutorecordChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_VideoSettingsState_AutorecordChanged = {
	"Powerup.VideoSettingsState.AutorecordChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_VIDEOSETTINGSSTATE,
	ARSDK_CMD_POWERUP_VIDEOSETTINGSSTATE_AUTORECORDCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_VideoSettingsState_AutorecordChanged,
	sizeof(s_arg_desc_Powerup_VideoSettingsState_AutorecordChanged) / sizeof(s_arg_desc_Powerup_VideoSettingsState_AutorecordChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_VideoSettingsState_VideoModeChanged[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Powerup_VideoSettingsState_VideoModeChanged_Mode,
		sizeof(s_enum_desc_Powerup_VideoSettingsState_VideoModeChanged_Mode) / sizeof(s_enum_desc_Powerup_VideoSettingsState_VideoModeChanged_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_VideoSettingsState_VideoModeChanged = {
	"Powerup.VideoSettingsState.VideoModeChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_VIDEOSETTINGSSTATE,
	ARSDK_CMD_POWERUP_VIDEOSETTINGSSTATE_VIDEOMODECHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_VideoSettingsState_VideoModeChanged,
	sizeof(s_arg_desc_Powerup_VideoSettingsState_VideoModeChanged) / sizeof(s_arg_desc_Powerup_VideoSettingsState_VideoModeChanged[0])
};

static const struct arsdk_arg_desc s_arg_desc_Powerup_SoundsState_BuzzChanged[] = {
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Powerup_SoundsState_BuzzChanged = {
	"Powerup.SoundsState.BuzzChanged",
	ARSDK_PRJ_POWERUP,
	ARSDK_CLS_POWERUP_SOUNDSSTATE,
	ARSDK_CMD_POWERUP_SOUNDSSTATE_BUZZCHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Powerup_SoundsState_BuzzChanged,
	sizeof(s_arg_desc_Powerup_SoundsState_BuzzChanged) / sizeof(s_arg_desc_Powerup_SoundsState_BuzzChanged[0])
};

static const struct arsdk_enum_desc s_enum_desc_Generic_List_flags[] = {
	{"FIRST", ARSDK_GENERIC_LIST_FLAGS_FIRST},
	{"LAST", ARSDK_GENERIC_LIST_FLAGS_LAST},
	{"EMPTY", ARSDK_GENERIC_LIST_FLAGS_EMPTY},
	{"REMOVE", ARSDK_GENERIC_LIST_FLAGS_REMOVE},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Generic_Default = {
	"Generic.Default",
	ARSDK_PRJ_GENERIC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GENERIC_DEFAULT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Mode[] = {
	{"NONE", ARSDK_FOLLOW_ME_MODE_NONE},
	{"LOOK_AT", ARSDK_FOLLOW_ME_MODE_LOOK_AT},
	{"GEOGRAPHIC", ARSDK_FOLLOW_ME_MODE_GEOGRAPHIC},
	{"RELATIVE", ARSDK_FOLLOW_ME_MODE_RELATIVE},
	{"LEASH", ARSDK_FOLLOW_ME_MODE_LEASH},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Behavior[] = {
	{"IDLE", ARSDK_FOLLOW_ME_BEHAVIOR_IDLE},
	{"FOLLOW", ARSDK_FOLLOW_ME_BEHAVIOR_FOLLOW},
	{"LOOK_AT", ARSDK_FOLLOW_ME_BEHAVIOR_LOOK_AT},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Input[] = {
	{"DRONE_CALIBRATED", ARSDK_FOLLOW_ME_INPUT_DRONE_CALIBRATED},
	{"DRONE_GPS_GOOD_ACCURACY", ARSDK_FOLLOW_ME_INPUT_DRONE_GPS_GOOD_ACCURACY},
	{"TARGET_GPS_GOOD_ACCURACY", ARSDK_FOLLOW_ME_INPUT_TARGET_GPS_GOOD_ACCURACY},
	{"TARGET_BAROMETER_OK", ARSDK_FOLLOW_ME_INPUT_TARGET_BAROMETER_OK},
	{"DRONE_FAR_ENOUGH", ARSDK_FOLLOW_ME_INPUT_DRONE_FAR_ENOUGH},
	{"DRONE_HIGH_ENOUGH", ARSDK_FOLLOW_ME_INPUT_DRONE_HIGH_ENOUGH},
	{"IMAGE_DETECTION", ARSDK_FOLLOW_ME_INPUT_IMAGE_DETECTION},
	{"TARGET_GOOD_SPEED", ARSDK_FOLLOW_ME_INPUT_TARGET_GOOD_SPEED},
	{"DRONE_CLOSE_ENOUGH", ARSDK_FOLLOW_ME_INPUT_DRONE_CLOSE_ENOUGH},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Geo_rel_configure_param[] = {
	{"DISTANCE", ARSDK_FOLLOW_ME_GEO_REL_CONFIGURE_PARAM_DISTANCE},
	{"ELEVATION", ARSDK_FOLLOW_ME_GEO_REL_CONFIGURE_PARAM_ELEVATION},
	{"AZIMUTH", ARSDK_FOLLOW_ME_GEO_REL_CONFIGURE_PARAM_AZIMUTH},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Animation[] = {
	{"NONE", ARSDK_FOLLOW_ME_ANIMATION_NONE},
	{"HELICOID", ARSDK_FOLLOW_ME_ANIMATION_HELICOID},
	{"SWING", ARSDK_FOLLOW_ME_ANIMATION_SWING},
	{"BOOMERANG", ARSDK_FOLLOW_ME_ANIMATION_BOOMERANG},
	{"CANDLE", ARSDK_FOLLOW_ME_ANIMATION_CANDLE},
	{"DOLLY_SLIDE", ARSDK_FOLLOW_ME_ANIMATION_DOLLY_SLIDE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Helicoid_configure_param[] = {
	{"SPEED", ARSDK_FOLLOW_ME_HELICOID_CONFIGURE_PARAM_SPEED},
	{"REVOLUTION_NB", ARSDK_FOLLOW_ME_HELICOID_CONFIGURE_PARAM_REVOLUTION_NB},
	{"VERTICAL_DISTANCE", ARSDK_FOLLOW_ME_HELICOID_CONFIGURE_PARAM_VERTICAL_DISTANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Swing_configure_param[] = {
	{"SPEED", ARSDK_FOLLOW_ME_SWING_CONFIGURE_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_FOLLOW_ME_SWING_CONFIGURE_PARAM_VERTICAL_DISTANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Boomerang_configure_param[] = {
	{"SPEED", ARSDK_FOLLOW_ME_BOOMERANG_CONFIGURE_PARAM_SPEED},
	{"DISTANCE", ARSDK_FOLLOW_ME_BOOMERANG_CONFIGURE_PARAM_DISTANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Candle_configure_param[] = {
	{"SPEED", ARSDK_FOLLOW_ME_CANDLE_CONFIGURE_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_FOLLOW_ME_CANDLE_CONFIGURE_PARAM_VERTICAL_DISTANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Dolly_slide_configure_param[] = {
	{"SPEED", ARSDK_FOLLOW_ME_DOLLY_SLIDE_CONFIGURE_PARAM_SPEED},
	{"ANGLE", ARSDK_FOLLOW_ME_DOLLY_SLIDE_CONFIGURE_PARAM_ANGLE},
	{"HORIZONTAL_DISTANCE", ARSDK_FOLLOW_ME_DOLLY_SLIDE_CONFIGURE_PARAM_HORIZONTAL_DISTANCE},
};

static const struct arsdk_enum_desc s_enum_desc_Follow_me_Image_detection_status[] = {
	{"NONE", ARSDK_FOLLOW_ME_IMAGE_DETECTION_STATUS_NONE},
	{"OK", ARSDK_FOLLOW_ME_IMAGE_DETECTION_STATUS_OK},
	{"LOST", ARSDK_FOLLOW_ME_IMAGE_DETECTION_STATUS_LOST},
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Mode,
		sizeof(s_enum_desc_Follow_me_Mode) / sizeof(s_enum_desc_Follow_me_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start = {
	"Follow_me.Start",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start,
	sizeof(s_arg_desc_Follow_me_Start) / sizeof(s_arg_desc_Follow_me_Start[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Stop = {
	"Follow_me.Stop",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_STOP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Configure_geographic[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Configure_geographic = {
	"Follow_me.Configure_geographic",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_CONFIGURE_GEOGRAPHIC,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Configure_geographic,
	sizeof(s_arg_desc_Follow_me_Configure_geographic) / sizeof(s_arg_desc_Follow_me_Configure_geographic[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Configure_relative[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Configure_relative = {
	"Follow_me.Configure_relative",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_CONFIGURE_RELATIVE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Configure_relative,
	sizeof(s_arg_desc_Follow_me_Configure_relative) / sizeof(s_arg_desc_Follow_me_Configure_relative[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Configure_leash[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Configure_leash = {
	"Follow_me.Configure_leash",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_CONFIGURE_LEASH,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Configure_leash,
	sizeof(s_arg_desc_Follow_me_Configure_leash) / sizeof(s_arg_desc_Follow_me_Configure_leash[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Stop_animation = {
	"Follow_me.Stop_animation",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_STOP_ANIMATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start_helicoid_anim[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Helicoid_configure_param,
		sizeof(s_enum_desc_Follow_me_Helicoid_configure_param) / sizeof(s_enum_desc_Follow_me_Helicoid_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Revolution_number",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start_helicoid_anim = {
	"Follow_me.Start_helicoid_anim",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START_HELICOID_ANIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start_helicoid_anim,
	sizeof(s_arg_desc_Follow_me_Start_helicoid_anim) / sizeof(s_arg_desc_Follow_me_Start_helicoid_anim[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start_swing_anim[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Swing_configure_param,
		sizeof(s_enum_desc_Follow_me_Swing_configure_param) / sizeof(s_enum_desc_Follow_me_Swing_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start_swing_anim = {
	"Follow_me.Start_swing_anim",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START_SWING_ANIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start_swing_anim,
	sizeof(s_arg_desc_Follow_me_Start_swing_anim) / sizeof(s_arg_desc_Follow_me_Start_swing_anim[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start_boomerang_anim[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Boomerang_configure_param,
		sizeof(s_enum_desc_Follow_me_Boomerang_configure_param) / sizeof(s_enum_desc_Follow_me_Boomerang_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start_boomerang_anim = {
	"Follow_me.Start_boomerang_anim",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START_BOOMERANG_ANIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start_boomerang_anim,
	sizeof(s_arg_desc_Follow_me_Start_boomerang_anim) / sizeof(s_arg_desc_Follow_me_Start_boomerang_anim[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start_candle_anim[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Candle_configure_param,
		sizeof(s_enum_desc_Follow_me_Candle_configure_param) / sizeof(s_enum_desc_Follow_me_Candle_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start_candle_anim = {
	"Follow_me.Start_candle_anim",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START_CANDLE_ANIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start_candle_anim,
	sizeof(s_arg_desc_Follow_me_Start_candle_anim) / sizeof(s_arg_desc_Follow_me_Start_candle_anim[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Start_dolly_slide_anim[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Dolly_slide_configure_param,
		sizeof(s_enum_desc_Follow_me_Dolly_slide_configure_param) / sizeof(s_enum_desc_Follow_me_Dolly_slide_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Horizontal_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Start_dolly_slide_anim = {
	"Follow_me.Start_dolly_slide_anim",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_START_DOLLY_SLIDE_ANIM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Start_dolly_slide_anim,
	sizeof(s_arg_desc_Follow_me_Start_dolly_slide_anim) / sizeof(s_arg_desc_Follow_me_Start_dolly_slide_anim[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_framing_position[] = {
	{
		"Horizontal",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Vertical",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_framing_position = {
	"Follow_me.Target_framing_position",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_FRAMING_POSITION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_framing_position,
	sizeof(s_arg_desc_Follow_me_Target_framing_position) / sizeof(s_arg_desc_Follow_me_Target_framing_position[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_image_detection[] = {
	{
		"Target_azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Target_elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Change_of_scale",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Confidence_index",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Is_new_selection",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Timestamp",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_image_detection = {
	"Follow_me.Target_image_detection",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_IMAGE_DETECTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_image_detection,
	sizeof(s_arg_desc_Follow_me_Target_image_detection) / sizeof(s_arg_desc_Follow_me_Target_image_detection[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Set_target_is_controller[] = {
	{
		"Target_is_controller",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Set_target_is_controller = {
	"Follow_me.Set_target_is_controller",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_SET_TARGET_IS_CONTROLLER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Set_target_is_controller,
	sizeof(s_arg_desc_Follow_me_Set_target_is_controller) / sizeof(s_arg_desc_Follow_me_Set_target_is_controller[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_State[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Mode,
		sizeof(s_enum_desc_Follow_me_Mode) / sizeof(s_enum_desc_Follow_me_Mode[0])
	},
	{
		"Behavior",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Behavior,
		sizeof(s_enum_desc_Follow_me_Behavior) / sizeof(s_enum_desc_Follow_me_Behavior[0])
	},
	{
		"Animation",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Animation,
		sizeof(s_enum_desc_Follow_me_Animation) / sizeof(s_enum_desc_Follow_me_Animation[0])
	},
	{
		"Animation_available",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Follow_me_Animation,
		sizeof(s_enum_desc_Follow_me_Animation) / sizeof(s_enum_desc_Follow_me_Animation[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_State = {
	"Follow_me.State",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_State,
	sizeof(s_arg_desc_Follow_me_State) / sizeof(s_arg_desc_Follow_me_State[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Mode_info[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Mode,
		sizeof(s_enum_desc_Follow_me_Mode) / sizeof(s_enum_desc_Follow_me_Mode[0])
	},
	{
		"Missing_requirements",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Follow_me_Input,
		sizeof(s_enum_desc_Follow_me_Input) / sizeof(s_enum_desc_Follow_me_Input[0])
	},
	{
		"Improvements",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Follow_me_Input,
		sizeof(s_enum_desc_Follow_me_Input) / sizeof(s_enum_desc_Follow_me_Input[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Mode_info = {
	"Follow_me.Mode_info",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_MODE_INFO,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Mode_info,
	sizeof(s_arg_desc_Follow_me_Mode_info) / sizeof(s_arg_desc_Follow_me_Mode_info[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Geographic_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Geographic_config = {
	"Follow_me.Geographic_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_GEOGRAPHIC_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Geographic_config,
	sizeof(s_arg_desc_Follow_me_Geographic_config) / sizeof(s_arg_desc_Follow_me_Geographic_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Relative_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Relative_config = {
	"Follow_me.Relative_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_RELATIVE_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Relative_config,
	sizeof(s_arg_desc_Follow_me_Relative_config) / sizeof(s_arg_desc_Follow_me_Relative_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Leash_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Geo_rel_configure_param,
		sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param) / sizeof(s_enum_desc_Follow_me_Geo_rel_configure_param[0])
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Elevation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Azimuth",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Leash_config = {
	"Follow_me.Leash_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_LEASH_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Leash_config,
	sizeof(s_arg_desc_Follow_me_Leash_config) / sizeof(s_arg_desc_Follow_me_Leash_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_trajectory[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"North_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"East_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Down_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_trajectory = {
	"Follow_me.Target_trajectory",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_TRAJECTORY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_trajectory,
	sizeof(s_arg_desc_Follow_me_Target_trajectory) / sizeof(s_arg_desc_Follow_me_Target_trajectory[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Helicoid_anim_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Helicoid_configure_param,
		sizeof(s_enum_desc_Follow_me_Helicoid_configure_param) / sizeof(s_enum_desc_Follow_me_Helicoid_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Revolution_nb",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Helicoid_anim_config = {
	"Follow_me.Helicoid_anim_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_HELICOID_ANIM_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Helicoid_anim_config,
	sizeof(s_arg_desc_Follow_me_Helicoid_anim_config) / sizeof(s_arg_desc_Follow_me_Helicoid_anim_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Swing_anim_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Swing_configure_param,
		sizeof(s_enum_desc_Follow_me_Swing_configure_param) / sizeof(s_enum_desc_Follow_me_Swing_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Swing_anim_config = {
	"Follow_me.Swing_anim_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_SWING_ANIM_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Swing_anim_config,
	sizeof(s_arg_desc_Follow_me_Swing_anim_config) / sizeof(s_arg_desc_Follow_me_Swing_anim_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Boomerang_anim_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Boomerang_configure_param,
		sizeof(s_enum_desc_Follow_me_Boomerang_configure_param) / sizeof(s_enum_desc_Follow_me_Boomerang_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Boomerang_anim_config = {
	"Follow_me.Boomerang_anim_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_BOOMERANG_ANIM_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Boomerang_anim_config,
	sizeof(s_arg_desc_Follow_me_Boomerang_anim_config) / sizeof(s_arg_desc_Follow_me_Boomerang_anim_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Candle_anim_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Candle_configure_param,
		sizeof(s_enum_desc_Follow_me_Candle_configure_param) / sizeof(s_enum_desc_Follow_me_Candle_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Candle_anim_config = {
	"Follow_me.Candle_anim_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_CANDLE_ANIM_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Candle_anim_config,
	sizeof(s_arg_desc_Follow_me_Candle_anim_config) / sizeof(s_arg_desc_Follow_me_Candle_anim_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Dolly_slide_anim_config[] = {
	{
		"Use_default",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Follow_me_Dolly_slide_configure_param,
		sizeof(s_enum_desc_Follow_me_Dolly_slide_configure_param) / sizeof(s_enum_desc_Follow_me_Dolly_slide_configure_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Horizontal_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Dolly_slide_anim_config = {
	"Follow_me.Dolly_slide_anim_config",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_DOLLY_SLIDE_ANIM_CONFIG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Dolly_slide_anim_config,
	sizeof(s_arg_desc_Follow_me_Dolly_slide_anim_config) / sizeof(s_arg_desc_Follow_me_Dolly_slide_anim_config[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_framing_position_changed[] = {
	{
		"Horizontal",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Vertical",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_framing_position_changed = {
	"Follow_me.Target_framing_position_changed",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_FRAMING_POSITION_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_framing_position_changed,
	sizeof(s_arg_desc_Follow_me_Target_framing_position_changed) / sizeof(s_arg_desc_Follow_me_Target_framing_position_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_image_detection_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Follow_me_Image_detection_status,
		sizeof(s_enum_desc_Follow_me_Image_detection_status) / sizeof(s_enum_desc_Follow_me_Image_detection_status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_image_detection_state = {
	"Follow_me.Target_image_detection_state",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_IMAGE_DETECTION_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_image_detection_state,
	sizeof(s_arg_desc_Follow_me_Target_image_detection_state) / sizeof(s_arg_desc_Follow_me_Target_image_detection_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Follow_me_Target_is_controller[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Follow_me_Target_is_controller = {
	"Follow_me.Target_is_controller",
	ARSDK_PRJ_FOLLOW_ME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_FOLLOW_ME_TARGET_IS_CONTROLLER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Follow_me_Target_is_controller,
	sizeof(s_arg_desc_Follow_me_Target_is_controller) / sizeof(s_arg_desc_Follow_me_Target_is_controller[0])
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Band[] = {
	{"2_4_GHZ", ARSDK_WIFI_BAND_2_4_GHZ},
	{"5_GHZ", ARSDK_WIFI_BAND_5_GHZ},
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Selection_type[] = {
	{"AUTO_ALL", ARSDK_WIFI_SELECTION_TYPE_AUTO_ALL},
	{"AUTO_2_4_GHZ", ARSDK_WIFI_SELECTION_TYPE_AUTO_2_4_GHZ},
	{"AUTO_5_GHZ", ARSDK_WIFI_SELECTION_TYPE_AUTO_5_GHZ},
	{"MANUAL", ARSDK_WIFI_SELECTION_TYPE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Security_type[] = {
	{"OPEN", ARSDK_WIFI_SECURITY_TYPE_OPEN},
	{"WPA2", ARSDK_WIFI_SECURITY_TYPE_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Security_key_type[] = {
	{"PLAIN", ARSDK_WIFI_SECURITY_KEY_TYPE_PLAIN},
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Environment[] = {
	{"INDOOR", ARSDK_WIFI_ENVIRONMENT_INDOOR},
	{"OUTDOOR", ARSDK_WIFI_ENVIRONMENT_OUTDOOR},
};

static const struct arsdk_enum_desc s_enum_desc_Wifi_Country_selection[] = {
	{"MANUAL", ARSDK_WIFI_COUNTRY_SELECTION_MANUAL},
	{"AUTO", ARSDK_WIFI_COUNTRY_SELECTION_AUTO},
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Scan[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Wifi_Band,
		sizeof(s_enum_desc_Wifi_Band) / sizeof(s_enum_desc_Wifi_Band[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Scan = {
	"Wifi.Scan",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SCAN,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Scan,
	sizeof(s_arg_desc_Wifi_Scan) / sizeof(s_arg_desc_Wifi_Scan[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Update_authorized_channels = {
	"Wifi.Update_authorized_channels",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_UPDATE_AUTHORIZED_CHANNELS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Set_ap_channel[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Selection_type,
		sizeof(s_enum_desc_Wifi_Selection_type) / sizeof(s_enum_desc_Wifi_Selection_type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Band,
		sizeof(s_enum_desc_Wifi_Band) / sizeof(s_enum_desc_Wifi_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Set_ap_channel = {
	"Wifi.Set_ap_channel",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SET_AP_CHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Set_ap_channel,
	sizeof(s_arg_desc_Wifi_Set_ap_channel) / sizeof(s_arg_desc_Wifi_Set_ap_channel[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Set_security[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Security_type,
		sizeof(s_enum_desc_Wifi_Security_type) / sizeof(s_enum_desc_Wifi_Security_type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Key_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Security_key_type,
		sizeof(s_enum_desc_Wifi_Security_key_type) / sizeof(s_enum_desc_Wifi_Security_key_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Set_security = {
	"Wifi.Set_security",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SET_SECURITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Set_security,
	sizeof(s_arg_desc_Wifi_Set_security) / sizeof(s_arg_desc_Wifi_Set_security[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Set_country[] = {
	{
		"Selection_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Country_selection,
		sizeof(s_enum_desc_Wifi_Country_selection) / sizeof(s_enum_desc_Wifi_Country_selection[0])
	},
	{
		"Code",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Set_country = {
	"Wifi.Set_country",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SET_COUNTRY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Set_country,
	sizeof(s_arg_desc_Wifi_Set_country) / sizeof(s_arg_desc_Wifi_Set_country[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Set_environment[] = {
	{
		"Environment",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Environment,
		sizeof(s_enum_desc_Wifi_Environment) / sizeof(s_enum_desc_Wifi_Environment[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Set_environment = {
	"Wifi.Set_environment",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SET_ENVIRONMENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Set_environment,
	sizeof(s_arg_desc_Wifi_Set_environment) / sizeof(s_arg_desc_Wifi_Set_environment[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Scanned_item[] = {
	{
		"Ssid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Band,
		sizeof(s_enum_desc_Wifi_Band) / sizeof(s_enum_desc_Wifi_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Scanned_item = {
	"Wifi.Scanned_item",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SCANNED_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Scanned_item,
	sizeof(s_arg_desc_Wifi_Scanned_item) / sizeof(s_arg_desc_Wifi_Scanned_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Authorized_channel[] = {
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Band,
		sizeof(s_enum_desc_Wifi_Band) / sizeof(s_enum_desc_Wifi_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Environment",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Wifi_Environment,
		sizeof(s_enum_desc_Wifi_Environment) / sizeof(s_enum_desc_Wifi_Environment[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Authorized_channel = {
	"Wifi.Authorized_channel",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_AUTHORIZED_CHANNEL,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Authorized_channel,
	sizeof(s_arg_desc_Wifi_Authorized_channel) / sizeof(s_arg_desc_Wifi_Authorized_channel[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Ap_channel_changed[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Selection_type,
		sizeof(s_enum_desc_Wifi_Selection_type) / sizeof(s_enum_desc_Wifi_Selection_type[0])
	},
	{
		"Band",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Band,
		sizeof(s_enum_desc_Wifi_Band) / sizeof(s_enum_desc_Wifi_Band[0])
	},
	{
		"Channel",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Ap_channel_changed = {
	"Wifi.Ap_channel_changed",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_AP_CHANNEL_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Ap_channel_changed,
	sizeof(s_arg_desc_Wifi_Ap_channel_changed) / sizeof(s_arg_desc_Wifi_Ap_channel_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Security_changed[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Security_type,
		sizeof(s_enum_desc_Wifi_Security_type) / sizeof(s_enum_desc_Wifi_Security_type[0])
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Key_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Security_key_type,
		sizeof(s_enum_desc_Wifi_Security_key_type) / sizeof(s_enum_desc_Wifi_Security_key_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Security_changed = {
	"Wifi.Security_changed",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SECURITY_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Security_changed,
	sizeof(s_arg_desc_Wifi_Security_changed) / sizeof(s_arg_desc_Wifi_Security_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Country_changed[] = {
	{
		"Selection_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Country_selection,
		sizeof(s_enum_desc_Wifi_Country_selection) / sizeof(s_enum_desc_Wifi_Country_selection[0])
	},
	{
		"Code",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Country_changed = {
	"Wifi.Country_changed",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_COUNTRY_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Country_changed,
	sizeof(s_arg_desc_Wifi_Country_changed) / sizeof(s_arg_desc_Wifi_Country_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Environment_changed[] = {
	{
		"Environment",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Wifi_Environment,
		sizeof(s_enum_desc_Wifi_Environment) / sizeof(s_enum_desc_Wifi_Environment[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Environment_changed = {
	"Wifi.Environment_changed",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_ENVIRONMENT_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Environment_changed,
	sizeof(s_arg_desc_Wifi_Environment_changed) / sizeof(s_arg_desc_Wifi_Environment_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Rssi_changed[] = {
	{
		"Rssi",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Rssi_changed = {
	"Wifi.Rssi_changed",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_RSSI_CHANGED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Rssi_changed,
	sizeof(s_arg_desc_Wifi_Rssi_changed) / sizeof(s_arg_desc_Wifi_Rssi_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Supported_countries[] = {
	{
		"Countries",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Supported_countries = {
	"Wifi.Supported_countries",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SUPPORTED_COUNTRIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Supported_countries,
	sizeof(s_arg_desc_Wifi_Supported_countries) / sizeof(s_arg_desc_Wifi_Supported_countries[0])
};

static const struct arsdk_arg_desc s_arg_desc_Wifi_Supported_security_types[] = {
	{
		"Types",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Wifi_Security_type,
		sizeof(s_enum_desc_Wifi_Security_type) / sizeof(s_enum_desc_Wifi_Security_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Wifi_Supported_security_types = {
	"Wifi.Supported_security_types",
	ARSDK_PRJ_WIFI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_WIFI_SUPPORTED_SECURITY_TYPES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Wifi_Supported_security_types,
	sizeof(s_arg_desc_Wifi_Supported_security_types) / sizeof(s_arg_desc_Wifi_Supported_security_types[0])
};

static const struct arsdk_enum_desc s_enum_desc_Rc_Receiver_state[] = {
	{"CONNECTED", ARSDK_RC_RECEIVER_STATE_CONNECTED},
	{"DISCONNECTED", ARSDK_RC_RECEIVER_STATE_DISCONNECTED},
};

static const struct arsdk_enum_desc s_enum_desc_Rc_Channel_action[] = {
	{"INVALID", ARSDK_RC_CHANNEL_ACTION_INVALID},
	{"ROLL", ARSDK_RC_CHANNEL_ACTION_ROLL},
	{"PITCH", ARSDK_RC_CHANNEL_ACTION_PITCH},
	{"YAW", ARSDK_RC_CHANNEL_ACTION_YAW},
	{"GAZ", ARSDK_RC_CHANNEL_ACTION_GAZ},
	{"TAKEOFF_LAND", ARSDK_RC_CHANNEL_ACTION_TAKEOFF_LAND},
	{"EMERGENCY", ARSDK_RC_CHANNEL_ACTION_EMERGENCY},
	{"RETURN_HOME", ARSDK_RC_CHANNEL_ACTION_RETURN_HOME},
	{"PILOTING_MODE", ARSDK_RC_CHANNEL_ACTION_PILOTING_MODE},
	{"TAKE_CONTROL", ARSDK_RC_CHANNEL_ACTION_TAKE_CONTROL},
};

static const struct arsdk_enum_desc s_enum_desc_Rc_Calibration_type[] = {
	{"NONE", ARSDK_RC_CALIBRATION_TYPE_NONE},
	{"NEUTRAL", ARSDK_RC_CALIBRATION_TYPE_NEUTRAL},
	{"MIN_MAX", ARSDK_RC_CALIBRATION_TYPE_MIN_MAX},
};

static const struct arsdk_enum_desc s_enum_desc_Rc_Channel_type[] = {
	{"INVALID", ARSDK_RC_CHANNEL_TYPE_INVALID},
	{"SIGNED_AXIS", ARSDK_RC_CHANNEL_TYPE_SIGNED_AXIS},
	{"UNSIGNED_AXIS", ARSDK_RC_CHANNEL_TYPE_UNSIGNED_AXIS},
	{"MONOSTABLE_BUTTON", ARSDK_RC_CHANNEL_TYPE_MONOSTABLE_BUTTON},
	{"BISTABLE_BUTTON", ARSDK_RC_CHANNEL_TYPE_BISTABLE_BUTTON},
	{"TRISTATE_BUTTON", ARSDK_RC_CHANNEL_TYPE_TRISTATE_BUTTON},
	{"ROTARY_BUTTON", ARSDK_RC_CHANNEL_TYPE_ROTARY_BUTTON},
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Monitor_channels[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Monitor_channels = {
	"Rc.Monitor_channels",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_MONITOR_CHANNELS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Monitor_channels,
	sizeof(s_arg_desc_Rc_Monitor_channels) / sizeof(s_arg_desc_Rc_Monitor_channels[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Start_calibration[] = {
	{
		"Calibration_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Calibration_type,
		sizeof(s_enum_desc_Rc_Calibration_type) / sizeof(s_enum_desc_Rc_Calibration_type[0])
	},
	{
		"Channel_action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Channel_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_type,
		sizeof(s_enum_desc_Rc_Channel_type) / sizeof(s_enum_desc_Rc_Channel_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Start_calibration = {
	"Rc.Start_calibration",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_START_CALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Start_calibration,
	sizeof(s_arg_desc_Rc_Start_calibration) / sizeof(s_arg_desc_Rc_Start_calibration[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Invert_channel[] = {
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Flag",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Invert_channel = {
	"Rc.Invert_channel",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_INVERT_CHANNEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Invert_channel,
	sizeof(s_arg_desc_Rc_Invert_channel) / sizeof(s_arg_desc_Rc_Invert_channel[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Abort_calibration = {
	"Rc.Abort_calibration",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_ABORT_CALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Reset_calibration = {
	"Rc.Reset_calibration",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_RESET_CALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Enable_receiver[] = {
	{
		"Enable",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Enable_receiver = {
	"Rc.Enable_receiver",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_ENABLE_RECEIVER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Enable_receiver,
	sizeof(s_arg_desc_Rc_Enable_receiver) / sizeof(s_arg_desc_Rc_Enable_receiver[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Receiver_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Receiver_state,
		sizeof(s_enum_desc_Rc_Receiver_state) / sizeof(s_enum_desc_Rc_Receiver_state[0])
	},
	{
		"Protocol",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Receiver_state = {
	"Rc.Receiver_state",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_RECEIVER_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Receiver_state,
	sizeof(s_arg_desc_Rc_Receiver_state) / sizeof(s_arg_desc_Rc_Receiver_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Channels_monitor_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Channels_monitor_state = {
	"Rc.Channels_monitor_state",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_CHANNELS_MONITOR_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Channels_monitor_state,
	sizeof(s_arg_desc_Rc_Channels_monitor_state) / sizeof(s_arg_desc_Rc_Channels_monitor_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Channel_value[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Value",
		ARSDK_ARG_TYPE_I16,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Channel_value = {
	"Rc.Channel_value",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_CHANNEL_VALUE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Channel_value,
	sizeof(s_arg_desc_Rc_Channel_value) / sizeof(s_arg_desc_Rc_Channel_value[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Calibration_state[] = {
	{
		"Calibration_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Calibration_type,
		sizeof(s_enum_desc_Rc_Calibration_type) / sizeof(s_enum_desc_Rc_Calibration_type[0])
	},
	{
		"Channel_action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Required",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Calibrated",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Neutral_calibrated",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Calibration_state = {
	"Rc.Calibration_state",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_CALIBRATION_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Calibration_state,
	sizeof(s_arg_desc_Rc_Calibration_state) / sizeof(s_arg_desc_Rc_Calibration_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rc_Channel_action_item[] = {
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_action,
		sizeof(s_enum_desc_Rc_Channel_action) / sizeof(s_enum_desc_Rc_Channel_action[0])
	},
	{
		"Supported_type",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Rc_Channel_type,
		sizeof(s_enum_desc_Rc_Channel_type) / sizeof(s_enum_desc_Rc_Channel_type[0])
	},
	{
		"Calibrated_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rc_Channel_type,
		sizeof(s_enum_desc_Rc_Channel_type) / sizeof(s_enum_desc_Rc_Channel_type[0])
	},
	{
		"Inverted",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rc_Channel_action_item = {
	"Rc.Channel_action_item",
	ARSDK_PRJ_RC,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RC_CHANNEL_ACTION_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rc_Channel_action_item,
	sizeof(s_arg_desc_Rc_Channel_action_item) / sizeof(s_arg_desc_Rc_Channel_action_item[0])
};

static const struct arsdk_enum_desc s_enum_desc_Drone_manager_Security[] = {
	{"NONE", ARSDK_DRONE_MANAGER_SECURITY_NONE},
	{"WPA2", ARSDK_DRONE_MANAGER_SECURITY_WPA2},
};

static const struct arsdk_enum_desc s_enum_desc_Drone_manager_Connection_state[] = {
	{"IDLE", ARSDK_DRONE_MANAGER_CONNECTION_STATE_IDLE},
	{"SEARCHING", ARSDK_DRONE_MANAGER_CONNECTION_STATE_SEARCHING},
	{"CONNECTING", ARSDK_DRONE_MANAGER_CONNECTION_STATE_CONNECTING},
	{"CONNECTED", ARSDK_DRONE_MANAGER_CONNECTION_STATE_CONNECTED},
	{"DISCONNECTING", ARSDK_DRONE_MANAGER_CONNECTION_STATE_DISCONNECTING},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Discover_drones = {
	"Drone_manager.Discover_drones",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_DISCOVER_DRONES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Connect[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Key",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Connect = {
	"Drone_manager.Connect",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_CONNECT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Connect,
	sizeof(s_arg_desc_Drone_manager_Connect) / sizeof(s_arg_desc_Drone_manager_Connect[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Forget[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Forget = {
	"Drone_manager.Forget",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_FORGET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Forget,
	sizeof(s_arg_desc_Drone_manager_Forget) / sizeof(s_arg_desc_Drone_manager_Forget[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Drone_list_item[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Connection_order",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Active",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Visible",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Security",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Drone_manager_Security,
		sizeof(s_enum_desc_Drone_manager_Security) / sizeof(s_enum_desc_Drone_manager_Security[0])
	},
	{
		"Has_saved_key",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Rssi",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Drone_list_item = {
	"Drone_manager.Drone_list_item",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_DRONE_LIST_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Drone_list_item,
	sizeof(s_arg_desc_Drone_manager_Drone_list_item) / sizeof(s_arg_desc_Drone_manager_Drone_list_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Connection_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Drone_manager_Connection_state,
		sizeof(s_enum_desc_Drone_manager_Connection_state) / sizeof(s_enum_desc_Drone_manager_Connection_state[0])
	},
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Connection_state = {
	"Drone_manager.Connection_state",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_CONNECTION_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Connection_state,
	sizeof(s_arg_desc_Drone_manager_Connection_state) / sizeof(s_arg_desc_Drone_manager_Connection_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Authentication_failed[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Authentication_failed = {
	"Drone_manager.Authentication_failed",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_AUTHENTICATION_FAILED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Authentication_failed,
	sizeof(s_arg_desc_Drone_manager_Authentication_failed) / sizeof(s_arg_desc_Drone_manager_Authentication_failed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Connection_refused[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Connection_refused = {
	"Drone_manager.Connection_refused",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_CONNECTION_REFUSED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Connection_refused,
	sizeof(s_arg_desc_Drone_manager_Connection_refused) / sizeof(s_arg_desc_Drone_manager_Connection_refused[0])
};

static const struct arsdk_arg_desc s_arg_desc_Drone_manager_Known_drone_item[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Security",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Drone_manager_Security,
		sizeof(s_enum_desc_Drone_manager_Security) / sizeof(s_enum_desc_Drone_manager_Security[0])
	},
	{
		"Has_saved_key",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Drone_manager_Known_drone_item = {
	"Drone_manager.Known_drone_item",
	ARSDK_PRJ_DRONE_MANAGER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRONE_MANAGER_KNOWN_DRONE_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Drone_manager_Known_drone_item,
	sizeof(s_arg_desc_Drone_manager_Known_drone_item) / sizeof(s_arg_desc_Drone_manager_Known_drone_item[0])
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_Button_action[] = {
	{"APP_0", ARSDK_MAPPER_BUTTON_ACTION_APP_0},
	{"APP_1", ARSDK_MAPPER_BUTTON_ACTION_APP_1},
	{"APP_2", ARSDK_MAPPER_BUTTON_ACTION_APP_2},
	{"APP_3", ARSDK_MAPPER_BUTTON_ACTION_APP_3},
	{"APP_4", ARSDK_MAPPER_BUTTON_ACTION_APP_4},
	{"APP_5", ARSDK_MAPPER_BUTTON_ACTION_APP_5},
	{"APP_6", ARSDK_MAPPER_BUTTON_ACTION_APP_6},
	{"APP_7", ARSDK_MAPPER_BUTTON_ACTION_APP_7},
	{"APP_8", ARSDK_MAPPER_BUTTON_ACTION_APP_8},
	{"APP_9", ARSDK_MAPPER_BUTTON_ACTION_APP_9},
	{"APP_10", ARSDK_MAPPER_BUTTON_ACTION_APP_10},
	{"APP_11", ARSDK_MAPPER_BUTTON_ACTION_APP_11},
	{"APP_12", ARSDK_MAPPER_BUTTON_ACTION_APP_12},
	{"APP_13", ARSDK_MAPPER_BUTTON_ACTION_APP_13},
	{"APP_14", ARSDK_MAPPER_BUTTON_ACTION_APP_14},
	{"APP_15", ARSDK_MAPPER_BUTTON_ACTION_APP_15},
	{"RETURN_HOME", ARSDK_MAPPER_BUTTON_ACTION_RETURN_HOME},
	{"TAKEOFF_LAND", ARSDK_MAPPER_BUTTON_ACTION_TAKEOFF_LAND},
	{"VIDEO_RECORD", ARSDK_MAPPER_BUTTON_ACTION_VIDEO_RECORD},
	{"TAKE_PICTURE", ARSDK_MAPPER_BUTTON_ACTION_TAKE_PICTURE},
	{"CAMERA_EXPOSITION_INC", ARSDK_MAPPER_BUTTON_ACTION_CAMERA_EXPOSITION_INC},
	{"CAMERA_EXPOSITION_DEC", ARSDK_MAPPER_BUTTON_ACTION_CAMERA_EXPOSITION_DEC},
	{"FLIP_LEFT", ARSDK_MAPPER_BUTTON_ACTION_FLIP_LEFT},
	{"FLIP_RIGHT", ARSDK_MAPPER_BUTTON_ACTION_FLIP_RIGHT},
	{"FLIP_FRONT", ARSDK_MAPPER_BUTTON_ACTION_FLIP_FRONT},
	{"FLIP_BACK", ARSDK_MAPPER_BUTTON_ACTION_FLIP_BACK},
	{"EMERGENCY", ARSDK_MAPPER_BUTTON_ACTION_EMERGENCY},
	{"CENTER_CAMERA", ARSDK_MAPPER_BUTTON_ACTION_CENTER_CAMERA},
	{"CYCLE_HUD", ARSDK_MAPPER_BUTTON_ACTION_CYCLE_HUD},
	{"CAMERA_AUTO", ARSDK_MAPPER_BUTTON_ACTION_CAMERA_AUTO},
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_Axis_action[] = {
	{"APP_0", ARSDK_MAPPER_AXIS_ACTION_APP_0},
	{"APP_1", ARSDK_MAPPER_AXIS_ACTION_APP_1},
	{"APP_2", ARSDK_MAPPER_AXIS_ACTION_APP_2},
	{"APP_3", ARSDK_MAPPER_AXIS_ACTION_APP_3},
	{"APP_4", ARSDK_MAPPER_AXIS_ACTION_APP_4},
	{"APP_5", ARSDK_MAPPER_AXIS_ACTION_APP_5},
	{"APP_6", ARSDK_MAPPER_AXIS_ACTION_APP_6},
	{"APP_7", ARSDK_MAPPER_AXIS_ACTION_APP_7},
	{"APP_8", ARSDK_MAPPER_AXIS_ACTION_APP_8},
	{"APP_9", ARSDK_MAPPER_AXIS_ACTION_APP_9},
	{"APP_10", ARSDK_MAPPER_AXIS_ACTION_APP_10},
	{"APP_11", ARSDK_MAPPER_AXIS_ACTION_APP_11},
	{"APP_12", ARSDK_MAPPER_AXIS_ACTION_APP_12},
	{"APP_13", ARSDK_MAPPER_AXIS_ACTION_APP_13},
	{"APP_14", ARSDK_MAPPER_AXIS_ACTION_APP_14},
	{"APP_15", ARSDK_MAPPER_AXIS_ACTION_APP_15},
	{"ROLL", ARSDK_MAPPER_AXIS_ACTION_ROLL},
	{"PITCH", ARSDK_MAPPER_AXIS_ACTION_PITCH},
	{"YAW", ARSDK_MAPPER_AXIS_ACTION_YAW},
	{"GAZ", ARSDK_MAPPER_AXIS_ACTION_GAZ},
	{"CAMERA_PAN", ARSDK_MAPPER_AXIS_ACTION_CAMERA_PAN},
	{"CAMERA_TILT", ARSDK_MAPPER_AXIS_ACTION_CAMERA_TILT},
	{"CAMERA_ZOOM", ARSDK_MAPPER_AXIS_ACTION_CAMERA_ZOOM},
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_Button_event[] = {
	{"RELEASE", ARSDK_MAPPER_BUTTON_EVENT_RELEASE},
	{"PRESS", ARSDK_MAPPER_BUTTON_EVENT_PRESS},
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_Expo_type[] = {
	{"LINEAR", ARSDK_MAPPER_EXPO_TYPE_LINEAR},
	{"EXPO_0", ARSDK_MAPPER_EXPO_TYPE_EXPO_0},
	{"EXPO_1", ARSDK_MAPPER_EXPO_TYPE_EXPO_1},
	{"EXPO_2", ARSDK_MAPPER_EXPO_TYPE_EXPO_2},
	{"EXPO_4", ARSDK_MAPPER_EXPO_TYPE_EXPO_4},
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Grab[] = {
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Axes",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Grab = {
	"Mapper.Grab",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_GRAB,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Grab,
	sizeof(s_arg_desc_Mapper_Grab) / sizeof(s_arg_desc_Mapper_Grab[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Map_button_action[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Button_action,
		sizeof(s_enum_desc_Mapper_Button_action) / sizeof(s_enum_desc_Mapper_Button_action[0])
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Map_button_action = {
	"Mapper.Map_button_action",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MAP_BUTTON_ACTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Map_button_action,
	sizeof(s_arg_desc_Mapper_Map_button_action) / sizeof(s_arg_desc_Mapper_Map_button_action[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Map_axis_action[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Axis_action,
		sizeof(s_enum_desc_Mapper_Axis_action) / sizeof(s_enum_desc_Mapper_Axis_action[0])
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Map_axis_action = {
	"Mapper.Map_axis_action",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MAP_AXIS_ACTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Map_axis_action,
	sizeof(s_arg_desc_Mapper_Map_axis_action) / sizeof(s_arg_desc_Mapper_Map_axis_action[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Reset_mapping[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Reset_mapping = {
	"Mapper.Reset_mapping",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_RESET_MAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Reset_mapping,
	sizeof(s_arg_desc_Mapper_Reset_mapping) / sizeof(s_arg_desc_Mapper_Reset_mapping[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Set_expo[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Expo",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Expo_type,
		sizeof(s_enum_desc_Mapper_Expo_type) / sizeof(s_enum_desc_Mapper_Expo_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Set_expo = {
	"Mapper.Set_expo",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_SET_EXPO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Set_expo,
	sizeof(s_arg_desc_Mapper_Set_expo) / sizeof(s_arg_desc_Mapper_Set_expo[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Set_inverted[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Inverted",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Set_inverted = {
	"Mapper.Set_inverted",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_SET_INVERTED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Set_inverted,
	sizeof(s_arg_desc_Mapper_Set_inverted) / sizeof(s_arg_desc_Mapper_Set_inverted[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Enter_volatile_mapping = {
	"Mapper.Enter_volatile_mapping",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_ENTER_VOLATILE_MAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Exit_volatile_mapping = {
	"Mapper.Exit_volatile_mapping",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_EXIT_VOLATILE_MAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Grab_state[] = {
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Axes",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Buttons_state",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Grab_state = {
	"Mapper.Grab_state",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_GRAB_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Grab_state,
	sizeof(s_arg_desc_Mapper_Grab_state) / sizeof(s_arg_desc_Mapper_Grab_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Grab_button_event[] = {
	{
		"Button",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Event",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Button_event,
		sizeof(s_enum_desc_Mapper_Button_event) / sizeof(s_enum_desc_Mapper_Button_event[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Grab_button_event = {
	"Mapper.Grab_button_event",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_GRAB_BUTTON_EVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Grab_button_event,
	sizeof(s_arg_desc_Mapper_Grab_button_event) / sizeof(s_arg_desc_Mapper_Grab_button_event[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Grab_axis_event[] = {
	{
		"Axis",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Grab_axis_event = {
	"Mapper.Grab_axis_event",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_GRAB_AXIS_EVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Grab_axis_event,
	sizeof(s_arg_desc_Mapper_Grab_axis_event) / sizeof(s_arg_desc_Mapper_Grab_axis_event[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Button_mapping_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Button_action,
		sizeof(s_enum_desc_Mapper_Button_action) / sizeof(s_enum_desc_Mapper_Button_action[0])
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Button_mapping_item = {
	"Mapper.Button_mapping_item",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_BUTTON_MAPPING_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Button_mapping_item,
	sizeof(s_arg_desc_Mapper_Button_mapping_item) / sizeof(s_arg_desc_Mapper_Button_mapping_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Axis_mapping_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Axis_action,
		sizeof(s_enum_desc_Mapper_Axis_action) / sizeof(s_enum_desc_Mapper_Axis_action[0])
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Axis_mapping_item = {
	"Mapper.Axis_mapping_item",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_AXIS_MAPPING_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Axis_mapping_item,
	sizeof(s_arg_desc_Mapper_Axis_mapping_item) / sizeof(s_arg_desc_Mapper_Axis_mapping_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Application_axis_event[] = {
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Axis_action,
		sizeof(s_enum_desc_Mapper_Axis_action) / sizeof(s_enum_desc_Mapper_Axis_action[0])
	},
	{
		"Value",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Application_axis_event = {
	"Mapper.Application_axis_event",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_APPLICATION_AXIS_EVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Application_axis_event,
	sizeof(s_arg_desc_Mapper_Application_axis_event) / sizeof(s_arg_desc_Mapper_Application_axis_event[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Application_button_event[] = {
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Button_action,
		sizeof(s_enum_desc_Mapper_Button_action) / sizeof(s_enum_desc_Mapper_Button_action[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Application_button_event = {
	"Mapper.Application_button_event",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_APPLICATION_BUTTON_EVENT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Application_button_event,
	sizeof(s_arg_desc_Mapper_Application_button_event) / sizeof(s_arg_desc_Mapper_Application_button_event[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Expo_map_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Expo",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_Expo_type,
		sizeof(s_enum_desc_Mapper_Expo_type) / sizeof(s_enum_desc_Mapper_Expo_type[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Expo_map_item = {
	"Mapper.Expo_map_item",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_EXPO_MAP_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Expo_map_item,
	sizeof(s_arg_desc_Mapper_Expo_map_item) / sizeof(s_arg_desc_Mapper_Expo_map_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Inverted_map_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Inverted",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Inverted_map_item = {
	"Mapper.Inverted_map_item",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_INVERTED_MAP_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Inverted_map_item,
	sizeof(s_arg_desc_Mapper_Inverted_map_item) / sizeof(s_arg_desc_Mapper_Inverted_map_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Active_product[] = {
	{
		"Product",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Active_product = {
	"Mapper.Active_product",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_ACTIVE_PRODUCT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Active_product,
	sizeof(s_arg_desc_Mapper_Active_product) / sizeof(s_arg_desc_Mapper_Active_product[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_Volatile_mapping_state[] = {
	{
		"Active",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_Volatile_mapping_state = {
	"Mapper.Volatile_mapping_state",
	ARSDK_PRJ_MAPPER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_VOLATILE_MAPPING_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_Volatile_mapping_state,
	sizeof(s_arg_desc_Mapper_Volatile_mapping_state) / sizeof(s_arg_desc_Mapper_Volatile_mapping_state[0])
};

static const struct arsdk_enum_desc s_enum_desc_Debug_Setting_type[] = {
	{"BOOL", ARSDK_DEBUG_SETTING_TYPE_BOOL},
	{"DECIMAL", ARSDK_DEBUG_SETTING_TYPE_DECIMAL},
	{"TEXT", ARSDK_DEBUG_SETTING_TYPE_TEXT},
};

static const struct arsdk_enum_desc s_enum_desc_Debug_Setting_mode[] = {
	{"READ_ONLY", ARSDK_DEBUG_SETTING_MODE_READ_ONLY},
	{"READ_WRITE", ARSDK_DEBUG_SETTING_MODE_READ_WRITE},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Get_all_settings = {
	"Debug.Get_all_settings",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_GET_ALL_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Debug_Set_setting[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Set_setting = {
	"Debug.Set_setting",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_SET_SETTING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Debug_Set_setting,
	sizeof(s_arg_desc_Debug_Set_setting) / sizeof(s_arg_desc_Debug_Set_setting[0])
};

static const struct arsdk_arg_desc s_arg_desc_Debug_Tag[] = {
	{
		"Value",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Tag = {
	"Debug.Tag",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_TAG,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Debug_Tag,
	sizeof(s_arg_desc_Debug_Tag) / sizeof(s_arg_desc_Debug_Tag[0])
};

static const struct arsdk_arg_desc s_arg_desc_Debug_Settings_info[] = {
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
	{
		"Id",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Label",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Debug_Setting_type,
		sizeof(s_enum_desc_Debug_Setting_type) / sizeof(s_enum_desc_Debug_Setting_type[0])
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Debug_Setting_mode,
		sizeof(s_enum_desc_Debug_Setting_mode) / sizeof(s_enum_desc_Debug_Setting_mode[0])
	},
	{
		"Range_min",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Range_max",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Range_step",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Settings_info = {
	"Debug.Settings_info",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_SETTINGS_INFO,
	ARSDK_CMD_LIST_TYPE_LIST_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Debug_Settings_info,
	sizeof(s_arg_desc_Debug_Settings_info) / sizeof(s_arg_desc_Debug_Settings_info[0])
};

static const struct arsdk_arg_desc s_arg_desc_Debug_Settings_list[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Settings_list = {
	"Debug.Settings_list",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_SETTINGS_LIST,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Debug_Settings_list,
	sizeof(s_arg_desc_Debug_Settings_list) / sizeof(s_arg_desc_Debug_Settings_list[0])
};

static const struct arsdk_arg_desc s_arg_desc_Debug_Tag_notify[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Debug_Tag_notify = {
	"Debug.Tag_notify",
	ARSDK_PRJ_DEBUG,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DEBUG_TAG_NOTIFY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Debug_Tag_notify,
	sizeof(s_arg_desc_Debug_Tag_notify) / sizeof(s_arg_desc_Debug_Tag_notify[0])
};

static const struct arsdk_arg_desc s_arg_desc_Controller_info_Gps[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Horizontal_accuracy",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_accuracy",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"North_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"East_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Down_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Timestamp",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Controller_info_Gps = {
	"Controller_info.Gps",
	ARSDK_PRJ_CONTROLLER_INFO,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CONTROLLER_INFO_GPS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Controller_info_Gps,
	sizeof(s_arg_desc_Controller_info_Gps) / sizeof(s_arg_desc_Controller_info_Gps[0])
};

static const struct arsdk_arg_desc s_arg_desc_Controller_info_Barometer[] = {
	{
		"Pressure",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Timestamp",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Controller_info_Barometer = {
	"Controller_info.Barometer",
	ARSDK_PRJ_CONTROLLER_INFO,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CONTROLLER_INFO_BAROMETER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Controller_info_Barometer,
	sizeof(s_arg_desc_Controller_info_Barometer) / sizeof(s_arg_desc_Controller_info_Barometer[0])
};

static const struct arsdk_arg_desc s_arg_desc_Controller_info_Validity_from_drone[] = {
	{
		"Is_valid",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Controller_info_Validity_from_drone = {
	"Controller_info.Validity_from_drone",
	ARSDK_PRJ_CONTROLLER_INFO,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CONTROLLER_INFO_VALIDITY_FROM_DRONE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Controller_info_Validity_from_drone,
	sizeof(s_arg_desc_Controller_info_Validity_from_drone) / sizeof(s_arg_desc_Controller_info_Validity_from_drone[0])
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_mini_Button_action[] = {
	{"TAKEOFF_LAND", ARSDK_MAPPER_MINI_BUTTON_ACTION_TAKEOFF_LAND},
	{"TAKE_PICTURE", ARSDK_MAPPER_MINI_BUTTON_ACTION_TAKE_PICTURE},
	{"FLIP_LEFT", ARSDK_MAPPER_MINI_BUTTON_ACTION_FLIP_LEFT},
	{"FLIP_RIGHT", ARSDK_MAPPER_MINI_BUTTON_ACTION_FLIP_RIGHT},
	{"FLIP_FRONT", ARSDK_MAPPER_MINI_BUTTON_ACTION_FLIP_FRONT},
	{"FLIP_BACK", ARSDK_MAPPER_MINI_BUTTON_ACTION_FLIP_BACK},
	{"EMERGENCY", ARSDK_MAPPER_MINI_BUTTON_ACTION_EMERGENCY},
	{"ACCESSORY_GUN", ARSDK_MAPPER_MINI_BUTTON_ACTION_ACCESSORY_GUN},
	{"THROWN_TAKEOFF", ARSDK_MAPPER_MINI_BUTTON_ACTION_THROWN_TAKEOFF},
	{"CW_90_SWIPE", ARSDK_MAPPER_MINI_BUTTON_ACTION_CW_90_SWIPE},
	{"CCW_90_SWIPE", ARSDK_MAPPER_MINI_BUTTON_ACTION_CCW_90_SWIPE},
	{"CW_180_SWIPE", ARSDK_MAPPER_MINI_BUTTON_ACTION_CW_180_SWIPE},
	{"CCW_180_SWIPE", ARSDK_MAPPER_MINI_BUTTON_ACTION_CCW_180_SWIPE},
	{"GEAR_UP", ARSDK_MAPPER_MINI_BUTTON_ACTION_GEAR_UP},
	{"GEAR_DOWN", ARSDK_MAPPER_MINI_BUTTON_ACTION_GEAR_DOWN},
	{"PLANE_MODE_HALF_BAREL_ROLL_RIGHT", ARSDK_MAPPER_MINI_BUTTON_ACTION_PLANE_MODE_HALF_BAREL_ROLL_RIGHT},
	{"PLANE_MODE_HALF_BAREL_ROLL_LEFT", ARSDK_MAPPER_MINI_BUTTON_ACTION_PLANE_MODE_HALF_BAREL_ROLL_LEFT},
	{"PLANE_MODE_BACKSWAP", ARSDK_MAPPER_MINI_BUTTON_ACTION_PLANE_MODE_BACKSWAP},
	{"PLANE_MODE_LOOPING", ARSDK_MAPPER_MINI_BUTTON_ACTION_PLANE_MODE_LOOPING},
	{"PLANE_MODE_TOGGLE", ARSDK_MAPPER_MINI_BUTTON_ACTION_PLANE_MODE_TOGGLE},
	{"ACCESSORY_CLAW", ARSDK_MAPPER_MINI_BUTTON_ACTION_ACCESSORY_CLAW},
	{"LIGHT_CONTINUOUS", ARSDK_MAPPER_MINI_BUTTON_ACTION_LIGHT_CONTINUOUS},
	{"LIGHT_BLINK", ARSDK_MAPPER_MINI_BUTTON_ACTION_LIGHT_BLINK},
	{"LIGHT_SINUS", ARSDK_MAPPER_MINI_BUTTON_ACTION_LIGHT_SINUS},
	{"LIGHT_TOGGLE", ARSDK_MAPPER_MINI_BUTTON_ACTION_LIGHT_TOGGLE},
	{"PILOTING_MODE_TOGGLE", ARSDK_MAPPER_MINI_BUTTON_ACTION_PILOTING_MODE_TOGGLE},
	{"VIDEO_RECORD_TOGGLE", ARSDK_MAPPER_MINI_BUTTON_ACTION_VIDEO_RECORD_TOGGLE},
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_mini_Axis_action[] = {
	{"ROLL", ARSDK_MAPPER_MINI_AXIS_ACTION_ROLL},
	{"PITCH", ARSDK_MAPPER_MINI_AXIS_ACTION_PITCH},
	{"YAW", ARSDK_MAPPER_MINI_AXIS_ACTION_YAW},
	{"GAZ", ARSDK_MAPPER_MINI_AXIS_ACTION_GAZ},
};

static const struct arsdk_enum_desc s_enum_desc_Mapper_mini_Mode[] = {
	{"QUAD", ARSDK_MAPPER_MINI_MODE_QUAD},
	{"PLANE", ARSDK_MAPPER_MINI_MODE_PLANE},
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_mini_Map_button_action[] = {
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Mapper_mini_Mode,
		sizeof(s_enum_desc_Mapper_mini_Mode) / sizeof(s_enum_desc_Mapper_mini_Mode[0])
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_mini_Button_action,
		sizeof(s_enum_desc_Mapper_mini_Button_action) / sizeof(s_enum_desc_Mapper_mini_Button_action[0])
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_mini_Map_button_action = {
	"Mapper_mini.Map_button_action",
	ARSDK_PRJ_MAPPER_MINI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MINI_MAP_BUTTON_ACTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_mini_Map_button_action,
	sizeof(s_arg_desc_Mapper_mini_Map_button_action) / sizeof(s_arg_desc_Mapper_mini_Map_button_action[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_mini_Map_axis_action[] = {
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Mapper_mini_Mode,
		sizeof(s_enum_desc_Mapper_mini_Mode) / sizeof(s_enum_desc_Mapper_mini_Mode[0])
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_mini_Axis_action,
		sizeof(s_enum_desc_Mapper_mini_Axis_action) / sizeof(s_enum_desc_Mapper_mini_Axis_action[0])
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_mini_Map_axis_action = {
	"Mapper_mini.Map_axis_action",
	ARSDK_PRJ_MAPPER_MINI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MINI_MAP_AXIS_ACTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_mini_Map_axis_action,
	sizeof(s_arg_desc_Mapper_mini_Map_axis_action) / sizeof(s_arg_desc_Mapper_mini_Map_axis_action[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_mini_Reset_mapping[] = {
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Mapper_mini_Mode,
		sizeof(s_enum_desc_Mapper_mini_Mode) / sizeof(s_enum_desc_Mapper_mini_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_mini_Reset_mapping = {
	"Mapper_mini.Reset_mapping",
	ARSDK_PRJ_MAPPER_MINI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MINI_RESET_MAPPING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_mini_Reset_mapping,
	sizeof(s_arg_desc_Mapper_mini_Reset_mapping) / sizeof(s_arg_desc_Mapper_mini_Reset_mapping[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_mini_Button_mapping_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Mapper_mini_Mode,
		sizeof(s_enum_desc_Mapper_mini_Mode) / sizeof(s_enum_desc_Mapper_mini_Mode[0])
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_mini_Button_action,
		sizeof(s_enum_desc_Mapper_mini_Button_action) / sizeof(s_enum_desc_Mapper_mini_Button_action[0])
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_mini_Button_mapping_item = {
	"Mapper_mini.Button_mapping_item",
	ARSDK_PRJ_MAPPER_MINI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MINI_BUTTON_MAPPING_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_mini_Button_mapping_item,
	sizeof(s_arg_desc_Mapper_mini_Button_mapping_item) / sizeof(s_arg_desc_Mapper_mini_Button_mapping_item[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mapper_mini_Axis_mapping_item[] = {
	{
		"Uid",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Mapper_mini_Mode,
		sizeof(s_enum_desc_Mapper_mini_Mode) / sizeof(s_enum_desc_Mapper_mini_Mode[0])
	},
	{
		"Action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mapper_mini_Axis_action,
		sizeof(s_enum_desc_Mapper_mini_Axis_action) / sizeof(s_enum_desc_Mapper_mini_Axis_action[0])
	},
	{
		"Axis",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Buttons",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mapper_mini_Axis_mapping_item = {
	"Mapper_mini.Axis_mapping_item",
	ARSDK_PRJ_MAPPER_MINI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MAPPER_MINI_AXIS_MAPPING_ITEM,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mapper_mini_Axis_mapping_item,
	sizeof(s_arg_desc_Mapper_mini_Axis_mapping_item) / sizeof(s_arg_desc_Mapper_mini_Axis_mapping_item[0])
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_cam_State[] = {
	{"ACTIVATED", ARSDK_THERMAL_CAM_STATE_ACTIVATED},
	{"DEACTIVATED", ARSDK_THERMAL_CAM_STATE_DEACTIVATED},
	{"PENDING", ARSDK_THERMAL_CAM_STATE_PENDING},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_cam_Range[] = {
	{"HIGH", ARSDK_THERMAL_CAM_RANGE_HIGH},
	{"LOW", ARSDK_THERMAL_CAM_RANGE_LOW},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_cam_Charging_state[] = {
	{"NOT_CHARGING", ARSDK_THERMAL_CAM_CHARGING_STATE_NOT_CHARGING},
	{"CHARGING_ONLY", ARSDK_THERMAL_CAM_CHARGING_STATE_CHARGING_ONLY},
	{"CHARGING", ARSDK_THERMAL_CAM_CHARGING_STATE_CHARGING},
	{"UNKNOWN", ARSDK_THERMAL_CAM_CHARGING_STATE_UNKNOWN},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_cam_Flat_field_calibration_state[] = {
	{"CALIBRATED", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_STATE_CALIBRATED},
	{"CALIBRATION_REQUIRED", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_STATE_CALIBRATION_REQUIRED},
	{"CALIBRATION_IN_PROGRESS", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_STATE_CALIBRATION_IN_PROGRESS},
	{"CALIBRATION_UNKNOWN", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_STATE_CALIBRATION_UNKNOWN},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_cam_Flat_field_calibration_mode[] = {
	{"AUTOMATIC", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_MODE_AUTOMATIC},
	{"MANUAL", ARSDK_THERMAL_CAM_FLAT_FIELD_CALIBRATION_MODE_MANUAL},
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Activate[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Activate = {
	"Thermal_cam.Activate",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_ACTIVATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Activate,
	sizeof(s_arg_desc_Thermal_cam_Activate) / sizeof(s_arg_desc_Thermal_cam_Activate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Deactivate[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Deactivate = {
	"Thermal_cam.Deactivate",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_DEACTIVATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Deactivate,
	sizeof(s_arg_desc_Thermal_cam_Deactivate) / sizeof(s_arg_desc_Thermal_cam_Deactivate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Set_sensitivity[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Range,
		sizeof(s_enum_desc_Thermal_cam_Range) / sizeof(s_enum_desc_Thermal_cam_Range[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Set_sensitivity = {
	"Thermal_cam.Set_sensitivity",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_SET_SENSITIVITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Set_sensitivity,
	sizeof(s_arg_desc_Thermal_cam_Set_sensitivity) / sizeof(s_arg_desc_Thermal_cam_Set_sensitivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Flat_field_calibrate[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibrate = {
	"Thermal_cam.Flat_field_calibrate",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_FLAT_FIELD_CALIBRATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Flat_field_calibrate,
	sizeof(s_arg_desc_Thermal_cam_Flat_field_calibrate) / sizeof(s_arg_desc_Thermal_cam_Flat_field_calibrate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Set_flat_field_calibration_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Flat_field_calibration_mode,
		sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_mode) / sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Set_flat_field_calibration_mode = {
	"Thermal_cam.Set_flat_field_calibration_mode",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_SET_FLAT_FIELD_CALIBRATION_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Set_flat_field_calibration_mode,
	sizeof(s_arg_desc_Thermal_cam_Set_flat_field_calibration_mode) / sizeof(s_arg_desc_Thermal_cam_Set_flat_field_calibration_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Camera_state[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_State,
		sizeof(s_enum_desc_Thermal_cam_State) / sizeof(s_enum_desc_Thermal_cam_State[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Camera_state = {
	"Thermal_cam.Camera_state",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_CAMERA_STATE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Camera_state,
	sizeof(s_arg_desc_Thermal_cam_Camera_state) / sizeof(s_arg_desc_Thermal_cam_Camera_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Sensitivity[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Current_range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Range,
		sizeof(s_enum_desc_Thermal_cam_Range) / sizeof(s_enum_desc_Thermal_cam_Range[0])
	},
	{
		"Available_ranges",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Thermal_cam_Range,
		sizeof(s_enum_desc_Thermal_cam_Range) / sizeof(s_enum_desc_Thermal_cam_Range[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Sensitivity = {
	"Thermal_cam.Sensitivity",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_SENSITIVITY,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Sensitivity,
	sizeof(s_arg_desc_Thermal_cam_Sensitivity) / sizeof(s_arg_desc_Thermal_cam_Sensitivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Calibration_infos[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Calibration_infos = {
	"Thermal_cam.Calibration_infos",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_CALIBRATION_INFOS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Calibration_infos,
	sizeof(s_arg_desc_Thermal_cam_Calibration_infos) / sizeof(s_arg_desc_Thermal_cam_Calibration_infos[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Charging_status[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Charging_state,
		sizeof(s_enum_desc_Thermal_cam_Charging_state) / sizeof(s_enum_desc_Thermal_cam_Charging_state[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Charging_status = {
	"Thermal_cam.Charging_status",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_CHARGING_STATUS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Charging_status,
	sizeof(s_arg_desc_Thermal_cam_Charging_status) / sizeof(s_arg_desc_Thermal_cam_Charging_status[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Flat_field_calibration_status[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Flat_field_calibration_state,
		sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_state) / sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_state[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_status = {
	"Thermal_cam.Flat_field_calibration_status",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_FLAT_FIELD_CALIBRATION_STATUS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Flat_field_calibration_status,
	sizeof(s_arg_desc_Thermal_cam_Flat_field_calibration_status) / sizeof(s_arg_desc_Thermal_cam_Flat_field_calibration_status[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_cam_Flat_field_calibration_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_cam_Flat_field_calibration_mode,
		sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_mode) / sizeof(s_enum_desc_Thermal_cam_Flat_field_calibration_mode[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_mode = {
	"Thermal_cam.Flat_field_calibration_mode",
	ARSDK_PRJ_THERMAL_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAM_FLAT_FIELD_CALIBRATION_MODE,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_cam_Flat_field_calibration_mode,
	sizeof(s_arg_desc_Thermal_cam_Flat_field_calibration_mode) / sizeof(s_arg_desc_Thermal_cam_Flat_field_calibration_mode[0])
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Model[] = {
	{"MAIN", ARSDK_CAMERA_MODEL_MAIN},
	{"THERMAL", ARSDK_CAMERA_MODEL_THERMAL},
	{"THERMAL_BLENDED", ARSDK_CAMERA_MODEL_THERMAL_BLENDED},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Supported[] = {
	{"NOT_SUPPORTED", ARSDK_CAMERA_SUPPORTED_NOT_SUPPORTED},
	{"SUPPORTED", ARSDK_CAMERA_SUPPORTED_SUPPORTED},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Availability[] = {
	{"NOT_AVAILABLE", ARSDK_CAMERA_AVAILABILITY_NOT_AVAILABLE},
	{"AVAILABLE", ARSDK_CAMERA_AVAILABILITY_AVAILABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_State[] = {
	{"INACTIVE", ARSDK_CAMERA_STATE_INACTIVE},
	{"ACTIVE", ARSDK_CAMERA_STATE_ACTIVE},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Exposure_mode[] = {
	{"AUTOMATIC", ARSDK_CAMERA_EXPOSURE_MODE_AUTOMATIC},
	{"AUTOMATIC_PREFER_ISO_SENSITIVITY", ARSDK_CAMERA_EXPOSURE_MODE_AUTOMATIC_PREFER_ISO_SENSITIVITY},
	{"AUTOMATIC_PREFER_SHUTTER_SPEED", ARSDK_CAMERA_EXPOSURE_MODE_AUTOMATIC_PREFER_SHUTTER_SPEED},
	{"MANUAL_ISO_SENSITIVITY", ARSDK_CAMERA_EXPOSURE_MODE_MANUAL_ISO_SENSITIVITY},
	{"MANUAL_SHUTTER_SPEED", ARSDK_CAMERA_EXPOSURE_MODE_MANUAL_SHUTTER_SPEED},
	{"MANUAL", ARSDK_CAMERA_EXPOSURE_MODE_MANUAL},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Shutter_speed[] = {
	{"SHUTTER_1_OVER_10000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_10000},
	{"SHUTTER_1_OVER_8000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_8000},
	{"SHUTTER_1_OVER_6400", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_6400},
	{"SHUTTER_1_OVER_5000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_5000},
	{"SHUTTER_1_OVER_4000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_4000},
	{"SHUTTER_1_OVER_3200", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_3200},
	{"SHUTTER_1_OVER_2500", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_2500},
	{"SHUTTER_1_OVER_2000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_2000},
	{"SHUTTER_1_OVER_1600", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_1600},
	{"SHUTTER_1_OVER_1250", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_1250},
	{"SHUTTER_1_OVER_1000", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_1000},
	{"SHUTTER_1_OVER_800", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_800},
	{"SHUTTER_1_OVER_640", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_640},
	{"SHUTTER_1_OVER_500", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_500},
	{"SHUTTER_1_OVER_400", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_400},
	{"SHUTTER_1_OVER_320", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_320},
	{"SHUTTER_1_OVER_240", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_240},
	{"SHUTTER_1_OVER_200", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_200},
	{"SHUTTER_1_OVER_160", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_160},
	{"SHUTTER_1_OVER_120", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_120},
	{"SHUTTER_1_OVER_100", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_100},
	{"SHUTTER_1_OVER_80", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_80},
	{"SHUTTER_1_OVER_60", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_60},
	{"SHUTTER_1_OVER_50", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_50},
	{"SHUTTER_1_OVER_40", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_40},
	{"SHUTTER_1_OVER_30", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_30},
	{"SHUTTER_1_OVER_25", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_25},
	{"SHUTTER_1_OVER_15", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_15},
	{"SHUTTER_1_OVER_10", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_10},
	{"SHUTTER_1_OVER_8", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_8},
	{"SHUTTER_1_OVER_6", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_6},
	{"SHUTTER_1_OVER_4", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_4},
	{"SHUTTER_1_OVER_3", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_3},
	{"SHUTTER_1_OVER_2", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_2},
	{"SHUTTER_1_OVER_1_5", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1_OVER_1_5},
	{"SHUTTER_1", ARSDK_CAMERA_SHUTTER_SPEED_SHUTTER_1},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Iso_sensitivity[] = {
	{"ISO_50", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_50},
	{"ISO_64", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_64},
	{"ISO_80", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_80},
	{"ISO_100", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_100},
	{"ISO_125", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_125},
	{"ISO_160", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_160},
	{"ISO_200", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_200},
	{"ISO_250", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_250},
	{"ISO_320", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_320},
	{"ISO_400", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_400},
	{"ISO_500", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_500},
	{"ISO_640", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_640},
	{"ISO_800", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_800},
	{"ISO_1200", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_1200},
	{"ISO_1600", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_1600},
	{"ISO_2500", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_2500},
	{"ISO_3200", ARSDK_CAMERA_ISO_SENSITIVITY_ISO_3200},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Ev_compensation[] = {
	{"EV_MINUS_3_00", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_3_00},
	{"EV_MINUS_2_67", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_2_67},
	{"EV_MINUS_2_33", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_2_33},
	{"EV_MINUS_2_00", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_2_00},
	{"EV_MINUS_1_67", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_1_67},
	{"EV_MINUS_1_33", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_1_33},
	{"EV_MINUS_1_00", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_1_00},
	{"EV_MINUS_0_67", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_0_67},
	{"EV_MINUS_0_33", ARSDK_CAMERA_EV_COMPENSATION_EV_MINUS_0_33},
	{"EV_0_00", ARSDK_CAMERA_EV_COMPENSATION_EV_0_00},
	{"EV_0_33", ARSDK_CAMERA_EV_COMPENSATION_EV_0_33},
	{"EV_0_67", ARSDK_CAMERA_EV_COMPENSATION_EV_0_67},
	{"EV_1_00", ARSDK_CAMERA_EV_COMPENSATION_EV_1_00},
	{"EV_1_33", ARSDK_CAMERA_EV_COMPENSATION_EV_1_33},
	{"EV_1_67", ARSDK_CAMERA_EV_COMPENSATION_EV_1_67},
	{"EV_2_00", ARSDK_CAMERA_EV_COMPENSATION_EV_2_00},
	{"EV_2_33", ARSDK_CAMERA_EV_COMPENSATION_EV_2_33},
	{"EV_2_67", ARSDK_CAMERA_EV_COMPENSATION_EV_2_67},
	{"EV_3_00", ARSDK_CAMERA_EV_COMPENSATION_EV_3_00},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_White_balance_mode[] = {
	{"AUTOMATIC", ARSDK_CAMERA_WHITE_BALANCE_MODE_AUTOMATIC},
	{"CANDLE", ARSDK_CAMERA_WHITE_BALANCE_MODE_CANDLE},
	{"SUNSET", ARSDK_CAMERA_WHITE_BALANCE_MODE_SUNSET},
	{"INCANDESCENT", ARSDK_CAMERA_WHITE_BALANCE_MODE_INCANDESCENT},
	{"WARM_WHITE_FLUORESCENT", ARSDK_CAMERA_WHITE_BALANCE_MODE_WARM_WHITE_FLUORESCENT},
	{"HALOGEN", ARSDK_CAMERA_WHITE_BALANCE_MODE_HALOGEN},
	{"FLUORESCENT", ARSDK_CAMERA_WHITE_BALANCE_MODE_FLUORESCENT},
	{"COOL_WHITE_FLUORESCENT", ARSDK_CAMERA_WHITE_BALANCE_MODE_COOL_WHITE_FLUORESCENT},
	{"FLASH", ARSDK_CAMERA_WHITE_BALANCE_MODE_FLASH},
	{"DAYLIGHT", ARSDK_CAMERA_WHITE_BALANCE_MODE_DAYLIGHT},
	{"SUNNY", ARSDK_CAMERA_WHITE_BALANCE_MODE_SUNNY},
	{"CLOUDY", ARSDK_CAMERA_WHITE_BALANCE_MODE_CLOUDY},
	{"SNOW", ARSDK_CAMERA_WHITE_BALANCE_MODE_SNOW},
	{"HAZY", ARSDK_CAMERA_WHITE_BALANCE_MODE_HAZY},
	{"SHADED", ARSDK_CAMERA_WHITE_BALANCE_MODE_SHADED},
	{"GREEN_FOLIAGE", ARSDK_CAMERA_WHITE_BALANCE_MODE_GREEN_FOLIAGE},
	{"BLUE_SKY", ARSDK_CAMERA_WHITE_BALANCE_MODE_BLUE_SKY},
	{"CUSTOM", ARSDK_CAMERA_WHITE_BALANCE_MODE_CUSTOM},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_White_balance_temperature[] = {
	{"T_1500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_1500},
	{"T_1750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_1750},
	{"T_2000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_2000},
	{"T_2250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_2250},
	{"T_2500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_2500},
	{"T_2750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_2750},
	{"T_3000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_3000},
	{"T_3250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_3250},
	{"T_3500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_3500},
	{"T_3750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_3750},
	{"T_4000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_4000},
	{"T_4250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_4250},
	{"T_4500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_4500},
	{"T_4750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_4750},
	{"T_5000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_5000},
	{"T_5250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_5250},
	{"T_5500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_5500},
	{"T_5750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_5750},
	{"T_6000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_6000},
	{"T_6250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_6250},
	{"T_6500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_6500},
	{"T_6750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_6750},
	{"T_7000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_7000},
	{"T_7250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_7250},
	{"T_7500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_7500},
	{"T_7750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_7750},
	{"T_8000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_8000},
	{"T_8250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_8250},
	{"T_8500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_8500},
	{"T_8750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_8750},
	{"T_9000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_9000},
	{"T_9250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_9250},
	{"T_9500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_9500},
	{"T_9750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_9750},
	{"T_10000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_10000},
	{"T_10250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_10250},
	{"T_10500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_10500},
	{"T_10750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_10750},
	{"T_11000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_11000},
	{"T_11250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_11250},
	{"T_11500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_11500},
	{"T_11750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_11750},
	{"T_12000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_12000},
	{"T_12250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_12250},
	{"T_12500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_12500},
	{"T_12750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_12750},
	{"T_13000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_13000},
	{"T_13250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_13250},
	{"T_13500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_13500},
	{"T_13750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_13750},
	{"T_14000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_14000},
	{"T_14250", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_14250},
	{"T_14500", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_14500},
	{"T_14750", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_14750},
	{"T_15000", ARSDK_CAMERA_WHITE_BALANCE_TEMPERATURE_T_15000},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Style[] = {
	{"STANDARD", ARSDK_CAMERA_STYLE_STANDARD},
	{"PLOG", ARSDK_CAMERA_STYLE_PLOG},
	{"INTENSE", ARSDK_CAMERA_STYLE_INTENSE},
	{"PASTEL", ARSDK_CAMERA_STYLE_PASTEL},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Camera_mode[] = {
	{"RECORDING", ARSDK_CAMERA_CAMERA_MODE_RECORDING},
	{"PHOTO", ARSDK_CAMERA_CAMERA_MODE_PHOTO},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Recording_mode[] = {
	{"STANDARD", ARSDK_CAMERA_RECORDING_MODE_STANDARD},
	{"HYPERLAPSE", ARSDK_CAMERA_RECORDING_MODE_HYPERLAPSE},
	{"SLOW_MOTION", ARSDK_CAMERA_RECORDING_MODE_SLOW_MOTION},
	{"HIGH_FRAMERATE", ARSDK_CAMERA_RECORDING_MODE_HIGH_FRAMERATE},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Photo_mode[] = {
	{"SINGLE", ARSDK_CAMERA_PHOTO_MODE_SINGLE},
	{"BRACKETING", ARSDK_CAMERA_PHOTO_MODE_BRACKETING},
	{"BURST", ARSDK_CAMERA_PHOTO_MODE_BURST},
	{"TIME_LAPSE", ARSDK_CAMERA_PHOTO_MODE_TIME_LAPSE},
	{"GPS_LAPSE", ARSDK_CAMERA_PHOTO_MODE_GPS_LAPSE},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Resolution[] = {
	{"RES_DCI_4K", ARSDK_CAMERA_RESOLUTION_RES_DCI_4K},
	{"RES_UHD_4K", ARSDK_CAMERA_RESOLUTION_RES_UHD_4K},
	{"RES_2_7K", ARSDK_CAMERA_RESOLUTION_RES_2_7K},
	{"RES_1080P", ARSDK_CAMERA_RESOLUTION_RES_1080P},
	{"RES_720P", ARSDK_CAMERA_RESOLUTION_RES_720P},
	{"RES_480P", ARSDK_CAMERA_RESOLUTION_RES_480P},
	{"RES_1080P_SD", ARSDK_CAMERA_RESOLUTION_RES_1080P_SD},
	{"RES_720P_SD", ARSDK_CAMERA_RESOLUTION_RES_720P_SD},
	{"RES_UHD_8K", ARSDK_CAMERA_RESOLUTION_RES_UHD_8K},
	{"RES_5K", ARSDK_CAMERA_RESOLUTION_RES_5K},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Framerate[] = {
	{"FPS_24", ARSDK_CAMERA_FRAMERATE_FPS_24},
	{"FPS_25", ARSDK_CAMERA_FRAMERATE_FPS_25},
	{"FPS_30", ARSDK_CAMERA_FRAMERATE_FPS_30},
	{"FPS_48", ARSDK_CAMERA_FRAMERATE_FPS_48},
	{"FPS_50", ARSDK_CAMERA_FRAMERATE_FPS_50},
	{"FPS_60", ARSDK_CAMERA_FRAMERATE_FPS_60},
	{"FPS_96", ARSDK_CAMERA_FRAMERATE_FPS_96},
	{"FPS_100", ARSDK_CAMERA_FRAMERATE_FPS_100},
	{"FPS_120", ARSDK_CAMERA_FRAMERATE_FPS_120},
	{"FPS_9", ARSDK_CAMERA_FRAMERATE_FPS_9},
	{"FPS_15", ARSDK_CAMERA_FRAMERATE_FPS_15},
	{"FPS_20", ARSDK_CAMERA_FRAMERATE_FPS_20},
	{"FPS_192", ARSDK_CAMERA_FRAMERATE_FPS_192},
	{"FPS_200", ARSDK_CAMERA_FRAMERATE_FPS_200},
	{"FPS_240", ARSDK_CAMERA_FRAMERATE_FPS_240},
	{"FPS_10", ARSDK_CAMERA_FRAMERATE_FPS_10},
	{"FPS_8_6", ARSDK_CAMERA_FRAMERATE_FPS_8_6},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Photo_format[] = {
	{"FULL_FRAME", ARSDK_CAMERA_PHOTO_FORMAT_FULL_FRAME},
	{"RECTILINEAR", ARSDK_CAMERA_PHOTO_FORMAT_RECTILINEAR},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Photo_file_format[] = {
	{"JPEG", ARSDK_CAMERA_PHOTO_FILE_FORMAT_JPEG},
	{"DNG", ARSDK_CAMERA_PHOTO_FILE_FORMAT_DNG},
	{"DNG_JPEG", ARSDK_CAMERA_PHOTO_FILE_FORMAT_DNG_JPEG},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Antiflicker_mode[] = {
	{"OFF", ARSDK_CAMERA_ANTIFLICKER_MODE_OFF},
	{"AUTO", ARSDK_CAMERA_ANTIFLICKER_MODE_AUTO},
	{"MODE_50HZ", ARSDK_CAMERA_ANTIFLICKER_MODE_MODE_50HZ},
	{"MODE_60HZ", ARSDK_CAMERA_ANTIFLICKER_MODE_MODE_60HZ},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Hyperlapse_value[] = {
	{"RATIO_15", ARSDK_CAMERA_HYPERLAPSE_VALUE_RATIO_15},
	{"RATIO_30", ARSDK_CAMERA_HYPERLAPSE_VALUE_RATIO_30},
	{"RATIO_60", ARSDK_CAMERA_HYPERLAPSE_VALUE_RATIO_60},
	{"RATIO_120", ARSDK_CAMERA_HYPERLAPSE_VALUE_RATIO_120},
	{"RATIO_240", ARSDK_CAMERA_HYPERLAPSE_VALUE_RATIO_240},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Burst_value[] = {
	{"BURST_14_OVER_4S", ARSDK_CAMERA_BURST_VALUE_BURST_14_OVER_4S},
	{"BURST_14_OVER_2S", ARSDK_CAMERA_BURST_VALUE_BURST_14_OVER_2S},
	{"BURST_14_OVER_1S", ARSDK_CAMERA_BURST_VALUE_BURST_14_OVER_1S},
	{"BURST_10_OVER_4S", ARSDK_CAMERA_BURST_VALUE_BURST_10_OVER_4S},
	{"BURST_10_OVER_2S", ARSDK_CAMERA_BURST_VALUE_BURST_10_OVER_2S},
	{"BURST_10_OVER_1S", ARSDK_CAMERA_BURST_VALUE_BURST_10_OVER_1S},
	{"BURST_4_OVER_4S", ARSDK_CAMERA_BURST_VALUE_BURST_4_OVER_4S},
	{"BURST_4_OVER_2S", ARSDK_CAMERA_BURST_VALUE_BURST_4_OVER_2S},
	{"BURST_4_OVER_1S", ARSDK_CAMERA_BURST_VALUE_BURST_4_OVER_1S},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Bracketing_preset[] = {
	{"PRESET_1EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_1EV},
	{"PRESET_2EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_2EV},
	{"PRESET_3EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_3EV},
	{"PRESET_1EV_2EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_1EV_2EV},
	{"PRESET_1EV_3EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_1EV_3EV},
	{"PRESET_2EV_3EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_2EV_3EV},
	{"PRESET_1EV_2EV_3EV", ARSDK_CAMERA_BRACKETING_PRESET_PRESET_1EV_2EV_3EV},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Streaming_mode[] = {
	{"LOW_LATENCY", ARSDK_CAMERA_STREAMING_MODE_LOW_LATENCY},
	{"HIGH_RELIABILITY", ARSDK_CAMERA_STREAMING_MODE_HIGH_RELIABILITY},
	{"HIGH_RELIABILITY_LOW_FRAMERATE", ARSDK_CAMERA_STREAMING_MODE_HIGH_RELIABILITY_LOW_FRAMERATE},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Photo_result[] = {
	{"TAKING_PHOTO", ARSDK_CAMERA_PHOTO_RESULT_TAKING_PHOTO},
	{"PHOTO_TAKEN", ARSDK_CAMERA_PHOTO_RESULT_PHOTO_TAKEN},
	{"PHOTO_SAVED", ARSDK_CAMERA_PHOTO_RESULT_PHOTO_SAVED},
	{"ERROR_NO_STORAGE_SPACE", ARSDK_CAMERA_PHOTO_RESULT_ERROR_NO_STORAGE_SPACE},
	{"ERROR_BAD_STATE", ARSDK_CAMERA_PHOTO_RESULT_ERROR_BAD_STATE},
	{"ERROR", ARSDK_CAMERA_PHOTO_RESULT_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Recording_result[] = {
	{"STARTED", ARSDK_CAMERA_RECORDING_RESULT_STARTED},
	{"STOPPED", ARSDK_CAMERA_RECORDING_RESULT_STOPPED},
	{"STOPPED_NO_STORAGE_SPACE", ARSDK_CAMERA_RECORDING_RESULT_STOPPED_NO_STORAGE_SPACE},
	{"STOPPED_STORAGE_TOO_SLOW", ARSDK_CAMERA_RECORDING_RESULT_STOPPED_STORAGE_TOO_SLOW},
	{"ERROR_BAD_STATE", ARSDK_CAMERA_RECORDING_RESULT_ERROR_BAD_STATE},
	{"ERROR", ARSDK_CAMERA_RECORDING_RESULT_ERROR},
	{"STOPPED_RECONFIGURED", ARSDK_CAMERA_RECORDING_RESULT_STOPPED_RECONFIGURED},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Zoom_control_mode[] = {
	{"LEVEL", ARSDK_CAMERA_ZOOM_CONTROL_MODE_LEVEL},
	{"VELOCITY", ARSDK_CAMERA_ZOOM_CONTROL_MODE_VELOCITY},
};

static const struct arsdk_enum_desc s_enum_desc_Camera_Auto_exposure_metering_mode[] = {
	{"STANDARD", ARSDK_CAMERA_AUTO_EXPOSURE_METERING_MODE_STANDARD},
	{"CENTER_TOP", ARSDK_CAMERA_AUTO_EXPOSURE_METERING_MODE_CENTER_TOP},
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_exposure_settings[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Exposure_mode,
		sizeof(s_enum_desc_Camera_Exposure_mode) / sizeof(s_enum_desc_Camera_Exposure_mode[0])
	},
	{
		"Shutter_speed",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Shutter_speed,
		sizeof(s_enum_desc_Camera_Shutter_speed) / sizeof(s_enum_desc_Camera_Shutter_speed[0])
	},
	{
		"Iso_sensitivity",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Max_iso_sensitivity",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Metering_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Auto_exposure_metering_mode,
		sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode) / sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_exposure_settings = {
	"Camera.Set_exposure_settings",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_EXPOSURE_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_exposure_settings,
	sizeof(s_arg_desc_Camera_Set_exposure_settings) / sizeof(s_arg_desc_Camera_Set_exposure_settings[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Lock_exposure[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Lock_exposure = {
	"Camera.Lock_exposure",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_LOCK_EXPOSURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Lock_exposure,
	sizeof(s_arg_desc_Camera_Lock_exposure) / sizeof(s_arg_desc_Camera_Lock_exposure[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Lock_exposure_on_roi[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Roi_center_x",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roi_center_y",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Lock_exposure_on_roi = {
	"Camera.Lock_exposure_on_roi",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_LOCK_EXPOSURE_ON_ROI,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Lock_exposure_on_roi,
	sizeof(s_arg_desc_Camera_Lock_exposure_on_roi) / sizeof(s_arg_desc_Camera_Lock_exposure_on_roi[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Unlock_exposure[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Unlock_exposure = {
	"Camera.Unlock_exposure",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_UNLOCK_EXPOSURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Unlock_exposure,
	sizeof(s_arg_desc_Camera_Unlock_exposure) / sizeof(s_arg_desc_Camera_Unlock_exposure[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_white_balance[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_White_balance_mode,
		sizeof(s_enum_desc_Camera_White_balance_mode) / sizeof(s_enum_desc_Camera_White_balance_mode[0])
	},
	{
		"Temperature",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_White_balance_temperature,
		sizeof(s_enum_desc_Camera_White_balance_temperature) / sizeof(s_enum_desc_Camera_White_balance_temperature[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_white_balance = {
	"Camera.Set_white_balance",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_WHITE_BALANCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_white_balance,
	sizeof(s_arg_desc_Camera_Set_white_balance) / sizeof(s_arg_desc_Camera_Set_white_balance[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_white_balance_lock[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_white_balance_lock = {
	"Camera.Set_white_balance_lock",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_WHITE_BALANCE_LOCK,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_white_balance_lock,
	sizeof(s_arg_desc_Camera_Set_white_balance_lock) / sizeof(s_arg_desc_Camera_Set_white_balance_lock[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_ev_compensation[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Ev_compensation,
		sizeof(s_enum_desc_Camera_Ev_compensation) / sizeof(s_enum_desc_Camera_Ev_compensation[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_ev_compensation = {
	"Camera.Set_ev_compensation",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_EV_COMPENSATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_ev_compensation,
	sizeof(s_arg_desc_Camera_Set_ev_compensation) / sizeof(s_arg_desc_Camera_Set_ev_compensation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_antiflicker_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Antiflicker_mode,
		sizeof(s_enum_desc_Camera_Antiflicker_mode) / sizeof(s_enum_desc_Camera_Antiflicker_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_antiflicker_mode = {
	"Camera.Set_antiflicker_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_ANTIFLICKER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_antiflicker_mode,
	sizeof(s_arg_desc_Camera_Set_antiflicker_mode) / sizeof(s_arg_desc_Camera_Set_antiflicker_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_style[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Style",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Style,
		sizeof(s_enum_desc_Camera_Style) / sizeof(s_enum_desc_Camera_Style[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_style = {
	"Camera.Set_style",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_STYLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_style,
	sizeof(s_arg_desc_Camera_Set_style) / sizeof(s_arg_desc_Camera_Set_style[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_style_params[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Saturation",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Contrast",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Sharpness",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_style_params = {
	"Camera.Set_style_params",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_STYLE_PARAMS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_style_params,
	sizeof(s_arg_desc_Camera_Set_style_params) / sizeof(s_arg_desc_Camera_Set_style_params[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_zoom_target[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Control_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Zoom_control_mode,
		sizeof(s_enum_desc_Camera_Zoom_control_mode) / sizeof(s_enum_desc_Camera_Zoom_control_mode[0])
	},
	{
		"Target",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_zoom_target = {
	"Camera.Set_zoom_target",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_ZOOM_TARGET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_zoom_target,
	sizeof(s_arg_desc_Camera_Set_zoom_target) / sizeof(s_arg_desc_Camera_Set_zoom_target[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Reset_zoom[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Reset_zoom = {
	"Camera.Reset_zoom",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RESET_ZOOM,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Reset_zoom,
	sizeof(s_arg_desc_Camera_Reset_zoom) / sizeof(s_arg_desc_Camera_Reset_zoom[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_max_zoom_speed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_max_zoom_speed = {
	"Camera.Set_max_zoom_speed",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_MAX_ZOOM_SPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_max_zoom_speed,
	sizeof(s_arg_desc_Camera_Set_max_zoom_speed) / sizeof(s_arg_desc_Camera_Set_max_zoom_speed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_zoom_velocity_quality_degradation[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Allow",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_zoom_velocity_quality_degradation = {
	"Camera.Set_zoom_velocity_quality_degradation",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_ZOOM_VELOCITY_QUALITY_DEGRADATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_zoom_velocity_quality_degradation,
	sizeof(s_arg_desc_Camera_Set_zoom_velocity_quality_degradation) / sizeof(s_arg_desc_Camera_Set_zoom_velocity_quality_degradation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_hdr_setting[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_hdr_setting = {
	"Camera.Set_hdr_setting",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_HDR_SETTING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_hdr_setting,
	sizeof(s_arg_desc_Camera_Set_hdr_setting) / sizeof(s_arg_desc_Camera_Set_hdr_setting[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_camera_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Camera_mode,
		sizeof(s_enum_desc_Camera_Camera_mode) / sizeof(s_enum_desc_Camera_Camera_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_camera_mode = {
	"Camera.Set_camera_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_CAMERA_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_camera_mode,
	sizeof(s_arg_desc_Camera_Set_camera_mode) / sizeof(s_arg_desc_Camera_Set_camera_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_recording_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Recording_mode,
		sizeof(s_enum_desc_Camera_Recording_mode) / sizeof(s_enum_desc_Camera_Recording_mode[0])
	},
	{
		"Resolution",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Resolution,
		sizeof(s_enum_desc_Camera_Resolution) / sizeof(s_enum_desc_Camera_Resolution[0])
	},
	{
		"Framerate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Framerate,
		sizeof(s_enum_desc_Camera_Framerate) / sizeof(s_enum_desc_Camera_Framerate[0])
	},
	{
		"Hyperlapse",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Hyperlapse_value,
		sizeof(s_enum_desc_Camera_Hyperlapse_value) / sizeof(s_enum_desc_Camera_Hyperlapse_value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_recording_mode = {
	"Camera.Set_recording_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_RECORDING_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_recording_mode,
	sizeof(s_arg_desc_Camera_Set_recording_mode) / sizeof(s_arg_desc_Camera_Set_recording_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_photo_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_mode,
		sizeof(s_enum_desc_Camera_Photo_mode) / sizeof(s_enum_desc_Camera_Photo_mode[0])
	},
	{
		"Format",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_format,
		sizeof(s_enum_desc_Camera_Photo_format) / sizeof(s_enum_desc_Camera_Photo_format[0])
	},
	{
		"File_format",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_file_format,
		sizeof(s_enum_desc_Camera_Photo_file_format) / sizeof(s_enum_desc_Camera_Photo_file_format[0])
	},
	{
		"Burst",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Burst_value,
		sizeof(s_enum_desc_Camera_Burst_value) / sizeof(s_enum_desc_Camera_Burst_value[0])
	},
	{
		"Bracketing",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Bracketing_preset,
		sizeof(s_enum_desc_Camera_Bracketing_preset) / sizeof(s_enum_desc_Camera_Bracketing_preset[0])
	},
	{
		"Capture_interval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_photo_mode = {
	"Camera.Set_photo_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_PHOTO_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_photo_mode,
	sizeof(s_arg_desc_Camera_Set_photo_mode) / sizeof(s_arg_desc_Camera_Set_photo_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_streaming_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Streaming_mode,
		sizeof(s_enum_desc_Camera_Streaming_mode) / sizeof(s_enum_desc_Camera_Streaming_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_streaming_mode = {
	"Camera.Set_streaming_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_STREAMING_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_streaming_mode,
	sizeof(s_arg_desc_Camera_Set_streaming_mode) / sizeof(s_arg_desc_Camera_Set_streaming_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Take_photo[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Take_photo = {
	"Camera.Take_photo",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_TAKE_PHOTO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Take_photo,
	sizeof(s_arg_desc_Camera_Take_photo) / sizeof(s_arg_desc_Camera_Take_photo[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Stop_photo[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Stop_photo = {
	"Camera.Stop_photo",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_STOP_PHOTO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Stop_photo,
	sizeof(s_arg_desc_Camera_Stop_photo) / sizeof(s_arg_desc_Camera_Stop_photo[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Start_recording[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Start_recording = {
	"Camera.Start_recording",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_START_RECORDING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Start_recording,
	sizeof(s_arg_desc_Camera_Start_recording) / sizeof(s_arg_desc_Camera_Start_recording[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Stop_recording[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Stop_recording = {
	"Camera.Stop_recording",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_STOP_RECORDING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Stop_recording,
	sizeof(s_arg_desc_Camera_Stop_recording) / sizeof(s_arg_desc_Camera_Stop_recording[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_autorecord[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_autorecord = {
	"Camera.Set_autorecord",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_AUTORECORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_autorecord,
	sizeof(s_arg_desc_Camera_Set_autorecord) / sizeof(s_arg_desc_Camera_Set_autorecord[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Set_alignment_offsets[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Set_alignment_offsets = {
	"Camera.Set_alignment_offsets",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_SET_ALIGNMENT_OFFSETS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Set_alignment_offsets,
	sizeof(s_arg_desc_Camera_Set_alignment_offsets) / sizeof(s_arg_desc_Camera_Set_alignment_offsets[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Reset_alignment_offsets[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Reset_alignment_offsets = {
	"Camera.Reset_alignment_offsets",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RESET_ALIGNMENT_OFFSETS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Reset_alignment_offsets,
	sizeof(s_arg_desc_Camera_Reset_alignment_offsets) / sizeof(s_arg_desc_Camera_Reset_alignment_offsets[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Camera_capabilities[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Model,
		sizeof(s_enum_desc_Camera_Model) / sizeof(s_enum_desc_Camera_Model[0])
	},
	{
		"Exposure_modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Camera_Exposure_mode,
		sizeof(s_enum_desc_Camera_Exposure_mode) / sizeof(s_enum_desc_Camera_Exposure_mode[0])
	},
	{
		"Exposure_lock_supported",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Supported,
		sizeof(s_enum_desc_Camera_Supported) / sizeof(s_enum_desc_Camera_Supported[0])
	},
	{
		"Exposure_roi_lock_supported",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Supported,
		sizeof(s_enum_desc_Camera_Supported) / sizeof(s_enum_desc_Camera_Supported[0])
	},
	{
		"Ev_compensations",
		ARSDK_ARG_TYPE_U64,
		s_enum_desc_Camera_Ev_compensation,
		sizeof(s_enum_desc_Camera_Ev_compensation) / sizeof(s_enum_desc_Camera_Ev_compensation[0])
	},
	{
		"White_balance_modes",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Camera_White_balance_mode,
		sizeof(s_enum_desc_Camera_White_balance_mode) / sizeof(s_enum_desc_Camera_White_balance_mode[0])
	},
	{
		"Custom_white_balance_temperatures",
		ARSDK_ARG_TYPE_U64,
		s_enum_desc_Camera_White_balance_temperature,
		sizeof(s_enum_desc_Camera_White_balance_temperature) / sizeof(s_enum_desc_Camera_White_balance_temperature[0])
	},
	{
		"White_balance_lock_supported",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Supported,
		sizeof(s_enum_desc_Camera_Supported) / sizeof(s_enum_desc_Camera_Supported[0])
	},
	{
		"Styles",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Style,
		sizeof(s_enum_desc_Camera_Style) / sizeof(s_enum_desc_Camera_Style[0])
	},
	{
		"Camera_modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Camera_Camera_mode,
		sizeof(s_enum_desc_Camera_Camera_mode) / sizeof(s_enum_desc_Camera_Camera_mode[0])
	},
	{
		"Hyperlapse_values",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Hyperlapse_value,
		sizeof(s_enum_desc_Camera_Hyperlapse_value) / sizeof(s_enum_desc_Camera_Hyperlapse_value[0])
	},
	{
		"Bracketing_presets",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Bracketing_preset,
		sizeof(s_enum_desc_Camera_Bracketing_preset) / sizeof(s_enum_desc_Camera_Bracketing_preset[0])
	},
	{
		"Burst_values",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Burst_value,
		sizeof(s_enum_desc_Camera_Burst_value) / sizeof(s_enum_desc_Camera_Burst_value[0])
	},
	{
		"Streaming_modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Camera_Streaming_mode,
		sizeof(s_enum_desc_Camera_Streaming_mode) / sizeof(s_enum_desc_Camera_Streaming_mode[0])
	},
	{
		"Timelapse_interval_min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Gpslapse_interval_min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Auto_exposure_metering_modes",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Auto_exposure_metering_mode,
		sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode) / sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Camera_capabilities = {
	"Camera.Camera_capabilities",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_CAMERA_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Camera_capabilities,
	sizeof(s_arg_desc_Camera_Camera_capabilities) / sizeof(s_arg_desc_Camera_Camera_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Recording_capabilities[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Recording_modes",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Recording_mode,
		sizeof(s_enum_desc_Camera_Recording_mode) / sizeof(s_enum_desc_Camera_Recording_mode[0])
	},
	{
		"Resolutions",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Resolution,
		sizeof(s_enum_desc_Camera_Resolution) / sizeof(s_enum_desc_Camera_Resolution[0])
	},
	{
		"Framerates",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Camera_Framerate,
		sizeof(s_enum_desc_Camera_Framerate) / sizeof(s_enum_desc_Camera_Framerate[0])
	},
	{
		"Hdr",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Supported,
		sizeof(s_enum_desc_Camera_Supported) / sizeof(s_enum_desc_Camera_Supported[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Recording_capabilities = {
	"Camera.Recording_capabilities",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RECORDING_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Recording_capabilities,
	sizeof(s_arg_desc_Camera_Recording_capabilities) / sizeof(s_arg_desc_Camera_Recording_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Photo_capabilities[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Photo_modes",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Photo_mode,
		sizeof(s_enum_desc_Camera_Photo_mode) / sizeof(s_enum_desc_Camera_Photo_mode[0])
	},
	{
		"Photo_formats",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Photo_format,
		sizeof(s_enum_desc_Camera_Photo_format) / sizeof(s_enum_desc_Camera_Photo_format[0])
	},
	{
		"Photo_file_formats",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Camera_Photo_file_format,
		sizeof(s_enum_desc_Camera_Photo_file_format) / sizeof(s_enum_desc_Camera_Photo_file_format[0])
	},
	{
		"Hdr",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Supported,
		sizeof(s_enum_desc_Camera_Supported) / sizeof(s_enum_desc_Camera_Supported[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Photo_capabilities = {
	"Camera.Photo_capabilities",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_PHOTO_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Photo_capabilities,
	sizeof(s_arg_desc_Camera_Photo_capabilities) / sizeof(s_arg_desc_Camera_Photo_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Antiflicker_capabilities[] = {
	{
		"Supported_modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Camera_Antiflicker_mode,
		sizeof(s_enum_desc_Camera_Antiflicker_mode) / sizeof(s_enum_desc_Camera_Antiflicker_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Antiflicker_capabilities = {
	"Camera.Antiflicker_capabilities",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ANTIFLICKER_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Antiflicker_capabilities,
	sizeof(s_arg_desc_Camera_Antiflicker_capabilities) / sizeof(s_arg_desc_Camera_Antiflicker_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Exposure_settings[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Exposure_mode,
		sizeof(s_enum_desc_Camera_Exposure_mode) / sizeof(s_enum_desc_Camera_Exposure_mode[0])
	},
	{
		"Manual_shutter_speed",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Shutter_speed,
		sizeof(s_enum_desc_Camera_Shutter_speed) / sizeof(s_enum_desc_Camera_Shutter_speed[0])
	},
	{
		"Manual_shutter_speed_capabilities",
		ARSDK_ARG_TYPE_U64,
		s_enum_desc_Camera_Shutter_speed,
		sizeof(s_enum_desc_Camera_Shutter_speed) / sizeof(s_enum_desc_Camera_Shutter_speed[0])
	},
	{
		"Manual_iso_sensitivity",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Manual_iso_sensitivity_capabilities",
		ARSDK_ARG_TYPE_U64,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Max_iso_sensitivity",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Max_iso_sensitivities_capabilities",
		ARSDK_ARG_TYPE_U64,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Metering_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Auto_exposure_metering_mode,
		sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode) / sizeof(s_enum_desc_Camera_Auto_exposure_metering_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Exposure_settings = {
	"Camera.Exposure_settings",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_EXPOSURE_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Exposure_settings,
	sizeof(s_arg_desc_Camera_Exposure_settings) / sizeof(s_arg_desc_Camera_Exposure_settings[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Exposure[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Shutter_speed",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Shutter_speed,
		sizeof(s_enum_desc_Camera_Shutter_speed) / sizeof(s_enum_desc_Camera_Shutter_speed[0])
	},
	{
		"Iso_sensitivity",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Iso_sensitivity,
		sizeof(s_enum_desc_Camera_Iso_sensitivity) / sizeof(s_enum_desc_Camera_Iso_sensitivity[0])
	},
	{
		"Lock",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
	{
		"Lock_roi_x",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Lock_roi_y",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Lock_roi_width",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Lock_roi_height",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Exposure = {
	"Camera.Exposure",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_EXPOSURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Exposure,
	sizeof(s_arg_desc_Camera_Exposure) / sizeof(s_arg_desc_Camera_Exposure[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_White_balance[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_White_balance_mode,
		sizeof(s_enum_desc_Camera_White_balance_mode) / sizeof(s_enum_desc_Camera_White_balance_mode[0])
	},
	{
		"Temperature",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_White_balance_temperature,
		sizeof(s_enum_desc_Camera_White_balance_temperature) / sizeof(s_enum_desc_Camera_White_balance_temperature[0])
	},
	{
		"Lock",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_White_balance = {
	"Camera.White_balance",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_WHITE_BALANCE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_White_balance,
	sizeof(s_arg_desc_Camera_White_balance) / sizeof(s_arg_desc_Camera_White_balance[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Ev_compensation[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Ev_compensation,
		sizeof(s_enum_desc_Camera_Ev_compensation) / sizeof(s_enum_desc_Camera_Ev_compensation[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Ev_compensation = {
	"Camera.Ev_compensation",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_EV_COMPENSATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Ev_compensation,
	sizeof(s_arg_desc_Camera_Ev_compensation) / sizeof(s_arg_desc_Camera_Ev_compensation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Antiflicker_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Antiflicker_mode,
		sizeof(s_enum_desc_Camera_Antiflicker_mode) / sizeof(s_enum_desc_Camera_Antiflicker_mode[0])
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Antiflicker_mode,
		sizeof(s_enum_desc_Camera_Antiflicker_mode) / sizeof(s_enum_desc_Camera_Antiflicker_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Antiflicker_mode = {
	"Camera.Antiflicker_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ANTIFLICKER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Antiflicker_mode,
	sizeof(s_arg_desc_Camera_Antiflicker_mode) / sizeof(s_arg_desc_Camera_Antiflicker_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Style[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Style",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Style,
		sizeof(s_enum_desc_Camera_Style) / sizeof(s_enum_desc_Camera_Style[0])
	},
	{
		"Saturation",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Saturation_min",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Saturation_max",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Contrast",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Contrast_min",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Contrast_max",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Sharpness",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Sharpness_min",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
	{
		"Sharpness_max",
		ARSDK_ARG_TYPE_I8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Style = {
	"Camera.Style",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_STYLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Style,
	sizeof(s_arg_desc_Camera_Style) / sizeof(s_arg_desc_Camera_Style[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Zoom_level[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Level",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Zoom_level = {
	"Camera.Zoom_level",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ZOOM_LEVEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Zoom_level,
	sizeof(s_arg_desc_Camera_Zoom_level) / sizeof(s_arg_desc_Camera_Zoom_level[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Zoom_info[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Available",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Availability,
		sizeof(s_enum_desc_Camera_Availability) / sizeof(s_enum_desc_Camera_Availability[0])
	},
	{
		"High_quality_maximum_level",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Maximum_level",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Zoom_info = {
	"Camera.Zoom_info",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ZOOM_INFO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Zoom_info,
	sizeof(s_arg_desc_Camera_Zoom_info) / sizeof(s_arg_desc_Camera_Zoom_info[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Max_zoom_speed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Max_zoom_speed = {
	"Camera.Max_zoom_speed",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_MAX_ZOOM_SPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Max_zoom_speed,
	sizeof(s_arg_desc_Camera_Max_zoom_speed) / sizeof(s_arg_desc_Camera_Max_zoom_speed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Zoom_velocity_quality_degradation[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Allowed",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Zoom_velocity_quality_degradation = {
	"Camera.Zoom_velocity_quality_degradation",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ZOOM_VELOCITY_QUALITY_DEGRADATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Zoom_velocity_quality_degradation,
	sizeof(s_arg_desc_Camera_Zoom_velocity_quality_degradation) / sizeof(s_arg_desc_Camera_Zoom_velocity_quality_degradation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Hdr_setting[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Hdr_setting = {
	"Camera.Hdr_setting",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_HDR_SETTING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Hdr_setting,
	sizeof(s_arg_desc_Camera_Hdr_setting) / sizeof(s_arg_desc_Camera_Hdr_setting[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Hdr[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Available",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Availability,
		sizeof(s_enum_desc_Camera_Availability) / sizeof(s_enum_desc_Camera_Availability[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Hdr = {
	"Camera.Hdr",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_HDR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Hdr,
	sizeof(s_arg_desc_Camera_Hdr) / sizeof(s_arg_desc_Camera_Hdr[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Camera_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Camera_mode,
		sizeof(s_enum_desc_Camera_Camera_mode) / sizeof(s_enum_desc_Camera_Camera_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Camera_mode = {
	"Camera.Camera_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_CAMERA_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Camera_mode,
	sizeof(s_arg_desc_Camera_Camera_mode) / sizeof(s_arg_desc_Camera_Camera_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Recording_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Recording_mode,
		sizeof(s_enum_desc_Camera_Recording_mode) / sizeof(s_enum_desc_Camera_Recording_mode[0])
	},
	{
		"Resolution",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Resolution,
		sizeof(s_enum_desc_Camera_Resolution) / sizeof(s_enum_desc_Camera_Resolution[0])
	},
	{
		"Framerate",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Framerate,
		sizeof(s_enum_desc_Camera_Framerate) / sizeof(s_enum_desc_Camera_Framerate[0])
	},
	{
		"Hyperlapse",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Hyperlapse_value,
		sizeof(s_enum_desc_Camera_Hyperlapse_value) / sizeof(s_enum_desc_Camera_Hyperlapse_value[0])
	},
	{
		"Bitrate",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Recording_mode = {
	"Camera.Recording_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RECORDING_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Recording_mode,
	sizeof(s_arg_desc_Camera_Recording_mode) / sizeof(s_arg_desc_Camera_Recording_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Photo_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_mode,
		sizeof(s_enum_desc_Camera_Photo_mode) / sizeof(s_enum_desc_Camera_Photo_mode[0])
	},
	{
		"Format",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_format,
		sizeof(s_enum_desc_Camera_Photo_format) / sizeof(s_enum_desc_Camera_Photo_format[0])
	},
	{
		"File_format",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_file_format,
		sizeof(s_enum_desc_Camera_Photo_file_format) / sizeof(s_enum_desc_Camera_Photo_file_format[0])
	},
	{
		"Burst",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Burst_value,
		sizeof(s_enum_desc_Camera_Burst_value) / sizeof(s_enum_desc_Camera_Burst_value[0])
	},
	{
		"Bracketing",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Bracketing_preset,
		sizeof(s_enum_desc_Camera_Bracketing_preset) / sizeof(s_enum_desc_Camera_Bracketing_preset[0])
	},
	{
		"Capture_interval",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Photo_mode = {
	"Camera.Photo_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_PHOTO_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Photo_mode,
	sizeof(s_arg_desc_Camera_Photo_mode) / sizeof(s_arg_desc_Camera_Photo_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Streaming_mode[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Streaming_mode,
		sizeof(s_enum_desc_Camera_Streaming_mode) / sizeof(s_enum_desc_Camera_Streaming_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Streaming_mode = {
	"Camera.Streaming_mode",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_STREAMING_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Streaming_mode,
	sizeof(s_arg_desc_Camera_Streaming_mode) / sizeof(s_arg_desc_Camera_Streaming_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Photo_progress[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_result,
		sizeof(s_enum_desc_Camera_Photo_result) / sizeof(s_enum_desc_Camera_Photo_result[0])
	},
	{
		"Photo_count",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Media_id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Photo_progress = {
	"Camera.Photo_progress",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_PHOTO_PROGRESS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Photo_progress,
	sizeof(s_arg_desc_Camera_Photo_progress) / sizeof(s_arg_desc_Camera_Photo_progress[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Photo_state[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Available",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Availability,
		sizeof(s_enum_desc_Camera_Availability) / sizeof(s_enum_desc_Camera_Availability[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Photo_state = {
	"Camera.Photo_state",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_PHOTO_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Photo_state,
	sizeof(s_arg_desc_Camera_Photo_state) / sizeof(s_arg_desc_Camera_Photo_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Recording_progress[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Recording_result,
		sizeof(s_enum_desc_Camera_Recording_result) / sizeof(s_enum_desc_Camera_Recording_result[0])
	},
	{
		"Media_id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Recording_progress = {
	"Camera.Recording_progress",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RECORDING_PROGRESS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Recording_progress,
	sizeof(s_arg_desc_Camera_Recording_progress) / sizeof(s_arg_desc_Camera_Recording_progress[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Recording_state[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Available",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Availability,
		sizeof(s_enum_desc_Camera_Availability) / sizeof(s_enum_desc_Camera_Availability[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
	{
		"Start_timestamp",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Recording_state = {
	"Camera.Recording_state",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_RECORDING_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Recording_state,
	sizeof(s_arg_desc_Camera_Recording_state) / sizeof(s_arg_desc_Camera_Recording_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Autorecord[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_State,
		sizeof(s_enum_desc_Camera_State) / sizeof(s_enum_desc_Camera_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Autorecord = {
	"Camera.Autorecord",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_AUTORECORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Autorecord,
	sizeof(s_arg_desc_Camera_Autorecord) / sizeof(s_arg_desc_Camera_Autorecord[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Camera_states[] = {
	{
		"Active_cameras",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Camera_states = {
	"Camera.Camera_states",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_CAMERA_STATES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Camera_states,
	sizeof(s_arg_desc_Camera_Camera_states) / sizeof(s_arg_desc_Camera_Camera_states[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Next_photo_delay[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Camera_Photo_mode,
		sizeof(s_enum_desc_Camera_Photo_mode) / sizeof(s_enum_desc_Camera_Photo_mode[0])
	},
	{
		"Remaining",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Next_photo_delay = {
	"Camera.Next_photo_delay",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_NEXT_PHOTO_DELAY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Next_photo_delay,
	sizeof(s_arg_desc_Camera_Next_photo_delay) / sizeof(s_arg_desc_Camera_Next_photo_delay[0])
};

static const struct arsdk_arg_desc s_arg_desc_Camera_Alignment_offsets[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Min_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Camera_Alignment_offsets = {
	"Camera.Alignment_offsets",
	ARSDK_PRJ_CAMERA,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_CAMERA_ALIGNMENT_OFFSETS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Camera_Alignment_offsets,
	sizeof(s_arg_desc_Camera_Alignment_offsets) / sizeof(s_arg_desc_Camera_Alignment_offsets[0])
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Type[] = {
	{"NONE", ARSDK_ANIMATION_TYPE_NONE},
	{"FLIP", ARSDK_ANIMATION_TYPE_FLIP},
	{"HORIZONTAL_PANORAMA", ARSDK_ANIMATION_TYPE_HORIZONTAL_PANORAMA},
	{"DRONIE", ARSDK_ANIMATION_TYPE_DRONIE},
	{"HORIZONTAL_REVEAL", ARSDK_ANIMATION_TYPE_HORIZONTAL_REVEAL},
	{"VERTICAL_REVEAL", ARSDK_ANIMATION_TYPE_VERTICAL_REVEAL},
	{"SPIRAL", ARSDK_ANIMATION_TYPE_SPIRAL},
	{"PARABOLA", ARSDK_ANIMATION_TYPE_PARABOLA},
	{"CANDLE", ARSDK_ANIMATION_TYPE_CANDLE},
	{"DOLLY_SLIDE", ARSDK_ANIMATION_TYPE_DOLLY_SLIDE},
	{"VERTIGO", ARSDK_ANIMATION_TYPE_VERTIGO},
	{"TWIST_UP", ARSDK_ANIMATION_TYPE_TWIST_UP},
	{"POSITION_TWIST_UP", ARSDK_ANIMATION_TYPE_POSITION_TWIST_UP},
	{"HORIZONTAL_180_PHOTO_PANORAMA", ARSDK_ANIMATION_TYPE_HORIZONTAL_180_PHOTO_PANORAMA},
	{"VERTICAL_180_PHOTO_PANORAMA", ARSDK_ANIMATION_TYPE_VERTICAL_180_PHOTO_PANORAMA},
	{"SPHERICAL_PHOTO_PANORAMA", ARSDK_ANIMATION_TYPE_SPHERICAL_PHOTO_PANORAMA},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_State[] = {
	{"IDLE", ARSDK_ANIMATION_STATE_IDLE},
	{"RUNNING", ARSDK_ANIMATION_STATE_RUNNING},
	{"CANCELING", ARSDK_ANIMATION_STATE_CANCELING},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Play_mode[] = {
	{"NORMAL", ARSDK_ANIMATION_PLAY_MODE_NORMAL},
	{"ONCE_THEN_MIRRORED", ARSDK_ANIMATION_PLAY_MODE_ONCE_THEN_MIRRORED},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Flip_type[] = {
	{"FRONT", ARSDK_ANIMATION_FLIP_TYPE_FRONT},
	{"BACK", ARSDK_ANIMATION_FLIP_TYPE_BACK},
	{"LEFT", ARSDK_ANIMATION_FLIP_TYPE_LEFT},
	{"RIGHT", ARSDK_ANIMATION_FLIP_TYPE_RIGHT},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Horizontal_panorama_config_param[] = {
	{"ROTATION_ANGLE", ARSDK_ANIMATION_HORIZONTAL_PANORAMA_CONFIG_PARAM_ROTATION_ANGLE},
	{"ROTATION_SPEED", ARSDK_ANIMATION_HORIZONTAL_PANORAMA_CONFIG_PARAM_ROTATION_SPEED},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Dronie_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_DRONIE_CONFIG_PARAM_SPEED},
	{"DISTANCE", ARSDK_ANIMATION_DRONIE_CONFIG_PARAM_DISTANCE},
	{"PLAY_MODE", ARSDK_ANIMATION_DRONIE_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Horizontal_reveal_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_HORIZONTAL_REVEAL_CONFIG_PARAM_SPEED},
	{"DISTANCE", ARSDK_ANIMATION_HORIZONTAL_REVEAL_CONFIG_PARAM_DISTANCE},
	{"PLAY_MODE", ARSDK_ANIMATION_HORIZONTAL_REVEAL_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Vertical_reveal_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_VERTICAL_REVEAL_CONFIG_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_ANIMATION_VERTICAL_REVEAL_CONFIG_PARAM_VERTICAL_DISTANCE},
	{"ROTATION_ANGLE", ARSDK_ANIMATION_VERTICAL_REVEAL_CONFIG_PARAM_ROTATION_ANGLE},
	{"ROTATION_SPEED", ARSDK_ANIMATION_VERTICAL_REVEAL_CONFIG_PARAM_ROTATION_SPEED},
	{"PLAY_MODE", ARSDK_ANIMATION_VERTICAL_REVEAL_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Spiral_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_SPIRAL_CONFIG_PARAM_SPEED},
	{"RADIUS_VARIATION", ARSDK_ANIMATION_SPIRAL_CONFIG_PARAM_RADIUS_VARIATION},
	{"VERTICAL_DISTANCE", ARSDK_ANIMATION_SPIRAL_CONFIG_PARAM_VERTICAL_DISTANCE},
	{"REVOLUTION_NB", ARSDK_ANIMATION_SPIRAL_CONFIG_PARAM_REVOLUTION_NB},
	{"PLAY_MODE", ARSDK_ANIMATION_SPIRAL_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Parabola_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_PARABOLA_CONFIG_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_ANIMATION_PARABOLA_CONFIG_PARAM_VERTICAL_DISTANCE},
	{"PLAY_MODE", ARSDK_ANIMATION_PARABOLA_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Candle_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_CANDLE_CONFIG_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_ANIMATION_CANDLE_CONFIG_PARAM_VERTICAL_DISTANCE},
	{"PLAY_MODE", ARSDK_ANIMATION_CANDLE_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Dolly_slide_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_DOLLY_SLIDE_CONFIG_PARAM_SPEED},
	{"ANGLE", ARSDK_ANIMATION_DOLLY_SLIDE_CONFIG_PARAM_ANGLE},
	{"HORIZONTAL_DISTANCE", ARSDK_ANIMATION_DOLLY_SLIDE_CONFIG_PARAM_HORIZONTAL_DISTANCE},
	{"PLAY_MODE", ARSDK_ANIMATION_DOLLY_SLIDE_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Vertigo_config_param[] = {
	{"DURATION", ARSDK_ANIMATION_VERTIGO_CONFIG_PARAM_DURATION},
	{"MAX_ZOOM_LEVEL", ARSDK_ANIMATION_VERTIGO_CONFIG_PARAM_MAX_ZOOM_LEVEL},
	{"FINISH_ACTION", ARSDK_ANIMATION_VERTIGO_CONFIG_PARAM_FINISH_ACTION},
	{"PLAY_MODE", ARSDK_ANIMATION_VERTIGO_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Twist_up_config_param[] = {
	{"SPEED", ARSDK_ANIMATION_TWIST_UP_CONFIG_PARAM_SPEED},
	{"VERTICAL_DISTANCE", ARSDK_ANIMATION_TWIST_UP_CONFIG_PARAM_VERTICAL_DISTANCE},
	{"ROTATION_ANGLE", ARSDK_ANIMATION_TWIST_UP_CONFIG_PARAM_ROTATION_ANGLE},
	{"ROTATION_SPEED", ARSDK_ANIMATION_TWIST_UP_CONFIG_PARAM_ROTATION_SPEED},
	{"PLAY_MODE", ARSDK_ANIMATION_TWIST_UP_CONFIG_PARAM_PLAY_MODE},
};

static const struct arsdk_enum_desc s_enum_desc_Animation_Vertigo_finish_action[] = {
	{"NONE", ARSDK_ANIMATION_VERTIGO_FINISH_ACTION_NONE},
	{"UNZOOM", ARSDK_ANIMATION_VERTIGO_FINISH_ACTION_UNZOOM},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Cancel = {
	"Animation.Cancel",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_CANCEL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_flip[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Flip_type,
		sizeof(s_enum_desc_Animation_Flip_type) / sizeof(s_enum_desc_Animation_Flip_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_flip = {
	"Animation.Start_flip",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_FLIP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_flip,
	sizeof(s_arg_desc_Animation_Start_flip) / sizeof(s_arg_desc_Animation_Start_flip[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_horizontal_panorama[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Horizontal_panorama_config_param,
		sizeof(s_enum_desc_Animation_Horizontal_panorama_config_param) / sizeof(s_enum_desc_Animation_Horizontal_panorama_config_param[0])
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_horizontal_panorama = {
	"Animation.Start_horizontal_panorama",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_HORIZONTAL_PANORAMA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_horizontal_panorama,
	sizeof(s_arg_desc_Animation_Start_horizontal_panorama) / sizeof(s_arg_desc_Animation_Start_horizontal_panorama[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_dronie[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Dronie_config_param,
		sizeof(s_enum_desc_Animation_Dronie_config_param) / sizeof(s_enum_desc_Animation_Dronie_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_dronie = {
	"Animation.Start_dronie",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_DRONIE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_dronie,
	sizeof(s_arg_desc_Animation_Start_dronie) / sizeof(s_arg_desc_Animation_Start_dronie[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_horizontal_reveal[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Horizontal_reveal_config_param,
		sizeof(s_enum_desc_Animation_Horizontal_reveal_config_param) / sizeof(s_enum_desc_Animation_Horizontal_reveal_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_horizontal_reveal = {
	"Animation.Start_horizontal_reveal",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_HORIZONTAL_REVEAL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_horizontal_reveal,
	sizeof(s_arg_desc_Animation_Start_horizontal_reveal) / sizeof(s_arg_desc_Animation_Start_horizontal_reveal[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_vertical_reveal[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Vertical_reveal_config_param,
		sizeof(s_enum_desc_Animation_Vertical_reveal_config_param) / sizeof(s_enum_desc_Animation_Vertical_reveal_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_vertical_reveal = {
	"Animation.Start_vertical_reveal",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_VERTICAL_REVEAL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_vertical_reveal,
	sizeof(s_arg_desc_Animation_Start_vertical_reveal) / sizeof(s_arg_desc_Animation_Start_vertical_reveal[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_spiral[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Spiral_config_param,
		sizeof(s_enum_desc_Animation_Spiral_config_param) / sizeof(s_enum_desc_Animation_Spiral_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Radius_variation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Revolution_nb",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_spiral = {
	"Animation.Start_spiral",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_SPIRAL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_spiral,
	sizeof(s_arg_desc_Animation_Start_spiral) / sizeof(s_arg_desc_Animation_Start_spiral[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_parabola[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Parabola_config_param,
		sizeof(s_enum_desc_Animation_Parabola_config_param) / sizeof(s_enum_desc_Animation_Parabola_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_parabola = {
	"Animation.Start_parabola",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_PARABOLA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_parabola,
	sizeof(s_arg_desc_Animation_Start_parabola) / sizeof(s_arg_desc_Animation_Start_parabola[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_candle[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Candle_config_param,
		sizeof(s_enum_desc_Animation_Candle_config_param) / sizeof(s_enum_desc_Animation_Candle_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_candle = {
	"Animation.Start_candle",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_CANDLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_candle,
	sizeof(s_arg_desc_Animation_Start_candle) / sizeof(s_arg_desc_Animation_Start_candle[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_dolly_slide[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Dolly_slide_config_param,
		sizeof(s_enum_desc_Animation_Dolly_slide_config_param) / sizeof(s_enum_desc_Animation_Dolly_slide_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Horizontal_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_dolly_slide = {
	"Animation.Start_dolly_slide",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_DOLLY_SLIDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_dolly_slide,
	sizeof(s_arg_desc_Animation_Start_dolly_slide) / sizeof(s_arg_desc_Animation_Start_dolly_slide[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_vertigo[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Vertigo_config_param,
		sizeof(s_enum_desc_Animation_Vertigo_config_param) / sizeof(s_enum_desc_Animation_Vertigo_config_param[0])
	},
	{
		"Duration",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_zoom_level",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Finish_action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Vertigo_finish_action,
		sizeof(s_enum_desc_Animation_Vertigo_finish_action) / sizeof(s_enum_desc_Animation_Vertigo_finish_action[0])
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_vertigo = {
	"Animation.Start_vertigo",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_VERTIGO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_vertigo,
	sizeof(s_arg_desc_Animation_Start_vertigo) / sizeof(s_arg_desc_Animation_Start_vertigo[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_twist_up[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Twist_up_config_param,
		sizeof(s_enum_desc_Animation_Twist_up_config_param) / sizeof(s_enum_desc_Animation_Twist_up_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_twist_up = {
	"Animation.Start_twist_up",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_TWIST_UP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_twist_up,
	sizeof(s_arg_desc_Animation_Start_twist_up) / sizeof(s_arg_desc_Animation_Start_twist_up[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Start_position_twist_up[] = {
	{
		"Provided_params",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Animation_Twist_up_config_param,
		sizeof(s_enum_desc_Animation_Twist_up_config_param) / sizeof(s_enum_desc_Animation_Twist_up_config_param[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_position_twist_up = {
	"Animation.Start_position_twist_up",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_POSITION_TWIST_UP,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Start_position_twist_up,
	sizeof(s_arg_desc_Animation_Start_position_twist_up) / sizeof(s_arg_desc_Animation_Start_position_twist_up[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_horizontal_180_photo_panorama = {
	"Animation.Start_horizontal_180_photo_panorama",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_HORIZONTAL_180_PHOTO_PANORAMA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_vertical_180_photo_panorama = {
	"Animation.Start_vertical_180_photo_panorama",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_VERTICAL_180_PHOTO_PANORAMA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Start_spherical_photo_panorama = {
	"Animation.Start_spherical_photo_panorama",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_START_SPHERICAL_PHOTO_PANORAMA,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Availability[] = {
	{
		"Values",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Animation_Type,
		sizeof(s_enum_desc_Animation_Type) / sizeof(s_enum_desc_Animation_Type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Availability = {
	"Animation.Availability",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_AVAILABILITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Availability,
	sizeof(s_arg_desc_Animation_Availability) / sizeof(s_arg_desc_Animation_Availability[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_State[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Type,
		sizeof(s_enum_desc_Animation_Type) / sizeof(s_enum_desc_Animation_Type[0])
	},
	{
		"Percent",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_State = {
	"Animation.State",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_State,
	sizeof(s_arg_desc_Animation_State) / sizeof(s_arg_desc_Animation_State[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Flip_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Flip_type,
		sizeof(s_enum_desc_Animation_Flip_type) / sizeof(s_enum_desc_Animation_Flip_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Flip_state = {
	"Animation.Flip_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_FLIP_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Flip_state,
	sizeof(s_arg_desc_Animation_Flip_state) / sizeof(s_arg_desc_Animation_Flip_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Horizontal_panorama_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Horizontal_panorama_state = {
	"Animation.Horizontal_panorama_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_HORIZONTAL_PANORAMA_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Horizontal_panorama_state,
	sizeof(s_arg_desc_Animation_Horizontal_panorama_state) / sizeof(s_arg_desc_Animation_Horizontal_panorama_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Dronie_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Dronie_state = {
	"Animation.Dronie_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_DRONIE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Dronie_state,
	sizeof(s_arg_desc_Animation_Dronie_state) / sizeof(s_arg_desc_Animation_Dronie_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Horizontal_reveal_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Horizontal_reveal_state = {
	"Animation.Horizontal_reveal_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_HORIZONTAL_REVEAL_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Horizontal_reveal_state,
	sizeof(s_arg_desc_Animation_Horizontal_reveal_state) / sizeof(s_arg_desc_Animation_Horizontal_reveal_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Vertical_reveal_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Vertical_reveal_state = {
	"Animation.Vertical_reveal_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_VERTICAL_REVEAL_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Vertical_reveal_state,
	sizeof(s_arg_desc_Animation_Vertical_reveal_state) / sizeof(s_arg_desc_Animation_Vertical_reveal_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Spiral_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Radius_variation",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Revolution_nb",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Spiral_state = {
	"Animation.Spiral_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_SPIRAL_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Spiral_state,
	sizeof(s_arg_desc_Animation_Spiral_state) / sizeof(s_arg_desc_Animation_Spiral_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Parabola_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Parabola_state = {
	"Animation.Parabola_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_PARABOLA_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Parabola_state,
	sizeof(s_arg_desc_Animation_Parabola_state) / sizeof(s_arg_desc_Animation_Parabola_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Candle_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Candle_state = {
	"Animation.Candle_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_CANDLE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Candle_state,
	sizeof(s_arg_desc_Animation_Candle_state) / sizeof(s_arg_desc_Animation_Candle_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Dolly_slide_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Horizontal_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Dolly_slide_state = {
	"Animation.Dolly_slide_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_DOLLY_SLIDE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Dolly_slide_state,
	sizeof(s_arg_desc_Animation_Dolly_slide_state) / sizeof(s_arg_desc_Animation_Dolly_slide_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Vertigo_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Duration",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_zoom_level",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Finish_action",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Vertigo_finish_action,
		sizeof(s_enum_desc_Animation_Vertigo_finish_action) / sizeof(s_enum_desc_Animation_Vertigo_finish_action[0])
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Vertigo_state = {
	"Animation.Vertigo_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_VERTIGO_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Vertigo_state,
	sizeof(s_arg_desc_Animation_Vertigo_state) / sizeof(s_arg_desc_Animation_Vertigo_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Twist_up_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Twist_up_state = {
	"Animation.Twist_up_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_TWIST_UP_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Twist_up_state,
	sizeof(s_arg_desc_Animation_Twist_up_state) / sizeof(s_arg_desc_Animation_Twist_up_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Position_twist_up_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
	{
		"Speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Vertical_distance",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_angle",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Play_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_Play_mode,
		sizeof(s_enum_desc_Animation_Play_mode) / sizeof(s_enum_desc_Animation_Play_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Position_twist_up_state = {
	"Animation.Position_twist_up_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_POSITION_TWIST_UP_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Position_twist_up_state,
	sizeof(s_arg_desc_Animation_Position_twist_up_state) / sizeof(s_arg_desc_Animation_Position_twist_up_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Horizontal_180_photo_panorama_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Horizontal_180_photo_panorama_state = {
	"Animation.Horizontal_180_photo_panorama_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_HORIZONTAL_180_PHOTO_PANORAMA_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Horizontal_180_photo_panorama_state,
	sizeof(s_arg_desc_Animation_Horizontal_180_photo_panorama_state) / sizeof(s_arg_desc_Animation_Horizontal_180_photo_panorama_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Vertical_180_photo_panorama_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Vertical_180_photo_panorama_state = {
	"Animation.Vertical_180_photo_panorama_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_VERTICAL_180_PHOTO_PANORAMA_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Vertical_180_photo_panorama_state,
	sizeof(s_arg_desc_Animation_Vertical_180_photo_panorama_state) / sizeof(s_arg_desc_Animation_Vertical_180_photo_panorama_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Animation_Spherical_photo_panorama_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Animation_State,
		sizeof(s_enum_desc_Animation_State) / sizeof(s_enum_desc_Animation_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Animation_Spherical_photo_panorama_state = {
	"Animation.Spherical_photo_panorama_state",
	ARSDK_PRJ_ANIMATION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_ANIMATION_SPHERICAL_PHOTO_PANORAMA_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Animation_Spherical_photo_panorama_state,
	sizeof(s_arg_desc_Animation_Spherical_photo_panorama_state) / sizeof(s_arg_desc_Animation_Spherical_photo_panorama_state[0])
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Phy_state[] = {
	{"UNDETECTED", ARSDK_USER_STORAGE_PHY_STATE_UNDETECTED},
	{"TOO_SMALL", ARSDK_USER_STORAGE_PHY_STATE_TOO_SMALL},
	{"TOO_SLOW", ARSDK_USER_STORAGE_PHY_STATE_TOO_SLOW},
	{"AVAILABLE", ARSDK_USER_STORAGE_PHY_STATE_AVAILABLE},
	{"USB_MASS_STORAGE", ARSDK_USER_STORAGE_PHY_STATE_USB_MASS_STORAGE},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Fs_state[] = {
	{"UNKNOWN", ARSDK_USER_STORAGE_FS_STATE_UNKNOWN},
	{"FORMAT_NEEDED", ARSDK_USER_STORAGE_FS_STATE_FORMAT_NEEDED},
	{"FORMATTING", ARSDK_USER_STORAGE_FS_STATE_FORMATTING},
	{"READY", ARSDK_USER_STORAGE_FS_STATE_READY},
	{"ERROR", ARSDK_USER_STORAGE_FS_STATE_ERROR},
	{"PASSWORD_NEEDED", ARSDK_USER_STORAGE_FS_STATE_PASSWORD_NEEDED},
	{"CHECKING", ARSDK_USER_STORAGE_FS_STATE_CHECKING},
	{"EXTERNAL_ACCESS_OK", ARSDK_USER_STORAGE_FS_STATE_EXTERNAL_ACCESS_OK},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Attribute[] = {
	{"LOW_PERF", ARSDK_USER_STORAGE_ATTRIBUTE_LOW_PERF},
	{"ENCRYPTED", ARSDK_USER_STORAGE_ATTRIBUTE_ENCRYPTED},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Formatting_result[] = {
	{"ERROR", ARSDK_USER_STORAGE_FORMATTING_RESULT_ERROR},
	{"DENIED", ARSDK_USER_STORAGE_FORMATTING_RESULT_DENIED},
	{"SUCCESS", ARSDK_USER_STORAGE_FORMATTING_RESULT_SUCCESS},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Password_result[] = {
	{"WRONG_PASSWORD", ARSDK_USER_STORAGE_PASSWORD_RESULT_WRONG_PASSWORD},
	{"SUCCESS", ARSDK_USER_STORAGE_PASSWORD_RESULT_SUCCESS},
	{"WRONG_USAGE", ARSDK_USER_STORAGE_PASSWORD_RESULT_WRONG_USAGE},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Feature[] = {
	{"FORMAT_WHEN_READY_ALLOWED", ARSDK_USER_STORAGE_FEATURE_FORMAT_WHEN_READY_ALLOWED},
	{"FORMAT_RESULT_EVT_SUPPORTED", ARSDK_USER_STORAGE_FEATURE_FORMAT_RESULT_EVT_SUPPORTED},
	{"FORMAT_PROGRESS_EVT_SUPPORTED", ARSDK_USER_STORAGE_FEATURE_FORMAT_PROGRESS_EVT_SUPPORTED},
	{"ENCRYPTION_SUPPORTED", ARSDK_USER_STORAGE_FEATURE_ENCRYPTION_SUPPORTED},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Formatting_type[] = {
	{"FULL", ARSDK_USER_STORAGE_FORMATTING_TYPE_FULL},
	{"QUICK", ARSDK_USER_STORAGE_FORMATTING_TYPE_QUICK},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Formatting_step[] = {
	{"PARTITIONING", ARSDK_USER_STORAGE_FORMATTING_STEP_PARTITIONING},
	{"CLEARING_DATA", ARSDK_USER_STORAGE_FORMATTING_STEP_CLEARING_DATA},
	{"CREATING_FS", ARSDK_USER_STORAGE_FORMATTING_STEP_CREATING_FS},
};

static const struct arsdk_enum_desc s_enum_desc_User_storage_Password_usage[] = {
	{"RECORD", ARSDK_USER_STORAGE_PASSWORD_USAGE_RECORD},
	{"USB", ARSDK_USER_STORAGE_PASSWORD_USAGE_USB},
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Format[] = {
	{
		"Label",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Format = {
	"User_storage.Format",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_FORMAT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Format,
	sizeof(s_arg_desc_User_storage_Format) / sizeof(s_arg_desc_User_storage_Format[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Format_with_type[] = {
	{
		"Label",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Formatting_type,
		sizeof(s_enum_desc_User_storage_Formatting_type) / sizeof(s_enum_desc_User_storage_Formatting_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Format_with_type = {
	"User_storage.Format_with_type",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_FORMAT_WITH_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Format_with_type,
	sizeof(s_arg_desc_User_storage_Format_with_type) / sizeof(s_arg_desc_User_storage_Format_with_type[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Format_with_encryption[] = {
	{
		"Label",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Password",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Formatting_type,
		sizeof(s_enum_desc_User_storage_Formatting_type) / sizeof(s_enum_desc_User_storage_Formatting_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Format_with_encryption = {
	"User_storage.Format_with_encryption",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_FORMAT_WITH_ENCRYPTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Format_with_encryption,
	sizeof(s_arg_desc_User_storage_Format_with_encryption) / sizeof(s_arg_desc_User_storage_Format_with_encryption[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Start_monitoring[] = {
	{
		"Period",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Start_monitoring = {
	"User_storage.Start_monitoring",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_START_MONITORING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Start_monitoring,
	sizeof(s_arg_desc_User_storage_Start_monitoring) / sizeof(s_arg_desc_User_storage_Start_monitoring[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Stop_monitoring = {
	"User_storage.Stop_monitoring",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_STOP_MONITORING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Encryption_password[] = {
	{
		"Password",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Password_usage,
		sizeof(s_enum_desc_User_storage_Password_usage) / sizeof(s_enum_desc_User_storage_Password_usage[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Encryption_password = {
	"User_storage.Encryption_password",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_ENCRYPTION_PASSWORD,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Encryption_password,
	sizeof(s_arg_desc_User_storage_Encryption_password) / sizeof(s_arg_desc_User_storage_Encryption_password[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Capabilities[] = {
	{
		"Supported_features",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_User_storage_Feature,
		sizeof(s_enum_desc_User_storage_Feature) / sizeof(s_enum_desc_User_storage_Feature[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Capabilities = {
	"User_storage.Capabilities",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Capabilities,
	sizeof(s_arg_desc_User_storage_Capabilities) / sizeof(s_arg_desc_User_storage_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Supported_formatting_types[] = {
	{
		"Supported_types",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_User_storage_Formatting_type,
		sizeof(s_enum_desc_User_storage_Formatting_type) / sizeof(s_enum_desc_User_storage_Formatting_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Supported_formatting_types = {
	"User_storage.Supported_formatting_types",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_SUPPORTED_FORMATTING_TYPES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Supported_formatting_types,
	sizeof(s_arg_desc_User_storage_Supported_formatting_types) / sizeof(s_arg_desc_User_storage_Supported_formatting_types[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Info[] = {
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Capacity",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Info = {
	"User_storage.Info",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_INFO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Info,
	sizeof(s_arg_desc_User_storage_Info) / sizeof(s_arg_desc_User_storage_Info[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Monitor[] = {
	{
		"Available_bytes",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Monitor = {
	"User_storage.Monitor",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_MONITOR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Monitor,
	sizeof(s_arg_desc_User_storage_Monitor) / sizeof(s_arg_desc_User_storage_Monitor[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_State[] = {
	{
		"Physical_state",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Phy_state,
		sizeof(s_enum_desc_User_storage_Phy_state) / sizeof(s_enum_desc_User_storage_Phy_state[0])
	},
	{
		"File_system_state",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Fs_state,
		sizeof(s_enum_desc_User_storage_Fs_state) / sizeof(s_enum_desc_User_storage_Fs_state[0])
	},
	{
		"Attribute",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_User_storage_Attribute,
		sizeof(s_enum_desc_User_storage_Attribute) / sizeof(s_enum_desc_User_storage_Attribute[0])
	},
	{
		"Monitor_enabled",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Monitor_period",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_State = {
	"User_storage.State",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_State,
	sizeof(s_arg_desc_User_storage_State) / sizeof(s_arg_desc_User_storage_State[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Sdcard_uuid[] = {
	{
		"Uuid",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Sdcard_uuid = {
	"User_storage.Sdcard_uuid",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_SDCARD_UUID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Sdcard_uuid,
	sizeof(s_arg_desc_User_storage_Sdcard_uuid) / sizeof(s_arg_desc_User_storage_Sdcard_uuid[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Format_result[] = {
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Formatting_result,
		sizeof(s_enum_desc_User_storage_Formatting_result) / sizeof(s_enum_desc_User_storage_Formatting_result[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Format_result = {
	"User_storage.Format_result",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_FORMAT_RESULT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Format_result,
	sizeof(s_arg_desc_User_storage_Format_result) / sizeof(s_arg_desc_User_storage_Format_result[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Decryption[] = {
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Password_result,
		sizeof(s_enum_desc_User_storage_Password_result) / sizeof(s_enum_desc_User_storage_Password_result[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Decryption = {
	"User_storage.Decryption",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_DECRYPTION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Decryption,
	sizeof(s_arg_desc_User_storage_Decryption) / sizeof(s_arg_desc_User_storage_Decryption[0])
};

static const struct arsdk_arg_desc s_arg_desc_User_storage_Format_progress[] = {
	{
		"Step",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_User_storage_Formatting_step,
		sizeof(s_enum_desc_User_storage_Formatting_step) / sizeof(s_enum_desc_User_storage_Formatting_step[0])
	},
	{
		"Percentage",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_User_storage_Format_progress = {
	"User_storage.Format_progress",
	ARSDK_PRJ_USER_STORAGE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_USER_STORAGE_FORMAT_PROGRESS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_User_storage_Format_progress,
	sizeof(s_arg_desc_User_storage_Format_progress) / sizeof(s_arg_desc_User_storage_Format_progress[0])
};

static const struct arsdk_enum_desc s_enum_desc_Rth_Home_type[] = {
	{"NONE", ARSDK_RTH_HOME_TYPE_NONE},
	{"TAKEOFF", ARSDK_RTH_HOME_TYPE_TAKEOFF},
	{"FOLLOWEE", ARSDK_RTH_HOME_TYPE_FOLLOWEE},
	{"CUSTOM", ARSDK_RTH_HOME_TYPE_CUSTOM},
	{"PILOT", ARSDK_RTH_HOME_TYPE_PILOT},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_State[] = {
	{"AVAILABLE", ARSDK_RTH_STATE_AVAILABLE},
	{"IN_PROGRESS", ARSDK_RTH_STATE_IN_PROGRESS},
	{"UNAVAILABLE", ARSDK_RTH_STATE_UNAVAILABLE},
	{"PENDING", ARSDK_RTH_STATE_PENDING},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_State_reason[] = {
	{"USER_REQUEST", ARSDK_RTH_STATE_REASON_USER_REQUEST},
	{"CONNECTION_LOST", ARSDK_RTH_STATE_REASON_CONNECTION_LOST},
	{"LOW_BATTERY", ARSDK_RTH_STATE_REASON_LOW_BATTERY},
	{"FINISHED", ARSDK_RTH_STATE_REASON_FINISHED},
	{"STOPPED", ARSDK_RTH_STATE_REASON_STOPPED},
	{"DISABLED", ARSDK_RTH_STATE_REASON_DISABLED},
	{"ENABLED", ARSDK_RTH_STATE_REASON_ENABLED},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_Home_reachability[] = {
	{"UNKNOWN", ARSDK_RTH_HOME_REACHABILITY_UNKNOWN},
	{"REACHABLE", ARSDK_RTH_HOME_REACHABILITY_REACHABLE},
	{"CRITICAL", ARSDK_RTH_HOME_REACHABILITY_CRITICAL},
	{"NOT_REACHABLE", ARSDK_RTH_HOME_REACHABILITY_NOT_REACHABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_Auto_trigger_reason[] = {
	{"NONE", ARSDK_RTH_AUTO_TRIGGER_REASON_NONE},
	{"BATTERY_CRITICAL_SOON", ARSDK_RTH_AUTO_TRIGGER_REASON_BATTERY_CRITICAL_SOON},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_Auto_trigger_mode[] = {
	{"OFF", ARSDK_RTH_AUTO_TRIGGER_MODE_OFF},
	{"ON", ARSDK_RTH_AUTO_TRIGGER_MODE_ON},
};

static const struct arsdk_enum_desc s_enum_desc_Rth_Ending_behavior[] = {
	{"LANDING", ARSDK_RTH_ENDING_BEHAVIOR_LANDING},
	{"HOVERING", ARSDK_RTH_ENDING_BEHAVIOR_HOVERING},
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_preferred_home_type[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Home_type,
		sizeof(s_enum_desc_Rth_Home_type) / sizeof(s_enum_desc_Rth_Home_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_preferred_home_type = {
	"Rth.Set_preferred_home_type",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_PREFERRED_HOME_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_preferred_home_type,
	sizeof(s_arg_desc_Rth_Set_preferred_home_type) / sizeof(s_arg_desc_Rth_Set_preferred_home_type[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_custom_location[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_custom_location = {
	"Rth.Set_custom_location",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_CUSTOM_LOCATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_custom_location,
	sizeof(s_arg_desc_Rth_Set_custom_location) / sizeof(s_arg_desc_Rth_Set_custom_location[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_delay[] = {
	{
		"Delay",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_delay = {
	"Rth.Set_delay",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_DELAY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_delay,
	sizeof(s_arg_desc_Rth_Set_delay) / sizeof(s_arg_desc_Rth_Set_delay[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Return_to_home = {
	"Rth.Return_to_home",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_RETURN_TO_HOME,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Abort = {
	"Rth.Abort",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_ABORT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Cancel_auto_trigger = {
	"Rth.Cancel_auto_trigger",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_CANCEL_AUTO_TRIGGER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_min_altitude[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_min_altitude = {
	"Rth.Set_min_altitude",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_MIN_ALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_min_altitude,
	sizeof(s_arg_desc_Rth_Set_min_altitude) / sizeof(s_arg_desc_Rth_Set_min_altitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_auto_trigger_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Auto_trigger_mode,
		sizeof(s_enum_desc_Rth_Auto_trigger_mode) / sizeof(s_enum_desc_Rth_Auto_trigger_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_auto_trigger_mode = {
	"Rth.Set_auto_trigger_mode",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_AUTO_TRIGGER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_auto_trigger_mode,
	sizeof(s_arg_desc_Rth_Set_auto_trigger_mode) / sizeof(s_arg_desc_Rth_Set_auto_trigger_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_ending_behavior[] = {
	{
		"Ending_behavior",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Ending_behavior,
		sizeof(s_enum_desc_Rth_Ending_behavior) / sizeof(s_enum_desc_Rth_Ending_behavior[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_ending_behavior = {
	"Rth.Set_ending_behavior",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_ENDING_BEHAVIOR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_ending_behavior,
	sizeof(s_arg_desc_Rth_Set_ending_behavior) / sizeof(s_arg_desc_Rth_Set_ending_behavior[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Set_ending_hovering_altitude[] = {
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Set_ending_hovering_altitude = {
	"Rth.Set_ending_hovering_altitude",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_SET_ENDING_HOVERING_ALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Set_ending_hovering_altitude,
	sizeof(s_arg_desc_Rth_Set_ending_hovering_altitude) / sizeof(s_arg_desc_Rth_Set_ending_hovering_altitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Home_type_capabilities[] = {
	{
		"Values",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Rth_Home_type,
		sizeof(s_enum_desc_Rth_Home_type) / sizeof(s_enum_desc_Rth_Home_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Home_type_capabilities = {
	"Rth.Home_type_capabilities",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_HOME_TYPE_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Home_type_capabilities,
	sizeof(s_arg_desc_Rth_Home_type_capabilities) / sizeof(s_arg_desc_Rth_Home_type_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Home_type[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Home_type,
		sizeof(s_enum_desc_Rth_Home_type) / sizeof(s_enum_desc_Rth_Home_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Home_type = {
	"Rth.Home_type",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_HOME_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Home_type,
	sizeof(s_arg_desc_Rth_Home_type) / sizeof(s_arg_desc_Rth_Home_type[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Preferred_home_type[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Home_type,
		sizeof(s_enum_desc_Rth_Home_type) / sizeof(s_enum_desc_Rth_Home_type[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Preferred_home_type = {
	"Rth.Preferred_home_type",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_PREFERRED_HOME_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Preferred_home_type,
	sizeof(s_arg_desc_Rth_Preferred_home_type) / sizeof(s_arg_desc_Rth_Preferred_home_type[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Takeoff_location[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Fixed_before_takeoff",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Takeoff_location = {
	"Rth.Takeoff_location",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_TAKEOFF_LOCATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Takeoff_location,
	sizeof(s_arg_desc_Rth_Takeoff_location) / sizeof(s_arg_desc_Rth_Takeoff_location[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Custom_location[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Custom_location = {
	"Rth.Custom_location",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_CUSTOM_LOCATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Custom_location,
	sizeof(s_arg_desc_Rth_Custom_location) / sizeof(s_arg_desc_Rth_Custom_location[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Followee_location[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Followee_location = {
	"Rth.Followee_location",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_FOLLOWEE_LOCATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Followee_location,
	sizeof(s_arg_desc_Rth_Followee_location) / sizeof(s_arg_desc_Rth_Followee_location[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Delay[] = {
	{
		"Delay",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Delay = {
	"Rth.Delay",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_DELAY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Delay,
	sizeof(s_arg_desc_Rth_Delay) / sizeof(s_arg_desc_Rth_Delay[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_State[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_State,
		sizeof(s_enum_desc_Rth_State) / sizeof(s_enum_desc_Rth_State[0])
	},
	{
		"Reason",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_State_reason,
		sizeof(s_enum_desc_Rth_State_reason) / sizeof(s_enum_desc_Rth_State_reason[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_State = {
	"Rth.State",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_State,
	sizeof(s_arg_desc_Rth_State) / sizeof(s_arg_desc_Rth_State[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Home_reachability[] = {
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Home_reachability,
		sizeof(s_enum_desc_Rth_Home_reachability) / sizeof(s_enum_desc_Rth_Home_reachability[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Home_reachability = {
	"Rth.Home_reachability",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_HOME_REACHABILITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Home_reachability,
	sizeof(s_arg_desc_Rth_Home_reachability) / sizeof(s_arg_desc_Rth_Home_reachability[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Rth_auto_trigger[] = {
	{
		"Reason",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Auto_trigger_reason,
		sizeof(s_enum_desc_Rth_Auto_trigger_reason) / sizeof(s_enum_desc_Rth_Auto_trigger_reason[0])
	},
	{
		"Delay",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Rth_auto_trigger = {
	"Rth.Rth_auto_trigger",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_RTH_AUTO_TRIGGER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Rth_auto_trigger,
	sizeof(s_arg_desc_Rth_Rth_auto_trigger) / sizeof(s_arg_desc_Rth_Rth_auto_trigger[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Min_altitude[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Min_altitude = {
	"Rth.Min_altitude",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_MIN_ALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Min_altitude,
	sizeof(s_arg_desc_Rth_Min_altitude) / sizeof(s_arg_desc_Rth_Min_altitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Auto_trigger_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Auto_trigger_mode,
		sizeof(s_enum_desc_Rth_Auto_trigger_mode) / sizeof(s_enum_desc_Rth_Auto_trigger_mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Auto_trigger_mode = {
	"Rth.Auto_trigger_mode",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_AUTO_TRIGGER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Auto_trigger_mode,
	sizeof(s_arg_desc_Rth_Auto_trigger_mode) / sizeof(s_arg_desc_Rth_Auto_trigger_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Ending_behavior[] = {
	{
		"Ending_behavior",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Rth_Ending_behavior,
		sizeof(s_enum_desc_Rth_Ending_behavior) / sizeof(s_enum_desc_Rth_Ending_behavior[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Ending_behavior = {
	"Rth.Ending_behavior",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_ENDING_BEHAVIOR,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Ending_behavior,
	sizeof(s_arg_desc_Rth_Ending_behavior) / sizeof(s_arg_desc_Rth_Ending_behavior[0])
};

static const struct arsdk_arg_desc s_arg_desc_Rth_Ending_hovering_altitude[] = {
	{
		"Current",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Rth_Ending_hovering_altitude = {
	"Rth.Ending_hovering_altitude",
	ARSDK_PRJ_RTH,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_RTH_ENDING_HOVERING_ALTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Rth_Ending_hovering_altitude,
	sizeof(s_arg_desc_Rth_Ending_hovering_altitude) / sizeof(s_arg_desc_Rth_Ending_hovering_altitude[0])
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_Radiometric_calib_status_value[] = {
	{"AVAILABLE", ARSDK_SEQUOIA_CAM_RADIOMETRIC_CALIB_STATUS_VALUE_AVAILABLE},
	{"UNAVAILABLE", ARSDK_SEQUOIA_CAM_RADIOMETRIC_CALIB_STATUS_VALUE_UNAVAILABLE},
	{"IN_PROGRESS", ARSDK_SEQUOIA_CAM_RADIOMETRIC_CALIB_STATUS_VALUE_IN_PROGRESS},
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_Radiometric_calib_result_value[] = {
	{"SUCCESS", ARSDK_SEQUOIA_CAM_RADIOMETRIC_CALIB_RESULT_VALUE_SUCCESS},
	{"ERROR", ARSDK_SEQUOIA_CAM_RADIOMETRIC_CALIB_RESULT_VALUE_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_Session_status_value[] = {
	{"OPENED", ARSDK_SEQUOIA_CAM_SESSION_STATUS_VALUE_OPENED},
	{"CLOSED", ARSDK_SEQUOIA_CAM_SESSION_STATUS_VALUE_CLOSED},
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_Sensor_value[] = {
	{"NEAR_INFRA_RED", ARSDK_SEQUOIA_CAM_SENSOR_VALUE_NEAR_INFRA_RED},
	{"GREEN", ARSDK_SEQUOIA_CAM_SENSOR_VALUE_GREEN},
	{"RED", ARSDK_SEQUOIA_CAM_SENSOR_VALUE_RED},
	{"RED_EDGE", ARSDK_SEQUOIA_CAM_SENSOR_VALUE_RED_EDGE},
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_Storage_infos_selected[] = {
	{"SD", ARSDK_SEQUOIA_CAM_STORAGE_INFOS_SELECTED_SD},
	{"INTERNAL", ARSDK_SEQUOIA_CAM_STORAGE_INFOS_SELECTED_INTERNAL},
};

static const struct arsdk_enum_desc s_enum_desc_Sequoia_cam_System_error[] = {
	{"UPDATE_ERR", ARSDK_SEQUOIA_CAM_SYSTEM_ERROR_UPDATE_ERR},
	{"TEMP_ERR", ARSDK_SEQUOIA_CAM_SYSTEM_ERROR_TEMP_ERR},
	{"NO_SUNSHINE_ERR", ARSDK_SEQUOIA_CAM_SYSTEM_ERROR_NO_SUNSHINE_ERR},
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Radiometric_calib_start[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_start = {
	"Sequoia_cam.Radiometric_calib_start",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_RADIOMETRIC_CALIB_START,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Radiometric_calib_start,
	sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_start) / sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_start[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Open_session[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Name",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Open_session = {
	"Sequoia_cam.Open_session",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_OPEN_SESSION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Open_session,
	sizeof(s_arg_desc_Sequoia_cam_Open_session) / sizeof(s_arg_desc_Sequoia_cam_Open_session[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Close_session[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Close_session = {
	"Sequoia_cam.Close_session",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_CLOSE_SESSION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Close_session,
	sizeof(s_arg_desc_Sequoia_cam_Close_session) / sizeof(s_arg_desc_Sequoia_cam_Close_session[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Set_live_stitch_mask[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Sensors_mask",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Sequoia_cam_Sensor_value,
		sizeof(s_enum_desc_Sequoia_cam_Sensor_value) / sizeof(s_enum_desc_Sequoia_cam_Sensor_value[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Set_live_stitch_mask = {
	"Sequoia_cam.Set_live_stitch_mask",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_SET_LIVE_STITCH_MASK,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Set_live_stitch_mask,
	sizeof(s_arg_desc_Sequoia_cam_Set_live_stitch_mask) / sizeof(s_arg_desc_Sequoia_cam_Set_live_stitch_mask[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Get_storage_infos[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Get_storage_infos = {
	"Sequoia_cam.Get_storage_infos",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_GET_STORAGE_INFOS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Get_storage_infos,
	sizeof(s_arg_desc_Sequoia_cam_Get_storage_infos) / sizeof(s_arg_desc_Sequoia_cam_Get_storage_infos[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Factory_reset[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Factory_reset = {
	"Sequoia_cam.Factory_reset",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_FACTORY_RESET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Factory_reset,
	sizeof(s_arg_desc_Sequoia_cam_Factory_reset) / sizeof(s_arg_desc_Sequoia_cam_Factory_reset[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Radiometric_calib_status[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Sequoia_cam_Radiometric_calib_status_value,
		sizeof(s_enum_desc_Sequoia_cam_Radiometric_calib_status_value) / sizeof(s_enum_desc_Sequoia_cam_Radiometric_calib_status_value[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_status = {
	"Sequoia_cam.Radiometric_calib_status",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_RADIOMETRIC_CALIB_STATUS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Radiometric_calib_status,
	sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_status) / sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_status[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Radiometric_calib_result[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Value",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Sequoia_cam_Radiometric_calib_result_value,
		sizeof(s_enum_desc_Sequoia_cam_Radiometric_calib_result_value) / sizeof(s_enum_desc_Sequoia_cam_Radiometric_calib_result_value[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_result = {
	"Sequoia_cam.Radiometric_calib_result",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_RADIOMETRIC_CALIB_RESULT,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Radiometric_calib_result,
	sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_result) / sizeof(s_arg_desc_Sequoia_cam_Radiometric_calib_result[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Session_state_changed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Sequoia_cam_Session_status_value,
		sizeof(s_enum_desc_Sequoia_cam_Session_status_value) / sizeof(s_enum_desc_Sequoia_cam_Session_status_value[0])
	},
	{
		"Session_path",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Live_stitch_path",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Session_state_changed = {
	"Sequoia_cam.Session_state_changed",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_SESSION_STATE_CHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Session_state_changed,
	sizeof(s_arg_desc_Sequoia_cam_Session_state_changed) / sizeof(s_arg_desc_Sequoia_cam_Session_state_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Live_stitch_mask_changed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Mask",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Sequoia_cam_Sensor_value,
		sizeof(s_enum_desc_Sequoia_cam_Sensor_value) / sizeof(s_enum_desc_Sequoia_cam_Sensor_value[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_mask_changed = {
	"Sequoia_cam.Live_stitch_mask_changed",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_LIVE_STITCH_MASK_CHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Live_stitch_mask_changed,
	sizeof(s_arg_desc_Sequoia_cam_Live_stitch_mask_changed) / sizeof(s_arg_desc_Sequoia_cam_Live_stitch_mask_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Live_stitch_last_picture_id_changed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Picture_id",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_last_picture_id_changed = {
	"Sequoia_cam.Live_stitch_last_picture_id_changed",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_LIVE_STITCH_LAST_PICTURE_ID_CHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Live_stitch_last_picture_id_changed,
	sizeof(s_arg_desc_Sequoia_cam_Live_stitch_last_picture_id_changed) / sizeof(s_arg_desc_Sequoia_cam_Live_stitch_last_picture_id_changed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Storage_infos[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Selected",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Sequoia_cam_Storage_infos_selected,
		sizeof(s_enum_desc_Sequoia_cam_Storage_infos_selected) / sizeof(s_enum_desc_Sequoia_cam_Storage_infos_selected[0])
	},
	{
		"Internal_available",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Internal_total_size",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
	{
		"Internal_free_size",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
	{
		"Internal_is_ro",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Internal_is_corrupted",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Sd_available",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Sd_total_size",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
	{
		"Sd_free_size",
		ARSDK_ARG_TYPE_U64,
		NULL,
		0
	},
	{
		"Sd_is_ro",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Sd_is_corrupted",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Storage_infos = {
	"Sequoia_cam.Storage_infos",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_STORAGE_INFOS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Storage_infos,
	sizeof(s_arg_desc_Sequoia_cam_Storage_infos) / sizeof(s_arg_desc_Sequoia_cam_Storage_infos[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_System_status[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Errors",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Sequoia_cam_System_error,
		sizeof(s_enum_desc_Sequoia_cam_System_error) / sizeof(s_enum_desc_Sequoia_cam_System_error[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_System_status = {
	"Sequoia_cam.System_status",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_SYSTEM_STATUS,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_System_status,
	sizeof(s_arg_desc_Sequoia_cam_System_status) / sizeof(s_arg_desc_Sequoia_cam_System_status[0])
};

static const struct arsdk_arg_desc s_arg_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed[] = {
	{
		"Cam_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Nb_pictures",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed = {
	"Sequoia_cam.Live_stitch_pictures_in_progress_number_changed",
	ARSDK_PRJ_SEQUOIA_CAM,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SEQUOIA_CAM_LIVE_STITCH_PICTURES_IN_PROGRESS_NUMBER_CHANGED,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed,
	sizeof(s_arg_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed) / sizeof(s_arg_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed[0])
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Model[] = {
	{"MAIN", ARSDK_GIMBAL_MODEL_MAIN},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_State[] = {
	{"INACTIVE", ARSDK_GIMBAL_STATE_INACTIVE},
	{"ACTIVE", ARSDK_GIMBAL_STATE_ACTIVE},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Error[] = {
	{"CALIBRATION_ERROR", ARSDK_GIMBAL_ERROR_CALIBRATION_ERROR},
	{"OVERLOAD_ERROR", ARSDK_GIMBAL_ERROR_OVERLOAD_ERROR},
	{"COMM_ERROR", ARSDK_GIMBAL_ERROR_COMM_ERROR},
	{"CRITICAL_ERROR", ARSDK_GIMBAL_ERROR_CRITICAL_ERROR},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Calibration_state[] = {
	{"REQUIRED", ARSDK_GIMBAL_CALIBRATION_STATE_REQUIRED},
	{"IN_PROGRESS", ARSDK_GIMBAL_CALIBRATION_STATE_IN_PROGRESS},
	{"OK", ARSDK_GIMBAL_CALIBRATION_STATE_OK},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Calibration_result[] = {
	{"SUCCESS", ARSDK_GIMBAL_CALIBRATION_RESULT_SUCCESS},
	{"FAILURE", ARSDK_GIMBAL_CALIBRATION_RESULT_FAILURE},
	{"CANCELED", ARSDK_GIMBAL_CALIBRATION_RESULT_CANCELED},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Axis[] = {
	{"YAW", ARSDK_GIMBAL_AXIS_YAW},
	{"PITCH", ARSDK_GIMBAL_AXIS_PITCH},
	{"ROLL", ARSDK_GIMBAL_AXIS_ROLL},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Control_mode[] = {
	{"POSITION", ARSDK_GIMBAL_CONTROL_MODE_POSITION},
	{"VELOCITY", ARSDK_GIMBAL_CONTROL_MODE_VELOCITY},
};

static const struct arsdk_enum_desc s_enum_desc_Gimbal_Frame_of_reference[] = {
	{"NONE", ARSDK_GIMBAL_FRAME_OF_REFERENCE_NONE},
	{"RELATIVE", ARSDK_GIMBAL_FRAME_OF_REFERENCE_RELATIVE},
	{"ABSOLUTE", ARSDK_GIMBAL_FRAME_OF_REFERENCE_ABSOLUTE},
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Set_max_speed[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Set_max_speed = {
	"Gimbal.Set_max_speed",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_SET_MAX_SPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Set_max_speed,
	sizeof(s_arg_desc_Gimbal_Set_max_speed) / sizeof(s_arg_desc_Gimbal_Set_max_speed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Set_target[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Control_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Control_mode,
		sizeof(s_enum_desc_Gimbal_Control_mode) / sizeof(s_enum_desc_Gimbal_Control_mode[0])
	},
	{
		"Yaw_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Set_target = {
	"Gimbal.Set_target",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_SET_TARGET,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Set_target,
	sizeof(s_arg_desc_Gimbal_Set_target) / sizeof(s_arg_desc_Gimbal_Set_target[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Start_offsets_update[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Start_offsets_update = {
	"Gimbal.Start_offsets_update",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_START_OFFSETS_UPDATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Start_offsets_update,
	sizeof(s_arg_desc_Gimbal_Start_offsets_update) / sizeof(s_arg_desc_Gimbal_Start_offsets_update[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Stop_offsets_update[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Stop_offsets_update = {
	"Gimbal.Stop_offsets_update",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_STOP_OFFSETS_UPDATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Stop_offsets_update,
	sizeof(s_arg_desc_Gimbal_Stop_offsets_update) / sizeof(s_arg_desc_Gimbal_Stop_offsets_update[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Set_offsets[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Set_offsets = {
	"Gimbal.Set_offsets",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_SET_OFFSETS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Set_offsets,
	sizeof(s_arg_desc_Gimbal_Set_offsets) / sizeof(s_arg_desc_Gimbal_Set_offsets[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Reset_orientation[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Reset_orientation = {
	"Gimbal.Reset_orientation",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_RESET_ORIENTATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Reset_orientation,
	sizeof(s_arg_desc_Gimbal_Reset_orientation) / sizeof(s_arg_desc_Gimbal_Reset_orientation[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Calibrate[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Calibrate = {
	"Gimbal.Calibrate",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_CALIBRATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Calibrate,
	sizeof(s_arg_desc_Gimbal_Calibrate) / sizeof(s_arg_desc_Gimbal_Calibrate[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Cancel_calibration[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Cancel_calibration = {
	"Gimbal.Cancel_calibration",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_CANCEL_CALIBRATION,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Cancel_calibration,
	sizeof(s_arg_desc_Gimbal_Cancel_calibration) / sizeof(s_arg_desc_Gimbal_Cancel_calibration[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Gimbal_capabilities[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Model",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Model,
		sizeof(s_enum_desc_Gimbal_Model) / sizeof(s_enum_desc_Gimbal_Model[0])
	},
	{
		"Axes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Gimbal_Axis,
		sizeof(s_enum_desc_Gimbal_Axis) / sizeof(s_enum_desc_Gimbal_Axis[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Gimbal_capabilities = {
	"Gimbal.Gimbal_capabilities",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_GIMBAL_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Gimbal_capabilities,
	sizeof(s_arg_desc_Gimbal_Gimbal_capabilities) / sizeof(s_arg_desc_Gimbal_Gimbal_capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Relative_attitude_bounds[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Min_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Relative_attitude_bounds = {
	"Gimbal.Relative_attitude_bounds",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_RELATIVE_ATTITUDE_BOUNDS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Relative_attitude_bounds,
	sizeof(s_arg_desc_Gimbal_Relative_attitude_bounds) / sizeof(s_arg_desc_Gimbal_Relative_attitude_bounds[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Absolute_attitude_bounds[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Min_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Absolute_attitude_bounds = {
	"Gimbal.Absolute_attitude_bounds",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_ABSOLUTE_ATTITUDE_BOUNDS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Absolute_attitude_bounds,
	sizeof(s_arg_desc_Gimbal_Absolute_attitude_bounds) / sizeof(s_arg_desc_Gimbal_Absolute_attitude_bounds[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Max_speed[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Min_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Max_speed = {
	"Gimbal.Max_speed",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_MAX_SPEED,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Max_speed,
	sizeof(s_arg_desc_Gimbal_Max_speed) / sizeof(s_arg_desc_Gimbal_Max_speed[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Attitude[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Yaw_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Pitch_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Roll_frame_of_reference",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Frame_of_reference,
		sizeof(s_enum_desc_Gimbal_Frame_of_reference) / sizeof(s_enum_desc_Gimbal_Frame_of_reference[0])
	},
	{
		"Yaw_relative",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch_relative",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll_relative",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Yaw_absolute",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Pitch_absolute",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Roll_absolute",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Attitude = {
	"Gimbal.Attitude",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_ATTITUDE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Attitude,
	sizeof(s_arg_desc_Gimbal_Attitude) / sizeof(s_arg_desc_Gimbal_Attitude[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Axis_lock_state[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Locked",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Gimbal_Axis,
		sizeof(s_enum_desc_Gimbal_Axis) / sizeof(s_enum_desc_Gimbal_Axis[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Axis_lock_state = {
	"Gimbal.Axis_lock_state",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_AXIS_LOCK_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Axis_lock_state,
	sizeof(s_arg_desc_Gimbal_Axis_lock_state) / sizeof(s_arg_desc_Gimbal_Axis_lock_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Offsets[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Update_state",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_State,
		sizeof(s_enum_desc_Gimbal_State) / sizeof(s_enum_desc_Gimbal_State[0])
	},
	{
		"Min_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_yaw",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_pitch",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Min_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_bound_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Current_roll",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Offsets = {
	"Gimbal.Offsets",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_OFFSETS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Offsets,
	sizeof(s_arg_desc_Gimbal_Offsets) / sizeof(s_arg_desc_Gimbal_Offsets[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Calibration_state[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Calibration_state,
		sizeof(s_enum_desc_Gimbal_Calibration_state) / sizeof(s_enum_desc_Gimbal_Calibration_state[0])
	},
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Calibration_state = {
	"Gimbal.Calibration_state",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_CALIBRATION_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Calibration_state,
	sizeof(s_arg_desc_Gimbal_Calibration_state) / sizeof(s_arg_desc_Gimbal_Calibration_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Calibration_result[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gimbal_Calibration_result,
		sizeof(s_enum_desc_Gimbal_Calibration_result) / sizeof(s_enum_desc_Gimbal_Calibration_result[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Calibration_result = {
	"Gimbal.Calibration_result",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_CALIBRATION_RESULT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Calibration_result,
	sizeof(s_arg_desc_Gimbal_Calibration_result) / sizeof(s_arg_desc_Gimbal_Calibration_result[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gimbal_Alert[] = {
	{
		"Gimbal_id",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
	{
		"Error",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Gimbal_Error,
		sizeof(s_enum_desc_Gimbal_Error) / sizeof(s_enum_desc_Gimbal_Error[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gimbal_Alert = {
	"Gimbal.Alert",
	ARSDK_PRJ_GIMBAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GIMBAL_ALERT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gimbal_Alert,
	sizeof(s_arg_desc_Gimbal_Alert) / sizeof(s_arg_desc_Gimbal_Alert[0])
};

static const struct arsdk_enum_desc s_enum_desc_Battery_Alert[] = {
	{"POWER_LEVEL", ARSDK_BATTERY_ALERT_POWER_LEVEL},
	{"TOO_HOT", ARSDK_BATTERY_ALERT_TOO_HOT},
	{"TOO_COLD", ARSDK_BATTERY_ALERT_TOO_COLD},
};

static const struct arsdk_enum_desc s_enum_desc_Battery_Alert_level[] = {
	{"NONE", ARSDK_BATTERY_ALERT_LEVEL_NONE},
	{"WARNING", ARSDK_BATTERY_ALERT_LEVEL_WARNING},
	{"CRITICAL", ARSDK_BATTERY_ALERT_LEVEL_CRITICAL},
};

static const struct arsdk_arg_desc s_arg_desc_Battery_Alert[] = {
	{
		"Alert",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Battery_Alert,
		sizeof(s_enum_desc_Battery_Alert) / sizeof(s_enum_desc_Battery_Alert[0])
	},
	{
		"Level",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Battery_Alert_level,
		sizeof(s_enum_desc_Battery_Alert_level) / sizeof(s_enum_desc_Battery_Alert_level[0])
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Battery_Alert = {
	"Battery.Alert",
	ARSDK_PRJ_BATTERY,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_BATTERY_ALERT,
	ARSDK_CMD_LIST_TYPE_MAP_ITEM,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Battery_Alert,
	sizeof(s_arg_desc_Battery_Alert) / sizeof(s_arg_desc_Battery_Alert[0])
};

static const struct arsdk_arg_desc s_arg_desc_Battery_Health[] = {
	{
		"State_of_health",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Battery_Health = {
	"Battery.Health",
	ARSDK_PRJ_BATTERY,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_BATTERY_HEALTH,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Battery_Health,
	sizeof(s_arg_desc_Battery_Health) / sizeof(s_arg_desc_Battery_Health[0])
};

static const struct arsdk_arg_desc s_arg_desc_Battery_Voltage[] = {
	{
		"Voltage",
		ARSDK_ARG_TYPE_U16,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Battery_Voltage = {
	"Battery.Voltage",
	ARSDK_PRJ_BATTERY,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_BATTERY_VOLTAGE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_NON_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Battery_Voltage,
	sizeof(s_arg_desc_Battery_Voltage) / sizeof(s_arg_desc_Battery_Voltage[0])
};

static const struct arsdk_arg_desc s_arg_desc_Battery_Cycle_count[] = {
	{
		"Count",
		ARSDK_ARG_TYPE_U32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Battery_Cycle_count = {
	"Battery.Cycle_count",
	ARSDK_PRJ_BATTERY,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_BATTERY_CYCLE_COUNT,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Battery_Cycle_count,
	sizeof(s_arg_desc_Battery_Cycle_count) / sizeof(s_arg_desc_Battery_Cycle_count[0])
};

static const struct arsdk_arg_desc s_arg_desc_Battery_Serial[] = {
	{
		"Serial",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Battery_Serial = {
	"Battery.Serial",
	ARSDK_PRJ_BATTERY,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_BATTERY_SERIAL,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Battery_Serial,
	sizeof(s_arg_desc_Battery_Serial) / sizeof(s_arg_desc_Battery_Serial[0])
};

static const struct arsdk_enum_desc s_enum_desc_Mediastore_State[] = {
	{"NOT_AVAILABLE", ARSDK_MEDIASTORE_STATE_NOT_AVAILABLE},
	{"INDEXING", ARSDK_MEDIASTORE_STATE_INDEXING},
	{"INDEXED", ARSDK_MEDIASTORE_STATE_INDEXED},
};

static const struct arsdk_arg_desc s_arg_desc_Mediastore_State[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Mediastore_State,
		sizeof(s_enum_desc_Mediastore_State) / sizeof(s_enum_desc_Mediastore_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mediastore_State = {
	"Mediastore.State",
	ARSDK_PRJ_MEDIASTORE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MEDIASTORE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mediastore_State,
	sizeof(s_arg_desc_Mediastore_State) / sizeof(s_arg_desc_Mediastore_State[0])
};

static const struct arsdk_arg_desc s_arg_desc_Mediastore_Counters[] = {
	{
		"Video_media_count",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Photo_media_count",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Video_resource_count",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
	{
		"Photo_resource_count",
		ARSDK_ARG_TYPE_I32,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Mediastore_Counters = {
	"Mediastore.Counters",
	ARSDK_PRJ_MEDIASTORE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MEDIASTORE_COUNTERS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Mediastore_Counters,
	sizeof(s_arg_desc_Mediastore_Counters) / sizeof(s_arg_desc_Mediastore_Counters[0])
};

static const struct arsdk_enum_desc s_enum_desc_Precise_home_Mode[] = {
	{"DISABLED", ARSDK_PRECISE_HOME_MODE_DISABLED},
	{"STANDARD", ARSDK_PRECISE_HOME_MODE_STANDARD},
};

static const struct arsdk_enum_desc s_enum_desc_Precise_home_State[] = {
	{"UNAVAILABLE", ARSDK_PRECISE_HOME_STATE_UNAVAILABLE},
	{"AVAILABLE", ARSDK_PRECISE_HOME_STATE_AVAILABLE},
	{"ACTIVE", ARSDK_PRECISE_HOME_STATE_ACTIVE},
};

static const struct arsdk_arg_desc s_arg_desc_Precise_home_Set_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Precise_home_Mode,
		sizeof(s_enum_desc_Precise_home_Mode) / sizeof(s_enum_desc_Precise_home_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Precise_home_Set_mode = {
	"Precise_home.Set_mode",
	ARSDK_PRJ_PRECISE_HOME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PRECISE_HOME_SET_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Precise_home_Set_mode,
	sizeof(s_arg_desc_Precise_home_Set_mode) / sizeof(s_arg_desc_Precise_home_Set_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Precise_home_Capabilities[] = {
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Precise_home_Mode,
		sizeof(s_enum_desc_Precise_home_Mode) / sizeof(s_enum_desc_Precise_home_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Precise_home_Capabilities = {
	"Precise_home.Capabilities",
	ARSDK_PRJ_PRECISE_HOME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PRECISE_HOME_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Precise_home_Capabilities,
	sizeof(s_arg_desc_Precise_home_Capabilities) / sizeof(s_arg_desc_Precise_home_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Precise_home_Mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Precise_home_Mode,
		sizeof(s_enum_desc_Precise_home_Mode) / sizeof(s_enum_desc_Precise_home_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Precise_home_Mode = {
	"Precise_home.Mode",
	ARSDK_PRJ_PRECISE_HOME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PRECISE_HOME_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Precise_home_Mode,
	sizeof(s_arg_desc_Precise_home_Mode) / sizeof(s_arg_desc_Precise_home_Mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Precise_home_State[] = {
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Precise_home_State,
		sizeof(s_enum_desc_Precise_home_State) / sizeof(s_enum_desc_Precise_home_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Precise_home_State = {
	"Precise_home.State",
	ARSDK_PRJ_PRECISE_HOME,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PRECISE_HOME_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Precise_home_State,
	sizeof(s_arg_desc_Precise_home_State) / sizeof(s_arg_desc_Precise_home_State[0])
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Mode[] = {
	{"DISABLED", ARSDK_THERMAL_MODE_DISABLED},
	{"STANDARD", ARSDK_THERMAL_MODE_STANDARD},
	{"BLENDED", ARSDK_THERMAL_MODE_BLENDED},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Rendering_mode[] = {
	{"VISIBLE", ARSDK_THERMAL_RENDERING_MODE_VISIBLE},
	{"THERMAL", ARSDK_THERMAL_RENDERING_MODE_THERMAL},
	{"BLENDED", ARSDK_THERMAL_RENDERING_MODE_BLENDED},
	{"MONOCHROME", ARSDK_THERMAL_RENDERING_MODE_MONOCHROME},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Palette_mode[] = {
	{"ABSOLUTE", ARSDK_THERMAL_PALETTE_MODE_ABSOLUTE},
	{"RELATIVE", ARSDK_THERMAL_PALETTE_MODE_RELATIVE},
	{"SPOT", ARSDK_THERMAL_PALETTE_MODE_SPOT},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Colorization_mode[] = {
	{"LIMITED", ARSDK_THERMAL_COLORIZATION_MODE_LIMITED},
	{"EXTENDED", ARSDK_THERMAL_COLORIZATION_MODE_EXTENDED},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Relative_range_mode[] = {
	{"LOCKED", ARSDK_THERMAL_RELATIVE_RANGE_MODE_LOCKED},
	{"UNLOCKED", ARSDK_THERMAL_RELATIVE_RANGE_MODE_UNLOCKED},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Spot_type[] = {
	{"COLD", ARSDK_THERMAL_SPOT_TYPE_COLD},
	{"HOT", ARSDK_THERMAL_SPOT_TYPE_HOT},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Range[] = {
	{"HIGH", ARSDK_THERMAL_RANGE_HIGH},
	{"LOW", ARSDK_THERMAL_RANGE_LOW},
};

static const struct arsdk_enum_desc s_enum_desc_Thermal_Shutter_trigger[] = {
	{"AUTO", ARSDK_THERMAL_SHUTTER_TRIGGER_AUTO},
	{"MANUAL", ARSDK_THERMAL_SHUTTER_TRIGGER_MANUAL},
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Mode,
		sizeof(s_enum_desc_Thermal_Mode) / sizeof(s_enum_desc_Thermal_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_mode = {
	"Thermal.Set_mode",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_mode,
	sizeof(s_arg_desc_Thermal_Set_mode) / sizeof(s_arg_desc_Thermal_Set_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_palette_part[] = {
	{
		"Red",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Green",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Blue",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Index",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_palette_part = {
	"Thermal.Set_palette_part",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_PALETTE_PART,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_palette_part,
	sizeof(s_arg_desc_Thermal_Set_palette_part) / sizeof(s_arg_desc_Thermal_Set_palette_part[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_palette_settings[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Palette_mode,
		sizeof(s_enum_desc_Thermal_Palette_mode) / sizeof(s_enum_desc_Thermal_Palette_mode[0])
	},
	{
		"Lowest_temp",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Highest_temp",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Outside_colorization",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Colorization_mode,
		sizeof(s_enum_desc_Thermal_Colorization_mode) / sizeof(s_enum_desc_Thermal_Colorization_mode[0])
	},
	{
		"Relative_range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Relative_range_mode,
		sizeof(s_enum_desc_Thermal_Relative_range_mode) / sizeof(s_enum_desc_Thermal_Relative_range_mode[0])
	},
	{
		"Spot_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Spot_type,
		sizeof(s_enum_desc_Thermal_Spot_type) / sizeof(s_enum_desc_Thermal_Spot_type[0])
	},
	{
		"Spot_threshold",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_palette_settings = {
	"Thermal.Set_palette_settings",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_PALETTE_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_palette_settings,
	sizeof(s_arg_desc_Thermal_Set_palette_settings) / sizeof(s_arg_desc_Thermal_Set_palette_settings[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_rendering[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Rendering_mode,
		sizeof(s_enum_desc_Thermal_Rendering_mode) / sizeof(s_enum_desc_Thermal_Rendering_mode[0])
	},
	{
		"Blending_rate",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_rendering = {
	"Thermal.Set_rendering",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_RENDERING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_rendering,
	sizeof(s_arg_desc_Thermal_Set_rendering) / sizeof(s_arg_desc_Thermal_Set_rendering[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_emissivity[] = {
	{
		"Emissivity",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_emissivity = {
	"Thermal.Set_emissivity",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_EMISSIVITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_emissivity,
	sizeof(s_arg_desc_Thermal_Set_emissivity) / sizeof(s_arg_desc_Thermal_Set_emissivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_background_temperature[] = {
	{
		"Background_temperature",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_background_temperature = {
	"Thermal.Set_background_temperature",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_BACKGROUND_TEMPERATURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_background_temperature,
	sizeof(s_arg_desc_Thermal_Set_background_temperature) / sizeof(s_arg_desc_Thermal_Set_background_temperature[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_sensitivity[] = {
	{
		"Range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Range,
		sizeof(s_enum_desc_Thermal_Range) / sizeof(s_enum_desc_Thermal_Range[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_sensitivity = {
	"Thermal.Set_sensitivity",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_SENSITIVITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_sensitivity,
	sizeof(s_arg_desc_Thermal_Set_sensitivity) / sizeof(s_arg_desc_Thermal_Set_sensitivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Set_shutter_mode[] = {
	{
		"Trigger",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Shutter_trigger,
		sizeof(s_enum_desc_Thermal_Shutter_trigger) / sizeof(s_enum_desc_Thermal_Shutter_trigger[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Set_shutter_mode = {
	"Thermal.Set_shutter_mode",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SET_SHUTTER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Set_shutter_mode,
	sizeof(s_arg_desc_Thermal_Set_shutter_mode) / sizeof(s_arg_desc_Thermal_Set_shutter_mode[0])
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Trigg_shutter = {
	"Thermal.Trigg_shutter",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_TRIGG_SHUTTER,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Mode,
		sizeof(s_enum_desc_Thermal_Mode) / sizeof(s_enum_desc_Thermal_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Mode = {
	"Thermal.Mode",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Mode,
	sizeof(s_arg_desc_Thermal_Mode) / sizeof(s_arg_desc_Thermal_Mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Capabilities[] = {
	{
		"Modes",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Thermal_Mode,
		sizeof(s_enum_desc_Thermal_Mode) / sizeof(s_enum_desc_Thermal_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Capabilities = {
	"Thermal.Capabilities",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Capabilities,
	sizeof(s_arg_desc_Thermal_Capabilities) / sizeof(s_arg_desc_Thermal_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Palette_part[] = {
	{
		"Red",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Green",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Blue",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Index",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"List_flags",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Generic_List_flags,
		sizeof(s_enum_desc_Generic_List_flags) / sizeof(s_enum_desc_Generic_List_flags[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Palette_part = {
	"Thermal.Palette_part",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_PALETTE_PART,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Palette_part,
	sizeof(s_arg_desc_Thermal_Palette_part) / sizeof(s_arg_desc_Thermal_Palette_part[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Palette_settings[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Palette_mode,
		sizeof(s_enum_desc_Thermal_Palette_mode) / sizeof(s_enum_desc_Thermal_Palette_mode[0])
	},
	{
		"Lowest_temp",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Highest_temp",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Outside_colorization",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Colorization_mode,
		sizeof(s_enum_desc_Thermal_Colorization_mode) / sizeof(s_enum_desc_Thermal_Colorization_mode[0])
	},
	{
		"Relative_range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Relative_range_mode,
		sizeof(s_enum_desc_Thermal_Relative_range_mode) / sizeof(s_enum_desc_Thermal_Relative_range_mode[0])
	},
	{
		"Spot_type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Spot_type,
		sizeof(s_enum_desc_Thermal_Spot_type) / sizeof(s_enum_desc_Thermal_Spot_type[0])
	},
	{
		"Spot_threshold",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Palette_settings = {
	"Thermal.Palette_settings",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_PALETTE_SETTINGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Palette_settings,
	sizeof(s_arg_desc_Thermal_Palette_settings) / sizeof(s_arg_desc_Thermal_Palette_settings[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Rendering[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Rendering_mode,
		sizeof(s_enum_desc_Thermal_Rendering_mode) / sizeof(s_enum_desc_Thermal_Rendering_mode[0])
	},
	{
		"Blending_rate",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Rendering = {
	"Thermal.Rendering",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_RENDERING,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Rendering,
	sizeof(s_arg_desc_Thermal_Rendering) / sizeof(s_arg_desc_Thermal_Rendering[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Emissivity[] = {
	{
		"Emissivity",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Emissivity = {
	"Thermal.Emissivity",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_EMISSIVITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Emissivity,
	sizeof(s_arg_desc_Thermal_Emissivity) / sizeof(s_arg_desc_Thermal_Emissivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Background_temperature[] = {
	{
		"Background_temperature",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Background_temperature = {
	"Thermal.Background_temperature",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_BACKGROUND_TEMPERATURE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Background_temperature,
	sizeof(s_arg_desc_Thermal_Background_temperature) / sizeof(s_arg_desc_Thermal_Background_temperature[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Sensitivity[] = {
	{
		"Current_range",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Range,
		sizeof(s_enum_desc_Thermal_Range) / sizeof(s_enum_desc_Thermal_Range[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Sensitivity = {
	"Thermal.Sensitivity",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SENSITIVITY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Sensitivity,
	sizeof(s_arg_desc_Thermal_Sensitivity) / sizeof(s_arg_desc_Thermal_Sensitivity[0])
};

static const struct arsdk_arg_desc s_arg_desc_Thermal_Shutter_mode[] = {
	{
		"Current_trigger",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Thermal_Shutter_trigger,
		sizeof(s_enum_desc_Thermal_Shutter_trigger) / sizeof(s_enum_desc_Thermal_Shutter_trigger[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Thermal_Shutter_mode = {
	"Thermal.Shutter_mode",
	ARSDK_PRJ_THERMAL,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_THERMAL_SHUTTER_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Thermal_Shutter_mode,
	sizeof(s_arg_desc_Thermal_Shutter_mode) / sizeof(s_arg_desc_Thermal_Shutter_mode[0])
};

static const struct arsdk_enum_desc s_enum_desc_Leds_Switch_state[] = {
	{"OFF", ARSDK_LEDS_SWITCH_STATE_OFF},
	{"ON", ARSDK_LEDS_SWITCH_STATE_ON},
};

static const struct arsdk_enum_desc s_enum_desc_Leds_Supported_capabilities[] = {
	{"ON_OFF", ARSDK_LEDS_SUPPORTED_CAPABILITIES_ON_OFF},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Leds_Activate = {
	"Leds.Activate",
	ARSDK_PRJ_LEDS,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_LEDS_ACTIVATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Leds_Deactivate = {
	"Leds.Deactivate",
	ARSDK_PRJ_LEDS,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_LEDS_DEACTIVATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Leds_Capabilities[] = {
	{
		"Supported_capabilities",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Leds_Supported_capabilities,
		sizeof(s_enum_desc_Leds_Supported_capabilities) / sizeof(s_enum_desc_Leds_Supported_capabilities[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Leds_Capabilities = {
	"Leds.Capabilities",
	ARSDK_PRJ_LEDS,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_LEDS_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Leds_Capabilities,
	sizeof(s_arg_desc_Leds_Capabilities) / sizeof(s_arg_desc_Leds_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Leds_Switch_state[] = {
	{
		"Switch_state",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Leds_Switch_state,
		sizeof(s_enum_desc_Leds_Switch_state) / sizeof(s_enum_desc_Leds_Switch_state[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Leds_Switch_state = {
	"Leds.Switch_state",
	ARSDK_PRJ_LEDS,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_LEDS_SWITCH_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Leds_Switch_state,
	sizeof(s_arg_desc_Leds_Switch_state) / sizeof(s_arg_desc_Leds_Switch_state[0])
};

static const struct arsdk_enum_desc s_enum_desc_Piloting_style_Style[] = {
	{"STANDARD", ARSDK_PILOTING_STYLE_STYLE_STANDARD},
	{"CAMERA_OPERATED", ARSDK_PILOTING_STYLE_STYLE_CAMERA_OPERATED},
};

static const struct arsdk_arg_desc s_arg_desc_Piloting_style_Set_style[] = {
	{
		"Style",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Piloting_style_Style,
		sizeof(s_enum_desc_Piloting_style_Style) / sizeof(s_enum_desc_Piloting_style_Style[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Piloting_style_Set_style = {
	"Piloting_style.Set_style",
	ARSDK_PRJ_PILOTING_STYLE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PILOTING_STYLE_SET_STYLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Piloting_style_Set_style,
	sizeof(s_arg_desc_Piloting_style_Set_style) / sizeof(s_arg_desc_Piloting_style_Set_style[0])
};

static const struct arsdk_arg_desc s_arg_desc_Piloting_style_Style[] = {
	{
		"Style",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Piloting_style_Style,
		sizeof(s_enum_desc_Piloting_style_Style) / sizeof(s_enum_desc_Piloting_style_Style[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Piloting_style_Style = {
	"Piloting_style.Style",
	ARSDK_PRJ_PILOTING_STYLE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PILOTING_STYLE_STYLE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Piloting_style_Style,
	sizeof(s_arg_desc_Piloting_style_Style) / sizeof(s_arg_desc_Piloting_style_Style[0])
};

static const struct arsdk_arg_desc s_arg_desc_Piloting_style_Capabilities[] = {
	{
		"Styles",
		ARSDK_ARG_TYPE_U8,
		s_enum_desc_Piloting_style_Style,
		sizeof(s_enum_desc_Piloting_style_Style) / sizeof(s_enum_desc_Piloting_style_Style[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Piloting_style_Capabilities = {
	"Piloting_style.Capabilities",
	ARSDK_PRJ_PILOTING_STYLE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_PILOTING_STYLE_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Piloting_style_Capabilities,
	sizeof(s_arg_desc_Piloting_style_Capabilities) / sizeof(s_arg_desc_Piloting_style_Capabilities[0])
};

static const struct arsdk_enum_desc s_enum_desc_Gauge_fw_updater_Diag[] = {
	{"UP_TO_DATE", ARSDK_GAUGE_FW_UPDATER_DIAG_UP_TO_DATE},
	{"CANNOT_UPDATE", ARSDK_GAUGE_FW_UPDATER_DIAG_CANNOT_UPDATE},
	{"UPDATABLE", ARSDK_GAUGE_FW_UPDATER_DIAG_UPDATABLE},
};

static const struct arsdk_enum_desc s_enum_desc_Gauge_fw_updater_State[] = {
	{"READY_TO_PREPARE", ARSDK_GAUGE_FW_UPDATER_STATE_READY_TO_PREPARE},
	{"PREPARATION_IN_PROGRESS", ARSDK_GAUGE_FW_UPDATER_STATE_PREPARATION_IN_PROGRESS},
	{"READY_TO_UPDATE", ARSDK_GAUGE_FW_UPDATER_STATE_READY_TO_UPDATE},
	{"UPDATE_IN_PROGRESS", ARSDK_GAUGE_FW_UPDATER_STATE_UPDATE_IN_PROGRESS},
};

static const struct arsdk_enum_desc s_enum_desc_Gauge_fw_updater_Requirements[] = {
	{"USB", ARSDK_GAUGE_FW_UPDATER_REQUIREMENTS_USB},
	{"RSOC", ARSDK_GAUGE_FW_UPDATER_REQUIREMENTS_RSOC},
	{"DRONE_STATE", ARSDK_GAUGE_FW_UPDATER_REQUIREMENTS_DRONE_STATE},
};

static const struct arsdk_enum_desc s_enum_desc_Gauge_fw_updater_Result[] = {
	{"SUCCESS", ARSDK_GAUGE_FW_UPDATER_RESULT_SUCCESS},
	{"IN_PROGRESS", ARSDK_GAUGE_FW_UPDATER_RESULT_IN_PROGRESS},
	{"BAD_DIAG", ARSDK_GAUGE_FW_UPDATER_RESULT_BAD_DIAG},
	{"NOT_PREPARED", ARSDK_GAUGE_FW_UPDATER_RESULT_NOT_PREPARED},
	{"REQUIREMENTS_NOT_ACHIEVED", ARSDK_GAUGE_FW_UPDATER_RESULT_REQUIREMENTS_NOT_ACHIEVED},
	{"BATTERY_ERROR", ARSDK_GAUGE_FW_UPDATER_RESULT_BATTERY_ERROR},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gauge_fw_updater_Prepare = {
	"Gauge_fw_updater.Prepare",
	ARSDK_PRJ_GAUGE_FW_UPDATER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GAUGE_FW_UPDATER_PREPARE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gauge_fw_updater_Update = {
	"Gauge_fw_updater.Update",
	ARSDK_PRJ_GAUGE_FW_UPDATER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GAUGE_FW_UPDATER_UPDATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Gauge_fw_updater_Status[] = {
	{
		"Diag",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gauge_fw_updater_Diag,
		sizeof(s_enum_desc_Gauge_fw_updater_Diag) / sizeof(s_enum_desc_Gauge_fw_updater_Diag[0])
	},
	{
		"Missing_requirements",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Gauge_fw_updater_Requirements,
		sizeof(s_enum_desc_Gauge_fw_updater_Requirements) / sizeof(s_enum_desc_Gauge_fw_updater_Requirements[0])
	},
	{
		"State",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gauge_fw_updater_State,
		sizeof(s_enum_desc_Gauge_fw_updater_State) / sizeof(s_enum_desc_Gauge_fw_updater_State[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gauge_fw_updater_Status = {
	"Gauge_fw_updater.Status",
	ARSDK_PRJ_GAUGE_FW_UPDATER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GAUGE_FW_UPDATER_STATUS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gauge_fw_updater_Status,
	sizeof(s_arg_desc_Gauge_fw_updater_Status) / sizeof(s_arg_desc_Gauge_fw_updater_Status[0])
};

static const struct arsdk_arg_desc s_arg_desc_Gauge_fw_updater_Progress[] = {
	{
		"Result",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Gauge_fw_updater_Result,
		sizeof(s_enum_desc_Gauge_fw_updater_Result) / sizeof(s_enum_desc_Gauge_fw_updater_Result[0])
	},
	{
		"Percent",
		ARSDK_ARG_TYPE_U8,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Gauge_fw_updater_Progress = {
	"Gauge_fw_updater.Progress",
	ARSDK_PRJ_GAUGE_FW_UPDATER,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_GAUGE_FW_UPDATER_PROGRESS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Gauge_fw_updater_Progress,
	sizeof(s_arg_desc_Gauge_fw_updater_Progress) / sizeof(s_arg_desc_Gauge_fw_updater_Progress[0])
};

static const struct arsdk_enum_desc s_enum_desc_Dri_Mode[] = {
	{"DISABLED", ARSDK_DRI_MODE_DISABLED},
	{"ENABLED", ARSDK_DRI_MODE_ENABLED},
};

static const struct arsdk_enum_desc s_enum_desc_Dri_Supported_capabilities[] = {
	{"ON_OFF", ARSDK_DRI_SUPPORTED_CAPABILITIES_ON_OFF},
	{"FRENCH_REGULATION", ARSDK_DRI_SUPPORTED_CAPABILITIES_FRENCH_REGULATION},
	{"EN4709_002_REGULATION", ARSDK_DRI_SUPPORTED_CAPABILITIES_EN4709_002_REGULATION},
};

static const struct arsdk_enum_desc s_enum_desc_Dri_Id_type[] = {
	{"FR_30_OCTETS", ARSDK_DRI_ID_TYPE_FR_30_OCTETS},
	{"ANSI_CTA_2063", ARSDK_DRI_ID_TYPE_ANSI_CTA_2063},
};

static const struct arsdk_enum_desc s_enum_desc_Dri_Dri_type[] = {
	{"FRENCH", ARSDK_DRI_DRI_TYPE_FRENCH},
	{"EN4709_002", ARSDK_DRI_DRI_TYPE_EN4709_002},
};

static const struct arsdk_enum_desc s_enum_desc_Dri_Status[] = {
	{"FAILURE", ARSDK_DRI_STATUS_FAILURE},
	{"SUCCESS", ARSDK_DRI_STATUS_SUCCESS},
	{"INVALID_ID", ARSDK_DRI_STATUS_INVALID_ID},
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Dri_mode[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Mode,
		sizeof(s_enum_desc_Dri_Mode) / sizeof(s_enum_desc_Dri_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Dri_mode = {
	"Dri.Dri_mode",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_DRI_MODE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Dri_mode,
	sizeof(s_arg_desc_Dri_Dri_mode) / sizeof(s_arg_desc_Dri_Dri_mode[0])
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Set_dri_type[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Dri_type,
		sizeof(s_enum_desc_Dri_Dri_type) / sizeof(s_enum_desc_Dri_Dri_type[0])
	},
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Set_dri_type = {
	"Dri.Set_dri_type",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_SET_DRI_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Set_dri_type,
	sizeof(s_arg_desc_Dri_Set_dri_type) / sizeof(s_arg_desc_Dri_Set_dri_type[0])
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Capabilities[] = {
	{
		"Supported_capabilities",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Dri_Supported_capabilities,
		sizeof(s_enum_desc_Dri_Supported_capabilities) / sizeof(s_enum_desc_Dri_Supported_capabilities[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Capabilities = {
	"Dri.Capabilities",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Capabilities,
	sizeof(s_arg_desc_Dri_Capabilities) / sizeof(s_arg_desc_Dri_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Dri_state[] = {
	{
		"Mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Mode,
		sizeof(s_enum_desc_Dri_Mode) / sizeof(s_enum_desc_Dri_Mode[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Dri_state = {
	"Dri.Dri_state",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_DRI_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Dri_state,
	sizeof(s_arg_desc_Dri_Dri_state) / sizeof(s_arg_desc_Dri_Dri_state[0])
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Drone_id[] = {
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Id_type,
		sizeof(s_enum_desc_Dri_Id_type) / sizeof(s_enum_desc_Dri_Id_type[0])
	},
	{
		"Value",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Drone_id = {
	"Dri.Drone_id",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_DRONE_ID,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Drone_id,
	sizeof(s_arg_desc_Dri_Drone_id) / sizeof(s_arg_desc_Dri_Drone_id[0])
};

static const struct arsdk_arg_desc s_arg_desc_Dri_Dri_type[] = {
	{
		"Id",
		ARSDK_ARG_TYPE_STRING,
		NULL,
		0
	},
	{
		"Type",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Dri_type,
		sizeof(s_enum_desc_Dri_Dri_type) / sizeof(s_enum_desc_Dri_Dri_type[0])
	},
	{
		"Status",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Dri_Status,
		sizeof(s_enum_desc_Dri_Status) / sizeof(s_enum_desc_Dri_Status[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Dri_Dri_type = {
	"Dri.Dri_type",
	ARSDK_PRJ_DRI,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_DRI_DRI_TYPE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Dri_Dri_type,
	sizeof(s_arg_desc_Dri_Dri_type) / sizeof(s_arg_desc_Dri_Dri_type[0])
};

static const struct arsdk_enum_desc s_enum_desc_Security_edition_Log_storage_state[] = {
	{"DISABLED", ARSDK_SECURITY_EDITION_LOG_STORAGE_STATE_DISABLED},
	{"ENABLED", ARSDK_SECURITY_EDITION_LOG_STORAGE_STATE_ENABLED},
};

static const struct arsdk_enum_desc s_enum_desc_Security_edition_Supported_capabilities[] = {
	{"DEACTIVATE_LOGS", ARSDK_SECURITY_EDITION_SUPPORTED_CAPABILITIES_DEACTIVATE_LOGS},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Security_edition_Deactivate_logs = {
	"Security_edition.Deactivate_logs",
	ARSDK_PRJ_SECURITY_EDITION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SECURITY_EDITION_DEACTIVATE_LOGS,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	NULL,
	0
};

static const struct arsdk_arg_desc s_arg_desc_Security_edition_Capabilities[] = {
	{
		"Supported_capabilities",
		ARSDK_ARG_TYPE_U16,
		s_enum_desc_Security_edition_Supported_capabilities,
		sizeof(s_enum_desc_Security_edition_Supported_capabilities) / sizeof(s_enum_desc_Security_edition_Supported_capabilities[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Security_edition_Capabilities = {
	"Security_edition.Capabilities",
	ARSDK_PRJ_SECURITY_EDITION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SECURITY_EDITION_CAPABILITIES,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Security_edition_Capabilities,
	sizeof(s_arg_desc_Security_edition_Capabilities) / sizeof(s_arg_desc_Security_edition_Capabilities[0])
};

static const struct arsdk_arg_desc s_arg_desc_Security_edition_Log_storage_state[] = {
	{
		"Log_storage_state",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Security_edition_Log_storage_state,
		sizeof(s_enum_desc_Security_edition_Log_storage_state) / sizeof(s_enum_desc_Security_edition_Log_storage_state[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Security_edition_Log_storage_state = {
	"Security_edition.Log_storage_state",
	ARSDK_PRJ_SECURITY_EDITION,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_SECURITY_EDITION_LOG_STORAGE_STATE,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Security_edition_Log_storage_state,
	sizeof(s_arg_desc_Security_edition_Log_storage_state) / sizeof(s_arg_desc_Security_edition_Log_storage_state[0])
};

static const struct arsdk_enum_desc s_enum_desc_Move_Orientation_mode[] = {
	{"NONE", ARSDK_MOVE_ORIENTATION_MODE_NONE},
	{"TO_TARGET", ARSDK_MOVE_ORIENTATION_MODE_TO_TARGET},
	{"HEADING_START", ARSDK_MOVE_ORIENTATION_MODE_HEADING_START},
	{"HEADING_DURING", ARSDK_MOVE_ORIENTATION_MODE_HEADING_DURING},
};

static const struct arsdk_enum_desc s_enum_desc_Move_Indicator[] = {
	{"DRONE_GPS", ARSDK_MOVE_INDICATOR_DRONE_GPS},
	{"DRONE_MAGNETO", ARSDK_MOVE_INDICATOR_DRONE_MAGNETO},
	{"DRONE_GEOFENCE", ARSDK_MOVE_INDICATOR_DRONE_GEOFENCE},
	{"DRONE_MIN_ALTITUDE", ARSDK_MOVE_INDICATOR_DRONE_MIN_ALTITUDE},
	{"DRONE_MAX_ALTITUDE", ARSDK_MOVE_INDICATOR_DRONE_MAX_ALTITUDE},
	{"DRONE_FLYING", ARSDK_MOVE_INDICATOR_DRONE_FLYING},
	{"TARGET_POSITION_ACCURACY", ARSDK_MOVE_INDICATOR_TARGET_POSITION_ACCURACY},
	{"TARGET_IMAGE_DETECTION", ARSDK_MOVE_INDICATOR_TARGET_IMAGE_DETECTION},
	{"DRONE_TARGET_DISTANCE_MIN", ARSDK_MOVE_INDICATOR_DRONE_TARGET_DISTANCE_MIN},
	{"DRONE_TARGET_DISTANCE_MAX", ARSDK_MOVE_INDICATOR_DRONE_TARGET_DISTANCE_MAX},
	{"TARGET_HORIZ_SPEED", ARSDK_MOVE_INDICATOR_TARGET_HORIZ_SPEED},
	{"TARGET_VERT_SPEED", ARSDK_MOVE_INDICATOR_TARGET_VERT_SPEED},
	{"TARGET_ALTITUDE_ACCURACY", ARSDK_MOVE_INDICATOR_TARGET_ALTITUDE_ACCURACY},
};

static const struct arsdk_arg_desc s_arg_desc_Move_Extended_move_to[] = {
	{
		"Latitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Longitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Altitude",
		ARSDK_ARG_TYPE_DOUBLE,
		NULL,
		0
	},
	{
		"Orientation_mode",
		ARSDK_ARG_TYPE_ENUM,
		s_enum_desc_Move_Orientation_mode,
		sizeof(s_enum_desc_Move_Orientation_mode) / sizeof(s_enum_desc_Move_Orientation_mode[0])
	},
	{
		"Heading",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_horizontal_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_vertical_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_yaw_rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Move_Extended_move_to = {
	"Move.Extended_move_to",
	ARSDK_PRJ_MOVE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MOVE_EXTENDED_MOVE_TO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Move_Extended_move_to,
	sizeof(s_arg_desc_Move_Extended_move_to) / sizeof(s_arg_desc_Move_Extended_move_to[0])
};

static const struct arsdk_arg_desc s_arg_desc_Move_Extended_move_by[] = {
	{
		"D_x",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"D_y",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"D_z",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"D_psi",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_horizontal_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_vertical_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
	{
		"Max_yaw_rotation_speed",
		ARSDK_ARG_TYPE_FLOAT,
		NULL,
		0
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Move_Extended_move_by = {
	"Move.Extended_move_by",
	ARSDK_PRJ_MOVE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MOVE_EXTENDED_MOVE_BY,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Move_Extended_move_by,
	sizeof(s_arg_desc_Move_Extended_move_by) / sizeof(s_arg_desc_Move_Extended_move_by[0])
};

static const struct arsdk_arg_desc s_arg_desc_Move_Info[] = {
	{
		"Missing_inputs",
		ARSDK_ARG_TYPE_U32,
		s_enum_desc_Move_Indicator,
		sizeof(s_enum_desc_Move_Indicator) / sizeof(s_enum_desc_Move_Indicator[0])
	},
};

/*extern*/ const struct arsdk_cmd_desc g_arsdk_cmd_desc_Move_Info = {
	"Move.Info",
	ARSDK_PRJ_MOVE,
	ARSDK_CLS_DEFAULT,
	ARSDK_CMD_MOVE_INFO,
	ARSDK_CMD_LIST_TYPE_NONE,
	ARSDK_CMD_BUFFER_TYPE_ACK,
	ARSDK_CMD_TIMEOUT_POLICY_POP,
	s_arg_desc_Move_Info,
	sizeof(s_arg_desc_Move_Info) / sizeof(s_arg_desc_Move_Info[0])
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Network_table[] = {
	&g_arsdk_cmd_desc_Common_Network_Disconnect,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_NetworkEvent_table[] = {
	&g_arsdk_cmd_desc_Common_NetworkEvent_Disconnection,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Settings_table[] = {
	&g_arsdk_cmd_desc_Common_Settings_AllSettings,
	&g_arsdk_cmd_desc_Common_Settings_Reset,
	&g_arsdk_cmd_desc_Common_Settings_ProductName,
	&g_arsdk_cmd_desc_Common_Settings_Country,
	&g_arsdk_cmd_desc_Common_Settings_AutoCountry,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_SettingsState_table[] = {
	&g_arsdk_cmd_desc_Common_SettingsState_AllSettingsChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_ResetChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_ProductNameChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_ProductVersionChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_ProductSerialHighChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_ProductSerialLowChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_CountryChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_AutoCountryChanged,
	&g_arsdk_cmd_desc_Common_SettingsState_BoardIdChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Common_table[] = {
	&g_arsdk_cmd_desc_Common_Common_AllStates,
	&g_arsdk_cmd_desc_Common_Common_CurrentDate,
	&g_arsdk_cmd_desc_Common_Common_CurrentTime,
	&g_arsdk_cmd_desc_Common_Common_Reboot,
	&g_arsdk_cmd_desc_Common_Common_CurrentDateTime,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_CommonState_table[] = {
	&g_arsdk_cmd_desc_Common_CommonState_AllStatesChanged,
	&g_arsdk_cmd_desc_Common_CommonState_BatteryStateChanged,
	&g_arsdk_cmd_desc_Common_CommonState_MassStorageStateListChanged,
	&g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoStateListChanged,
	&g_arsdk_cmd_desc_Common_CommonState_CurrentDateChanged,
	&g_arsdk_cmd_desc_Common_CommonState_CurrentTimeChanged,
	&g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoRemainingListChanged,
	&g_arsdk_cmd_desc_Common_CommonState_WifiSignalChanged,
	&g_arsdk_cmd_desc_Common_CommonState_SensorsStatesListChanged,
	&g_arsdk_cmd_desc_Common_CommonState_ProductModel,
	&g_arsdk_cmd_desc_Common_CommonState_CountryListKnown,
	&g_arsdk_cmd_desc_Common_CommonState_DeprecatedMassStorageContentChanged,
	&g_arsdk_cmd_desc_Common_CommonState_MassStorageContent,
	&g_arsdk_cmd_desc_Common_CommonState_MassStorageContentForCurrentRun,
	&g_arsdk_cmd_desc_Common_CommonState_VideoRecordingTimestamp,
	&g_arsdk_cmd_desc_Common_CommonState_CurrentDateTimeChanged,
	&g_arsdk_cmd_desc_Common_CommonState_LinkSignalQuality,
	&g_arsdk_cmd_desc_Common_CommonState_BootId,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_OverHeat_table[] = {
	&g_arsdk_cmd_desc_Common_OverHeat_SwitchOff,
	&g_arsdk_cmd_desc_Common_OverHeat_Ventilate,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_OverHeatState_table[] = {
	&g_arsdk_cmd_desc_Common_OverHeatState_OverHeatChanged,
	&g_arsdk_cmd_desc_Common_OverHeatState_OverHeatRegulationChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Controller_table[] = {
	&g_arsdk_cmd_desc_Common_Controller_IsPiloting,
	&g_arsdk_cmd_desc_Common_Controller_PeerStateChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_WifiSettings_table[] = {
	&g_arsdk_cmd_desc_Common_WifiSettings_OutdoorSetting,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_WifiSettingsState_table[] = {
	&g_arsdk_cmd_desc_Common_WifiSettingsState_OutdoorSettingsChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Mavlink_table[] = {
	&g_arsdk_cmd_desc_Common_Mavlink_Start,
	&g_arsdk_cmd_desc_Common_Mavlink_Pause,
	&g_arsdk_cmd_desc_Common_Mavlink_Stop,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_MavlinkState_table[] = {
	&g_arsdk_cmd_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged,
	&g_arsdk_cmd_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged,
	&g_arsdk_cmd_desc_Common_MavlinkState_MissionItemExecuted,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Calibration_table[] = {
	&g_arsdk_cmd_desc_Common_Calibration_MagnetoCalibration,
	&g_arsdk_cmd_desc_Common_Calibration_PitotCalibration,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_CalibrationState_table[] = {
	&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStateChanged,
	&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationRequiredState,
	&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged,
	&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged,
	&g_arsdk_cmd_desc_Common_CalibrationState_PitotCalibrationStateChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_CameraSettingsState_table[] = {
	&g_arsdk_cmd_desc_Common_CameraSettingsState_CameraSettingsChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_GPS_table[] = {
	&g_arsdk_cmd_desc_Common_GPS_ControllerPositionForRun,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_FlightPlanState_table[] = {
	&g_arsdk_cmd_desc_Common_FlightPlanState_AvailabilityStateChanged,
	&g_arsdk_cmd_desc_Common_FlightPlanState_ComponentStateListChanged,
	&g_arsdk_cmd_desc_Common_FlightPlanState_LockStateChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_ARLibsVersionsState_table[] = {
	&g_arsdk_cmd_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion,
	&g_arsdk_cmd_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion,
	&g_arsdk_cmd_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_FlightPlanEvent_table[] = {
	&g_arsdk_cmd_desc_Common_FlightPlanEvent_StartingErrorEvent,
	&g_arsdk_cmd_desc_Common_FlightPlanEvent_SpeedBridleEvent,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Audio_table[] = {
	&g_arsdk_cmd_desc_Common_Audio_ControllerReadyForStreaming,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_AudioState_table[] = {
	&g_arsdk_cmd_desc_Common_AudioState_AudioStreamingRunning,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Headlights_table[] = {
	&g_arsdk_cmd_desc_Common_Headlights_Intensity,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_HeadlightsState_table[] = {
	&g_arsdk_cmd_desc_Common_HeadlightsState_IntensityChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Animations_table[] = {
	&g_arsdk_cmd_desc_Common_Animations_StartAnimation,
	&g_arsdk_cmd_desc_Common_Animations_StopAnimation,
	&g_arsdk_cmd_desc_Common_Animations_StopAllAnimations,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_AnimationsState_table[] = {
	&g_arsdk_cmd_desc_Common_AnimationsState_List,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Accessory_table[] = {
	&g_arsdk_cmd_desc_Common_Accessory_Config,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_AccessoryState_table[] = {
	&g_arsdk_cmd_desc_Common_AccessoryState_SupportedAccessoriesListChanged,
	&g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigChanged,
	&g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigModificationEnabled,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Charger_table[] = {
	&g_arsdk_cmd_desc_Common_Charger_SetMaxChargeRate,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_ChargerState_table[] = {
	&g_arsdk_cmd_desc_Common_ChargerState_MaxChargeRateChanged,
	&g_arsdk_cmd_desc_Common_ChargerState_CurrentChargeStateChanged,
	&g_arsdk_cmd_desc_Common_ChargerState_LastChargeRateChanged,
	&g_arsdk_cmd_desc_Common_ChargerState_ChargingInfo,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_RunState_table[] = {
	&g_arsdk_cmd_desc_Common_RunState_RunIdChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_Factory_table[] = {
	&g_arsdk_cmd_desc_Common_Factory_Reset,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_FlightPlanSettings_table[] = {
	&g_arsdk_cmd_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_FlightPlanSettingsState_table[] = {
	&g_arsdk_cmd_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Common_UpdateState_table[] = {
	&g_arsdk_cmd_desc_Common_UpdateState_UpdateStateChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Piloting_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Piloting_TakeOff,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_PCMD,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_Landing,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_Emergency,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_NavigateHome,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_MoveBy,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_UserTakeOff,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_Circle,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_MoveTo,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveTo,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOI,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_StopPilotedPOI,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveBy,
	&g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOIV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Camera_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Camera_Orientation,
	&g_arsdk_cmd_desc_Ardrone3_Camera_OrientationV2,
	&g_arsdk_cmd_desc_Ardrone3_Camera_Velocity,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PilotingSettings_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxAltitude,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxTilt,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_AbsolutControl,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxDistance,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_BankedTurn,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MinAltitude,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingDirection,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingRadius,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingAltitude,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_PitchMode,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_PictureEventChanged,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_VideoEventChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PilotingState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_FlyingStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_AlertStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_NavigateHomeStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_PositionChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_SpeedChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_AttitudeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_GpsLocationChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_LandingStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_AirSpeedChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveToChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_MotionState,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOI,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveByChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_HoveringWarning,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_WindStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_VibrationLevelChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOIV2,
	&g_arsdk_cmd_desc_Ardrone3_PilotingState_HeadingLockedStateChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Animations_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Animations_Flip,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_PitchModeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MotionDetection,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_MediaRecord_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_MediaRecord_Picture,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecord_Video,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecord_PictureV2,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecord_VideoV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_MediaRecordState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChangedV2,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChangedV2,
	&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoResolutionState,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_NetworkSettings_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSelection,
	&g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSecurity,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged,
	&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged,
	&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurity,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_SpeedSettings_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxRotationSpeed,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_HullProtection,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_Outdoor,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_OutdoorChanged,
	&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Network_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Network_WifiScan,
	&g_arsdk_cmd_desc_Ardrone3_Network_WifiAuthChannel,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_NetworkState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiScanListChanged,
	&g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiScanChanged,
	&g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged,
	&g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiAuthChannelChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_SettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductGPSVersionChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_P7ID,
	&g_arsdk_cmd_desc_Ardrone3_SettingsState_CPUID,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PictureSettings_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_PictureFormatSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_ExpositionSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_SaturationSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_TimelapseSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoAutorecordSelection,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoStabilizationMode,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoRecordingMode,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoFramerate,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoResolutions,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PictureSettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_PictureFormatChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_ExpositionChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_SaturationChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_TimelapseChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged,
	&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_MediaStreaming_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoEnable,
	&g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoStreamMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_MediaStreamingState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoEnableChanged,
	&g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_GPSSettings_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_SetHome,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ResetHome,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_SendControllerGPS,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_HomeType,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeDelay,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_GPSSettingsState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ResetHomeChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeTypeChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_CameraState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_CameraState_Orientation,
	&g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientation,
	&g_arsdk_cmd_desc_Ardrone3_CameraState_OrientationV2,
	&g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientationV2,
	&g_arsdk_cmd_desc_Ardrone3_CameraState_VelocityRange,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Antiflickering_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Antiflickering_ElectricFrequency,
	&g_arsdk_cmd_desc_Ardrone3_Antiflickering_SetMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_AntiflickeringState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged,
	&g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_GPSState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_GPSState_NumberOfSatelliteChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged,
	&g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeChosenChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PROState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PROState_Features,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_AccessoryState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_AccessoryState_ConnectedAccessories,
	&g_arsdk_cmd_desc_Ardrone3_AccessoryState_Battery,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_PilotingEvent_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_PilotingEvent_MoveByEnd,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_Sound_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_Sound_StartAlertSound,
	&g_arsdk_cmd_desc_Ardrone3_Sound_StopAlertSound,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Ardrone3_SoundState_table[] = {
	&g_arsdk_cmd_desc_Ardrone3_SoundState_AlertSound,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_Piloting_table[] = {
	&g_arsdk_cmd_desc_Minidrone_Piloting_FlatTrim,
	&g_arsdk_cmd_desc_Minidrone_Piloting_TakeOff,
	&g_arsdk_cmd_desc_Minidrone_Piloting_PCMD,
	&g_arsdk_cmd_desc_Minidrone_Piloting_Landing,
	&g_arsdk_cmd_desc_Minidrone_Piloting_Emergency,
	&g_arsdk_cmd_desc_Minidrone_Piloting_AutoTakeOffMode,
	&g_arsdk_cmd_desc_Minidrone_Piloting_FlyingMode,
	&g_arsdk_cmd_desc_Minidrone_Piloting_PlaneGearBox,
	&g_arsdk_cmd_desc_Minidrone_Piloting_TogglePilotingMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_SpeedSettings_table[] = {
	&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxVerticalSpeed,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxRotationSpeed,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettings_Wheels,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_MediaRecordEvent_table[] = {
	&g_arsdk_cmd_desc_Minidrone_MediaRecordEvent_PictureEventChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_PilotingState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_PilotingState_FlatTrimChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingStateChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_AlertStateChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_AutoTakeOffModeChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingModeChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_PlaneGearBoxChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingState_PilotingModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_Animations_table[] = {
	&g_arsdk_cmd_desc_Minidrone_Animations_Flip,
	&g_arsdk_cmd_desc_Minidrone_Animations_Cap,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_SpeedSettingsState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_WheelsChanged,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged,
	&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_MediaRecord_table[] = {
	&g_arsdk_cmd_desc_Minidrone_MediaRecord_Picture,
	&g_arsdk_cmd_desc_Minidrone_MediaRecord_PictureV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_MediaRecordState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChanged,
	&g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChangedV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_PilotingSettings_table[] = {
	&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxAltitude,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxTilt,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettings_BankedTurn,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxThrottle,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettings_PreferredPilotingMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_PilotingSettingsState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxTiltChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_BankedTurnChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged,
	&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_Settings_table[] = {
	&g_arsdk_cmd_desc_Minidrone_Settings_CutOutMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_SettingsState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_SettingsState_ProductMotorsVersionChanged,
	&g_arsdk_cmd_desc_Minidrone_SettingsState_ProductInertialVersionChanged,
	&g_arsdk_cmd_desc_Minidrone_SettingsState_CutOutModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_FloodControlState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_FloodControlState_FloodControlChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_GPS_table[] = {
	&g_arsdk_cmd_desc_Minidrone_GPS_ControllerLatitudeForRun,
	&g_arsdk_cmd_desc_Minidrone_GPS_ControllerLongitudeForRun,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_Configuration_table[] = {
	&g_arsdk_cmd_desc_Minidrone_Configuration_ControllerType,
	&g_arsdk_cmd_desc_Minidrone_Configuration_ControllerName,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_UsbAccessoryState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_LightState,
	&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_ClawState,
	&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_GunState,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_UsbAccessory_table[] = {
	&g_arsdk_cmd_desc_Minidrone_UsbAccessory_LightControl,
	&g_arsdk_cmd_desc_Minidrone_UsbAccessory_ClawControl,
	&g_arsdk_cmd_desc_Minidrone_UsbAccessory_GunControl,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_RemoteController_table[] = {
	&g_arsdk_cmd_desc_Minidrone_RemoteController_SetPairedRemote,
	&g_arsdk_cmd_desc_Minidrone_RemoteController_RawMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_NavigationDataState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DronePosition,
	&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneSpeed,
	&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneAltitude,
	&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneQuaternion,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_MinicamState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_MinicamState_PowerModeChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_ProductSerialChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_StateChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_VersionChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_PictureChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_VideoStateChanged,
	&g_arsdk_cmd_desc_Minidrone_MinicamState_MassStorageFormatChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_VideoSettings_table[] = {
	&g_arsdk_cmd_desc_Minidrone_VideoSettings_Autorecord,
	&g_arsdk_cmd_desc_Minidrone_VideoSettings_ElectricFrequency,
	&g_arsdk_cmd_desc_Minidrone_VideoSettings_VideoResolution,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_VideoSettingsState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_AutorecordChanged,
	&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged,
	&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_VideoResolutionChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_Minicam_table[] = {
	&g_arsdk_cmd_desc_Minidrone_Minicam_Picture,
	&g_arsdk_cmd_desc_Minidrone_Minicam_Video,
	&g_arsdk_cmd_desc_Minidrone_Minicam_MassStorageFormat,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Minidrone_RemoteControllerState_table[] = {
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_ConnectionChanged,
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RecordButtonPressed,
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_TakePictureButtonPressed,
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawMode,
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawCommands,
	&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_BatteryLevel,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_Piloting_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_Piloting_PCMD,
	&g_arsdk_cmd_desc_Jpsumo_Piloting_Posture,
	&g_arsdk_cmd_desc_Jpsumo_Piloting_AddCapOffset,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_PilotingState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_PilotingState_PostureChanged,
	&g_arsdk_cmd_desc_Jpsumo_PilotingState_AlertStateChanged,
	&g_arsdk_cmd_desc_Jpsumo_PilotingState_SpeedChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_Animations_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_Animations_JumpStop,
	&g_arsdk_cmd_desc_Jpsumo_Animations_JumpCancel,
	&g_arsdk_cmd_desc_Jpsumo_Animations_JumpLoad,
	&g_arsdk_cmd_desc_Jpsumo_Animations_Jump,
	&g_arsdk_cmd_desc_Jpsumo_Animations_SimpleAnimation,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_AnimationsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpLoadChanged,
	&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpTypeChanged,
	&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_SettingsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_SettingsState_ProductGPSVersionChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_MediaRecord_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_MediaRecord_Picture,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecord_Video,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecord_PictureV2,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecord_VideoV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_MediaRecordState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChanged,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChanged,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChangedV2,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChangedV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_NetworkSettings_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_NetworkSettings_WifiSelection,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_NetworkSettingsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_Network_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_Network_WifiScan,
	&g_arsdk_cmd_desc_Jpsumo_Network_WifiAuthChannel,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_NetworkState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiScanListChanged,
	&g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiScanChanged,
	&g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged,
	&g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiAuthChannelChanged,
	&g_arsdk_cmd_desc_Jpsumo_NetworkState_LinkQualityChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_AudioSettings_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_AudioSettings_MasterVolume,
	&g_arsdk_cmd_desc_Jpsumo_AudioSettings_Theme,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_AudioSettingsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged,
	&g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_ThemeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_RoadPlan_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_RoadPlan_AllScriptsMetadata,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptUploaded,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptDelete,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlan_PlayScript,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_RoadPlanState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_AllScriptsMetadataChanged,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptUploadChanged,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged,
	&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_PlayScriptChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_SpeedSettings_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_SpeedSettings_Outdoor,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_SpeedSettingsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_SpeedSettingsState_OutdoorChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_MediaStreaming_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_MediaStreaming_VideoEnable,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_MediaStreamingState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_MediaStreamingState_VideoEnableChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_PictureEventChanged,
	&g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_VideoEventChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_VideoSettings_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_VideoSettings_Autorecord,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Jpsumo_VideoSettingsState_table[] = {
	&g_arsdk_cmd_desc_Jpsumo_VideoSettingsState_AutorecordChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_WifiState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiList,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_ConnexionChanged,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChanged,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_AllWifiAuthChannelChanged,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiSignalChanged,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiCountryChanged,
	&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiEnvironmentChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Wifi_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Wifi_RequestWifiList,
	&g_arsdk_cmd_desc_Skyctrl_Wifi_RequestCurrentWifi,
	&g_arsdk_cmd_desc_Skyctrl_Wifi_ConnectToWifi,
	&g_arsdk_cmd_desc_Skyctrl_Wifi_ForgetWifi,
	&g_arsdk_cmd_desc_Skyctrl_Wifi_WifiAuthChannel,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Device_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Device_RequestDeviceList,
	&g_arsdk_cmd_desc_Skyctrl_Device_RequestCurrentDevice,
	&g_arsdk_cmd_desc_Skyctrl_Device_ConnectToDevice,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_DeviceState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_DeviceState_DeviceList,
	&g_arsdk_cmd_desc_Skyctrl_DeviceState_ConnexionChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Settings_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Settings_AllSettings,
	&g_arsdk_cmd_desc_Skyctrl_Settings_Reset,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_SettingsState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_AllSettingsChanged,
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_ResetChanged,
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductSerialChanged,
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVariantChanged,
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVersionChanged,
	&g_arsdk_cmd_desc_Skyctrl_SettingsState_CPUID,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Common_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Common_AllStates,
	&g_arsdk_cmd_desc_Skyctrl_Common_CurrentDateTime,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_CommonState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_CommonState_AllStatesChanged,
	&g_arsdk_cmd_desc_Skyctrl_CommonState_CurrentDateTimeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_SkyControllerState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryChanged,
	&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsFixChanged,
	&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsPositionChanged,
	&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryState,
	&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_AttitudeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AccessPointSettings_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointSSID,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointChannel,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSelection,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSecurity,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged,
	&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Camera_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Camera_ResetOrientation,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_ButtonMappings_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetCurrentButtonMappings,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetAvailableButtonMappings,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_SetButtonMapping,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_DefaultButtonMapping,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings,
	&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AxisMappings_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetCurrentAxisMappings,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetAvailableAxisMappings,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappings_SetAxisMapping,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappings_DefaultAxisMapping,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AxisMappingsState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings,
	&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AxisFilters_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetCurrentAxisFilters,
	&g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetPresetAxisFilters,
	&g_arsdk_cmd_desc_Skyctrl_AxisFilters_SetAxisFilter,
	&g_arsdk_cmd_desc_Skyctrl_AxisFilters_DefaultAxisFilters,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_AxisFiltersState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters,
	&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllCurrentFiltersSent,
	&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_PresetAxisFilters,
	&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllPresetFiltersSent,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_GamepadInfos_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_GamepadInfos_GetGamepadControls,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_GamepadInfosState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_GamepadControl,
	&g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_AllGamepadControlsSent,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_CoPiloting_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_CoPiloting_SetPilotingSource,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_CoPilotingState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_CoPilotingState_PilotingSource,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Calibration_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates,
	&g_arsdk_cmd_desc_Skyctrl_Calibration_StartCalibration,
	&g_arsdk_cmd_desc_Skyctrl_Calibration_AbortCalibration,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_CalibrationState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationState,
	&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState,
	&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_ButtonEvents_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_ButtonEvents_Settings,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_Factory_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_Factory_Reset,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Skyctrl_CommonEventState_table[] = {
	&g_arsdk_cmd_desc_Skyctrl_CommonEventState_Shutdown,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_Piloting_table[] = {
	&g_arsdk_cmd_desc_Powerup_Piloting_PCMD,
	&g_arsdk_cmd_desc_Powerup_Piloting_UserTakeOff,
	&g_arsdk_cmd_desc_Powerup_Piloting_MotorMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_PilotingState_table[] = {
	&g_arsdk_cmd_desc_Powerup_PilotingState_AlertStateChanged,
	&g_arsdk_cmd_desc_Powerup_PilotingState_FlyingStateChanged,
	&g_arsdk_cmd_desc_Powerup_PilotingState_MotorModeChanged,
	&g_arsdk_cmd_desc_Powerup_PilotingState_AttitudeChanged,
	&g_arsdk_cmd_desc_Powerup_PilotingState_AltitudeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_PilotingSettings_table[] = {
	&g_arsdk_cmd_desc_Powerup_PilotingSettings_Set,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_PilotingSettingsState_table[] = {
	&g_arsdk_cmd_desc_Powerup_PilotingSettingsState_SettingChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_MediaRecord_table[] = {
	&g_arsdk_cmd_desc_Powerup_MediaRecord_PictureV2,
	&g_arsdk_cmd_desc_Powerup_MediaRecord_VideoV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_MediaRecordState_table[] = {
	&g_arsdk_cmd_desc_Powerup_MediaRecordState_PictureStateChangedV2,
	&g_arsdk_cmd_desc_Powerup_MediaRecordState_VideoStateChangedV2,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_MediaRecordEvent_table[] = {
	&g_arsdk_cmd_desc_Powerup_MediaRecordEvent_PictureEventChanged,
	&g_arsdk_cmd_desc_Powerup_MediaRecordEvent_VideoEventChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_NetworkSettings_table[] = {
	&g_arsdk_cmd_desc_Powerup_NetworkSettings_WifiSelection,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_NetworkSettingsState_table[] = {
	&g_arsdk_cmd_desc_Powerup_NetworkSettingsState_WifiSelectionChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_Network_table[] = {
	&g_arsdk_cmd_desc_Powerup_Network_WifiScan,
	&g_arsdk_cmd_desc_Powerup_Network_WifiAuthChannel,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_NetworkState_table[] = {
	&g_arsdk_cmd_desc_Powerup_NetworkState_WifiScanListChanged,
	&g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiScanChanged,
	&g_arsdk_cmd_desc_Powerup_NetworkState_WifiAuthChannelListChanged,
	&g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiAuthChannelChanged,
	&g_arsdk_cmd_desc_Powerup_NetworkState_LinkQualityChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_MediaStreaming_table[] = {
	&g_arsdk_cmd_desc_Powerup_MediaStreaming_VideoEnable,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_MediaStreamingState_table[] = {
	&g_arsdk_cmd_desc_Powerup_MediaStreamingState_VideoEnableChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_VideoSettings_table[] = {
	&g_arsdk_cmd_desc_Powerup_VideoSettings_Autorecord,
	&g_arsdk_cmd_desc_Powerup_VideoSettings_VideoMode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_VideoSettingsState_table[] = {
	&g_arsdk_cmd_desc_Powerup_VideoSettingsState_AutorecordChanged,
	&g_arsdk_cmd_desc_Powerup_VideoSettingsState_VideoModeChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_Sounds_table[] = {
	&g_arsdk_cmd_desc_Powerup_Sounds_Buzz,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Powerup_SoundsState_table[] = {
	&g_arsdk_cmd_desc_Powerup_SoundsState_BuzzChanged,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Generic_Default_table[] = {
	&g_arsdk_cmd_desc_Generic_Default,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Follow_me_Default_table[] = {
	&g_arsdk_cmd_desc_Follow_me_Start,
	&g_arsdk_cmd_desc_Follow_me_Stop,
	&g_arsdk_cmd_desc_Follow_me_Configure_geographic,
	&g_arsdk_cmd_desc_Follow_me_Configure_relative,
	&g_arsdk_cmd_desc_Follow_me_Stop_animation,
	&g_arsdk_cmd_desc_Follow_me_Start_helicoid_anim,
	&g_arsdk_cmd_desc_Follow_me_Start_swing_anim,
	&g_arsdk_cmd_desc_Follow_me_Start_boomerang_anim,
	&g_arsdk_cmd_desc_Follow_me_Start_candle_anim,
	&g_arsdk_cmd_desc_Follow_me_Start_dolly_slide_anim,
	&g_arsdk_cmd_desc_Follow_me_Target_framing_position,
	&g_arsdk_cmd_desc_Follow_me_Target_image_detection,
	&g_arsdk_cmd_desc_Follow_me_Set_target_is_controller,
	&g_arsdk_cmd_desc_Follow_me_Configure_leash,
	&g_arsdk_cmd_desc_Follow_me_State,
	&g_arsdk_cmd_desc_Follow_me_Mode_info,
	&g_arsdk_cmd_desc_Follow_me_Geographic_config,
	&g_arsdk_cmd_desc_Follow_me_Relative_config,
	&g_arsdk_cmd_desc_Follow_me_Target_trajectory,
	&g_arsdk_cmd_desc_Follow_me_Helicoid_anim_config,
	&g_arsdk_cmd_desc_Follow_me_Swing_anim_config,
	&g_arsdk_cmd_desc_Follow_me_Boomerang_anim_config,
	&g_arsdk_cmd_desc_Follow_me_Candle_anim_config,
	&g_arsdk_cmd_desc_Follow_me_Dolly_slide_anim_config,
	&g_arsdk_cmd_desc_Follow_me_Target_framing_position_changed,
	&g_arsdk_cmd_desc_Follow_me_Target_image_detection_state,
	&g_arsdk_cmd_desc_Follow_me_Target_is_controller,
	&g_arsdk_cmd_desc_Follow_me_Leash_config,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Wifi_Default_table[] = {
	&g_arsdk_cmd_desc_Wifi_Scan,
	&g_arsdk_cmd_desc_Wifi_Update_authorized_channels,
	&g_arsdk_cmd_desc_Wifi_Set_ap_channel,
	&g_arsdk_cmd_desc_Wifi_Set_security,
	&g_arsdk_cmd_desc_Wifi_Set_country,
	&g_arsdk_cmd_desc_Wifi_Set_environment,
	&g_arsdk_cmd_desc_Wifi_Scanned_item,
	&g_arsdk_cmd_desc_Wifi_Authorized_channel,
	&g_arsdk_cmd_desc_Wifi_Ap_channel_changed,
	&g_arsdk_cmd_desc_Wifi_Security_changed,
	&g_arsdk_cmd_desc_Wifi_Country_changed,
	&g_arsdk_cmd_desc_Wifi_Environment_changed,
	&g_arsdk_cmd_desc_Wifi_Rssi_changed,
	&g_arsdk_cmd_desc_Wifi_Supported_countries,
	&g_arsdk_cmd_desc_Wifi_Supported_security_types,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Rc_Default_table[] = {
	&g_arsdk_cmd_desc_Rc_Monitor_channels,
	&g_arsdk_cmd_desc_Rc_Start_calibration,
	&g_arsdk_cmd_desc_Rc_Invert_channel,
	&g_arsdk_cmd_desc_Rc_Abort_calibration,
	&g_arsdk_cmd_desc_Rc_Reset_calibration,
	&g_arsdk_cmd_desc_Rc_Enable_receiver,
	&g_arsdk_cmd_desc_Rc_Receiver_state,
	&g_arsdk_cmd_desc_Rc_Channels_monitor_state,
	&g_arsdk_cmd_desc_Rc_Channel_value,
	&g_arsdk_cmd_desc_Rc_Calibration_state,
	&g_arsdk_cmd_desc_Rc_Channel_action_item,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Drone_manager_Default_table[] = {
	&g_arsdk_cmd_desc_Drone_manager_Discover_drones,
	&g_arsdk_cmd_desc_Drone_manager_Connect,
	&g_arsdk_cmd_desc_Drone_manager_Forget,
	&g_arsdk_cmd_desc_Drone_manager_Drone_list_item,
	&g_arsdk_cmd_desc_Drone_manager_Connection_state,
	&g_arsdk_cmd_desc_Drone_manager_Authentication_failed,
	&g_arsdk_cmd_desc_Drone_manager_Connection_refused,
	&g_arsdk_cmd_desc_Drone_manager_Known_drone_item,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Mapper_Default_table[] = {
	&g_arsdk_cmd_desc_Mapper_Grab,
	&g_arsdk_cmd_desc_Mapper_Map_button_action,
	&g_arsdk_cmd_desc_Mapper_Map_axis_action,
	&g_arsdk_cmd_desc_Mapper_Reset_mapping,
	&g_arsdk_cmd_desc_Mapper_Set_expo,
	&g_arsdk_cmd_desc_Mapper_Set_inverted,
	&g_arsdk_cmd_desc_Mapper_Enter_volatile_mapping,
	&g_arsdk_cmd_desc_Mapper_Exit_volatile_mapping,
	&g_arsdk_cmd_desc_Mapper_Grab_state,
	&g_arsdk_cmd_desc_Mapper_Grab_button_event,
	&g_arsdk_cmd_desc_Mapper_Grab_axis_event,
	&g_arsdk_cmd_desc_Mapper_Button_mapping_item,
	&g_arsdk_cmd_desc_Mapper_Axis_mapping_item,
	&g_arsdk_cmd_desc_Mapper_Application_axis_event,
	&g_arsdk_cmd_desc_Mapper_Application_button_event,
	&g_arsdk_cmd_desc_Mapper_Expo_map_item,
	&g_arsdk_cmd_desc_Mapper_Inverted_map_item,
	&g_arsdk_cmd_desc_Mapper_Active_product,
	&g_arsdk_cmd_desc_Mapper_Volatile_mapping_state,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Debug_Default_table[] = {
	&g_arsdk_cmd_desc_Debug_Get_all_settings,
	&g_arsdk_cmd_desc_Debug_Set_setting,
	&g_arsdk_cmd_desc_Debug_Tag,
	&g_arsdk_cmd_desc_Debug_Settings_info,
	&g_arsdk_cmd_desc_Debug_Settings_list,
	&g_arsdk_cmd_desc_Debug_Tag_notify,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Controller_info_Default_table[] = {
	&g_arsdk_cmd_desc_Controller_info_Gps,
	&g_arsdk_cmd_desc_Controller_info_Barometer,
	&g_arsdk_cmd_desc_Controller_info_Validity_from_drone,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Mapper_mini_Default_table[] = {
	&g_arsdk_cmd_desc_Mapper_mini_Map_button_action,
	&g_arsdk_cmd_desc_Mapper_mini_Map_axis_action,
	&g_arsdk_cmd_desc_Mapper_mini_Reset_mapping,
	&g_arsdk_cmd_desc_Mapper_mini_Button_mapping_item,
	&g_arsdk_cmd_desc_Mapper_mini_Axis_mapping_item,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Thermal_cam_Default_table[] = {
	&g_arsdk_cmd_desc_Thermal_cam_Activate,
	&g_arsdk_cmd_desc_Thermal_cam_Deactivate,
	&g_arsdk_cmd_desc_Thermal_cam_Set_sensitivity,
	&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibrate,
	&g_arsdk_cmd_desc_Thermal_cam_Set_flat_field_calibration_mode,
	&g_arsdk_cmd_desc_Thermal_cam_Camera_state,
	&g_arsdk_cmd_desc_Thermal_cam_Sensitivity,
	&g_arsdk_cmd_desc_Thermal_cam_Calibration_infos,
	&g_arsdk_cmd_desc_Thermal_cam_Charging_status,
	&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_status,
	&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_mode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Camera_Default_table[] = {
	&g_arsdk_cmd_desc_Camera_Set_exposure_settings,
	&g_arsdk_cmd_desc_Camera_Lock_exposure,
	&g_arsdk_cmd_desc_Camera_Lock_exposure_on_roi,
	&g_arsdk_cmd_desc_Camera_Unlock_exposure,
	&g_arsdk_cmd_desc_Camera_Set_white_balance,
	&g_arsdk_cmd_desc_Camera_Set_white_balance_lock,
	&g_arsdk_cmd_desc_Camera_Set_ev_compensation,
	&g_arsdk_cmd_desc_Camera_Set_antiflicker_mode,
	&g_arsdk_cmd_desc_Camera_Set_style,
	&g_arsdk_cmd_desc_Camera_Set_style_params,
	&g_arsdk_cmd_desc_Camera_Set_zoom_target,
	&g_arsdk_cmd_desc_Camera_Set_max_zoom_speed,
	&g_arsdk_cmd_desc_Camera_Set_zoom_velocity_quality_degradation,
	&g_arsdk_cmd_desc_Camera_Set_hdr_setting,
	&g_arsdk_cmd_desc_Camera_Set_camera_mode,
	&g_arsdk_cmd_desc_Camera_Set_recording_mode,
	&g_arsdk_cmd_desc_Camera_Set_photo_mode,
	&g_arsdk_cmd_desc_Camera_Set_streaming_mode,
	&g_arsdk_cmd_desc_Camera_Take_photo,
	&g_arsdk_cmd_desc_Camera_Start_recording,
	&g_arsdk_cmd_desc_Camera_Stop_recording,
	&g_arsdk_cmd_desc_Camera_Set_autorecord,
	&g_arsdk_cmd_desc_Camera_Reset_zoom,
	&g_arsdk_cmd_desc_Camera_Stop_photo,
	&g_arsdk_cmd_desc_Camera_Set_alignment_offsets,
	&g_arsdk_cmd_desc_Camera_Reset_alignment_offsets,
	&g_arsdk_cmd_desc_Camera_Camera_capabilities,
	&g_arsdk_cmd_desc_Camera_Recording_capabilities,
	&g_arsdk_cmd_desc_Camera_Photo_capabilities,
	&g_arsdk_cmd_desc_Camera_Antiflicker_capabilities,
	&g_arsdk_cmd_desc_Camera_Exposure_settings,
	&g_arsdk_cmd_desc_Camera_Exposure,
	&g_arsdk_cmd_desc_Camera_White_balance,
	&g_arsdk_cmd_desc_Camera_Ev_compensation,
	&g_arsdk_cmd_desc_Camera_Antiflicker_mode,
	&g_arsdk_cmd_desc_Camera_Style,
	&g_arsdk_cmd_desc_Camera_Zoom_level,
	&g_arsdk_cmd_desc_Camera_Zoom_info,
	&g_arsdk_cmd_desc_Camera_Max_zoom_speed,
	&g_arsdk_cmd_desc_Camera_Zoom_velocity_quality_degradation,
	&g_arsdk_cmd_desc_Camera_Hdr_setting,
	&g_arsdk_cmd_desc_Camera_Hdr,
	&g_arsdk_cmd_desc_Camera_Camera_mode,
	&g_arsdk_cmd_desc_Camera_Recording_mode,
	&g_arsdk_cmd_desc_Camera_Photo_mode,
	&g_arsdk_cmd_desc_Camera_Streaming_mode,
	&g_arsdk_cmd_desc_Camera_Photo_progress,
	&g_arsdk_cmd_desc_Camera_Photo_state,
	&g_arsdk_cmd_desc_Camera_Recording_progress,
	&g_arsdk_cmd_desc_Camera_Recording_state,
	&g_arsdk_cmd_desc_Camera_Autorecord,
	&g_arsdk_cmd_desc_Camera_Camera_states,
	&g_arsdk_cmd_desc_Camera_Next_photo_delay,
	&g_arsdk_cmd_desc_Camera_Alignment_offsets,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Animation_Default_table[] = {
	&g_arsdk_cmd_desc_Animation_Cancel,
	&g_arsdk_cmd_desc_Animation_Start_flip,
	&g_arsdk_cmd_desc_Animation_Start_horizontal_panorama,
	&g_arsdk_cmd_desc_Animation_Start_dronie,
	&g_arsdk_cmd_desc_Animation_Start_horizontal_reveal,
	&g_arsdk_cmd_desc_Animation_Start_vertical_reveal,
	&g_arsdk_cmd_desc_Animation_Start_spiral,
	&g_arsdk_cmd_desc_Animation_Start_parabola,
	&g_arsdk_cmd_desc_Animation_Start_candle,
	&g_arsdk_cmd_desc_Animation_Start_dolly_slide,
	&g_arsdk_cmd_desc_Animation_Start_vertigo,
	&g_arsdk_cmd_desc_Animation_Start_twist_up,
	&g_arsdk_cmd_desc_Animation_Start_position_twist_up,
	&g_arsdk_cmd_desc_Animation_Start_horizontal_180_photo_panorama,
	&g_arsdk_cmd_desc_Animation_Start_vertical_180_photo_panorama,
	&g_arsdk_cmd_desc_Animation_Start_spherical_photo_panorama,
	&g_arsdk_cmd_desc_Animation_Availability,
	&g_arsdk_cmd_desc_Animation_State,
	&g_arsdk_cmd_desc_Animation_Flip_state,
	&g_arsdk_cmd_desc_Animation_Horizontal_panorama_state,
	&g_arsdk_cmd_desc_Animation_Dronie_state,
	&g_arsdk_cmd_desc_Animation_Horizontal_reveal_state,
	&g_arsdk_cmd_desc_Animation_Vertical_reveal_state,
	&g_arsdk_cmd_desc_Animation_Spiral_state,
	&g_arsdk_cmd_desc_Animation_Parabola_state,
	&g_arsdk_cmd_desc_Animation_Candle_state,
	&g_arsdk_cmd_desc_Animation_Dolly_slide_state,
	&g_arsdk_cmd_desc_Animation_Vertigo_state,
	&g_arsdk_cmd_desc_Animation_Twist_up_state,
	&g_arsdk_cmd_desc_Animation_Position_twist_up_state,
	&g_arsdk_cmd_desc_Animation_Horizontal_180_photo_panorama_state,
	&g_arsdk_cmd_desc_Animation_Vertical_180_photo_panorama_state,
	&g_arsdk_cmd_desc_Animation_Spherical_photo_panorama_state,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_User_storage_Default_table[] = {
	&g_arsdk_cmd_desc_User_storage_Format,
	&g_arsdk_cmd_desc_User_storage_Start_monitoring,
	&g_arsdk_cmd_desc_User_storage_Stop_monitoring,
	&g_arsdk_cmd_desc_User_storage_Format_with_type,
	&g_arsdk_cmd_desc_User_storage_Encryption_password,
	&g_arsdk_cmd_desc_User_storage_Format_with_encryption,
	&g_arsdk_cmd_desc_User_storage_Info,
	&g_arsdk_cmd_desc_User_storage_Monitor,
	&g_arsdk_cmd_desc_User_storage_State,
	&g_arsdk_cmd_desc_User_storage_Format_result,
	&g_arsdk_cmd_desc_User_storage_Capabilities,
	&g_arsdk_cmd_desc_User_storage_Supported_formatting_types,
	&g_arsdk_cmd_desc_User_storage_Format_progress,
	&g_arsdk_cmd_desc_User_storage_Decryption,
	&g_arsdk_cmd_desc_User_storage_Sdcard_uuid,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Rth_Default_table[] = {
	&g_arsdk_cmd_desc_Rth_Set_preferred_home_type,
	&g_arsdk_cmd_desc_Rth_Set_custom_location,
	&g_arsdk_cmd_desc_Rth_Set_delay,
	&g_arsdk_cmd_desc_Rth_Return_to_home,
	&g_arsdk_cmd_desc_Rth_Abort,
	&g_arsdk_cmd_desc_Rth_Cancel_auto_trigger,
	&g_arsdk_cmd_desc_Rth_Set_min_altitude,
	&g_arsdk_cmd_desc_Rth_Set_auto_trigger_mode,
	&g_arsdk_cmd_desc_Rth_Set_ending_behavior,
	&g_arsdk_cmd_desc_Rth_Set_ending_hovering_altitude,
	&g_arsdk_cmd_desc_Rth_Home_type_capabilities,
	&g_arsdk_cmd_desc_Rth_Home_type,
	&g_arsdk_cmd_desc_Rth_Preferred_home_type,
	&g_arsdk_cmd_desc_Rth_Takeoff_location,
	&g_arsdk_cmd_desc_Rth_Custom_location,
	&g_arsdk_cmd_desc_Rth_Followee_location,
	&g_arsdk_cmd_desc_Rth_Delay,
	&g_arsdk_cmd_desc_Rth_State,
	&g_arsdk_cmd_desc_Rth_Home_reachability,
	&g_arsdk_cmd_desc_Rth_Rth_auto_trigger,
	&g_arsdk_cmd_desc_Rth_Min_altitude,
	&g_arsdk_cmd_desc_Rth_Auto_trigger_mode,
	&g_arsdk_cmd_desc_Rth_Ending_behavior,
	&g_arsdk_cmd_desc_Rth_Ending_hovering_altitude,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Sequoia_cam_Default_table[] = {
	&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_start,
	&g_arsdk_cmd_desc_Sequoia_cam_Open_session,
	&g_arsdk_cmd_desc_Sequoia_cam_Close_session,
	&g_arsdk_cmd_desc_Sequoia_cam_Set_live_stitch_mask,
	&g_arsdk_cmd_desc_Sequoia_cam_Get_storage_infos,
	&g_arsdk_cmd_desc_Sequoia_cam_Factory_reset,
	&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_status,
	&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_result,
	&g_arsdk_cmd_desc_Sequoia_cam_Session_state_changed,
	&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_mask_changed,
	&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_last_picture_id_changed,
	&g_arsdk_cmd_desc_Sequoia_cam_Storage_infos,
	&g_arsdk_cmd_desc_Sequoia_cam_System_status,
	&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Gimbal_Default_table[] = {
	&g_arsdk_cmd_desc_Gimbal_Set_max_speed,
	&g_arsdk_cmd_desc_Gimbal_Set_target,
	&g_arsdk_cmd_desc_Gimbal_Set_offsets,
	&g_arsdk_cmd_desc_Gimbal_Reset_orientation,
	&g_arsdk_cmd_desc_Gimbal_Start_offsets_update,
	&g_arsdk_cmd_desc_Gimbal_Stop_offsets_update,
	&g_arsdk_cmd_desc_Gimbal_Calibrate,
	&g_arsdk_cmd_desc_Gimbal_Cancel_calibration,
	&g_arsdk_cmd_desc_Gimbal_Gimbal_capabilities,
	&g_arsdk_cmd_desc_Gimbal_Relative_attitude_bounds,
	&g_arsdk_cmd_desc_Gimbal_Max_speed,
	&g_arsdk_cmd_desc_Gimbal_Attitude,
	&g_arsdk_cmd_desc_Gimbal_Axis_lock_state,
	&g_arsdk_cmd_desc_Gimbal_Offsets,
	&g_arsdk_cmd_desc_Gimbal_Absolute_attitude_bounds,
	&g_arsdk_cmd_desc_Gimbal_Calibration_state,
	&g_arsdk_cmd_desc_Gimbal_Calibration_result,
	&g_arsdk_cmd_desc_Gimbal_Alert,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Battery_Default_table[] = {
	&g_arsdk_cmd_desc_Battery_Alert,
	&g_arsdk_cmd_desc_Battery_Health,
	&g_arsdk_cmd_desc_Battery_Voltage,
	&g_arsdk_cmd_desc_Battery_Cycle_count,
	&g_arsdk_cmd_desc_Battery_Serial,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Mediastore_Default_table[] = {
	&g_arsdk_cmd_desc_Mediastore_State,
	&g_arsdk_cmd_desc_Mediastore_Counters,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Precise_home_Default_table[] = {
	&g_arsdk_cmd_desc_Precise_home_Set_mode,
	&g_arsdk_cmd_desc_Precise_home_Capabilities,
	&g_arsdk_cmd_desc_Precise_home_Mode,
	&g_arsdk_cmd_desc_Precise_home_State,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Thermal_Default_table[] = {
	&g_arsdk_cmd_desc_Thermal_Set_mode,
	&g_arsdk_cmd_desc_Thermal_Set_palette_part,
	&g_arsdk_cmd_desc_Thermal_Set_palette_settings,
	&g_arsdk_cmd_desc_Thermal_Set_rendering,
	&g_arsdk_cmd_desc_Thermal_Set_emissivity,
	&g_arsdk_cmd_desc_Thermal_Set_background_temperature,
	&g_arsdk_cmd_desc_Thermal_Set_sensitivity,
	&g_arsdk_cmd_desc_Thermal_Set_shutter_mode,
	&g_arsdk_cmd_desc_Thermal_Trigg_shutter,
	&g_arsdk_cmd_desc_Thermal_Mode,
	&g_arsdk_cmd_desc_Thermal_Capabilities,
	&g_arsdk_cmd_desc_Thermal_Palette_part,
	&g_arsdk_cmd_desc_Thermal_Palette_settings,
	&g_arsdk_cmd_desc_Thermal_Rendering,
	&g_arsdk_cmd_desc_Thermal_Emissivity,
	&g_arsdk_cmd_desc_Thermal_Background_temperature,
	&g_arsdk_cmd_desc_Thermal_Sensitivity,
	&g_arsdk_cmd_desc_Thermal_Shutter_mode,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Leds_Default_table[] = {
	&g_arsdk_cmd_desc_Leds_Activate,
	&g_arsdk_cmd_desc_Leds_Deactivate,
	&g_arsdk_cmd_desc_Leds_Capabilities,
	&g_arsdk_cmd_desc_Leds_Switch_state,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Piloting_style_Default_table[] = {
	&g_arsdk_cmd_desc_Piloting_style_Set_style,
	&g_arsdk_cmd_desc_Piloting_style_Style,
	&g_arsdk_cmd_desc_Piloting_style_Capabilities,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Gauge_fw_updater_Default_table[] = {
	&g_arsdk_cmd_desc_Gauge_fw_updater_Prepare,
	&g_arsdk_cmd_desc_Gauge_fw_updater_Update,
	&g_arsdk_cmd_desc_Gauge_fw_updater_Status,
	&g_arsdk_cmd_desc_Gauge_fw_updater_Progress,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Dri_Default_table[] = {
	&g_arsdk_cmd_desc_Dri_Dri_mode,
	&g_arsdk_cmd_desc_Dri_Set_dri_type,
	&g_arsdk_cmd_desc_Dri_Capabilities,
	&g_arsdk_cmd_desc_Dri_Dri_state,
	&g_arsdk_cmd_desc_Dri_Drone_id,
	&g_arsdk_cmd_desc_Dri_Dri_type,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Security_edition_Default_table[] = {
	&g_arsdk_cmd_desc_Security_edition_Deactivate_logs,
	&g_arsdk_cmd_desc_Security_edition_Capabilities,
	&g_arsdk_cmd_desc_Security_edition_Log_storage_state,
	NULL,
};

static const struct arsdk_cmd_desc * const s_arsdk_cmd_desc_Move_Default_table[] = {
	&g_arsdk_cmd_desc_Move_Extended_move_to,
	&g_arsdk_cmd_desc_Move_Extended_move_by,
	&g_arsdk_cmd_desc_Move_Info,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Common_table[] = {
	s_arsdk_cmd_desc_Common_Network_table,
	s_arsdk_cmd_desc_Common_NetworkEvent_table,
	s_arsdk_cmd_desc_Common_Settings_table,
	s_arsdk_cmd_desc_Common_SettingsState_table,
	s_arsdk_cmd_desc_Common_Common_table,
	s_arsdk_cmd_desc_Common_CommonState_table,
	s_arsdk_cmd_desc_Common_OverHeat_table,
	s_arsdk_cmd_desc_Common_OverHeatState_table,
	s_arsdk_cmd_desc_Common_Controller_table,
	s_arsdk_cmd_desc_Common_WifiSettings_table,
	s_arsdk_cmd_desc_Common_WifiSettingsState_table,
	s_arsdk_cmd_desc_Common_Mavlink_table,
	s_arsdk_cmd_desc_Common_MavlinkState_table,
	s_arsdk_cmd_desc_Common_Calibration_table,
	s_arsdk_cmd_desc_Common_CalibrationState_table,
	s_arsdk_cmd_desc_Common_CameraSettingsState_table,
	s_arsdk_cmd_desc_Common_GPS_table,
	s_arsdk_cmd_desc_Common_FlightPlanState_table,
	s_arsdk_cmd_desc_Common_ARLibsVersionsState_table,
	s_arsdk_cmd_desc_Common_FlightPlanEvent_table,
	s_arsdk_cmd_desc_Common_Audio_table,
	s_arsdk_cmd_desc_Common_AudioState_table,
	s_arsdk_cmd_desc_Common_Headlights_table,
	s_arsdk_cmd_desc_Common_HeadlightsState_table,
	s_arsdk_cmd_desc_Common_Animations_table,
	s_arsdk_cmd_desc_Common_AnimationsState_table,
	s_arsdk_cmd_desc_Common_Accessory_table,
	s_arsdk_cmd_desc_Common_AccessoryState_table,
	s_arsdk_cmd_desc_Common_Charger_table,
	s_arsdk_cmd_desc_Common_ChargerState_table,
	s_arsdk_cmd_desc_Common_RunState_table,
	s_arsdk_cmd_desc_Common_Factory_table,
	s_arsdk_cmd_desc_Common_FlightPlanSettings_table,
	s_arsdk_cmd_desc_Common_FlightPlanSettingsState_table,
	s_arsdk_cmd_desc_Common_UpdateState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Ardrone3_table[] = {
	s_arsdk_cmd_desc_Ardrone3_Piloting_table,
	s_arsdk_cmd_desc_Ardrone3_Camera_table,
	s_arsdk_cmd_desc_Ardrone3_PilotingSettings_table,
	s_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_table,
	s_arsdk_cmd_desc_Ardrone3_PilotingState_table,
	s_arsdk_cmd_desc_Ardrone3_Animations_table,
	s_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_MediaRecord_table,
	s_arsdk_cmd_desc_Ardrone3_MediaRecordState_table,
	s_arsdk_cmd_desc_Ardrone3_NetworkSettings_table,
	s_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_SpeedSettings_table,
	s_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_Network_table,
	s_arsdk_cmd_desc_Ardrone3_NetworkState_table,
	s_arsdk_cmd_desc_Ardrone3_SettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_PictureSettings_table,
	s_arsdk_cmd_desc_Ardrone3_PictureSettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_MediaStreaming_table,
	s_arsdk_cmd_desc_Ardrone3_MediaStreamingState_table,
	s_arsdk_cmd_desc_Ardrone3_GPSSettings_table,
	s_arsdk_cmd_desc_Ardrone3_GPSSettingsState_table,
	s_arsdk_cmd_desc_Ardrone3_CameraState_table,
	s_arsdk_cmd_desc_Ardrone3_Antiflickering_table,
	s_arsdk_cmd_desc_Ardrone3_AntiflickeringState_table,
	s_arsdk_cmd_desc_Ardrone3_GPSState_table,
	s_arsdk_cmd_desc_Ardrone3_PROState_table,
	s_arsdk_cmd_desc_Ardrone3_AccessoryState_table,
	s_arsdk_cmd_desc_Ardrone3_PilotingEvent_table,
	s_arsdk_cmd_desc_Ardrone3_Sound_table,
	s_arsdk_cmd_desc_Ardrone3_SoundState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Minidrone_table[] = {
	s_arsdk_cmd_desc_Minidrone_Piloting_table,
	s_arsdk_cmd_desc_Minidrone_SpeedSettings_table,
	s_arsdk_cmd_desc_Minidrone_MediaRecordEvent_table,
	s_arsdk_cmd_desc_Minidrone_PilotingState_table,
	s_arsdk_cmd_desc_Minidrone_Animations_table,
	s_arsdk_cmd_desc_Minidrone_SpeedSettingsState_table,
	s_arsdk_cmd_desc_Minidrone_MediaRecord_table,
	s_arsdk_cmd_desc_Minidrone_MediaRecordState_table,
	s_arsdk_cmd_desc_Minidrone_PilotingSettings_table,
	s_arsdk_cmd_desc_Minidrone_PilotingSettingsState_table,
	s_arsdk_cmd_desc_Minidrone_Settings_table,
	s_arsdk_cmd_desc_Minidrone_SettingsState_table,
	s_arsdk_cmd_desc_Minidrone_FloodControlState_table,
	s_arsdk_cmd_desc_Minidrone_GPS_table,
	s_arsdk_cmd_desc_Minidrone_Configuration_table,
	s_arsdk_cmd_desc_Minidrone_UsbAccessoryState_table,
	s_arsdk_cmd_desc_Minidrone_UsbAccessory_table,
	s_arsdk_cmd_desc_Minidrone_RemoteController_table,
	s_arsdk_cmd_desc_Minidrone_NavigationDataState_table,
	s_arsdk_cmd_desc_Minidrone_MinicamState_table,
	s_arsdk_cmd_desc_Minidrone_VideoSettings_table,
	s_arsdk_cmd_desc_Minidrone_VideoSettingsState_table,
	s_arsdk_cmd_desc_Minidrone_Minicam_table,
	s_arsdk_cmd_desc_Minidrone_RemoteControllerState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Jpsumo_table[] = {
	s_arsdk_cmd_desc_Jpsumo_Piloting_table,
	s_arsdk_cmd_desc_Jpsumo_PilotingState_table,
	s_arsdk_cmd_desc_Jpsumo_Animations_table,
	s_arsdk_cmd_desc_Jpsumo_AnimationsState_table,
	s_arsdk_cmd_desc_Jpsumo_SettingsState_table,
	s_arsdk_cmd_desc_Jpsumo_MediaRecord_table,
	s_arsdk_cmd_desc_Jpsumo_MediaRecordState_table,
	s_arsdk_cmd_desc_Jpsumo_NetworkSettings_table,
	s_arsdk_cmd_desc_Jpsumo_NetworkSettingsState_table,
	s_arsdk_cmd_desc_Jpsumo_Network_table,
	s_arsdk_cmd_desc_Jpsumo_NetworkState_table,
	s_arsdk_cmd_desc_Jpsumo_AudioSettings_table,
	s_arsdk_cmd_desc_Jpsumo_AudioSettingsState_table,
	s_arsdk_cmd_desc_Jpsumo_RoadPlan_table,
	s_arsdk_cmd_desc_Jpsumo_RoadPlanState_table,
	s_arsdk_cmd_desc_Jpsumo_SpeedSettings_table,
	s_arsdk_cmd_desc_Jpsumo_SpeedSettingsState_table,
	s_arsdk_cmd_desc_Jpsumo_MediaStreaming_table,
	s_arsdk_cmd_desc_Jpsumo_MediaStreamingState_table,
	s_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_table,
	s_arsdk_cmd_desc_Jpsumo_VideoSettings_table,
	s_arsdk_cmd_desc_Jpsumo_VideoSettingsState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Skyctrl_table[] = {
	s_arsdk_cmd_desc_Skyctrl_WifiState_table,
	s_arsdk_cmd_desc_Skyctrl_Wifi_table,
	s_arsdk_cmd_desc_Skyctrl_Device_table,
	s_arsdk_cmd_desc_Skyctrl_DeviceState_table,
	s_arsdk_cmd_desc_Skyctrl_Settings_table,
	s_arsdk_cmd_desc_Skyctrl_SettingsState_table,
	s_arsdk_cmd_desc_Skyctrl_Common_table,
	s_arsdk_cmd_desc_Skyctrl_CommonState_table,
	s_arsdk_cmd_desc_Skyctrl_SkyControllerState_table,
	s_arsdk_cmd_desc_Skyctrl_AccessPointSettings_table,
	s_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_table,
	s_arsdk_cmd_desc_Skyctrl_Camera_table,
	s_arsdk_cmd_desc_Skyctrl_ButtonMappings_table,
	s_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_table,
	s_arsdk_cmd_desc_Skyctrl_AxisMappings_table,
	s_arsdk_cmd_desc_Skyctrl_AxisMappingsState_table,
	s_arsdk_cmd_desc_Skyctrl_AxisFilters_table,
	s_arsdk_cmd_desc_Skyctrl_AxisFiltersState_table,
	s_arsdk_cmd_desc_Skyctrl_GamepadInfos_table,
	s_arsdk_cmd_desc_Skyctrl_GamepadInfosState_table,
	s_arsdk_cmd_desc_Skyctrl_CoPiloting_table,
	s_arsdk_cmd_desc_Skyctrl_CoPilotingState_table,
	s_arsdk_cmd_desc_Skyctrl_Calibration_table,
	s_arsdk_cmd_desc_Skyctrl_CalibrationState_table,
	s_arsdk_cmd_desc_Skyctrl_ButtonEvents_table,
	s_arsdk_cmd_desc_Skyctrl_Factory_table,
	s_arsdk_cmd_desc_Skyctrl_CommonEventState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Powerup_table[] = {
	s_arsdk_cmd_desc_Powerup_Piloting_table,
	s_arsdk_cmd_desc_Powerup_PilotingState_table,
	s_arsdk_cmd_desc_Powerup_PilotingSettings_table,
	s_arsdk_cmd_desc_Powerup_PilotingSettingsState_table,
	s_arsdk_cmd_desc_Powerup_MediaRecord_table,
	s_arsdk_cmd_desc_Powerup_MediaRecordState_table,
	s_arsdk_cmd_desc_Powerup_MediaRecordEvent_table,
	s_arsdk_cmd_desc_Powerup_NetworkSettings_table,
	s_arsdk_cmd_desc_Powerup_NetworkSettingsState_table,
	s_arsdk_cmd_desc_Powerup_Network_table,
	s_arsdk_cmd_desc_Powerup_NetworkState_table,
	s_arsdk_cmd_desc_Powerup_MediaStreaming_table,
	s_arsdk_cmd_desc_Powerup_MediaStreamingState_table,
	s_arsdk_cmd_desc_Powerup_VideoSettings_table,
	s_arsdk_cmd_desc_Powerup_VideoSettingsState_table,
	s_arsdk_cmd_desc_Powerup_Sounds_table,
	s_arsdk_cmd_desc_Powerup_SoundsState_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Generic_table[] = {
	s_arsdk_cmd_desc_Generic_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Follow_me_table[] = {
	s_arsdk_cmd_desc_Follow_me_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Wifi_table[] = {
	s_arsdk_cmd_desc_Wifi_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Rc_table[] = {
	s_arsdk_cmd_desc_Rc_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Drone_manager_table[] = {
	s_arsdk_cmd_desc_Drone_manager_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Mapper_table[] = {
	s_arsdk_cmd_desc_Mapper_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Debug_table[] = {
	s_arsdk_cmd_desc_Debug_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Controller_info_table[] = {
	s_arsdk_cmd_desc_Controller_info_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Mapper_mini_table[] = {
	s_arsdk_cmd_desc_Mapper_mini_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Thermal_cam_table[] = {
	s_arsdk_cmd_desc_Thermal_cam_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Camera_table[] = {
	s_arsdk_cmd_desc_Camera_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Animation_table[] = {
	s_arsdk_cmd_desc_Animation_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_User_storage_table[] = {
	s_arsdk_cmd_desc_User_storage_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Rth_table[] = {
	s_arsdk_cmd_desc_Rth_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Sequoia_cam_table[] = {
	s_arsdk_cmd_desc_Sequoia_cam_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Gimbal_table[] = {
	s_arsdk_cmd_desc_Gimbal_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Battery_table[] = {
	s_arsdk_cmd_desc_Battery_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Mediastore_table[] = {
	s_arsdk_cmd_desc_Mediastore_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Precise_home_table[] = {
	s_arsdk_cmd_desc_Precise_home_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Thermal_table[] = {
	s_arsdk_cmd_desc_Thermal_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Leds_table[] = {
	s_arsdk_cmd_desc_Leds_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Piloting_style_table[] = {
	s_arsdk_cmd_desc_Piloting_style_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Gauge_fw_updater_table[] = {
	s_arsdk_cmd_desc_Gauge_fw_updater_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Dri_table[] = {
	s_arsdk_cmd_desc_Dri_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Security_edition_table[] = {
	s_arsdk_cmd_desc_Security_edition_Default_table,
	NULL,
};

static const struct arsdk_cmd_desc * const *s_arsdk_cmd_desc_Move_table[] = {
	s_arsdk_cmd_desc_Move_Default_table,
	NULL,
};

/*extern*/ const struct arsdk_cmd_desc * const * const *g_arsdk_cmd_desc_table[] = {
	s_arsdk_cmd_desc_Common_table,
	s_arsdk_cmd_desc_Ardrone3_table,
	s_arsdk_cmd_desc_Minidrone_table,
	s_arsdk_cmd_desc_Jpsumo_table,
	s_arsdk_cmd_desc_Skyctrl_table,
	s_arsdk_cmd_desc_Powerup_table,
	s_arsdk_cmd_desc_Generic_table,
	s_arsdk_cmd_desc_Follow_me_table,
	s_arsdk_cmd_desc_Wifi_table,
	s_arsdk_cmd_desc_Rc_table,
	s_arsdk_cmd_desc_Drone_manager_table,
	s_arsdk_cmd_desc_Mapper_table,
	s_arsdk_cmd_desc_Debug_table,
	s_arsdk_cmd_desc_Controller_info_table,
	s_arsdk_cmd_desc_Mapper_mini_table,
	s_arsdk_cmd_desc_Thermal_cam_table,
	s_arsdk_cmd_desc_Camera_table,
	s_arsdk_cmd_desc_Animation_table,
	s_arsdk_cmd_desc_User_storage_table,
	s_arsdk_cmd_desc_Rth_table,
	s_arsdk_cmd_desc_Sequoia_cam_table,
	s_arsdk_cmd_desc_Gimbal_table,
	s_arsdk_cmd_desc_Battery_table,
	s_arsdk_cmd_desc_Mediastore_table,
	s_arsdk_cmd_desc_Precise_home_table,
	s_arsdk_cmd_desc_Thermal_table,
	s_arsdk_cmd_desc_Leds_table,
	s_arsdk_cmd_desc_Piloting_style_table,
	s_arsdk_cmd_desc_Gauge_fw_updater_table,
	s_arsdk_cmd_desc_Dri_table,
	s_arsdk_cmd_desc_Security_edition_table,
	s_arsdk_cmd_desc_Move_table,
	NULL,
};

#ifdef __clang__
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

const struct arsdk_cmd_desc * const * const **arsdk_get_cmd_table(void)
{
	return g_arsdk_cmd_desc_table;
}
