static inline int
arsdk_cmd_send_Common_Network_Disconnect(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Network_Disconnect(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Settings_AllSettings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Settings_AllSettings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Settings_Reset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Settings_Reset(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Settings_ProductName(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Settings_ProductName(
			&cmd,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Settings_Country(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_code) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Settings_Country(
			&cmd,
			_code);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Settings_AutoCountry(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _automatic) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Settings_AutoCountry(
			&cmd,
			_automatic);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Common_AllStates(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Common_AllStates(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Common_CurrentDate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_date) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Common_CurrentDate(
			&cmd,
			_date);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Common_CurrentTime(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_time) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Common_CurrentTime(
			&cmd,
			_time);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Common_Reboot(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Common_Reboot(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Common_CurrentDateTime(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_datetime) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Common_CurrentDateTime(
			&cmd,
			_datetime);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_OverHeat_SwitchOff(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_OverHeat_SwitchOff(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_OverHeat_Ventilate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_OverHeat_Ventilate(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Controller_IsPiloting(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _piloting) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Controller_IsPiloting(
			&cmd,
			_piloting);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Controller_PeerStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _type,
		const char *_peerName,
		const char *_peerId,
		const char *_peerType) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Controller_PeerStateChanged(
			&cmd,
			_state,
			_type,
			_peerName,
			_peerId,
			_peerType);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_WifiSettings_OutdoorSetting(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_WifiSettings_OutdoorSetting(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Mavlink_Start(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_filepath,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Mavlink_Start(
			&cmd,
			_filepath,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Mavlink_Pause(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Mavlink_Pause(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Mavlink_Stop(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Mavlink_Stop(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanSettings_ReturnHomeOnDisconnect(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanSettings_ReturnHomeOnDisconnect(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Calibration_MagnetoCalibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _calibrate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Calibration_MagnetoCalibration(
			&cmd,
			_calibrate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Calibration_PitotCalibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _calibrate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Calibration_PitotCalibration(
			&cmd,
			_calibrate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_GPS_ControllerPositionForRun(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_GPS_ControllerPositionForRun(
			&cmd,
			_latitude,
			_longitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Audio_ControllerReadyForStreaming(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _ready) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Audio_ControllerReadyForStreaming(
			&cmd,
			_ready);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Headlights_Intensity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _left,
		uint8_t _right) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Headlights_Intensity(
			&cmd,
			_left,
			_right);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Animations_StartAnimation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _anim) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Animations_StartAnimation(
			&cmd,
			_anim);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Animations_StopAnimation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _anim) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Animations_StopAnimation(
			&cmd,
			_anim);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Animations_StopAllAnimations(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Animations_StopAllAnimations(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Accessory_Config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _accessory) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Accessory_Config(
			&cmd,
			_accessory);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Charger_SetMaxChargeRate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _rate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Charger_SetMaxChargeRate(
			&cmd,
			_rate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_Factory_Reset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_Factory_Reset(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_NetworkEvent_Disconnection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _cause) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_NetworkEvent_Disconnection(
			&cmd,
			_cause);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_AllSettingsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_AllSettingsChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_ResetChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_ResetChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_ProductNameChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_ProductNameChanged(
			&cmd,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_ProductVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_ProductVersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_ProductSerialHighChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_high) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_ProductSerialHighChanged(
			&cmd,
			_high);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_ProductSerialLowChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_low) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_ProductSerialLowChanged(
			&cmd,
			_low);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_CountryChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_code) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_CountryChanged(
			&cmd,
			_code);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_AutoCountryChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _automatic) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_AutoCountryChanged(
			&cmd,
			_automatic);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_SettingsState_BoardIdChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_SettingsState_BoardIdChanged(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_AllStatesChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_AllStatesChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_BatteryStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _percent) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_BatteryStateChanged(
			&cmd,
			_percent);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_MassStorageStateListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_MassStorageStateListChanged(
			&cmd,
			_mass_storage_id,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_MassStorageInfoStateListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id,
		uint32_t _size,
		uint32_t _used_size,
		uint8_t _plugged,
		uint8_t _full,
		uint8_t _internal) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_MassStorageInfoStateListChanged(
			&cmd,
			_mass_storage_id,
			_size,
			_used_size,
			_plugged,
			_full,
			_internal);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_CurrentDateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_date) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_CurrentDateChanged(
			&cmd,
			_date);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_CurrentTimeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_time) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_CurrentTimeChanged(
			&cmd,
			_time);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_MassStorageInfoRemainingListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _free_space,
		uint16_t _rec_time,
		uint32_t _photo_remaining) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_MassStorageInfoRemainingListChanged(
			&cmd,
			_free_space,
			_rec_time,
			_photo_remaining);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_WifiSignalChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int16_t _rssi) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_WifiSignalChanged(
			&cmd,
			_rssi);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_SensorsStatesListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _sensorName,
		uint8_t _sensorState) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_SensorsStatesListChanged(
			&cmd,
			_sensorName,
			_sensorState);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_ProductModel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _model) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_ProductModel(
			&cmd,
			_model);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_CountryListKnown(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _listFlags,
		const char *_countryCodes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_CountryListKnown(
			&cmd,
			_listFlags,
			_countryCodes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_DeprecatedMassStorageContentChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id,
		uint16_t _nbPhotos,
		uint16_t _nbVideos,
		uint16_t _nbPuds,
		uint16_t _nbCrashLogs) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_DeprecatedMassStorageContentChanged(
			&cmd,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbPuds,
			_nbCrashLogs);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_MassStorageContent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id,
		uint16_t _nbPhotos,
		uint16_t _nbVideos,
		uint16_t _nbPuds,
		uint16_t _nbCrashLogs,
		uint16_t _nbRawPhotos) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_MassStorageContent(
			&cmd,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbPuds,
			_nbCrashLogs,
			_nbRawPhotos);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_MassStorageContentForCurrentRun(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id,
		uint16_t _nbPhotos,
		uint16_t _nbVideos,
		uint16_t _nbRawPhotos) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_MassStorageContentForCurrentRun(
			&cmd,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbRawPhotos);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_VideoRecordingTimestamp(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint64_t _startTimestamp,
		uint64_t _stopTimestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_VideoRecordingTimestamp(
			&cmd,
			_startTimestamp,
			_stopTimestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_CurrentDateTimeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_datetime) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_CurrentDateTimeChanged(
			&cmd,
			_datetime);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_LinkSignalQuality(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_LinkSignalQuality(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CommonState_BootId(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_bootId) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CommonState_BootId(
			&cmd,
			_bootId);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_OverHeatState_OverHeatChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_OverHeatState_OverHeatChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_OverHeatState_OverHeatRegulationChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _regulationType) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_OverHeatState_OverHeatRegulationChanged(
			&cmd,
			_regulationType);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_WifiSettingsState_OutdoorSettingsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_WifiSettingsState_OutdoorSettingsChanged(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_MavlinkState_MavlinkFilePlayingStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		const char *_filepath,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_MavlinkState_MavlinkFilePlayingStateChanged(
			&cmd,
			_state,
			_filepath,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_MavlinkState_MavlinkPlayErrorStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_MavlinkState_MavlinkPlayErrorStateChanged(
			&cmd,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_MavlinkState_MissionItemExecuted(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _idx) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_MavlinkState_MissionItemExecuted(
			&cmd,
			_idx);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state,
		uint8_t _isReadOnly) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged(
			&cmd,
			_state,
			_isReadOnly);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CalibrationState_MagnetoCalibrationStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _xAxisCalibration,
		uint8_t _yAxisCalibration,
		uint8_t _zAxisCalibration,
		uint8_t _calibrationFailed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CalibrationState_MagnetoCalibrationStateChanged(
			&cmd,
			_xAxisCalibration,
			_yAxisCalibration,
			_zAxisCalibration,
			_calibrationFailed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CalibrationState_MagnetoCalibrationRequiredState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _required) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CalibrationState_MagnetoCalibrationRequiredState(
			&cmd,
			_required);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _axis) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged(
			&cmd,
			_axis);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CalibrationState_MagnetoCalibrationStartedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _started) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CalibrationState_MagnetoCalibrationStartedChanged(
			&cmd,
			_started);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CalibrationState_PitotCalibrationStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		uint8_t _lastError) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CalibrationState_PitotCalibrationStateChanged(
			&cmd,
			_state,
			_lastError);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_CameraSettingsState_CameraSettingsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _fov,
		float _panMax,
		float _panMin,
		float _tiltMax,
		float _tiltMin) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_CameraSettingsState_CameraSettingsChanged(
			&cmd,
			_fov,
			_panMax,
			_panMin,
			_tiltMax,
			_tiltMin);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanState_AvailabilityStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _AvailabilityState) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanState_AvailabilityStateChanged(
			&cmd,
			_AvailabilityState);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanState_ComponentStateListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _component,
		uint8_t _State) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanState_ComponentStateListChanged(
			&cmd,
			_component,
			_State);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanState_LockStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _LockState) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanState_LockStateChanged(
			&cmd,
			_LockState);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanEvent_StartingErrorEvent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanEvent_StartingErrorEvent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_FlightPlanEvent_SpeedBridleEvent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_FlightPlanEvent_SpeedBridleEvent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ARLibsVersionsState_ControllerLibARCommandsVersion(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_version) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion(
			&cmd,
			_version);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_version) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion(
			&cmd,
			_version);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ARLibsVersionsState_DeviceLibARCommandsVersion(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_version) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion(
			&cmd,
			_version);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_AudioState_AudioStreamingRunning(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _running) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_AudioState_AudioStreamingRunning(
			&cmd,
			_running);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_HeadlightsState_IntensityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _left,
		uint8_t _right) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_HeadlightsState_IntensityChanged(
			&cmd,
			_left,
			_right);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_AnimationsState_List(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _anim,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_AnimationsState_List(
			&cmd,
			_anim,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_AccessoryState_SupportedAccessoriesListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _accessory) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_AccessoryState_SupportedAccessoriesListChanged(
			&cmd,
			_accessory);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_AccessoryState_AccessoryConfigChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _newAccessory,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_AccessoryState_AccessoryConfigChanged(
			&cmd,
			_newAccessory,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_AccessoryState_AccessoryConfigModificationEnabled(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_AccessoryState_AccessoryConfigModificationEnabled(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ChargerState_MaxChargeRateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _rate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ChargerState_MaxChargeRateChanged(
			&cmd,
			_rate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ChargerState_CurrentChargeStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _status,
		int32_t _phase) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ChargerState_CurrentChargeStateChanged(
			&cmd,
			_status,
			_phase);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ChargerState_LastChargeRateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _rate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ChargerState_LastChargeRateChanged(
			&cmd,
			_rate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_ChargerState_ChargingInfo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _phase,
		int32_t _rate,
		uint8_t _intensity,
		uint8_t _fullChargingTime) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_ChargerState_ChargingInfo(
			&cmd,
			_phase,
			_rate,
			_intensity,
			_fullChargingTime);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_RunState_RunIdChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_runId) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_RunState_RunIdChanged(
			&cmd,
			_runId);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Common_UpdateState_UpdateStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_sourceVersion,
		const char *_targetVersion,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Common_UpdateState_UpdateStateChanged(
			&cmd,
			_sourceVersion,
			_targetVersion,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_TakeOff(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_TakeOff(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_PCMD(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _flag,
		int8_t _roll,
		int8_t _pitch,
		int8_t _yaw,
		int8_t _gaz,
		uint32_t _timestampAndSeqNum) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_PCMD(
			&cmd,
			_flag,
			_roll,
			_pitch,
			_yaw,
			_gaz,
			_timestampAndSeqNum);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_Landing(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_Landing(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_Emergency(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_Emergency(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_NavigateHome(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _start) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_NavigateHome(
			&cmd,
			_start);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_MoveBy(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _dX,
		float _dY,
		float _dZ,
		float _dPsi) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_MoveBy(
			&cmd,
			_dX,
			_dY,
			_dZ,
			_dPsi);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_UserTakeOff(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_UserTakeOff(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_Circle(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _direction) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_Circle(
			&cmd,
			_direction);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_MoveTo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _orientation_mode,
		float _heading) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_MoveTo(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_CancelMoveTo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_CancelMoveTo(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_StartPilotedPOI(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_StartPilotedPOI(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_StartPilotedPOIV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_StartPilotedPOIV2(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_StopPilotedPOI(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_StopPilotedPOI(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Piloting_CancelMoveBy(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Piloting_CancelMoveBy(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Animations_Flip(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _direction) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Animations_Flip(
			&cmd,
			_direction);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Camera_Orientation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _tilt,
		int8_t _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Camera_Orientation(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Camera_OrientationV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _tilt,
		float _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Camera_OrientationV2(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Camera_Velocity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _tilt,
		float _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Camera_Velocity(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecord_Picture(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecord_Picture(
			&cmd,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecord_Video(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecord_Video(
			&cmd,
			_record,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecord_PictureV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecord_PictureV2(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecord_VideoV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecord_VideoV2(
			&cmd,
			_record);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Network_WifiScan(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Network_WifiScan(
			&cmd,
			_band);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Network_WifiAuthChannel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Network_WifiAuthChannel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_MaxAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_MaxAltitude(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_MaxTilt(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_MaxTilt(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_AbsolutControl(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _on) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_AbsolutControl(
			&cmd,
			_on);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_MaxDistance(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_MaxDistance(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_NoFlyOverMaxDistance(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _shouldNotFlyOver) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance(
			&cmd,
			_shouldNotFlyOver);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_BankedTurn(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_BankedTurn(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_MinAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_MinAltitude(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_CirclingDirection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_CirclingDirection(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_CirclingRadius(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_CirclingRadius(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_CirclingAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_CirclingAltitude(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_PitchMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_PitchMode(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettings_SetMotionDetectionMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettings_SetMotionDetectionMode(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettings_MaxVerticalSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettings_MaxVerticalSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettings_MaxRotationSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettings_MaxRotationSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettings_HullProtection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _present) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettings_HullProtection(
			&cmd,
			_present);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettings_Outdoor(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettings_Outdoor(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkSettings_WifiSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkSettings_WifiSelection(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkSettings_WifiSecurity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_key,
		int32_t _keyType) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkSettings_WifiSecurity(
			&cmd,
			_type,
			_key,
			_keyType);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_PictureFormatSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_PictureFormatSelection(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_AutoWhiteBalanceSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_ExpositionSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_ExpositionSelection(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_SaturationSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_SaturationSelection(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_TimelapseSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled,
		float _interval) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_TimelapseSelection(
			&cmd,
			_enabled,
			_interval);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_VideoAutorecordSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_VideoAutorecordSelection(
			&cmd,
			_enabled,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_VideoStabilizationMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_VideoStabilizationMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_VideoRecordingMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_VideoRecordingMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_VideoFramerate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _framerate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_VideoFramerate(
			&cmd,
			_framerate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettings_VideoResolutions(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettings_VideoResolutions(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaStreaming_VideoEnable(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaStreaming_VideoEnable(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaStreaming_VideoStreamMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaStreaming_VideoStreamMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_SetHome(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_SetHome(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_ResetHome(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_ResetHome(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_SendControllerGPS(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		double _horizontalAccuracy,
		double _verticalAccuracy) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_SendControllerGPS(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_horizontalAccuracy,
			_verticalAccuracy);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_HomeType(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_HomeType(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_ReturnHomeDelay(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_ReturnHomeDelay(
			&cmd,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettings_ReturnHomeMinAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettings_ReturnHomeMinAltitude(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Antiflickering_ElectricFrequency(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _frequency) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Antiflickering_ElectricFrequency(
			&cmd,
			_frequency);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Antiflickering_SetMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Antiflickering_SetMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Sound_StartAlertSound(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Sound_StartAlertSound(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_Sound_StopAlertSound(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_Sound_StopAlertSound(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordState_PictureStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordState_PictureStateChanged(
			&cmd,
			_state,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordState_VideoStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordState_VideoStateChanged(
			&cmd,
			_state,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordState_PictureStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordState_PictureStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordState_VideoStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordState_VideoStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordState_VideoResolutionState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _streaming,
		int32_t _recording) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordState_VideoResolutionState(
			&cmd,
			_streaming,
			_recording);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordEvent_PictureEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordEvent_PictureEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaRecordEvent_VideoEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaRecordEvent_VideoEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_FlyingStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_FlyingStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_AlertStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_AlertStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_NavigateHomeStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _reason) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_NavigateHomeStateChanged(
			&cmd,
			_state,
			_reason);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_PositionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_PositionChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_SpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _speedX,
		float _speedY,
		float _speedZ) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_SpeedChanged(
			&cmd,
			_speedX,
			_speedY,
			_speedZ);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_AttitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _roll,
		float _pitch,
		float _yaw) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_AttitudeChanged(
			&cmd,
			_roll,
			_pitch,
			_yaw);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_AltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_AltitudeChanged(
			&cmd,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_GpsLocationChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int8_t _latitude_accuracy,
		int8_t _longitude_accuracy,
		int8_t _altitude_accuracy) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_GpsLocationChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_latitude_accuracy,
			_longitude_accuracy,
			_altitude_accuracy);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_LandingStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_LandingStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_AirSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _airSpeed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_AirSpeedChanged(
			&cmd,
			_airSpeed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_MoveToChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _orientation_mode,
		float _heading,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_MoveToChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_MotionState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_MotionState(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_PilotedPOI(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_PilotedPOI(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_PilotedPOIV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _mode,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_PilotedPOIV2(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_mode,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_ReturnHomeBatteryCapacity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity(
			&cmd,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_MoveByChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _dXAsked,
		float _dYAsked,
		float _dZAsked,
		float _dPsiAsked,
		float _dX,
		float _dY,
		float _dZ,
		float _dPsi,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_MoveByChanged(
			&cmd,
			_dXAsked,
			_dYAsked,
			_dZAsked,
			_dPsiAsked,
			_dX,
			_dY,
			_dZ,
			_dPsi,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_HoveringWarning(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _no_gps_too_dark,
		uint8_t _no_gps_too_high) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_HoveringWarning(
			&cmd,
			_no_gps_too_dark,
			_no_gps_too_high);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_ForcedLandingAutoTrigger(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _reason,
		uint32_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_ForcedLandingAutoTrigger(
			&cmd,
			_reason,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_WindStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_WindStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_VibrationLevelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_VibrationLevelChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_AltitudeAboveGroundChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_AltitudeAboveGroundChanged(
			&cmd,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingState_HeadingLockedStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingState_HeadingLockedStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingEvent_MoveByEnd(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _dX,
		float _dY,
		float _dZ,
		float _dPsi,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingEvent_MoveByEnd(
			&cmd,
			_dX,
			_dY,
			_dZ,
			_dPsi,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkState_WifiScanListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid,
		int16_t _rssi,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkState_WifiScanListChanged(
			&cmd,
			_ssid,
			_rssi,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkState_AllWifiScanChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkState_AllWifiScanChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkState_WifiAuthChannelListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _in_or_out) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkState_WifiAuthChannelListChanged(
			&cmd,
			_band,
			_channel,
			_in_or_out);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkState_AllWifiAuthChannelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkState_AllWifiAuthChannelChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_MaxAltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_MaxTiltChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_MaxTiltChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_AbsolutControlChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _on) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_AbsolutControlChanged(
			&cmd,
			_on);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_MaxDistanceChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_MaxDistanceChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _shouldNotFlyOver) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged(
			&cmd,
			_shouldNotFlyOver);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_BankedTurnChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_BankedTurnChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_MinAltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_MinAltitudeChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_CirclingDirectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_CirclingRadiusChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _current,
		uint16_t _min,
		uint16_t _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _current,
		uint16_t _min,
		uint16_t _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_PitchModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_PitchModeChanged(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PilotingSettingsState_MotionDetection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PilotingSettingsState_MotionDetection(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettingsState_HullProtectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _present) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettingsState_HullProtectionChanged(
			&cmd,
			_present);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettingsState_OutdoorChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettingsState_OutdoorChanged(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkSettingsState_WifiSelectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkSettingsState_WifiSelectionChanged(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkSettingsState_WifiSecurityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkSettingsState_WifiSecurityChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_NetworkSettingsState_WifiSecurity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_key,
		int32_t _keyType) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_NetworkSettingsState_WifiSecurity(
			&cmd,
			_type,
			_key,
			_keyType);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_ProductMotorVersionListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _motor_number,
		const char *_type,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_ProductMotorVersionListChanged(
			&cmd,
			_motor_number,
			_type,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_ProductGPSVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_ProductGPSVersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_MotorErrorStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _motorIds,
		int32_t _motorError) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_MotorErrorStateChanged(
			&cmd,
			_motorIds,
			_motorError);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_MotorSoftwareVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_version) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_MotorSoftwareVersionChanged(
			&cmd,
			_version);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_MotorFlightsStatusChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _nbFlights,
		uint16_t _lastFlightDuration,
		uint32_t _totalFlightDuration) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_MotorFlightsStatusChanged(
			&cmd,
			_nbFlights,
			_lastFlightDuration,
			_totalFlightDuration);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_MotorErrorLastErrorChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _motorError) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_MotorErrorLastErrorChanged(
			&cmd,
			_motorError);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_P7ID(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serialID) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_P7ID(
			&cmd,
			_serialID);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SettingsState_CPUID(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SettingsState_CPUID(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_PictureFormatChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_PictureFormatChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_ExpositionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_ExpositionChanged(
			&cmd,
			_value,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_SaturationChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_SaturationChanged(
			&cmd,
			_value,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_TimelapseChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled,
		float _interval,
		float _minInterval,
		float _maxInterval) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_TimelapseChanged(
			&cmd,
			_enabled,
			_interval,
			_minInterval,
			_maxInterval);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_VideoAutorecordChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_VideoAutorecordChanged(
			&cmd,
			_enabled,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_VideoRecordingModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_VideoFramerateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _framerate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_VideoFramerateChanged(
			&cmd,
			_framerate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PictureSettingsState_VideoResolutionsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PictureSettingsState_VideoResolutionsChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaStreamingState_VideoEnableChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaStreamingState_VideoEnableChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_MediaStreamingState_VideoStreamModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_MediaStreamingState_VideoStreamModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_HomeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_HomeChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_ResetHomeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_ResetHomeChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_GPSFixStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _fixed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_GPSFixStateChanged(
			&cmd,
			_fixed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_GPSUpdateStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_HomeTypeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_HomeTypeChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged(
			&cmd,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_GeofenceCenterChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_GeofenceCenterChanged(
			&cmd,
			_latitude,
			_longitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _value,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged(
			&cmd,
			_value,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_CameraState_Orientation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _tilt,
		int8_t _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_CameraState_Orientation(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_CameraState_DefaultCameraOrientation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _tilt,
		int8_t _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_CameraState_DefaultCameraOrientation(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_CameraState_OrientationV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _tilt,
		float _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_CameraState_OrientationV2(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_CameraState_DefaultCameraOrientationV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _tilt,
		float _pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_CameraState_DefaultCameraOrientationV2(
			&cmd,
			_tilt,
			_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_CameraState_VelocityRange(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _max_tilt,
		float _max_pan) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_CameraState_VelocityRange(
			&cmd,
			_max_tilt,
			_max_pan);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_AntiflickeringState_ElectricFrequencyChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _frequency) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged(
			&cmd,
			_frequency);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_AntiflickeringState_ModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_AntiflickeringState_ModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSState_NumberOfSatelliteChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _numberOfSatellite) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSState_NumberOfSatelliteChanged(
			&cmd,
			_numberOfSatellite);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSState_HomeTypeAvailabilityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		uint8_t _available) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSState_HomeTypeAvailabilityChanged(
			&cmd,
			_type,
			_available);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_GPSState_HomeTypeChosenChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_GPSState_HomeTypeChosenChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_PROState_Features(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint64_t _features) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_PROState_Features(
			&cmd,
			_features);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_AccessoryState_ConnectedAccessories(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _accessory_type,
		const char *_uid,
		const char *_swVersion,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_AccessoryState_ConnectedAccessories(
			&cmd,
			_id,
			_accessory_type,
			_uid,
			_swVersion,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_AccessoryState_Battery(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		uint8_t _batteryLevel,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_AccessoryState_Battery(
			&cmd,
			_id,
			_batteryLevel,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Ardrone3_SoundState_AlertSound(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Ardrone3_SoundState_AlertSound(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_FlatTrim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_FlatTrim(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_TakeOff(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_TakeOff(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_PCMD(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _flag,
		int8_t _roll,
		int8_t _pitch,
		int8_t _yaw,
		int8_t _gaz,
		uint32_t _timestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_PCMD(
			&cmd,
			_flag,
			_roll,
			_pitch,
			_yaw,
			_gaz,
			_timestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_Landing(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_Landing(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_Emergency(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_Emergency(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_AutoTakeOffMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_AutoTakeOffMode(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_FlyingMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_FlyingMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_PlaneGearBox(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_PlaneGearBox(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Piloting_TogglePilotingMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Piloting_TogglePilotingMode(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Animations_Flip(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _direction) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Animations_Flip(
			&cmd,
			_direction);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Animations_Cap(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int16_t _offset) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Animations_Cap(
			&cmd,
			_offset);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MediaRecord_Picture(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MediaRecord_Picture(
			&cmd,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MediaRecord_PictureV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MediaRecord_PictureV2(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettings_MaxAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettings_MaxAltitude(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettings_MaxTilt(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettings_MaxTilt(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettings_BankedTurn(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettings_BankedTurn(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettings_MaxThrottle(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettings_MaxThrottle(
			&cmd,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettings_PreferredPilotingMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettings_PreferredPilotingMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettings_MaxVerticalSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettings_MaxVerticalSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettings_MaxRotationSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettings_MaxRotationSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettings_Wheels(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _present) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettings_Wheels(
			&cmd,
			_present);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettings_MaxHorizontalSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettings_MaxHorizontalSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed(
			&cmd,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Settings_CutOutMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Settings_CutOutMode(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_GPS_ControllerLatitudeForRun(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_GPS_ControllerLatitudeForRun(
			&cmd,
			_latitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_GPS_ControllerLongitudeForRun(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _longitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_GPS_ControllerLongitudeForRun(
			&cmd,
			_longitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Configuration_ControllerType(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Configuration_ControllerType(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Configuration_ControllerName(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Configuration_ControllerName(
			&cmd,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessory_LightControl(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _mode,
		uint8_t _intensity) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessory_LightControl(
			&cmd,
			_id,
			_mode,
			_intensity);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessory_ClawControl(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _action) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessory_ClawControl(
			&cmd,
			_id,
			_action);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessory_GunControl(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _action) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessory_GunControl(
			&cmd,
			_id,
			_action);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteController_SetPairedRemote(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _msb_mac,
		uint16_t _mid_mac,
		uint16_t _lsb_mac) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteController_SetPairedRemote(
			&cmd,
			_msb_mac,
			_mid_mac,
			_lsb_mac);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteController_RawMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteController_RawMode(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettings_Autorecord(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettings_Autorecord(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettings_ElectricFrequency(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _frequency) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettings_ElectricFrequency(
			&cmd,
			_frequency);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettings_VideoResolution(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettings_VideoResolution(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Minicam_Picture(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Minicam_Picture(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Minicam_Video(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Minicam_Video(
			&cmd,
			_record);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_Minicam_MassStorageFormat(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_Minicam_MassStorageFormat(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_FlatTrimChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_FlatTrimChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_FlyingStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_FlyingStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_AlertStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_AlertStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_AutoTakeOffModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_AutoTakeOffModeChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_FlyingModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_FlyingModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_PlaneGearBoxChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_PlaneGearBoxChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingState_PilotingModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingState_PilotingModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MediaRecordState_PictureStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MediaRecordState_PictureStateChanged(
			&cmd,
			_state,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MediaRecordState_PictureStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MediaRecordState_PictureStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MediaRecordEvent_PictureEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MediaRecordEvent_PictureEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettingsState_MaxAltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettingsState_MaxAltitudeChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettingsState_MaxTiltChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettingsState_MaxTiltChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettingsState_BankedTurnChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettingsState_BankedTurnChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettingsState_MaxThrottleChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettingsState_MaxThrottleChanged(
			&cmd,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettingsState_WheelsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _present) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettingsState_WheelsChanged(
			&cmd,
			_present);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SettingsState_ProductMotorsVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _motor,
		const char *_type,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SettingsState_ProductMotorsVersionChanged(
			&cmd,
			_motor,
			_type,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SettingsState_ProductInertialVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SettingsState_ProductInertialVersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_SettingsState_CutOutModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_SettingsState_CutOutModeChanged(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_FloodControlState_FloodControlChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_FloodControlState_FloodControlChanged(
			&cmd,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessoryState_LightState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _state,
		uint8_t _intensity,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessoryState_LightState(
			&cmd,
			_id,
			_state,
			_intensity,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessoryState_ClawState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _state,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessoryState_ClawState(
			&cmd,
			_id,
			_state,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_UsbAccessoryState_GunState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _state,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_UsbAccessoryState_GunState(
			&cmd,
			_id,
			_state,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_NavigationDataState_DronePosition(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _posx,
		float _posy,
		int16_t _posz,
		int16_t _psi,
		int16_t _ts) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_NavigationDataState_DronePosition(
			&cmd,
			_posx,
			_posy,
			_posz,
			_psi,
			_ts);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_NavigationDataState_DroneSpeed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _speed_x,
		float _speed_y,
		float _speed_z,
		uint16_t _ts) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_NavigationDataState_DroneSpeed(
			&cmd,
			_speed_x,
			_speed_y,
			_speed_z,
			_ts);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_NavigationDataState_DroneAltitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _altitude,
		uint16_t _ts) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_NavigationDataState_DroneAltitude(
			&cmd,
			_altitude,
			_ts);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_NavigationDataState_DroneQuaternion(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _q_w,
		float _q_x,
		float _q_y,
		float _q_z,
		uint16_t _ts) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_NavigationDataState_DroneQuaternion(
			&cmd,
			_q_w,
			_q_x,
			_q_y,
			_q_z,
			_ts);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_PowerModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _power_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_PowerModeChanged(
			&cmd,
			_power_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_ProductSerialChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial_number) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_ProductSerialChanged(
			&cmd,
			_serial_number);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_StateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_StateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_VersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_VersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_PictureChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _result) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_PictureChanged(
			&cmd,
			_state,
			_result);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_VideoStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_VideoStateChanged(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_MinicamState_MassStorageFormatChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_MinicamState_MassStorageFormatChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettingsState_AutorecordChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettingsState_AutorecordChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettingsState_ElectricFrequencyChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _frequency) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettingsState_ElectricFrequencyChanged(
			&cmd,
			_frequency);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_VideoSettingsState_VideoResolutionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_VideoSettingsState_VideoResolutionChanged(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_ConnectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_ConnectionChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_RecordButtonPressed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_RecordButtonPressed(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_TakePictureButtonPressed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_TakePictureButtonPressed(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_RawMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_RawMode(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_RawCommands(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _joy0x,
		int8_t _joy0y,
		int8_t _joy1x,
		int8_t _joy1y,
		uint16_t _buttons) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_RawCommands(
			&cmd,
			_joy0x,
			_joy0y,
			_joy1x,
			_joy1y,
			_buttons);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Minidrone_RemoteControllerState_BatteryLevel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _level) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Minidrone_RemoteControllerState_BatteryLevel(
			&cmd,
			_level);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Piloting_PCMD(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _flag,
		int8_t _speed,
		int8_t _turn) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Piloting_PCMD(
			&cmd,
			_flag,
			_speed,
			_turn);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Piloting_Posture(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Piloting_Posture(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Piloting_AddCapOffset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _offset) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Piloting_AddCapOffset(
			&cmd,
			_offset);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Animations_JumpStop(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Animations_JumpStop(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Animations_JumpCancel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Animations_JumpCancel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Animations_JumpLoad(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Animations_JumpLoad(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Animations_Jump(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Animations_Jump(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Animations_SimpleAnimation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Animations_SimpleAnimation(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecord_Picture(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecord_Picture(
			&cmd,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecord_Video(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecord_Video(
			&cmd,
			_record,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecord_PictureV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecord_PictureV2(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecord_VideoV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecord_VideoV2(
			&cmd,
			_record);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkSettings_WifiSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkSettings_WifiSelection(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Network_WifiScan(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Network_WifiScan(
			&cmd,
			_band);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_Network_WifiAuthChannel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_Network_WifiAuthChannel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AudioSettings_MasterVolume(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _volume) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AudioSettings_MasterVolume(
			&cmd,
			_volume);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AudioSettings_Theme(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _theme) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AudioSettings_Theme(
			&cmd,
			_theme);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlan_AllScriptsMetadata(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlan_AllScriptsMetadata(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlan_ScriptUploaded(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_uuid,
		const char *_md5Hash) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlan_ScriptUploaded(
			&cmd,
			_uuid,
			_md5Hash);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlan_ScriptDelete(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_uuid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlan_ScriptDelete(
			&cmd,
			_uuid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlan_PlayScript(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_uuid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlan_PlayScript(
			&cmd,
			_uuid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_SpeedSettings_Outdoor(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_SpeedSettings_Outdoor(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaStreaming_VideoEnable(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaStreaming_VideoEnable(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_VideoSettings_Autorecord(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_VideoSettings_Autorecord(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_PilotingState_PostureChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_PilotingState_PostureChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_PilotingState_AlertStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_PilotingState_AlertStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_PilotingState_SpeedChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _speed,
		int16_t _realSpeed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_PilotingState_SpeedChanged(
			&cmd,
			_speed,
			_realSpeed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AnimationsState_JumpLoadChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AnimationsState_JumpLoadChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AnimationsState_JumpTypeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AnimationsState_JumpTypeChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AnimationsState_JumpMotorProblemChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AnimationsState_JumpMotorProblemChanged(
			&cmd,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_SettingsState_ProductGPSVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_SettingsState_ProductGPSVersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordState_PictureStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordState_PictureStateChanged(
			&cmd,
			_state,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordState_VideoStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		uint8_t _mass_storage_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordState_VideoStateChanged(
			&cmd,
			_state,
			_mass_storage_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordState_PictureStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordState_PictureStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordState_VideoStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordState_VideoStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordEvent_PictureEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordEvent_PictureEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaRecordEvent_VideoEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaRecordEvent_VideoEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkSettingsState_WifiSelectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkSettingsState_WifiSelectionChanged(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkState_WifiScanListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid,
		int16_t _rssi,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkState_WifiScanListChanged(
			&cmd,
			_ssid,
			_rssi,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkState_AllWifiScanChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkState_AllWifiScanChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkState_WifiAuthChannelListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _in_or_out) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkState_WifiAuthChannelListChanged(
			&cmd,
			_band,
			_channel,
			_in_or_out);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkState_AllWifiAuthChannelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkState_AllWifiAuthChannelChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_NetworkState_LinkQualityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _quality) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_NetworkState_LinkQualityChanged(
			&cmd,
			_quality);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AudioSettingsState_MasterVolumeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _volume) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AudioSettingsState_MasterVolumeChanged(
			&cmd,
			_volume);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_AudioSettingsState_ThemeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _theme) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_AudioSettingsState_ThemeChanged(
			&cmd,
			_theme);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlanState_ScriptMetadataListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_uuid,
		uint8_t _version,
		const char *_product,
		const char *_name,
		uint64_t _lastModified) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlanState_ScriptMetadataListChanged(
			&cmd,
			_uuid,
			_version,
			_product,
			_name,
			_lastModified);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlanState_AllScriptsMetadataChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlanState_AllScriptsMetadataChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlanState_ScriptUploadChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _resultCode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlanState_ScriptUploadChanged(
			&cmd,
			_resultCode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlanState_ScriptDeleteChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _resultCode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlanState_ScriptDeleteChanged(
			&cmd,
			_resultCode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_RoadPlanState_PlayScriptChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _resultCode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_RoadPlanState_PlayScriptChanged(
			&cmd,
			_resultCode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_SpeedSettingsState_OutdoorChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _outdoor) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_SpeedSettingsState_OutdoorChanged(
			&cmd,
			_outdoor);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_MediaStreamingState_VideoEnableChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_MediaStreamingState_VideoEnableChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Jpsumo_VideoSettingsState_AutorecordChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Jpsumo_VideoSettingsState_AutorecordChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Wifi_RequestWifiList(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Wifi_RequestWifiList(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Wifi_RequestCurrentWifi(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Wifi_RequestCurrentWifi(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Wifi_ConnectToWifi(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_bssid,
		const char *_ssid,
		const char *_passphrase) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Wifi_ConnectToWifi(
			&cmd,
			_bssid,
			_ssid,
			_passphrase);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Wifi_ForgetWifi(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Wifi_ForgetWifi(
			&cmd,
			_ssid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Wifi_WifiAuthChannel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Wifi_WifiAuthChannel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Device_RequestDeviceList(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Device_RequestDeviceList(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Device_RequestCurrentDevice(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Device_RequestCurrentDevice(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Device_ConnectToDevice(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_deviceName) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Device_ConnectToDevice(
			&cmd,
			_deviceName);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Settings_AllSettings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Settings_AllSettings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Settings_Reset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Settings_Reset(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Common_AllStates(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Common_AllStates(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Common_CurrentDateTime(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_datetime) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Common_CurrentDateTime(
			&cmd,
			_datetime);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettings_AccessPointSSID(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettings_AccessPointSSID(
			&cmd,
			_ssid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettings_AccessPointChannel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettings_AccessPointChannel(
			&cmd,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettings_WifiSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettings_WifiSelection(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettings_WifiSecurity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _security_type,
		const char *_key) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettings_WifiSecurity(
			&cmd,
			_security_type,
			_key);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Camera_ResetOrientation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Camera_ResetOrientation(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_GamepadInfos_GetGamepadControls(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_GamepadInfos_GetGamepadControls(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappings_GetCurrentButtonMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappings_GetCurrentButtonMappings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappings_GetAvailableButtonMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappings_GetAvailableButtonMappings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappings_SetButtonMapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _key_id,
		const char *_mapping_uid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappings_SetButtonMapping(
			&cmd,
			_key_id,
			_mapping_uid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappings_DefaultButtonMapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappings_DefaultButtonMapping(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappings_GetCurrentAxisMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappings_GetCurrentAxisMappings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappings_GetAvailableAxisMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappings_GetAvailableAxisMappings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappings_SetAxisMapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _axis_id,
		const char *_mapping_uid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappings_SetAxisMapping(
			&cmd,
			_axis_id,
			_mapping_uid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappings_DefaultAxisMapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappings_DefaultAxisMapping(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFilters_GetCurrentAxisFilters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFilters_GetCurrentAxisFilters(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFilters_GetPresetAxisFilters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFilters_GetPresetAxisFilters(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFilters_SetAxisFilter(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _axis_id,
		const char *_filter_uid_or_builder) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFilters_SetAxisFilter(
			&cmd,
			_axis_id,
			_filter_uid_or_builder);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFilters_DefaultAxisFilters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFilters_DefaultAxisFilters(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CoPiloting_SetPilotingSource(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _source) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CoPiloting_SetPilotingSource(
			&cmd,
			_source);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Calibration_StartCalibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Calibration_StartCalibration(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Calibration_AbortCalibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Calibration_AbortCalibration(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_Factory_Reset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_Factory_Reset(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiList(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_bssid,
		const char *_ssid,
		uint8_t _secured,
		uint8_t _saved,
		int32_t _rssi,
		int32_t _frequency) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiList(
			&cmd,
			_bssid,
			_ssid,
			_secured,
			_saved,
			_rssi,
			_frequency);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_ConnexionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_ConnexionChanged(
			&cmd,
			_ssid,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiAuthChannelListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _in_or_out) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiAuthChannelListChanged(
			&cmd,
			_band,
			_channel,
			_in_or_out);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_AllWifiAuthChannelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_AllWifiAuthChannelChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiSignalChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _level) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiSignalChanged(
			&cmd,
			_level);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiAuthChannelListChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _in_or_out,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiAuthChannelListChangedV2(
			&cmd,
			_band,
			_channel,
			_in_or_out,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiCountryChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_code) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiCountryChanged(
			&cmd,
			_code);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_WifiState_WifiEnvironmentChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _environment) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_WifiState_WifiEnvironmentChanged(
			&cmd,
			_environment);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_DeviceState_DeviceList(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_DeviceState_DeviceList(
			&cmd,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_DeviceState_ConnexionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _status,
		const char *_deviceName,
		uint16_t _deviceProductID) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_DeviceState_ConnexionChanged(
			&cmd,
			_status,
			_deviceName,
			_deviceProductID);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_AllSettingsChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_AllSettingsChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_ResetChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_ResetChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_ProductSerialChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serialNumber) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_ProductSerialChanged(
			&cmd,
			_serialNumber);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_ProductVariantChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _variant) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_ProductVariantChanged(
			&cmd,
			_variant);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_ProductVersionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_software,
		const char *_hardware) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_ProductVersionChanged(
			&cmd,
			_software,
			_hardware);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SettingsState_CPUID(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SettingsState_CPUID(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CommonState_AllStatesChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CommonState_AllStatesChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CommonState_CurrentDateTimeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_datetime) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CommonState_CurrentDateTimeChanged(
			&cmd,
			_datetime);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SkyControllerState_BatteryChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _percent) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SkyControllerState_BatteryChanged(
			&cmd,
			_percent);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SkyControllerState_GpsFixChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _fixed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SkyControllerState_GpsFixChanged(
			&cmd,
			_fixed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SkyControllerState_GpsPositionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		float _heading) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SkyControllerState_GpsPositionChanged(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_heading);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SkyControllerState_BatteryState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SkyControllerState_BatteryState(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_SkyControllerState_AttitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _q0,
		float _q1,
		float _q2,
		float _q3) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_SkyControllerState_AttitudeChanged(
			&cmd,
			_q0,
			_q1,
			_q2,
			_q3);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged(
			&cmd,
			_ssid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged(
			&cmd,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettingsState_WifiSelectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AccessPointSettingsState_WifiSecurityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _security_type,
		const char *_key) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged(
			&cmd,
			_security_type,
			_key);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_GamepadInfosState_GamepadControl(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _id,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_GamepadInfosState_GamepadControl(
			&cmd,
			_type,
			_id,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_GamepadInfosState_AllGamepadControlsSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_GamepadInfosState_AllGamepadControlsSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappingsState_CurrentButtonMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _key_id,
		const char *_mapping_uid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappingsState_CurrentButtonMappings(
			&cmd,
			_key_id,
			_mapping_uid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappingsState_AvailableButtonMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_mapping_uid,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappingsState_AvailableButtonMappings(
			&cmd,
			_mapping_uid,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappingsState_CurrentAxisMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _axis_id,
		const char *_mapping_uid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappingsState_CurrentAxisMappings(
			&cmd,
			_axis_id,
			_mapping_uid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappingsState_AvailableAxisMappings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_mapping_uid,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappingsState_AvailableAxisMappings(
			&cmd,
			_mapping_uid,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFiltersState_CurrentAxisFilters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _axis_id,
		const char *_filter_uid_or_builder) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFiltersState_CurrentAxisFilters(
			&cmd,
			_axis_id,
			_filter_uid_or_builder);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFiltersState_AllCurrentFiltersSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFiltersState_AllCurrentFiltersSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFiltersState_PresetAxisFilters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_filter_uid,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFiltersState_PresetAxisFilters(
			&cmd,
			_filter_uid,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_AxisFiltersState_AllPresetFiltersSent(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_AxisFiltersState_AllPresetFiltersSent(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CoPilotingState_PilotingSource(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _source) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CoPilotingState_PilotingSource(
			&cmd,
			_source);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CalibrationState_MagnetoCalibrationState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _status,
		uint8_t _X_Quality,
		uint8_t _Y_Quality,
		uint8_t _Z_Quality) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CalibrationState_MagnetoCalibrationState(
			&cmd,
			_status,
			_X_Quality,
			_Y_Quality,
			_Z_Quality);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CalibrationState_MagnetoCalibrationStateV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_ButtonEvents_Settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_ButtonEvents_Settings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Skyctrl_CommonEventState_Shutdown(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _reason) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Skyctrl_CommonEventState_Shutdown(
			&cmd,
			_reason);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Piloting_PCMD(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _flag,
		uint8_t _throttle,
		int8_t _roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Piloting_PCMD(
			&cmd,
			_flag,
			_throttle,
			_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Piloting_UserTakeOff(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Piloting_UserTakeOff(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Piloting_MotorMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Piloting_MotorMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingSettings_Set(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _setting,
		float _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingSettings_Set(
			&cmd,
			_setting,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecord_PictureV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecord_PictureV2(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecord_VideoV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _record) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecord_VideoV2(
			&cmd,
			_record);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkSettings_WifiSelection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkSettings_WifiSelection(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Network_WifiScan(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Network_WifiScan(
			&cmd,
			_band);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Network_WifiAuthChannel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Network_WifiAuthChannel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaStreaming_VideoEnable(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaStreaming_VideoEnable(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_VideoSettings_Autorecord(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_VideoSettings_Autorecord(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_VideoSettings_VideoMode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_VideoSettings_VideoMode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_Sounds_Buzz(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_Sounds_Buzz(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingState_AlertStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingState_AlertStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingState_FlyingStateChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingState_FlyingStateChanged(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingState_MotorModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingState_MotorModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingState_AttitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _roll,
		float _pitch,
		float _yaw) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingState_AttitudeChanged(
			&cmd,
			_roll,
			_pitch,
			_yaw);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingState_AltitudeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingState_AltitudeChanged(
			&cmd,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_PilotingSettingsState_SettingChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _setting,
		float _current,
		float _min,
		float _max,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_PilotingSettingsState_SettingChanged(
			&cmd,
			_setting,
			_current,
			_min,
			_max,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecordState_PictureStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecordState_PictureStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecordState_VideoStateChangedV2(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecordState_VideoStateChangedV2(
			&cmd,
			_state,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecordEvent_PictureEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecordEvent_PictureEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaRecordEvent_VideoEventChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _event,
		int32_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaRecordEvent_VideoEventChanged(
			&cmd,
			_event,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkSettingsState_WifiSelectionChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkSettingsState_WifiSelectionChanged(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkState_WifiScanListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid,
		int16_t _rssi,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkState_WifiScanListChanged(
			&cmd,
			_ssid,
			_rssi,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkState_AllWifiScanChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkState_AllWifiScanChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkState_WifiAuthChannelListChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _in_or_out) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkState_WifiAuthChannelListChanged(
			&cmd,
			_band,
			_channel,
			_in_or_out);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkState_AllWifiAuthChannelChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkState_AllWifiAuthChannelChanged(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_NetworkState_LinkQualityChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _quality) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_NetworkState_LinkQualityChanged(
			&cmd,
			_quality);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_MediaStreamingState_VideoEnableChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_MediaStreamingState_VideoEnableChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_VideoSettingsState_AutorecordChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_VideoSettingsState_AutorecordChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_VideoSettingsState_VideoModeChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_VideoSettingsState_VideoModeChanged(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Powerup_SoundsState_BuzzChanged(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Powerup_SoundsState_BuzzChanged(
			&cmd,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Generic_Default(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Generic_Default(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Stop(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Stop(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Configure_geographic(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Configure_geographic(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Configure_relative(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Configure_relative(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Configure_leash(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Configure_leash(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Stop_animation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Stop_animation(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start_helicoid_anim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _revolution_number,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start_helicoid_anim(
			&cmd,
			_use_default,
			_speed,
			_revolution_number,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start_swing_anim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start_swing_anim(
			&cmd,
			_use_default,
			_speed,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start_boomerang_anim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start_boomerang_anim(
			&cmd,
			_use_default,
			_speed,
			_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start_candle_anim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start_candle_anim(
			&cmd,
			_use_default,
			_speed,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Start_dolly_slide_anim(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _angle,
		float _horizontal_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Start_dolly_slide_anim(
			&cmd,
			_use_default,
			_speed,
			_angle,
			_horizontal_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_framing_position(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _horizontal,
		int8_t _vertical) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_framing_position(
			&cmd,
			_horizontal,
			_vertical);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_image_detection(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _target_azimuth,
		float _target_elevation,
		float _change_of_scale,
		uint8_t _confidence_index,
		uint8_t _is_new_selection,
		uint64_t _timestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_image_detection(
			&cmd,
			_target_azimuth,
			_target_elevation,
			_change_of_scale,
			_confidence_index,
			_is_new_selection,
			_timestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Set_target_is_controller(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _target_is_controller) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Set_target_is_controller(
			&cmd,
			_target_is_controller);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		int32_t _behavior,
		int32_t _animation,
		uint16_t _animation_available) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_State(
			&cmd,
			_mode,
			_behavior,
			_animation,
			_animation_available);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Mode_info(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		uint16_t _missing_requirements,
		uint16_t _improvements) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Mode_info(
			&cmd,
			_mode,
			_missing_requirements,
			_improvements);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Geographic_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Geographic_config(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Relative_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Relative_config(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Leash_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _distance,
		float _elevation,
		float _azimuth) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Leash_config(
			&cmd,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_trajectory(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude,
		float _north_speed,
		float _east_speed,
		float _down_speed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_trajectory(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_north_speed,
			_east_speed,
			_down_speed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Helicoid_anim_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _revolution_nb,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Helicoid_anim_config(
			&cmd,
			_use_default,
			_speed,
			_revolution_nb,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Swing_anim_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Swing_anim_config(
			&cmd,
			_use_default,
			_speed,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Boomerang_anim_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Boomerang_anim_config(
			&cmd,
			_use_default,
			_speed,
			_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Candle_anim_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _vertical_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Candle_anim_config(
			&cmd,
			_use_default,
			_speed,
			_vertical_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Dolly_slide_anim_config(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _use_default,
		float _speed,
		float _angle,
		float _horizontal_distance) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Dolly_slide_anim_config(
			&cmd,
			_use_default,
			_speed,
			_angle,
			_horizontal_distance);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_framing_position_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int8_t _horizontal,
		int8_t _vertical) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_framing_position_changed(
			&cmd,
			_horizontal,
			_vertical);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_image_detection_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_image_detection_state(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Follow_me_Target_is_controller(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Follow_me_Target_is_controller(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Scan(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _band) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Scan(
			&cmd,
			_band);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Update_authorized_channels(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Update_authorized_channels(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Set_ap_channel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Set_ap_channel(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Set_security(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_key,
		int32_t _key_type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Set_security(
			&cmd,
			_type,
			_key,
			_key_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Set_country(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _selection_mode,
		const char *_code) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Set_country(
			&cmd,
			_selection_mode,
			_code);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Set_environment(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _environment) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Set_environment(
			&cmd,
			_environment);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Scanned_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_ssid,
		int16_t _rssi,
		int32_t _band,
		uint8_t _channel,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Scanned_item(
			&cmd,
			_ssid,
			_rssi,
			_band,
			_channel,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Authorized_channel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _band,
		uint8_t _channel,
		uint8_t _environment,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Authorized_channel(
			&cmd,
			_band,
			_channel,
			_environment,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Ap_channel_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		int32_t _band,
		uint8_t _channel) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Ap_channel_changed(
			&cmd,
			_type,
			_band,
			_channel);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Security_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_key,
		int32_t _key_type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Security_changed(
			&cmd,
			_type,
			_key,
			_key_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Country_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _selection_mode,
		const char *_code) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Country_changed(
			&cmd,
			_selection_mode,
			_code);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Environment_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _environment) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Environment_changed(
			&cmd,
			_environment);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Rssi_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int16_t _rssi) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Rssi_changed(
			&cmd,
			_rssi);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Supported_countries(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_countries) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Supported_countries(
			&cmd,
			_countries);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Wifi_Supported_security_types(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _types) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Wifi_Supported_security_types(
			&cmd,
			_types);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Monitor_channels(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Monitor_channels(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Start_calibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _calibration_type,
		int32_t _channel_action,
		int32_t _channel_type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Start_calibration(
			&cmd,
			_calibration_type,
			_channel_action,
			_channel_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Invert_channel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _action,
		uint8_t _flag) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Invert_channel(
			&cmd,
			_action,
			_flag);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Abort_calibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Abort_calibration(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Reset_calibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Reset_calibration(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Enable_receiver(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _enable) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Enable_receiver(
			&cmd,
			_enable);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Receiver_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		const char *_protocol,
		uint8_t _enabled) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Receiver_state(
			&cmd,
			_state,
			_protocol,
			_enabled);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Channels_monitor_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Channels_monitor_state(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Channel_value(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		int32_t _action,
		int16_t _value,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Channel_value(
			&cmd,
			_id,
			_action,
			_value,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Calibration_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _calibration_type,
		int32_t _channel_action,
		uint32_t _required,
		uint32_t _calibrated,
		uint8_t _neutral_calibrated) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Calibration_state(
			&cmd,
			_calibration_type,
			_channel_action,
			_required,
			_calibrated,
			_neutral_calibrated);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rc_Channel_action_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _action,
		uint32_t _supported_type,
		int32_t _calibrated_type,
		uint8_t _inverted) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rc_Channel_action_item(
			&cmd,
			_action,
			_supported_type,
			_calibrated_type,
			_inverted);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Discover_drones(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Discover_drones(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Connect(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial,
		const char *_key) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Connect(
			&cmd,
			_serial,
			_key);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Forget(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Forget(
			&cmd,
			_serial);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Drone_list_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial,
		uint16_t _model,
		const char *_name,
		uint8_t _connection_order,
		uint8_t _active,
		uint8_t _visible,
		int32_t _security,
		uint8_t _has_saved_key,
		int8_t _rssi,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Drone_list_item(
			&cmd,
			_serial,
			_model,
			_name,
			_connection_order,
			_active,
			_visible,
			_security,
			_has_saved_key,
			_rssi,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Connection_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		const char *_serial,
		uint16_t _model,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Connection_state(
			&cmd,
			_state,
			_serial,
			_model,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Authentication_failed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial,
		uint16_t _model,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Authentication_failed(
			&cmd,
			_serial,
			_model,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Connection_refused(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial,
		uint16_t _model,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Connection_refused(
			&cmd,
			_serial,
			_model,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Drone_manager_Known_drone_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial,
		uint16_t _model,
		const char *_name,
		int32_t _security,
		uint8_t _has_saved_key,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Drone_manager_Known_drone_item(
			&cmd,
			_serial,
			_model,
			_name,
			_security,
			_has_saved_key,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Grab(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _buttons,
		uint32_t _axes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Grab(
			&cmd,
			_buttons,
			_axes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Map_button_action(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product,
		int32_t _action,
		uint32_t _buttons) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Map_button_action(
			&cmd,
			_product,
			_action,
			_buttons);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Map_axis_action(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product,
		int32_t _action,
		int32_t _axis,
		uint32_t _buttons) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Map_axis_action(
			&cmd,
			_product,
			_action,
			_axis,
			_buttons);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Reset_mapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Reset_mapping(
			&cmd,
			_product);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Set_expo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product,
		int32_t _axis,
		int32_t _expo) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Set_expo(
			&cmd,
			_product,
			_axis,
			_expo);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Set_inverted(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product,
		int32_t _axis,
		uint8_t _inverted) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Set_inverted(
			&cmd,
			_product,
			_axis,
			_inverted);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Enter_volatile_mapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Enter_volatile_mapping(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Exit_volatile_mapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Exit_volatile_mapping(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Grab_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _buttons,
		uint32_t _axes,
		uint32_t _buttons_state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Grab_state(
			&cmd,
			_buttons,
			_axes,
			_buttons_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Grab_button_event(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _button,
		int32_t _event) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Grab_button_event(
			&cmd,
			_button,
			_event);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Grab_axis_event(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _axis,
		int8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Grab_axis_event(
			&cmd,
			_axis,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Button_mapping_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _uid,
		uint16_t _product,
		int32_t _action,
		uint32_t _buttons,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Button_mapping_item(
			&cmd,
			_uid,
			_product,
			_action,
			_buttons,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Axis_mapping_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _uid,
		uint16_t _product,
		int32_t _action,
		int32_t _axis,
		uint32_t _buttons,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Axis_mapping_item(
			&cmd,
			_uid,
			_product,
			_action,
			_axis,
			_buttons,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Application_axis_event(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _action,
		int8_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Application_axis_event(
			&cmd,
			_action,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Application_button_event(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _action) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Application_button_event(
			&cmd,
			_action);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Expo_map_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _uid,
		uint16_t _product,
		int32_t _axis,
		int32_t _expo,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Expo_map_item(
			&cmd,
			_uid,
			_product,
			_axis,
			_expo,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Inverted_map_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _uid,
		uint16_t _product,
		int32_t _axis,
		uint8_t _inverted,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Inverted_map_item(
			&cmd,
			_uid,
			_product,
			_axis,
			_inverted,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Active_product(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _product) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Active_product(
			&cmd,
			_product);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_Volatile_mapping_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _active) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_Volatile_mapping_state(
			&cmd,
			_active);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Get_all_settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Get_all_settings(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Set_setting(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _id,
		const char *_value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Set_setting(
			&cmd,
			_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Tag(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Tag(
			&cmd,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Settings_info(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _list_flags,
		uint16_t _id,
		const char *_label,
		int32_t _type,
		int32_t _mode,
		const char *_range_min,
		const char *_range_max,
		const char *_range_step,
		const char *_value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Settings_info(
			&cmd,
			_list_flags,
			_id,
			_label,
			_type,
			_mode,
			_range_min,
			_range_max,
			_range_step,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Settings_list(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _id,
		const char *_value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Settings_list(
			&cmd,
			_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Debug_Tag_notify(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Debug_Tag_notify(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Controller_info_Gps(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude,
		float _horizontal_accuracy,
		float _vertical_accuracy,
		float _north_speed,
		float _east_speed,
		float _down_speed,
		double _timestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Controller_info_Gps(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_horizontal_accuracy,
			_vertical_accuracy,
			_north_speed,
			_east_speed,
			_down_speed,
			_timestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Controller_info_Barometer(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _pressure,
		double _timestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Controller_info_Barometer(
			&cmd,
			_pressure,
			_timestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Controller_info_Validity_from_drone(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _is_valid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Controller_info_Validity_from_drone(
			&cmd,
			_is_valid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_mini_Map_button_action(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _modes,
		int32_t _action,
		uint32_t _buttons) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_mini_Map_button_action(
			&cmd,
			_modes,
			_action,
			_buttons);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_mini_Map_axis_action(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _modes,
		int32_t _action,
		int8_t _axis,
		uint32_t _buttons) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_mini_Map_axis_action(
			&cmd,
			_modes,
			_action,
			_axis,
			_buttons);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_mini_Reset_mapping(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _modes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_mini_Reset_mapping(
			&cmd,
			_modes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_mini_Button_mapping_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _uid,
		uint8_t _modes,
		int32_t _action,
		uint32_t _buttons,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_mini_Button_mapping_item(
			&cmd,
			_uid,
			_modes,
			_action,
			_buttons,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mapper_mini_Axis_mapping_item(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _uid,
		uint8_t _modes,
		int32_t _action,
		int8_t _axis,
		uint32_t _buttons,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mapper_mini_Axis_mapping_item(
			&cmd,
			_uid,
			_modes,
			_action,
			_axis,
			_buttons,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Activate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Activate(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Deactivate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Deactivate(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Set_sensitivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _range) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Set_sensitivity(
			&cmd,
			_cam_id,
			_range);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Flat_field_calibrate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Flat_field_calibrate(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Set_flat_field_calibration_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Set_flat_field_calibration_mode(
			&cmd,
			_cam_id,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Camera_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Camera_state(
			&cmd,
			_cam_id,
			_state,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Sensitivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _current_range,
		uint8_t _available_ranges,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Sensitivity(
			&cmd,
			_cam_id,
			_current_range,
			_available_ranges,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Calibration_infos(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _roll,
		float _pitch,
		float _yaw,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Calibration_infos(
			&cmd,
			_cam_id,
			_roll,
			_pitch,
			_yaw,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Charging_status(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Charging_status(
			&cmd,
			_cam_id,
			_state,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Flat_field_calibration_status(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Flat_field_calibration_status(
			&cmd,
			_cam_id,
			_state,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_cam_Flat_field_calibration_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_cam_Flat_field_calibration_mode(
			&cmd,
			_cam_id,
			_mode,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_exposure_settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _shutter_speed,
		int32_t _iso_sensitivity,
		int32_t _max_iso_sensitivity,
		int32_t _metering_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_exposure_settings(
			&cmd,
			_cam_id,
			_mode,
			_shutter_speed,
			_iso_sensitivity,
			_max_iso_sensitivity,
			_metering_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Lock_exposure(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Lock_exposure(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Lock_exposure_on_roi(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _roi_center_x,
		float _roi_center_y) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Lock_exposure_on_roi(
			&cmd,
			_cam_id,
			_roi_center_x,
			_roi_center_y);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Unlock_exposure(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Unlock_exposure(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_white_balance(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _temperature) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_white_balance(
			&cmd,
			_cam_id,
			_mode,
			_temperature);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_white_balance_lock(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_white_balance_lock(
			&cmd,
			_cam_id,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_ev_compensation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_ev_compensation(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_antiflicker_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_antiflicker_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_style(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _style) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_style(
			&cmd,
			_cam_id,
			_style);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_style_params(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int8_t _saturation,
		int8_t _contrast,
		int8_t _sharpness) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_style_params(
			&cmd,
			_cam_id,
			_saturation,
			_contrast,
			_sharpness);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_zoom_target(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _control_mode,
		float _target) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_zoom_target(
			&cmd,
			_cam_id,
			_control_mode,
			_target);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Reset_zoom(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Reset_zoom(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_max_zoom_speed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_max_zoom_speed(
			&cmd,
			_cam_id,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_zoom_velocity_quality_degradation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint8_t _allow) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_zoom_velocity_quality_degradation(
			&cmd,
			_cam_id,
			_allow);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_hdr_setting(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_hdr_setting(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_camera_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_camera_mode(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_recording_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _resolution,
		int32_t _framerate,
		int32_t _hyperlapse) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_recording_mode(
			&cmd,
			_cam_id,
			_mode,
			_resolution,
			_framerate,
			_hyperlapse);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_photo_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _format,
		int32_t _file_format,
		int32_t _burst,
		int32_t _bracketing,
		float _capture_interval) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_photo_mode(
			&cmd,
			_cam_id,
			_mode,
			_format,
			_file_format,
			_burst,
			_bracketing,
			_capture_interval);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_streaming_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_streaming_mode(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Take_photo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Take_photo(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Stop_photo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Stop_photo(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Start_recording(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Start_recording(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Stop_recording(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Stop_recording(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_autorecord(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_autorecord(
			&cmd,
			_cam_id,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Set_alignment_offsets(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _yaw,
		float _pitch,
		float _roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Set_alignment_offsets(
			&cmd,
			_cam_id,
			_yaw,
			_pitch,
			_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Reset_alignment_offsets(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Reset_alignment_offsets(
			&cmd,
			_cam_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Camera_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _model,
		uint8_t _exposure_modes,
		int32_t _exposure_lock_supported,
		int32_t _exposure_roi_lock_supported,
		uint64_t _ev_compensations,
		uint32_t _white_balance_modes,
		uint64_t _custom_white_balance_temperatures,
		int32_t _white_balance_lock_supported,
		uint16_t _styles,
		uint8_t _camera_modes,
		uint16_t _hyperlapse_values,
		uint16_t _bracketing_presets,
		uint16_t _burst_values,
		uint8_t _streaming_modes,
		float _timelapse_interval_min,
		float _gpslapse_interval_min,
		uint16_t _auto_exposure_metering_modes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Camera_capabilities(
			&cmd,
			_cam_id,
			_model,
			_exposure_modes,
			_exposure_lock_supported,
			_exposure_roi_lock_supported,
			_ev_compensations,
			_white_balance_modes,
			_custom_white_balance_temperatures,
			_white_balance_lock_supported,
			_styles,
			_camera_modes,
			_hyperlapse_values,
			_bracketing_presets,
			_burst_values,
			_streaming_modes,
			_timelapse_interval_min,
			_gpslapse_interval_min,
			_auto_exposure_metering_modes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Recording_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _id,
		uint16_t _recording_modes,
		uint16_t _resolutions,
		uint32_t _framerates,
		int32_t _hdr,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Recording_capabilities(
			&cmd,
			_id,
			_recording_modes,
			_resolutions,
			_framerates,
			_hdr,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Photo_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _id,
		uint16_t _photo_modes,
		uint16_t _photo_formats,
		uint16_t _photo_file_formats,
		int32_t _hdr,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Photo_capabilities(
			&cmd,
			_id,
			_photo_modes,
			_photo_formats,
			_photo_file_formats,
			_hdr,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Antiflicker_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _supported_modes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Antiflicker_capabilities(
			&cmd,
			_supported_modes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Exposure_settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _manual_shutter_speed,
		uint64_t _manual_shutter_speed_capabilities,
		int32_t _manual_iso_sensitivity,
		uint64_t _manual_iso_sensitivity_capabilities,
		int32_t _max_iso_sensitivity,
		uint64_t _max_iso_sensitivities_capabilities,
		int32_t _metering_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Exposure_settings(
			&cmd,
			_cam_id,
			_mode,
			_manual_shutter_speed,
			_manual_shutter_speed_capabilities,
			_manual_iso_sensitivity,
			_manual_iso_sensitivity_capabilities,
			_max_iso_sensitivity,
			_max_iso_sensitivities_capabilities,
			_metering_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Exposure(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _shutter_speed,
		int32_t _iso_sensitivity,
		int32_t _lock,
		float _lock_roi_x,
		float _lock_roi_y,
		float _lock_roi_width,
		float _lock_roi_height) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Exposure(
			&cmd,
			_cam_id,
			_shutter_speed,
			_iso_sensitivity,
			_lock,
			_lock_roi_x,
			_lock_roi_y,
			_lock_roi_width,
			_lock_roi_height);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_White_balance(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _temperature,
		int32_t _lock) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_White_balance(
			&cmd,
			_cam_id,
			_mode,
			_temperature,
			_lock);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Ev_compensation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Ev_compensation(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Antiflicker_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Antiflicker_mode(
			&cmd,
			_mode,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Style(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _style,
		int8_t _saturation,
		int8_t _saturation_min,
		int8_t _saturation_max,
		int8_t _contrast,
		int8_t _contrast_min,
		int8_t _contrast_max,
		int8_t _sharpness,
		int8_t _sharpness_min,
		int8_t _sharpness_max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Style(
			&cmd,
			_cam_id,
			_style,
			_saturation,
			_saturation_min,
			_saturation_max,
			_contrast,
			_contrast_min,
			_contrast_max,
			_sharpness,
			_sharpness_min,
			_sharpness_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Zoom_level(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _level) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Zoom_level(
			&cmd,
			_cam_id,
			_level);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Zoom_info(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _available,
		float _high_quality_maximum_level,
		float _maximum_level) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Zoom_info(
			&cmd,
			_cam_id,
			_available,
			_high_quality_maximum_level,
			_maximum_level);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Max_zoom_speed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _min,
		float _max,
		float _current) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Max_zoom_speed(
			&cmd,
			_cam_id,
			_min,
			_max,
			_current);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Zoom_velocity_quality_degradation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint8_t _allowed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Zoom_velocity_quality_degradation(
			&cmd,
			_cam_id,
			_allowed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Hdr_setting(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Hdr_setting(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Hdr(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _available,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Hdr(
			&cmd,
			_cam_id,
			_available,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Camera_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Camera_mode(
			&cmd,
			_cam_id,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Recording_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _resolution,
		int32_t _framerate,
		int32_t _hyperlapse,
		uint32_t _bitrate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Recording_mode(
			&cmd,
			_cam_id,
			_mode,
			_resolution,
			_framerate,
			_hyperlapse,
			_bitrate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Photo_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _mode,
		int32_t _format,
		int32_t _file_format,
		int32_t _burst,
		int32_t _bracketing,
		float _capture_interval) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Photo_mode(
			&cmd,
			_cam_id,
			_mode,
			_format,
			_file_format,
			_burst,
			_bracketing,
			_capture_interval);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Streaming_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Streaming_mode(
			&cmd,
			_cam_id,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Photo_progress(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _result,
		uint8_t _photo_count,
		const char *_media_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Photo_progress(
			&cmd,
			_cam_id,
			_result,
			_photo_count,
			_media_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Photo_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _available,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Photo_state(
			&cmd,
			_cam_id,
			_available,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Recording_progress(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _result,
		const char *_media_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Recording_progress(
			&cmd,
			_cam_id,
			_result,
			_media_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Recording_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _available,
		int32_t _state,
		uint64_t _start_timestamp) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Recording_state(
			&cmd,
			_cam_id,
			_available,
			_state,
			_start_timestamp);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Autorecord(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Autorecord(
			&cmd,
			_cam_id,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Camera_states(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _active_cameras) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Camera_states(
			&cmd,
			_active_cameras);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Next_photo_delay(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		float _remaining) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Next_photo_delay(
			&cmd,
			_mode,
			_remaining);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Camera_Alignment_offsets(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		float _min_bound_yaw,
		float _max_bound_yaw,
		float _current_yaw,
		float _min_bound_pitch,
		float _max_bound_pitch,
		float _current_pitch,
		float _min_bound_roll,
		float _max_bound_roll,
		float _current_roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Camera_Alignment_offsets(
			&cmd,
			_cam_id,
			_min_bound_yaw,
			_max_bound_yaw,
			_current_yaw,
			_min_bound_pitch,
			_max_bound_pitch,
			_current_pitch,
			_min_bound_roll,
			_max_bound_roll,
			_current_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Cancel(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Cancel(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_flip(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_flip(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_horizontal_panorama(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _rotation_angle,
		float _rotation_speed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_horizontal_panorama(
			&cmd,
			_provided_params,
			_rotation_angle,
			_rotation_speed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_dronie(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_dronie(
			&cmd,
			_provided_params,
			_speed,
			_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_horizontal_reveal(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_horizontal_reveal(
			&cmd,
			_provided_params,
			_speed,
			_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_vertical_reveal(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_vertical_reveal(
			&cmd,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_spiral(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _radius_variation,
		float _vertical_distance,
		float _revolution_nb,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_spiral(
			&cmd,
			_provided_params,
			_speed,
			_radius_variation,
			_vertical_distance,
			_revolution_nb,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_parabola(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _vertical_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_parabola(
			&cmd,
			_provided_params,
			_speed,
			_vertical_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_candle(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _vertical_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_candle(
			&cmd,
			_provided_params,
			_speed,
			_vertical_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_dolly_slide(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _angle,
		float _horizontal_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_dolly_slide(
			&cmd,
			_provided_params,
			_speed,
			_angle,
			_horizontal_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_vertigo(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _duration,
		float _max_zoom_level,
		int32_t _finish_action,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_vertigo(
			&cmd,
			_provided_params,
			_duration,
			_max_zoom_level,
			_finish_action,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_twist_up(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_twist_up(
			&cmd,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_position_twist_up(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _provided_params,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_position_twist_up(
			&cmd,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_horizontal_180_photo_panorama(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_horizontal_180_photo_panorama(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_vertical_180_photo_panorama(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_vertical_180_photo_panorama(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Start_spherical_photo_panorama(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Start_spherical_photo_panorama(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Availability(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _values) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Availability(
			&cmd,
			_values);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		uint8_t _percent) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_State(
			&cmd,
			_type,
			_percent);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Flip_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Flip_state(
			&cmd,
			_state,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Horizontal_panorama_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _rotation_angle,
		float _rotation_speed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Horizontal_panorama_state(
			&cmd,
			_state,
			_rotation_angle,
			_rotation_speed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Dronie_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Dronie_state(
			&cmd,
			_state,
			_speed,
			_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Horizontal_reveal_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Horizontal_reveal_state(
			&cmd,
			_state,
			_speed,
			_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Vertical_reveal_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Vertical_reveal_state(
			&cmd,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Spiral_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _radius_variation,
		float _vertical_distance,
		float _revolution_nb,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Spiral_state(
			&cmd,
			_state,
			_speed,
			_radius_variation,
			_vertical_distance,
			_revolution_nb,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Parabola_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _vertical_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Parabola_state(
			&cmd,
			_state,
			_speed,
			_vertical_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Candle_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _vertical_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Candle_state(
			&cmd,
			_state,
			_speed,
			_vertical_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Dolly_slide_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _angle,
		float _horizontal_distance,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Dolly_slide_state(
			&cmd,
			_state,
			_speed,
			_angle,
			_horizontal_distance,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Vertigo_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _duration,
		float _max_zoom_level,
		int32_t _finish_action,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Vertigo_state(
			&cmd,
			_state,
			_duration,
			_max_zoom_level,
			_finish_action,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Twist_up_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Twist_up_state(
			&cmd,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Position_twist_up_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		float _speed,
		float _vertical_distance,
		float _rotation_angle,
		float _rotation_speed,
		int32_t _play_mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Position_twist_up_state(
			&cmd,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Horizontal_180_photo_panorama_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Horizontal_180_photo_panorama_state(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Vertical_180_photo_panorama_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Vertical_180_photo_panorama_state(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Animation_Spherical_photo_panorama_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Animation_Spherical_photo_panorama_state(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Format(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_label) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Format(
			&cmd,
			_label);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Format_with_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_label,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Format_with_type(
			&cmd,
			_label,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Format_with_encryption(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_label,
		const char *_password,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Format_with_encryption(
			&cmd,
			_label,
			_password,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Start_monitoring(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _period) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Start_monitoring(
			&cmd,
			_period);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Stop_monitoring(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Stop_monitoring(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Encryption_password(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_password,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Encryption_password(
			&cmd,
			_password,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _supported_features) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Capabilities(
			&cmd,
			_supported_features);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Supported_formatting_types(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _supported_types) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Supported_formatting_types(
			&cmd,
			_supported_types);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Info(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_name,
		uint64_t _capacity) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Info(
			&cmd,
			_name,
			_capacity);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Monitor(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint64_t _available_bytes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Monitor(
			&cmd,
			_available_bytes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _physical_state,
		int32_t _file_system_state,
		uint8_t _attribute,
		uint8_t _monitor_enabled,
		uint8_t _monitor_period) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_State(
			&cmd,
			_physical_state,
			_file_system_state,
			_attribute,
			_monitor_enabled,
			_monitor_period);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Sdcard_uuid(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_uuid) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Sdcard_uuid(
			&cmd,
			_uuid);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Format_result(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _result) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Format_result(
			&cmd,
			_result);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Decryption(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _result) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Decryption(
			&cmd,
			_result);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_User_storage_Format_progress(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _step,
		uint8_t _percentage) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_User_storage_Format_progress(
			&cmd,
			_step,
			_percentage);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_preferred_home_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_preferred_home_type(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_custom_location(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_custom_location(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_delay(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_delay(
			&cmd,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Return_to_home(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Return_to_home(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Abort(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Abort(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Cancel_auto_trigger(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Cancel_auto_trigger(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_min_altitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_min_altitude(
			&cmd,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_auto_trigger_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_auto_trigger_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_ending_behavior(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _ending_behavior) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_ending_behavior(
			&cmd,
			_ending_behavior);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Set_ending_hovering_altitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Set_ending_hovering_altitude(
			&cmd,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Home_type_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _values) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Home_type_capabilities(
			&cmd,
			_values);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Home_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Home_type(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Preferred_home_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Preferred_home_type(
			&cmd,
			_type);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Takeoff_location(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude,
		uint8_t _fixed_before_takeoff) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Takeoff_location(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_fixed_before_takeoff);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Custom_location(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Custom_location(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Followee_location(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		float _altitude) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Followee_location(
			&cmd,
			_latitude,
			_longitude,
			_altitude);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Delay(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _delay,
		uint16_t _min,
		uint16_t _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Delay(
			&cmd,
			_delay,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		int32_t _reason) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_State(
			&cmd,
			_state,
			_reason);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Home_reachability(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Home_reachability(
			&cmd,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Rth_auto_trigger(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _reason,
		uint32_t _delay) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Rth_auto_trigger(
			&cmd,
			_reason,
			_delay);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Min_altitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Min_altitude(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Auto_trigger_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Auto_trigger_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Ending_behavior(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _ending_behavior) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Ending_behavior(
			&cmd,
			_ending_behavior);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Rth_Ending_hovering_altitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _current,
		float _min,
		float _max) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Rth_Ending_hovering_altitude(
			&cmd,
			_current,
			_min,
			_max);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Radiometric_calib_start(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Radiometric_calib_start(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Open_session(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		const char *_name) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Open_session(
			&cmd,
			_id,
			_name);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Close_session(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Close_session(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Set_live_stitch_mask(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id,
		uint8_t _sensors_mask) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Set_live_stitch_mask(
			&cmd,
			_id,
			_sensors_mask);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Get_storage_infos(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Get_storage_infos(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Factory_reset(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Factory_reset(
			&cmd,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Radiometric_calib_status(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Radiometric_calib_status(
			&cmd,
			_cam_id,
			_value,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Radiometric_calib_result(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _value,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Radiometric_calib_result(
			&cmd,
			_cam_id,
			_value,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Session_state_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _state,
		const char *_session_path,
		const char *_live_stitch_path,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Session_state_changed(
			&cmd,
			_cam_id,
			_state,
			_session_path,
			_live_stitch_path,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Live_stitch_mask_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint8_t _mask,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Live_stitch_mask_changed(
			&cmd,
			_cam_id,
			_mask,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Live_stitch_last_picture_id_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint32_t _picture_id,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Live_stitch_last_picture_id_changed(
			&cmd,
			_cam_id,
			_picture_id,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Storage_infos(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		int32_t _selected,
		uint8_t _internal_available,
		uint64_t _internal_total_size,
		uint64_t _internal_free_size,
		uint8_t _internal_is_ro,
		uint8_t _internal_is_corrupted,
		uint8_t _sd_available,
		uint64_t _sd_total_size,
		uint64_t _sd_free_size,
		uint8_t _sd_is_ro,
		uint8_t _sd_is_corrupted,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Storage_infos(
			&cmd,
			_cam_id,
			_selected,
			_internal_available,
			_internal_total_size,
			_internal_free_size,
			_internal_is_ro,
			_internal_is_corrupted,
			_sd_available,
			_sd_total_size,
			_sd_free_size,
			_sd_is_ro,
			_sd_is_corrupted,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_System_status(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint16_t _errors,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_System_status(
			&cmd,
			_cam_id,
			_errors,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _cam_id,
		uint32_t _nb_pictures,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed(
			&cmd,
			_cam_id,
			_nb_pictures,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Set_max_speed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		float _yaw,
		float _pitch,
		float _roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Set_max_speed(
			&cmd,
			_gimbal_id,
			_yaw,
			_pitch,
			_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Set_target(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		int32_t _control_mode,
		int32_t _yaw_frame_of_reference,
		float _yaw,
		int32_t _pitch_frame_of_reference,
		float _pitch,
		int32_t _roll_frame_of_reference,
		float _roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Set_target(
			&cmd,
			_gimbal_id,
			_control_mode,
			_yaw_frame_of_reference,
			_yaw,
			_pitch_frame_of_reference,
			_pitch,
			_roll_frame_of_reference,
			_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Start_offsets_update(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Start_offsets_update(
			&cmd,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Stop_offsets_update(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Stop_offsets_update(
			&cmd,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Set_offsets(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		float _yaw,
		float _pitch,
		float _roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Set_offsets(
			&cmd,
			_gimbal_id,
			_yaw,
			_pitch,
			_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Reset_orientation(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Reset_orientation(
			&cmd,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Calibrate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Calibrate(
			&cmd,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Cancel_calibration(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Cancel_calibration(
			&cmd,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Gimbal_capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		int32_t _model,
		uint8_t _axes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Gimbal_capabilities(
			&cmd,
			_gimbal_id,
			_model,
			_axes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Relative_attitude_bounds(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		float _min_yaw,
		float _max_yaw,
		float _min_pitch,
		float _max_pitch,
		float _min_roll,
		float _max_roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Relative_attitude_bounds(
			&cmd,
			_gimbal_id,
			_min_yaw,
			_max_yaw,
			_min_pitch,
			_max_pitch,
			_min_roll,
			_max_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Absolute_attitude_bounds(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		float _min_yaw,
		float _max_yaw,
		float _min_pitch,
		float _max_pitch,
		float _min_roll,
		float _max_roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Absolute_attitude_bounds(
			&cmd,
			_gimbal_id,
			_min_yaw,
			_max_yaw,
			_min_pitch,
			_max_pitch,
			_min_roll,
			_max_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Max_speed(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		float _min_bound_yaw,
		float _max_bound_yaw,
		float _current_yaw,
		float _min_bound_pitch,
		float _max_bound_pitch,
		float _current_pitch,
		float _min_bound_roll,
		float _max_bound_roll,
		float _current_roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Max_speed(
			&cmd,
			_gimbal_id,
			_min_bound_yaw,
			_max_bound_yaw,
			_current_yaw,
			_min_bound_pitch,
			_max_bound_pitch,
			_current_pitch,
			_min_bound_roll,
			_max_bound_roll,
			_current_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Attitude(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		int32_t _yaw_frame_of_reference,
		int32_t _pitch_frame_of_reference,
		int32_t _roll_frame_of_reference,
		float _yaw_relative,
		float _pitch_relative,
		float _roll_relative,
		float _yaw_absolute,
		float _pitch_absolute,
		float _roll_absolute) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Attitude(
			&cmd,
			_gimbal_id,
			_yaw_frame_of_reference,
			_pitch_frame_of_reference,
			_roll_frame_of_reference,
			_yaw_relative,
			_pitch_relative,
			_roll_relative,
			_yaw_absolute,
			_pitch_absolute,
			_roll_absolute);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Axis_lock_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		uint8_t _locked) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Axis_lock_state(
			&cmd,
			_gimbal_id,
			_locked);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Offsets(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		int32_t _update_state,
		float _min_bound_yaw,
		float _max_bound_yaw,
		float _current_yaw,
		float _min_bound_pitch,
		float _max_bound_pitch,
		float _current_pitch,
		float _min_bound_roll,
		float _max_bound_roll,
		float _current_roll) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Offsets(
			&cmd,
			_gimbal_id,
			_update_state,
			_min_bound_yaw,
			_max_bound_yaw,
			_current_yaw,
			_min_bound_pitch,
			_max_bound_pitch,
			_current_pitch,
			_min_bound_roll,
			_max_bound_roll,
			_current_roll);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Calibration_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state,
		uint8_t _gimbal_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Calibration_state(
			&cmd,
			_state,
			_gimbal_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Calibration_result(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		int32_t _result) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Calibration_result(
			&cmd,
			_gimbal_id,
			_result);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gimbal_Alert(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _gimbal_id,
		uint8_t _error) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gimbal_Alert(
			&cmd,
			_gimbal_id,
			_error);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Battery_Alert(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _alert,
		int32_t _level,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Battery_Alert(
			&cmd,
			_alert,
			_level,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Battery_Health(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _state_of_health) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Battery_Health(
			&cmd,
			_state_of_health);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Battery_Voltage(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _voltage) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Battery_Voltage(
			&cmd,
			_voltage);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Battery_Cycle_count(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _count) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Battery_Cycle_count(
			&cmd,
			_count);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Battery_Serial(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_serial) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Battery_Serial(
			&cmd,
			_serial);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mediastore_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mediastore_State(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Mediastore_Counters(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _video_media_count,
		int32_t _photo_media_count,
		int32_t _video_resource_count,
		int32_t _photo_resource_count) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Mediastore_Counters(
			&cmd,
			_video_media_count,
			_photo_media_count,
			_video_resource_count,
			_photo_resource_count);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Precise_home_Set_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Precise_home_Set_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Precise_home_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _modes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Precise_home_Capabilities(
			&cmd,
			_modes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Precise_home_Mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Precise_home_Mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Precise_home_State(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Precise_home_State(
			&cmd,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_palette_part(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _red,
		float _green,
		float _blue,
		float _index,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_palette_part(
			&cmd,
			_red,
			_green,
			_blue,
			_index,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_palette_settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		float _lowest_temp,
		float _highest_temp,
		int32_t _outside_colorization,
		int32_t _relative_range,
		int32_t _spot_type,
		float _spot_threshold) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_palette_settings(
			&cmd,
			_mode,
			_lowest_temp,
			_highest_temp,
			_outside_colorization,
			_relative_range,
			_spot_type,
			_spot_threshold);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_rendering(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		float _blending_rate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_rendering(
			&cmd,
			_mode,
			_blending_rate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_emissivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _emissivity) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_emissivity(
			&cmd,
			_emissivity);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_background_temperature(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _background_temperature) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_background_temperature(
			&cmd,
			_background_temperature);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_sensitivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _range) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_sensitivity(
			&cmd,
			_range);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Set_shutter_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _trigger) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Set_shutter_mode(
			&cmd,
			_trigger);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Trigg_shutter(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Trigg_shutter(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _modes) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Capabilities(
			&cmd,
			_modes);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Palette_part(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _red,
		float _green,
		float _blue,
		float _index,
		uint8_t _list_flags) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Palette_part(
			&cmd,
			_red,
			_green,
			_blue,
			_index,
			_list_flags);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Palette_settings(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		float _lowest_temp,
		float _highest_temp,
		int32_t _outside_colorization,
		int32_t _relative_range,
		int32_t _spot_type,
		float _spot_threshold) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Palette_settings(
			&cmd,
			_mode,
			_lowest_temp,
			_highest_temp,
			_outside_colorization,
			_relative_range,
			_spot_type,
			_spot_threshold);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Rendering(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode,
		float _blending_rate) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Rendering(
			&cmd,
			_mode,
			_blending_rate);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Emissivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _emissivity) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Emissivity(
			&cmd,
			_emissivity);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Background_temperature(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _background_temperature) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Background_temperature(
			&cmd,
			_background_temperature);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Sensitivity(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _current_range) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Sensitivity(
			&cmd,
			_current_range);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Thermal_Shutter_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _current_trigger) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Thermal_Shutter_mode(
			&cmd,
			_current_trigger);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Leds_Activate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Leds_Activate(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Leds_Deactivate(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Leds_Deactivate(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Leds_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _supported_capabilities) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Leds_Capabilities(
			&cmd,
			_supported_capabilities);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Leds_Switch_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _switch_state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Leds_Switch_state(
			&cmd,
			_switch_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Piloting_style_Set_style(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _style) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Piloting_style_Set_style(
			&cmd,
			_style);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Piloting_style_Style(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _style) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Piloting_style_Style(
			&cmd,
			_style);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Piloting_style_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint8_t _styles) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Piloting_style_Capabilities(
			&cmd,
			_styles);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gauge_fw_updater_Prepare(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gauge_fw_updater_Prepare(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gauge_fw_updater_Update(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gauge_fw_updater_Update(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gauge_fw_updater_Status(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _diag,
		uint32_t _missing_requirements,
		int32_t _state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gauge_fw_updater_Status(
			&cmd,
			_diag,
			_missing_requirements,
			_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Gauge_fw_updater_Progress(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _result,
		uint8_t _percent) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Gauge_fw_updater_Progress(
			&cmd,
			_result,
			_percent);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Dri_mode(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Dri_mode(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Set_dri_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_id) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Set_dri_type(
			&cmd,
			_type,
			_id);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _supported_capabilities) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Capabilities(
			&cmd,
			_supported_capabilities);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Dri_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _mode) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Dri_state(
			&cmd,
			_mode);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Drone_id(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _type,
		const char *_value) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Drone_id(
			&cmd,
			_type,
			_value);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Dri_Dri_type(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		const char *_id,
		int32_t _type,
		int32_t _status) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Dri_Dri_type(
			&cmd,
			_id,
			_type,
			_status);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Security_edition_Deactivate_logs(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Security_edition_Deactivate_logs(
			&cmd);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Security_edition_Capabilities(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint16_t _supported_capabilities) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Security_edition_Capabilities(
			&cmd,
			_supported_capabilities);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Security_edition_Log_storage_state(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		int32_t _log_storage_state) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Security_edition_Log_storage_state(
			&cmd,
			_log_storage_state);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Move_Extended_move_to(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		double _latitude,
		double _longitude,
		double _altitude,
		int32_t _orientation_mode,
		float _heading,
		float _max_horizontal_speed,
		float _max_vertical_speed,
		float _max_yaw_rotation_speed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Move_Extended_move_to(
			&cmd,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading,
			_max_horizontal_speed,
			_max_vertical_speed,
			_max_yaw_rotation_speed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Move_Extended_move_by(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		float _d_x,
		float _d_y,
		float _d_z,
		float _d_psi,
		float _max_horizontal_speed,
		float _max_vertical_speed,
		float _max_yaw_rotation_speed) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Move_Extended_move_by(
			&cmd,
			_d_x,
			_d_y,
			_d_z,
			_d_psi,
			_max_horizontal_speed,
			_max_vertical_speed,
			_max_yaw_rotation_speed);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

static inline int
arsdk_cmd_send_Move_Info(
		struct arsdk_cmd_itf *itf,
		arsdk_cmd_itf_send_status_cb_t send_status,
		void *userdata,
		uint32_t _missing_inputs) {
	int res = 0;
	struct arsdk_cmd cmd;
	arsdk_cmd_init(&cmd);
	res = arsdk_cmd_enc_Move_Info(
			&cmd,
			_missing_inputs);
	if (res == 0)
		res = arsdk_cmd_itf_send(itf, &cmd, send_status, userdata);
	arsdk_cmd_clear(&cmd);
	return res;
}

