static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Network_Disconnect(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Network_Disconnect);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Settings_AllSettings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Settings_AllSettings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Settings_Reset(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Settings_Reset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Settings_ProductName(
		const struct arsdk_cmd *cmd,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Settings_ProductName,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Settings_Country(
		const struct arsdk_cmd *cmd,
		const char **_code) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Settings_Country,
			_code);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Settings_AutoCountry(
		const struct arsdk_cmd *cmd,
		uint8_t *_automatic) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Settings_AutoCountry,
			_automatic);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Common_AllStates(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Common_AllStates);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Common_CurrentDate(
		const struct arsdk_cmd *cmd,
		const char **_date) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Common_CurrentDate,
			_date);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Common_CurrentTime(
		const struct arsdk_cmd *cmd,
		const char **_time) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Common_CurrentTime,
			_time);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Common_Reboot(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Common_Reboot);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Common_CurrentDateTime(
		const struct arsdk_cmd *cmd,
		const char **_datetime) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Common_CurrentDateTime,
			_datetime);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_OverHeat_SwitchOff(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_OverHeat_SwitchOff);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_OverHeat_Ventilate(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_OverHeat_Ventilate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Controller_IsPiloting(
		const struct arsdk_cmd *cmd,
		uint8_t *_piloting) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Controller_IsPiloting,
			_piloting);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Controller_PeerStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_type,
		const char **_peerName,
		const char **_peerId,
		const char **_peerType) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Controller_PeerStateChanged,
			_state,
			_type,
			_peerName,
			_peerId,
			_peerType);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_WifiSettings_OutdoorSetting(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_WifiSettings_OutdoorSetting,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Mavlink_Start(
		const struct arsdk_cmd *cmd,
		const char **_filepath,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Mavlink_Start,
			_filepath,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Mavlink_Pause(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Mavlink_Pause);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Mavlink_Stop(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Mavlink_Stop);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanSettings_ReturnHomeOnDisconnect(
		const struct arsdk_cmd *cmd,
		uint8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanSettings_ReturnHomeOnDisconnect,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Calibration_MagnetoCalibration(
		const struct arsdk_cmd *cmd,
		uint8_t *_calibrate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Calibration_MagnetoCalibration,
			_calibrate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Calibration_PitotCalibration(
		const struct arsdk_cmd *cmd,
		uint8_t *_calibrate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Calibration_PitotCalibration,
			_calibrate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_GPS_ControllerPositionForRun(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_GPS_ControllerPositionForRun,
			_latitude,
			_longitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Audio_ControllerReadyForStreaming(
		const struct arsdk_cmd *cmd,
		uint8_t *_ready) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Audio_ControllerReadyForStreaming,
			_ready);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Headlights_Intensity(
		const struct arsdk_cmd *cmd,
		uint8_t *_left,
		uint8_t *_right) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Headlights_Intensity,
			_left,
			_right);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Animations_StartAnimation(
		const struct arsdk_cmd *cmd,
		int32_t *_anim) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Animations_StartAnimation,
			_anim);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Animations_StopAnimation(
		const struct arsdk_cmd *cmd,
		int32_t *_anim) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Animations_StopAnimation,
			_anim);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Animations_StopAllAnimations(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Animations_StopAllAnimations);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Accessory_Config(
		const struct arsdk_cmd *cmd,
		int32_t *_accessory) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Accessory_Config,
			_accessory);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Charger_SetMaxChargeRate(
		const struct arsdk_cmd *cmd,
		int32_t *_rate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Charger_SetMaxChargeRate,
			_rate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_Factory_Reset(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_Factory_Reset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_NetworkEvent_Disconnection(
		const struct arsdk_cmd *cmd,
		int32_t *_cause) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_NetworkEvent_Disconnection,
			_cause);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_AllSettingsChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_AllSettingsChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_ResetChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_ResetChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_ProductNameChanged(
		const struct arsdk_cmd *cmd,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_ProductNameChanged,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_ProductVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_ProductVersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_ProductSerialHighChanged(
		const struct arsdk_cmd *cmd,
		const char **_high) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_ProductSerialHighChanged,
			_high);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_ProductSerialLowChanged(
		const struct arsdk_cmd *cmd,
		const char **_low) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_ProductSerialLowChanged,
			_low);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_CountryChanged(
		const struct arsdk_cmd *cmd,
		const char **_code) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_CountryChanged,
			_code);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_AutoCountryChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_automatic) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_AutoCountryChanged,
			_automatic);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_SettingsState_BoardIdChanged(
		const struct arsdk_cmd *cmd,
		const char **_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_SettingsState_BoardIdChanged,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_AllStatesChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_AllStatesChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_BatteryStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_percent) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_BatteryStateChanged,
			_percent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_MassStorageStateListChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_MassStorageStateListChanged,
			_mass_storage_id,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_MassStorageInfoStateListChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id,
		uint32_t *_size,
		uint32_t *_used_size,
		uint8_t *_plugged,
		uint8_t *_full,
		uint8_t *_internal) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoStateListChanged,
			_mass_storage_id,
			_size,
			_used_size,
			_plugged,
			_full,
			_internal);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_CurrentDateChanged(
		const struct arsdk_cmd *cmd,
		const char **_date) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_CurrentDateChanged,
			_date);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_CurrentTimeChanged(
		const struct arsdk_cmd *cmd,
		const char **_time) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_CurrentTimeChanged,
			_time);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_MassStorageInfoRemainingListChanged(
		const struct arsdk_cmd *cmd,
		uint32_t *_free_space,
		uint16_t *_rec_time,
		uint32_t *_photo_remaining) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_MassStorageInfoRemainingListChanged,
			_free_space,
			_rec_time,
			_photo_remaining);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_WifiSignalChanged(
		const struct arsdk_cmd *cmd,
		int16_t *_rssi) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_WifiSignalChanged,
			_rssi);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_SensorsStatesListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_sensorName,
		uint8_t *_sensorState) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_SensorsStatesListChanged,
			_sensorName,
			_sensorState);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_ProductModel(
		const struct arsdk_cmd *cmd,
		int32_t *_model) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_ProductModel,
			_model);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_CountryListKnown(
		const struct arsdk_cmd *cmd,
		uint8_t *_listFlags,
		const char **_countryCodes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_CountryListKnown,
			_listFlags,
			_countryCodes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_DeprecatedMassStorageContentChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id,
		uint16_t *_nbPhotos,
		uint16_t *_nbVideos,
		uint16_t *_nbPuds,
		uint16_t *_nbCrashLogs) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_DeprecatedMassStorageContentChanged,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbPuds,
			_nbCrashLogs);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_MassStorageContent(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id,
		uint16_t *_nbPhotos,
		uint16_t *_nbVideos,
		uint16_t *_nbPuds,
		uint16_t *_nbCrashLogs,
		uint16_t *_nbRawPhotos) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_MassStorageContent,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbPuds,
			_nbCrashLogs,
			_nbRawPhotos);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_MassStorageContentForCurrentRun(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id,
		uint16_t *_nbPhotos,
		uint16_t *_nbVideos,
		uint16_t *_nbRawPhotos) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_MassStorageContentForCurrentRun,
			_mass_storage_id,
			_nbPhotos,
			_nbVideos,
			_nbRawPhotos);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_VideoRecordingTimestamp(
		const struct arsdk_cmd *cmd,
		uint64_t *_startTimestamp,
		uint64_t *_stopTimestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_VideoRecordingTimestamp,
			_startTimestamp,
			_stopTimestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_CurrentDateTimeChanged(
		const struct arsdk_cmd *cmd,
		const char **_datetime) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_CurrentDateTimeChanged,
			_datetime);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_LinkSignalQuality(
		const struct arsdk_cmd *cmd,
		uint8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_LinkSignalQuality,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CommonState_BootId(
		const struct arsdk_cmd *cmd,
		const char **_bootId) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CommonState_BootId,
			_bootId);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_OverHeatState_OverHeatChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_OverHeatState_OverHeatChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_OverHeatState_OverHeatRegulationChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_regulationType) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_OverHeatState_OverHeatRegulationChanged,
			_regulationType);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_WifiSettingsState_OutdoorSettingsChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_WifiSettingsState_OutdoorSettingsChanged,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_MavlinkState_MavlinkFilePlayingStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		const char **_filepath,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_MavlinkState_MavlinkFilePlayingStateChanged,
			_state,
			_filepath,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_MavlinkState_MavlinkPlayErrorStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_MavlinkState_MavlinkPlayErrorStateChanged,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_MavlinkState_MissionItemExecuted(
		const struct arsdk_cmd *cmd,
		uint32_t *_idx) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_MavlinkState_MissionItemExecuted,
			_idx);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state,
		uint8_t *_isReadOnly) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanSettingsState_ReturnHomeOnDisconnectChanged,
			_state,
			_isReadOnly);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CalibrationState_MagnetoCalibrationStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_xAxisCalibration,
		uint8_t *_yAxisCalibration,
		uint8_t *_zAxisCalibration,
		uint8_t *_calibrationFailed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStateChanged,
			_xAxisCalibration,
			_yAxisCalibration,
			_zAxisCalibration,
			_calibrationFailed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CalibrationState_MagnetoCalibrationRequiredState(
		const struct arsdk_cmd *cmd,
		uint8_t *_required) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationRequiredState,
			_required);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_axis) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationAxisToCalibrateChanged,
			_axis);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CalibrationState_MagnetoCalibrationStartedChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_started) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CalibrationState_MagnetoCalibrationStartedChanged,
			_started);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CalibrationState_PitotCalibrationStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		uint8_t *_lastError) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CalibrationState_PitotCalibrationStateChanged,
			_state,
			_lastError);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_CameraSettingsState_CameraSettingsChanged(
		const struct arsdk_cmd *cmd,
		float *_fov,
		float *_panMax,
		float *_panMin,
		float *_tiltMax,
		float *_tiltMin) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_CameraSettingsState_CameraSettingsChanged,
			_fov,
			_panMax,
			_panMin,
			_tiltMax,
			_tiltMin);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanState_AvailabilityStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_AvailabilityState) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanState_AvailabilityStateChanged,
			_AvailabilityState);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanState_ComponentStateListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_component,
		uint8_t *_State) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanState_ComponentStateListChanged,
			_component,
			_State);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanState_LockStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_LockState) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanState_LockStateChanged,
			_LockState);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanEvent_StartingErrorEvent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanEvent_StartingErrorEvent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_FlightPlanEvent_SpeedBridleEvent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_FlightPlanEvent_SpeedBridleEvent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ARLibsVersionsState_ControllerLibARCommandsVersion(
		const struct arsdk_cmd *cmd,
		const char **_version) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ARLibsVersionsState_ControllerLibARCommandsVersion,
			_version);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion(
		const struct arsdk_cmd *cmd,
		const char **_version) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ARLibsVersionsState_SkyControllerLibARCommandsVersion,
			_version);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ARLibsVersionsState_DeviceLibARCommandsVersion(
		const struct arsdk_cmd *cmd,
		const char **_version) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ARLibsVersionsState_DeviceLibARCommandsVersion,
			_version);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_AudioState_AudioStreamingRunning(
		const struct arsdk_cmd *cmd,
		uint8_t *_running) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_AudioState_AudioStreamingRunning,
			_running);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_HeadlightsState_IntensityChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_left,
		uint8_t *_right) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_HeadlightsState_IntensityChanged,
			_left,
			_right);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_AnimationsState_List(
		const struct arsdk_cmd *cmd,
		int32_t *_anim,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_AnimationsState_List,
			_anim,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_AccessoryState_SupportedAccessoriesListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_accessory) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_AccessoryState_SupportedAccessoriesListChanged,
			_accessory);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_AccessoryState_AccessoryConfigChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_newAccessory,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigChanged,
			_newAccessory,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_AccessoryState_AccessoryConfigModificationEnabled(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_AccessoryState_AccessoryConfigModificationEnabled,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ChargerState_MaxChargeRateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_rate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ChargerState_MaxChargeRateChanged,
			_rate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ChargerState_CurrentChargeStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_status,
		int32_t *_phase) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ChargerState_CurrentChargeStateChanged,
			_status,
			_phase);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ChargerState_LastChargeRateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_rate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ChargerState_LastChargeRateChanged,
			_rate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_ChargerState_ChargingInfo(
		const struct arsdk_cmd *cmd,
		int32_t *_phase,
		int32_t *_rate,
		uint8_t *_intensity,
		uint8_t *_fullChargingTime) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_ChargerState_ChargingInfo,
			_phase,
			_rate,
			_intensity,
			_fullChargingTime);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_RunState_RunIdChanged(
		const struct arsdk_cmd *cmd,
		const char **_runId) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_RunState_RunIdChanged,
			_runId);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Common_UpdateState_UpdateStateChanged(
		const struct arsdk_cmd *cmd,
		const char **_sourceVersion,
		const char **_targetVersion,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Common_UpdateState_UpdateStateChanged,
			_sourceVersion,
			_targetVersion,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_TakeOff(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_TakeOff);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_PCMD(
		const struct arsdk_cmd *cmd,
		uint8_t *_flag,
		int8_t *_roll,
		int8_t *_pitch,
		int8_t *_yaw,
		int8_t *_gaz,
		uint32_t *_timestampAndSeqNum) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_PCMD,
			_flag,
			_roll,
			_pitch,
			_yaw,
			_gaz,
			_timestampAndSeqNum);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_Landing(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_Landing);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_Emergency(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_Emergency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_NavigateHome(
		const struct arsdk_cmd *cmd,
		uint8_t *_start) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_NavigateHome,
			_start);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_MoveBy(
		const struct arsdk_cmd *cmd,
		float *_dX,
		float *_dY,
		float *_dZ,
		float *_dPsi) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_MoveBy,
			_dX,
			_dY,
			_dZ,
			_dPsi);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_UserTakeOff(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_UserTakeOff,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_Circle(
		const struct arsdk_cmd *cmd,
		int32_t *_direction) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_Circle,
			_direction);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_MoveTo(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_orientation_mode,
		float *_heading) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_MoveTo,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_CancelMoveTo(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveTo);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_StartPilotedPOI(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOI,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_StartPilotedPOIV2(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_StartPilotedPOIV2,
			_latitude,
			_longitude,
			_altitude,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_StopPilotedPOI(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_StopPilotedPOI);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Piloting_CancelMoveBy(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Piloting_CancelMoveBy);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Animations_Flip(
		const struct arsdk_cmd *cmd,
		int32_t *_direction) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Animations_Flip,
			_direction);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Camera_Orientation(
		const struct arsdk_cmd *cmd,
		int8_t *_tilt,
		int8_t *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Camera_Orientation,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Camera_OrientationV2(
		const struct arsdk_cmd *cmd,
		float *_tilt,
		float *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Camera_OrientationV2,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Camera_Velocity(
		const struct arsdk_cmd *cmd,
		float *_tilt,
		float *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Camera_Velocity,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecord_Picture(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecord_Picture,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecord_Video(
		const struct arsdk_cmd *cmd,
		int32_t *_record,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecord_Video,
			_record,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecord_PictureV2(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecord_PictureV2);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecord_VideoV2(
		const struct arsdk_cmd *cmd,
		int32_t *_record) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecord_VideoV2,
			_record);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Network_WifiScan(
		const struct arsdk_cmd *cmd,
		int32_t *_band) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Network_WifiScan,
			_band);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Network_WifiAuthChannel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Network_WifiAuthChannel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_MaxAltitude(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxAltitude,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_MaxTilt(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxTilt,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_AbsolutControl(
		const struct arsdk_cmd *cmd,
		uint8_t *_on) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_AbsolutControl,
			_on);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_MaxDistance(
		const struct arsdk_cmd *cmd,
		float *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MaxDistance,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_NoFlyOverMaxDistance(
		const struct arsdk_cmd *cmd,
		uint8_t *_shouldNotFlyOver) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_NoFlyOverMaxDistance,
			_shouldNotFlyOver);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_BankedTurn(
		const struct arsdk_cmd *cmd,
		uint8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_BankedTurn,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_MinAltitude(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_MinAltitude,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_CirclingDirection(
		const struct arsdk_cmd *cmd,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingDirection,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_CirclingRadius(
		const struct arsdk_cmd *cmd,
		uint16_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingRadius,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_CirclingAltitude(
		const struct arsdk_cmd *cmd,
		uint16_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_CirclingAltitude,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_PitchMode(
		const struct arsdk_cmd *cmd,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_PitchMode,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettings_SetMotionDetectionMode(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettings_SetMotionDetectionMode,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettings_MaxVerticalSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxVerticalSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettings_MaxRotationSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxRotationSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettings_HullProtection(
		const struct arsdk_cmd *cmd,
		uint8_t *_present) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_HullProtection,
			_present);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettings_Outdoor(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_Outdoor,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettings_MaxPitchRollRotationSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkSettings_WifiSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSelection,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkSettings_WifiSecurity(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_key,
		int32_t *_keyType) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkSettings_WifiSecurity,
			_type,
			_key,
			_keyType);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_PictureFormatSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_PictureFormatSelection,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_AutoWhiteBalanceSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_AutoWhiteBalanceSelection,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_ExpositionSelection(
		const struct arsdk_cmd *cmd,
		float *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_ExpositionSelection,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_SaturationSelection(
		const struct arsdk_cmd *cmd,
		float *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_SaturationSelection,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_TimelapseSelection(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled,
		float *_interval) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_TimelapseSelection,
			_enabled,
			_interval);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_VideoAutorecordSelection(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoAutorecordSelection,
			_enabled,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_VideoStabilizationMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoStabilizationMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_VideoRecordingMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoRecordingMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_VideoFramerate(
		const struct arsdk_cmd *cmd,
		int32_t *_framerate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoFramerate,
			_framerate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettings_VideoResolutions(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettings_VideoResolutions,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaStreaming_VideoEnable(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoEnable,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaStreaming_VideoStreamMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaStreaming_VideoStreamMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_SetHome(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_SetHome,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_ResetHome(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ResetHome);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_SendControllerGPS(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		double *_horizontalAccuracy,
		double *_verticalAccuracy) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_SendControllerGPS,
			_latitude,
			_longitude,
			_altitude,
			_horizontalAccuracy,
			_verticalAccuracy);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_HomeType(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_HomeType,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_ReturnHomeDelay(
		const struct arsdk_cmd *cmd,
		uint16_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeDelay,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettings_ReturnHomeMinAltitude(
		const struct arsdk_cmd *cmd,
		float *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettings_ReturnHomeMinAltitude,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Antiflickering_ElectricFrequency(
		const struct arsdk_cmd *cmd,
		int32_t *_frequency) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Antiflickering_ElectricFrequency,
			_frequency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Antiflickering_SetMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Antiflickering_SetMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Sound_StartAlertSound(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Sound_StartAlertSound);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_Sound_StopAlertSound(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_Sound_StopAlertSound);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordState_PictureStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChanged,
			_state,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordState_VideoStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChanged,
			_state,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordState_PictureStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_PictureStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordState_VideoStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordState_VideoResolutionState(
		const struct arsdk_cmd *cmd,
		int32_t *_streaming,
		int32_t *_recording) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordState_VideoResolutionState,
			_streaming,
			_recording);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordEvent_PictureEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_PictureEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaRecordEvent_VideoEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaRecordEvent_VideoEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_FlyingStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_FlyingStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_AlertStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_AlertStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_NavigateHomeStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_reason) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_NavigateHomeStateChanged,
			_state,
			_reason);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_PositionChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_PositionChanged,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_SpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_speedX,
		float *_speedY,
		float *_speedZ) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_SpeedChanged,
			_speedX,
			_speedY,
			_speedZ);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_AttitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_roll,
		float *_pitch,
		float *_yaw) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_AttitudeChanged,
			_roll,
			_pitch,
			_yaw);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_AltitudeChanged(
		const struct arsdk_cmd *cmd,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeChanged,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_GpsLocationChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int8_t *_latitude_accuracy,
		int8_t *_longitude_accuracy,
		int8_t *_altitude_accuracy) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_GpsLocationChanged,
			_latitude,
			_longitude,
			_altitude,
			_latitude_accuracy,
			_longitude_accuracy,
			_altitude_accuracy);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_LandingStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_LandingStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_AirSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_airSpeed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_AirSpeedChanged,
			_airSpeed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_MoveToChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_orientation_mode,
		float *_heading,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveToChanged,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_MotionState(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_MotionState,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_PilotedPOI(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOI,
			_latitude,
			_longitude,
			_altitude,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_PilotedPOIV2(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_mode,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_PilotedPOIV2,
			_latitude,
			_longitude,
			_altitude,
			_mode,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_ReturnHomeBatteryCapacity(
		const struct arsdk_cmd *cmd,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_ReturnHomeBatteryCapacity,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_MoveByChanged(
		const struct arsdk_cmd *cmd,
		float *_dXAsked,
		float *_dYAsked,
		float *_dZAsked,
		float *_dPsiAsked,
		float *_dX,
		float *_dY,
		float *_dZ,
		float *_dPsi,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_MoveByChanged,
			_dXAsked,
			_dYAsked,
			_dZAsked,
			_dPsiAsked,
			_dX,
			_dY,
			_dZ,
			_dPsi,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_HoveringWarning(
		const struct arsdk_cmd *cmd,
		uint8_t *_no_gps_too_dark,
		uint8_t *_no_gps_too_high) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_HoveringWarning,
			_no_gps_too_dark,
			_no_gps_too_high);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_ForcedLandingAutoTrigger(
		const struct arsdk_cmd *cmd,
		int32_t *_reason,
		uint32_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_ForcedLandingAutoTrigger,
			_reason,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_WindStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_WindStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_VibrationLevelChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_VibrationLevelChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_AltitudeAboveGroundChanged(
		const struct arsdk_cmd *cmd,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_AltitudeAboveGroundChanged,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingState_HeadingLockedStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingState_HeadingLockedStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingEvent_MoveByEnd(
		const struct arsdk_cmd *cmd,
		float *_dX,
		float *_dY,
		float *_dZ,
		float *_dPsi,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingEvent_MoveByEnd,
			_dX,
			_dY,
			_dZ,
			_dPsi,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkState_WifiScanListChanged(
		const struct arsdk_cmd *cmd,
		const char **_ssid,
		int16_t *_rssi,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiScanListChanged,
			_ssid,
			_rssi,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkState_AllWifiScanChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiScanChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkState_WifiAuthChannelListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_in_or_out) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkState_WifiAuthChannelListChanged,
			_band,
			_channel,
			_in_or_out);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkState_AllWifiAuthChannelChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkState_AllWifiAuthChannelChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_MaxAltitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxAltitudeChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_MaxTiltChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxTiltChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_AbsolutControlChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_on) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_AbsolutControlChanged,
			_on);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_MaxDistanceChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MaxDistanceChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_shouldNotFlyOver) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_NoFlyOverMaxDistanceChanged,
			_shouldNotFlyOver);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_BankedTurnChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_BankedTurnChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_MinAltitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MinAltitudeChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_CirclingDirectionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingDirectionChanged,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_CirclingRadiusChanged(
		const struct arsdk_cmd *cmd,
		uint16_t *_current,
		uint16_t *_min,
		uint16_t *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingRadiusChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged(
		const struct arsdk_cmd *cmd,
		uint16_t *_current,
		uint16_t *_min,
		uint16_t *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_CirclingAltitudeChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_PitchModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_PitchModeChanged,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PilotingSettingsState_MotionDetection(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PilotingSettingsState_MotionDetection,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxVerticalSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxRotationSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettingsState_HullProtectionChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_present) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_HullProtectionChanged,
			_present);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettingsState_OutdoorChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_OutdoorChanged,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SpeedSettingsState_MaxPitchRollRotationSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkSettingsState_WifiSelectionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSelectionChanged,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkSettingsState_WifiSecurityChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurityChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_NetworkSettingsState_WifiSecurity(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_key,
		int32_t *_keyType) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_NetworkSettingsState_WifiSecurity,
			_type,
			_key,
			_keyType);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_ProductMotorVersionListChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_motor_number,
		const char **_type,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductMotorVersionListChanged,
			_motor_number,
			_type,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_ProductGPSVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_ProductGPSVersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_MotorErrorStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_motorIds,
		int32_t *_motorError) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorStateChanged,
			_motorIds,
			_motorError);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_MotorSoftwareVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_version) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorSoftwareVersionChanged,
			_version);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_MotorFlightsStatusChanged(
		const struct arsdk_cmd *cmd,
		uint16_t *_nbFlights,
		uint16_t *_lastFlightDuration,
		uint32_t *_totalFlightDuration) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorFlightsStatusChanged,
			_nbFlights,
			_lastFlightDuration,
			_totalFlightDuration);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_MotorErrorLastErrorChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_motorError) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_MotorErrorLastErrorChanged,
			_motorError);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_P7ID(
		const struct arsdk_cmd *cmd,
		const char **_serialID) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_P7ID,
			_serialID);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SettingsState_CPUID(
		const struct arsdk_cmd *cmd,
		const char **_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SettingsState_CPUID,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_PictureFormatChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_PictureFormatChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_AutoWhiteBalanceChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_ExpositionChanged(
		const struct arsdk_cmd *cmd,
		float *_value,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_ExpositionChanged,
			_value,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_SaturationChanged(
		const struct arsdk_cmd *cmd,
		float *_value,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_SaturationChanged,
			_value,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_TimelapseChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled,
		float *_interval,
		float *_minInterval,
		float *_maxInterval) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_TimelapseChanged,
			_enabled,
			_interval,
			_minInterval,
			_maxInterval);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_VideoAutorecordChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoAutorecordChanged,
			_enabled,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoStabilizationModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_VideoRecordingModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoRecordingModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_VideoFramerateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_framerate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoFramerateChanged,
			_framerate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PictureSettingsState_VideoResolutionsChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PictureSettingsState_VideoResolutionsChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaStreamingState_VideoEnableChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoEnableChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_MediaStreamingState_VideoStreamModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_MediaStreamingState_VideoStreamModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_HomeChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeChanged,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_ResetHomeChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ResetHomeChanged,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_GPSFixStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_fixed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSFixStateChanged,
			_fixed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_GPSUpdateStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GPSUpdateStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_HomeTypeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_HomeTypeChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged(
		const struct arsdk_cmd *cmd,
		uint16_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeDelayChanged,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_GeofenceCenterChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_GeofenceCenterChanged,
			_latitude,
			_longitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_value,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSSettingsState_ReturnHomeMinAltitudeChanged,
			_value,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_CameraState_Orientation(
		const struct arsdk_cmd *cmd,
		int8_t *_tilt,
		int8_t *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_CameraState_Orientation,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_CameraState_DefaultCameraOrientation(
		const struct arsdk_cmd *cmd,
		int8_t *_tilt,
		int8_t *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientation,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_CameraState_OrientationV2(
		const struct arsdk_cmd *cmd,
		float *_tilt,
		float *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_CameraState_OrientationV2,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_CameraState_DefaultCameraOrientationV2(
		const struct arsdk_cmd *cmd,
		float *_tilt,
		float *_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_CameraState_DefaultCameraOrientationV2,
			_tilt,
			_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_CameraState_VelocityRange(
		const struct arsdk_cmd *cmd,
		float *_max_tilt,
		float *_max_pan) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_CameraState_VelocityRange,
			_max_tilt,
			_max_pan);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_AntiflickeringState_ElectricFrequencyChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_frequency) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ElectricFrequencyChanged,
			_frequency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_AntiflickeringState_ModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_AntiflickeringState_ModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSState_NumberOfSatelliteChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_numberOfSatellite) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSState_NumberOfSatelliteChanged,
			_numberOfSatellite);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSState_HomeTypeAvailabilityChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		uint8_t *_available) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeAvailabilityChanged,
			_type,
			_available);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_GPSState_HomeTypeChosenChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_GPSState_HomeTypeChosenChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_PROState_Features(
		const struct arsdk_cmd *cmd,
		uint64_t *_features) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_PROState_Features,
			_features);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_AccessoryState_ConnectedAccessories(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_accessory_type,
		const char **_uid,
		const char **_swVersion,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_AccessoryState_ConnectedAccessories,
			_id,
			_accessory_type,
			_uid,
			_swVersion,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_AccessoryState_Battery(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		uint8_t *_batteryLevel,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_AccessoryState_Battery,
			_id,
			_batteryLevel,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Ardrone3_SoundState_AlertSound(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Ardrone3_SoundState_AlertSound,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_FlatTrim(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_FlatTrim);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_TakeOff(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_TakeOff);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_PCMD(
		const struct arsdk_cmd *cmd,
		uint8_t *_flag,
		int8_t *_roll,
		int8_t *_pitch,
		int8_t *_yaw,
		int8_t *_gaz,
		uint32_t *_timestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_PCMD,
			_flag,
			_roll,
			_pitch,
			_yaw,
			_gaz,
			_timestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_Landing(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_Landing);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_Emergency(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_Emergency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_AutoTakeOffMode(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_AutoTakeOffMode,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_FlyingMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_FlyingMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_PlaneGearBox(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_PlaneGearBox,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Piloting_TogglePilotingMode(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Piloting_TogglePilotingMode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Animations_Flip(
		const struct arsdk_cmd *cmd,
		int32_t *_direction) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Animations_Flip,
			_direction);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Animations_Cap(
		const struct arsdk_cmd *cmd,
		int16_t *_offset) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Animations_Cap,
			_offset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MediaRecord_Picture(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MediaRecord_Picture,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MediaRecord_PictureV2(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MediaRecord_PictureV2);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettings_MaxAltitude(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxAltitude,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettings_MaxTilt(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxTilt,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettings_BankedTurn(
		const struct arsdk_cmd *cmd,
		uint8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettings_BankedTurn,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettings_MaxThrottle(
		const struct arsdk_cmd *cmd,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettings_MaxThrottle,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettings_PreferredPilotingMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettings_PreferredPilotingMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettings_MaxVerticalSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxVerticalSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettings_MaxRotationSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxRotationSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettings_Wheels(
		const struct arsdk_cmd *cmd,
		uint8_t *_present) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettings_Wheels,
			_present);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettings_MaxHorizontalSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxHorizontalSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed(
		const struct arsdk_cmd *cmd,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettings_MaxPlaneModeRotationSpeed,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Settings_CutOutMode(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Settings_CutOutMode,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_GPS_ControllerLatitudeForRun(
		const struct arsdk_cmd *cmd,
		double *_latitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_GPS_ControllerLatitudeForRun,
			_latitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_GPS_ControllerLongitudeForRun(
		const struct arsdk_cmd *cmd,
		double *_longitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_GPS_ControllerLongitudeForRun,
			_longitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Configuration_ControllerType(
		const struct arsdk_cmd *cmd,
		const char **_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Configuration_ControllerType,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Configuration_ControllerName(
		const struct arsdk_cmd *cmd,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Configuration_ControllerName,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessory_LightControl(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_mode,
		uint8_t *_intensity) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessory_LightControl,
			_id,
			_mode,
			_intensity);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessory_ClawControl(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_action) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessory_ClawControl,
			_id,
			_action);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessory_GunControl(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_action) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessory_GunControl,
			_id,
			_action);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteController_SetPairedRemote(
		const struct arsdk_cmd *cmd,
		uint16_t *_msb_mac,
		uint16_t *_mid_mac,
		uint16_t *_lsb_mac) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteController_SetPairedRemote,
			_msb_mac,
			_mid_mac,
			_lsb_mac);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteController_RawMode(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteController_RawMode,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettings_Autorecord(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettings_Autorecord,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettings_ElectricFrequency(
		const struct arsdk_cmd *cmd,
		int32_t *_frequency) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettings_ElectricFrequency,
			_frequency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettings_VideoResolution(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettings_VideoResolution,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Minicam_Picture(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Minicam_Picture);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Minicam_Video(
		const struct arsdk_cmd *cmd,
		int32_t *_record) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Minicam_Video,
			_record);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_Minicam_MassStorageFormat(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_Minicam_MassStorageFormat);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_FlatTrimChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_FlatTrimChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_FlyingStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_AlertStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_AlertStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_AutoTakeOffModeChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_AutoTakeOffModeChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_FlyingModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_FlyingModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_PlaneGearBoxChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_PlaneGearBoxChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingState_PilotingModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingState_PilotingModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MediaRecordState_PictureStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChanged,
			_state,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MediaRecordState_PictureStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MediaRecordState_PictureStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MediaRecordEvent_PictureEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MediaRecordEvent_PictureEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettingsState_MaxAltitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxAltitudeChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettingsState_MaxTiltChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxTiltChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettingsState_BankedTurnChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_BankedTurnChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettingsState_MaxThrottleChanged(
		const struct arsdk_cmd *cmd,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_MaxThrottleChanged,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_PilotingSettingsState_PreferredPilotingModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxVerticalSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxRotationSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettingsState_WheelsChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_present) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_WheelsChanged,
			_present);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxHorizontalSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SpeedSettingsState_MaxPlaneModeRotationSpeedChanged,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SettingsState_ProductMotorsVersionChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_motor,
		const char **_type,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SettingsState_ProductMotorsVersionChanged,
			_motor,
			_type,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SettingsState_ProductInertialVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SettingsState_ProductInertialVersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_SettingsState_CutOutModeChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_SettingsState_CutOutModeChanged,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_FloodControlState_FloodControlChanged(
		const struct arsdk_cmd *cmd,
		uint16_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_FloodControlState_FloodControlChanged,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessoryState_LightState(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_state,
		uint8_t *_intensity,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_LightState,
			_id,
			_state,
			_intensity,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessoryState_ClawState(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_state,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_ClawState,
			_id,
			_state,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_UsbAccessoryState_GunState(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_state,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_UsbAccessoryState_GunState,
			_id,
			_state,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_NavigationDataState_DronePosition(
		const struct arsdk_cmd *cmd,
		float *_posx,
		float *_posy,
		int16_t *_posz,
		int16_t *_psi,
		int16_t *_ts) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DronePosition,
			_posx,
			_posy,
			_posz,
			_psi,
			_ts);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_NavigationDataState_DroneSpeed(
		const struct arsdk_cmd *cmd,
		float *_speed_x,
		float *_speed_y,
		float *_speed_z,
		uint16_t *_ts) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneSpeed,
			_speed_x,
			_speed_y,
			_speed_z,
			_ts);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_NavigationDataState_DroneAltitude(
		const struct arsdk_cmd *cmd,
		float *_altitude,
		uint16_t *_ts) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneAltitude,
			_altitude,
			_ts);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_NavigationDataState_DroneQuaternion(
		const struct arsdk_cmd *cmd,
		float *_q_w,
		float *_q_x,
		float *_q_y,
		float *_q_z,
		uint16_t *_ts) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_NavigationDataState_DroneQuaternion,
			_q_w,
			_q_x,
			_q_y,
			_q_z,
			_ts);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_PowerModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_power_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_PowerModeChanged,
			_power_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_ProductSerialChanged(
		const struct arsdk_cmd *cmd,
		const char **_serial_number) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_ProductSerialChanged,
			_serial_number);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_StateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_StateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_VersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_VersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_PictureChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_result) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_PictureChanged,
			_state,
			_result);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_VideoStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_VideoStateChanged,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_MinicamState_MassStorageFormatChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_MinicamState_MassStorageFormatChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettingsState_AutorecordChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_AutorecordChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettingsState_ElectricFrequencyChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_frequency) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_ElectricFrequencyChanged,
			_frequency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_VideoSettingsState_VideoResolutionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_VideoSettingsState_VideoResolutionChanged,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_ConnectionChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_ConnectionChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_RecordButtonPressed(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RecordButtonPressed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_TakePictureButtonPressed(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_TakePictureButtonPressed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_RawMode(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawMode,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_RawCommands(
		const struct arsdk_cmd *cmd,
		int8_t *_joy0x,
		int8_t *_joy0y,
		int8_t *_joy1x,
		int8_t *_joy1y,
		uint16_t *_buttons) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_RawCommands,
			_joy0x,
			_joy0y,
			_joy1x,
			_joy1y,
			_buttons);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Minidrone_RemoteControllerState_BatteryLevel(
		const struct arsdk_cmd *cmd,
		int8_t *_level) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Minidrone_RemoteControllerState_BatteryLevel,
			_level);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Piloting_PCMD(
		const struct arsdk_cmd *cmd,
		uint8_t *_flag,
		int8_t *_speed,
		int8_t *_turn) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Piloting_PCMD,
			_flag,
			_speed,
			_turn);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Piloting_Posture(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Piloting_Posture,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Piloting_AddCapOffset(
		const struct arsdk_cmd *cmd,
		float *_offset) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Piloting_AddCapOffset,
			_offset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Animations_JumpStop(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Animations_JumpStop);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Animations_JumpCancel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Animations_JumpCancel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Animations_JumpLoad(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Animations_JumpLoad);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Animations_Jump(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Animations_Jump,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Animations_SimpleAnimation(
		const struct arsdk_cmd *cmd,
		int32_t *_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Animations_SimpleAnimation,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecord_Picture(
		const struct arsdk_cmd *cmd,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecord_Picture,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecord_Video(
		const struct arsdk_cmd *cmd,
		int32_t *_record,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecord_Video,
			_record,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecord_PictureV2(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecord_PictureV2);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecord_VideoV2(
		const struct arsdk_cmd *cmd,
		int32_t *_record) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecord_VideoV2,
			_record);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkSettings_WifiSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkSettings_WifiSelection,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Network_WifiScan(
		const struct arsdk_cmd *cmd,
		int32_t *_band) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Network_WifiScan,
			_band);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_Network_WifiAuthChannel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_Network_WifiAuthChannel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AudioSettings_MasterVolume(
		const struct arsdk_cmd *cmd,
		uint8_t *_volume) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AudioSettings_MasterVolume,
			_volume);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AudioSettings_Theme(
		const struct arsdk_cmd *cmd,
		int32_t *_theme) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AudioSettings_Theme,
			_theme);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlan_AllScriptsMetadata(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlan_AllScriptsMetadata);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlan_ScriptUploaded(
		const struct arsdk_cmd *cmd,
		const char **_uuid,
		const char **_md5Hash) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptUploaded,
			_uuid,
			_md5Hash);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlan_ScriptDelete(
		const struct arsdk_cmd *cmd,
		const char **_uuid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlan_ScriptDelete,
			_uuid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlan_PlayScript(
		const struct arsdk_cmd *cmd,
		const char **_uuid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlan_PlayScript,
			_uuid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_SpeedSettings_Outdoor(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_SpeedSettings_Outdoor,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaStreaming_VideoEnable(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaStreaming_VideoEnable,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_VideoSettings_Autorecord(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_VideoSettings_Autorecord,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_PilotingState_PostureChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_PilotingState_PostureChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_PilotingState_AlertStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_PilotingState_AlertStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_PilotingState_SpeedChanged(
		const struct arsdk_cmd *cmd,
		int8_t *_speed,
		int16_t *_realSpeed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_PilotingState_SpeedChanged,
			_speed,
			_realSpeed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AnimationsState_JumpLoadChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpLoadChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AnimationsState_JumpTypeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpTypeChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AnimationsState_JumpMotorProblemChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AnimationsState_JumpMotorProblemChanged,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_SettingsState_ProductGPSVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_SettingsState_ProductGPSVersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordState_PictureStateChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_state,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChanged,
			_state,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordState_VideoStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		uint8_t *_mass_storage_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChanged,
			_state,
			_mass_storage_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordState_PictureStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_PictureStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordState_VideoStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordState_VideoStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordEvent_PictureEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_PictureEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaRecordEvent_VideoEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaRecordEvent_VideoEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkSettingsState_WifiSelectionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkSettingsState_WifiSelectionChanged,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkState_WifiScanListChanged(
		const struct arsdk_cmd *cmd,
		const char **_ssid,
		int16_t *_rssi,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiScanListChanged,
			_ssid,
			_rssi,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkState_AllWifiScanChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiScanChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkState_WifiAuthChannelListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_in_or_out) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkState_WifiAuthChannelListChanged,
			_band,
			_channel,
			_in_or_out);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkState_AllWifiAuthChannelChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkState_AllWifiAuthChannelChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_NetworkState_LinkQualityChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_quality) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_NetworkState_LinkQualityChanged,
			_quality);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AudioSettingsState_MasterVolumeChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_volume) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_MasterVolumeChanged,
			_volume);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_AudioSettingsState_ThemeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_theme) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_AudioSettingsState_ThemeChanged,
			_theme);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlanState_ScriptMetadataListChanged(
		const struct arsdk_cmd *cmd,
		const char **_uuid,
		uint8_t *_version,
		const char **_product,
		const char **_name,
		uint64_t *_lastModified) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptMetadataListChanged,
			_uuid,
			_version,
			_product,
			_name,
			_lastModified);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlanState_AllScriptsMetadataChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_AllScriptsMetadataChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlanState_ScriptUploadChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_resultCode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptUploadChanged,
			_resultCode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlanState_ScriptDeleteChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_resultCode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_ScriptDeleteChanged,
			_resultCode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_RoadPlanState_PlayScriptChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_resultCode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_RoadPlanState_PlayScriptChanged,
			_resultCode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_SpeedSettingsState_OutdoorChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_outdoor) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_SpeedSettingsState_OutdoorChanged,
			_outdoor);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_MediaStreamingState_VideoEnableChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_MediaStreamingState_VideoEnableChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Jpsumo_VideoSettingsState_AutorecordChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Jpsumo_VideoSettingsState_AutorecordChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Wifi_RequestWifiList(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Wifi_RequestWifiList);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Wifi_RequestCurrentWifi(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Wifi_RequestCurrentWifi);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Wifi_ConnectToWifi(
		const struct arsdk_cmd *cmd,
		const char **_bssid,
		const char **_ssid,
		const char **_passphrase) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Wifi_ConnectToWifi,
			_bssid,
			_ssid,
			_passphrase);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Wifi_ForgetWifi(
		const struct arsdk_cmd *cmd,
		const char **_ssid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Wifi_ForgetWifi,
			_ssid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Wifi_WifiAuthChannel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Wifi_WifiAuthChannel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Device_RequestDeviceList(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Device_RequestDeviceList);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Device_RequestCurrentDevice(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Device_RequestCurrentDevice);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Device_ConnectToDevice(
		const struct arsdk_cmd *cmd,
		const char **_deviceName) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Device_ConnectToDevice,
			_deviceName);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Settings_AllSettings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Settings_AllSettings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Settings_Reset(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Settings_Reset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Common_AllStates(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Common_AllStates);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Common_CurrentDateTime(
		const struct arsdk_cmd *cmd,
		const char **_datetime) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Common_CurrentDateTime,
			_datetime);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettings_AccessPointSSID(
		const struct arsdk_cmd *cmd,
		const char **_ssid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointSSID,
			_ssid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettings_AccessPointChannel(
		const struct arsdk_cmd *cmd,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_AccessPointChannel,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettings_WifiSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSelection,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettings_WifiSecurity(
		const struct arsdk_cmd *cmd,
		int32_t *_security_type,
		const char **_key) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettings_WifiSecurity,
			_security_type,
			_key);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Camera_ResetOrientation(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Camera_ResetOrientation);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_GamepadInfos_GetGamepadControls(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_GamepadInfos_GetGamepadControls);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappings_GetCurrentButtonMappings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetCurrentButtonMappings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappings_GetAvailableButtonMappings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_GetAvailableButtonMappings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappings_SetButtonMapping(
		const struct arsdk_cmd *cmd,
		int32_t *_key_id,
		const char **_mapping_uid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_SetButtonMapping,
			_key_id,
			_mapping_uid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappings_DefaultButtonMapping(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappings_DefaultButtonMapping);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappings_GetCurrentAxisMappings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetCurrentAxisMappings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappings_GetAvailableAxisMappings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappings_GetAvailableAxisMappings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappings_SetAxisMapping(
		const struct arsdk_cmd *cmd,
		int32_t *_axis_id,
		const char **_mapping_uid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappings_SetAxisMapping,
			_axis_id,
			_mapping_uid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappings_DefaultAxisMapping(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappings_DefaultAxisMapping);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFilters_GetCurrentAxisFilters(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetCurrentAxisFilters);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFilters_GetPresetAxisFilters(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFilters_GetPresetAxisFilters);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFilters_SetAxisFilter(
		const struct arsdk_cmd *cmd,
		int32_t *_axis_id,
		const char **_filter_uid_or_builder) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFilters_SetAxisFilter,
			_axis_id,
			_filter_uid_or_builder);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFilters_DefaultAxisFilters(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFilters_DefaultAxisFilters);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CoPiloting_SetPilotingSource(
		const struct arsdk_cmd *cmd,
		int32_t *_source) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CoPiloting_SetPilotingSource,
			_source);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Calibration_EnableMagnetoCalibrationQualityUpdates,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Calibration_StartCalibration(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Calibration_StartCalibration);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Calibration_AbortCalibration(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Calibration_AbortCalibration);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_Factory_Reset(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_Factory_Reset);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiList(
		const struct arsdk_cmd *cmd,
		const char **_bssid,
		const char **_ssid,
		uint8_t *_secured,
		uint8_t *_saved,
		int32_t *_rssi,
		int32_t *_frequency) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiList,
			_bssid,
			_ssid,
			_secured,
			_saved,
			_rssi,
			_frequency);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_ConnexionChanged(
		const struct arsdk_cmd *cmd,
		const char **_ssid,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_ConnexionChanged,
			_ssid,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiAuthChannelListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_in_or_out) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChanged,
			_band,
			_channel,
			_in_or_out);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_AllWifiAuthChannelChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_AllWifiAuthChannelChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiSignalChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_level) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiSignalChanged,
			_level);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiAuthChannelListChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_in_or_out,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiAuthChannelListChangedV2,
			_band,
			_channel,
			_in_or_out,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiCountryChanged(
		const struct arsdk_cmd *cmd,
		const char **_code) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiCountryChanged,
			_code);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_WifiState_WifiEnvironmentChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_environment) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_WifiState_WifiEnvironmentChanged,
			_environment);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_DeviceState_DeviceList(
		const struct arsdk_cmd *cmd,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_DeviceState_DeviceList,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_DeviceState_ConnexionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_status,
		const char **_deviceName,
		uint16_t *_deviceProductID) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_DeviceState_ConnexionChanged,
			_status,
			_deviceName,
			_deviceProductID);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_AllSettingsChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_AllSettingsChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_ResetChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_ResetChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_ProductSerialChanged(
		const struct arsdk_cmd *cmd,
		const char **_serialNumber) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductSerialChanged,
			_serialNumber);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_ProductVariantChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_variant) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVariantChanged,
			_variant);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_ProductVersionChanged(
		const struct arsdk_cmd *cmd,
		const char **_software,
		const char **_hardware) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_ProductVersionChanged,
			_software,
			_hardware);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SettingsState_CPUID(
		const struct arsdk_cmd *cmd,
		const char **_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SettingsState_CPUID,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CommonState_AllStatesChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CommonState_AllStatesChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CommonState_CurrentDateTimeChanged(
		const struct arsdk_cmd *cmd,
		const char **_datetime) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CommonState_CurrentDateTimeChanged,
			_datetime);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SkyControllerState_BatteryChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_percent) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryChanged,
			_percent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SkyControllerState_GpsFixChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_fixed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsFixChanged,
			_fixed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SkyControllerState_GpsPositionChanged(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		float *_heading) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_GpsPositionChanged,
			_latitude,
			_longitude,
			_altitude,
			_heading);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SkyControllerState_BatteryState(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_BatteryState,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_SkyControllerState_AttitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_q0,
		float *_q1,
		float *_q2,
		float *_q3) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_SkyControllerState_AttitudeChanged,
			_q0,
			_q1,
			_q2,
			_q3);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged(
		const struct arsdk_cmd *cmd,
		const char **_ssid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointSSIDChanged,
			_ssid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_AccessPointChannelChanged,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettingsState_WifiSelectionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSelectionChanged,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AccessPointSettingsState_WifiSecurityChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_security_type,
		const char **_key) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AccessPointSettingsState_WifiSecurityChanged,
			_security_type,
			_key);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_GamepadInfosState_GamepadControl(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_id,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_GamepadControl,
			_type,
			_id,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_GamepadInfosState_AllGamepadControlsSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_GamepadInfosState_AllGamepadControlsSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappingsState_CurrentButtonMappings(
		const struct arsdk_cmd *cmd,
		int32_t *_key_id,
		const char **_mapping_uid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_CurrentButtonMappings,
			_key_id,
			_mapping_uid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllCurrentButtonMappingsSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappingsState_AvailableButtonMappings(
		const struct arsdk_cmd *cmd,
		const char **_mapping_uid,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AvailableButtonMappings,
			_mapping_uid,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonMappingsState_AllAvailableButtonsMappingsSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappingsState_CurrentAxisMappings(
		const struct arsdk_cmd *cmd,
		int32_t *_axis_id,
		const char **_mapping_uid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_CurrentAxisMappings,
			_axis_id,
			_mapping_uid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllCurrentAxisMappingsSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappingsState_AvailableAxisMappings(
		const struct arsdk_cmd *cmd,
		const char **_mapping_uid,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AvailableAxisMappings,
			_mapping_uid,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisMappingsState_AllAvailableAxisMappingsSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFiltersState_CurrentAxisFilters(
		const struct arsdk_cmd *cmd,
		int32_t *_axis_id,
		const char **_filter_uid_or_builder) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_CurrentAxisFilters,
			_axis_id,
			_filter_uid_or_builder);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFiltersState_AllCurrentFiltersSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllCurrentFiltersSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFiltersState_PresetAxisFilters(
		const struct arsdk_cmd *cmd,
		const char **_filter_uid,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_PresetAxisFilters,
			_filter_uid,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_AxisFiltersState_AllPresetFiltersSent(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_AxisFiltersState_AllPresetFiltersSent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CoPilotingState_PilotingSource(
		const struct arsdk_cmd *cmd,
		int32_t *_source) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CoPilotingState_PilotingSource,
			_source);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CalibrationState_MagnetoCalibrationState(
		const struct arsdk_cmd *cmd,
		int32_t *_status,
		uint8_t *_X_Quality,
		uint8_t *_Y_Quality,
		uint8_t *_Z_Quality) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationState,
			_status,
			_X_Quality,
			_Y_Quality,
			_Z_Quality);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationQualityUpdatesState,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CalibrationState_MagnetoCalibrationStateV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CalibrationState_MagnetoCalibrationStateV2,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_ButtonEvents_Settings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_ButtonEvents_Settings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Skyctrl_CommonEventState_Shutdown(
		const struct arsdk_cmd *cmd,
		int32_t *_reason) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Skyctrl_CommonEventState_Shutdown,
			_reason);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Piloting_PCMD(
		const struct arsdk_cmd *cmd,
		uint8_t *_flag,
		uint8_t *_throttle,
		int8_t *_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Piloting_PCMD,
			_flag,
			_throttle,
			_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Piloting_UserTakeOff(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Piloting_UserTakeOff,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Piloting_MotorMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Piloting_MotorMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingSettings_Set(
		const struct arsdk_cmd *cmd,
		int32_t *_setting,
		float *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingSettings_Set,
			_setting,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecord_PictureV2(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecord_PictureV2);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecord_VideoV2(
		const struct arsdk_cmd *cmd,
		int32_t *_record) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecord_VideoV2,
			_record);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkSettings_WifiSelection(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkSettings_WifiSelection,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Network_WifiScan(
		const struct arsdk_cmd *cmd,
		int32_t *_band) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Network_WifiScan,
			_band);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Network_WifiAuthChannel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Network_WifiAuthChannel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaStreaming_VideoEnable(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaStreaming_VideoEnable,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_VideoSettings_Autorecord(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_VideoSettings_Autorecord,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_VideoSettings_VideoMode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_VideoSettings_VideoMode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_Sounds_Buzz(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_Sounds_Buzz,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingState_AlertStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingState_AlertStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingState_FlyingStateChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingState_FlyingStateChanged,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingState_MotorModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingState_MotorModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingState_AttitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_roll,
		float *_pitch,
		float *_yaw) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingState_AttitudeChanged,
			_roll,
			_pitch,
			_yaw);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingState_AltitudeChanged(
		const struct arsdk_cmd *cmd,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingState_AltitudeChanged,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_PilotingSettingsState_SettingChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_setting,
		float *_current,
		float *_min,
		float *_max,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_PilotingSettingsState_SettingChanged,
			_setting,
			_current,
			_min,
			_max,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecordState_PictureStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecordState_PictureStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecordState_VideoStateChangedV2(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecordState_VideoStateChangedV2,
			_state,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecordEvent_PictureEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecordEvent_PictureEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaRecordEvent_VideoEventChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_event,
		int32_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaRecordEvent_VideoEventChanged,
			_event,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkSettingsState_WifiSelectionChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkSettingsState_WifiSelectionChanged,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkState_WifiScanListChanged(
		const struct arsdk_cmd *cmd,
		const char **_ssid,
		int16_t *_rssi,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkState_WifiScanListChanged,
			_ssid,
			_rssi,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkState_AllWifiScanChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiScanChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkState_WifiAuthChannelListChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_in_or_out) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkState_WifiAuthChannelListChanged,
			_band,
			_channel,
			_in_or_out);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkState_AllWifiAuthChannelChanged(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkState_AllWifiAuthChannelChanged);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_NetworkState_LinkQualityChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_quality) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_NetworkState_LinkQualityChanged,
			_quality);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_MediaStreamingState_VideoEnableChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_MediaStreamingState_VideoEnableChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_VideoSettingsState_AutorecordChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_VideoSettingsState_AutorecordChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_VideoSettingsState_VideoModeChanged(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_VideoSettingsState_VideoModeChanged,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Powerup_SoundsState_BuzzChanged(
		const struct arsdk_cmd *cmd,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Powerup_SoundsState_BuzzChanged,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Generic_Default(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Generic_Default);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Stop(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Stop);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Configure_geographic(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Configure_geographic,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Configure_relative(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Configure_relative,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Configure_leash(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Configure_leash,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Stop_animation(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Stop_animation);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start_helicoid_anim(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_revolution_number,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start_helicoid_anim,
			_use_default,
			_speed,
			_revolution_number,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start_swing_anim(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start_swing_anim,
			_use_default,
			_speed,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start_boomerang_anim(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start_boomerang_anim,
			_use_default,
			_speed,
			_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start_candle_anim(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start_candle_anim,
			_use_default,
			_speed,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Start_dolly_slide_anim(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_angle,
		float *_horizontal_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Start_dolly_slide_anim,
			_use_default,
			_speed,
			_angle,
			_horizontal_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_framing_position(
		const struct arsdk_cmd *cmd,
		int8_t *_horizontal,
		int8_t *_vertical) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_framing_position,
			_horizontal,
			_vertical);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_image_detection(
		const struct arsdk_cmd *cmd,
		float *_target_azimuth,
		float *_target_elevation,
		float *_change_of_scale,
		uint8_t *_confidence_index,
		uint8_t *_is_new_selection,
		uint64_t *_timestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_image_detection,
			_target_azimuth,
			_target_elevation,
			_change_of_scale,
			_confidence_index,
			_is_new_selection,
			_timestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Set_target_is_controller(
		const struct arsdk_cmd *cmd,
		uint8_t *_target_is_controller) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Set_target_is_controller,
			_target_is_controller);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_State(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		int32_t *_behavior,
		int32_t *_animation,
		uint16_t *_animation_available) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_State,
			_mode,
			_behavior,
			_animation,
			_animation_available);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Mode_info(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		uint16_t *_missing_requirements,
		uint16_t *_improvements) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Mode_info,
			_mode,
			_missing_requirements,
			_improvements);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Geographic_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Geographic_config,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Relative_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Relative_config,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Leash_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_distance,
		float *_elevation,
		float *_azimuth) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Leash_config,
			_use_default,
			_distance,
			_elevation,
			_azimuth);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_trajectory(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude,
		float *_north_speed,
		float *_east_speed,
		float *_down_speed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_trajectory,
			_latitude,
			_longitude,
			_altitude,
			_north_speed,
			_east_speed,
			_down_speed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Helicoid_anim_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_revolution_nb,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Helicoid_anim_config,
			_use_default,
			_speed,
			_revolution_nb,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Swing_anim_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Swing_anim_config,
			_use_default,
			_speed,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Boomerang_anim_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Boomerang_anim_config,
			_use_default,
			_speed,
			_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Candle_anim_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_vertical_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Candle_anim_config,
			_use_default,
			_speed,
			_vertical_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Dolly_slide_anim_config(
		const struct arsdk_cmd *cmd,
		uint8_t *_use_default,
		float *_speed,
		float *_angle,
		float *_horizontal_distance) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Dolly_slide_anim_config,
			_use_default,
			_speed,
			_angle,
			_horizontal_distance);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_framing_position_changed(
		const struct arsdk_cmd *cmd,
		int8_t *_horizontal,
		int8_t *_vertical) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_framing_position_changed,
			_horizontal,
			_vertical);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_image_detection_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_image_detection_state,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Follow_me_Target_is_controller(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Follow_me_Target_is_controller,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Scan(
		const struct arsdk_cmd *cmd,
		uint8_t *_band) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Scan,
			_band);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Update_authorized_channels(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Update_authorized_channels);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Set_ap_channel(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Set_ap_channel,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Set_security(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_key,
		int32_t *_key_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Set_security,
			_type,
			_key,
			_key_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Set_country(
		const struct arsdk_cmd *cmd,
		int32_t *_selection_mode,
		const char **_code) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Set_country,
			_selection_mode,
			_code);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Set_environment(
		const struct arsdk_cmd *cmd,
		int32_t *_environment) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Set_environment,
			_environment);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Scanned_item(
		const struct arsdk_cmd *cmd,
		const char **_ssid,
		int16_t *_rssi,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Scanned_item,
			_ssid,
			_rssi,
			_band,
			_channel,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Authorized_channel(
		const struct arsdk_cmd *cmd,
		int32_t *_band,
		uint8_t *_channel,
		uint8_t *_environment,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Authorized_channel,
			_band,
			_channel,
			_environment,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Ap_channel_changed(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		int32_t *_band,
		uint8_t *_channel) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Ap_channel_changed,
			_type,
			_band,
			_channel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Security_changed(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_key,
		int32_t *_key_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Security_changed,
			_type,
			_key,
			_key_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Country_changed(
		const struct arsdk_cmd *cmd,
		int32_t *_selection_mode,
		const char **_code) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Country_changed,
			_selection_mode,
			_code);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Environment_changed(
		const struct arsdk_cmd *cmd,
		int32_t *_environment) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Environment_changed,
			_environment);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Rssi_changed(
		const struct arsdk_cmd *cmd,
		int16_t *_rssi) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Rssi_changed,
			_rssi);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Supported_countries(
		const struct arsdk_cmd *cmd,
		const char **_countries) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Supported_countries,
			_countries);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Wifi_Supported_security_types(
		const struct arsdk_cmd *cmd,
		uint8_t *_types) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Wifi_Supported_security_types,
			_types);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Monitor_channels(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Monitor_channels,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Start_calibration(
		const struct arsdk_cmd *cmd,
		int32_t *_calibration_type,
		int32_t *_channel_action,
		int32_t *_channel_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Start_calibration,
			_calibration_type,
			_channel_action,
			_channel_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Invert_channel(
		const struct arsdk_cmd *cmd,
		int32_t *_action,
		uint8_t *_flag) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Invert_channel,
			_action,
			_flag);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Abort_calibration(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Abort_calibration);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Reset_calibration(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Reset_calibration);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Enable_receiver(
		const struct arsdk_cmd *cmd,
		uint8_t *_enable) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Enable_receiver,
			_enable);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Receiver_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		const char **_protocol,
		uint8_t *_enabled) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Receiver_state,
			_state,
			_protocol,
			_enabled);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Channels_monitor_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Channels_monitor_state,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Channel_value(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		int32_t *_action,
		int16_t *_value,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Channel_value,
			_id,
			_action,
			_value,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Calibration_state(
		const struct arsdk_cmd *cmd,
		int32_t *_calibration_type,
		int32_t *_channel_action,
		uint32_t *_required,
		uint32_t *_calibrated,
		uint8_t *_neutral_calibrated) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Calibration_state,
			_calibration_type,
			_channel_action,
			_required,
			_calibrated,
			_neutral_calibrated);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rc_Channel_action_item(
		const struct arsdk_cmd *cmd,
		int32_t *_action,
		uint32_t *_supported_type,
		int32_t *_calibrated_type,
		uint8_t *_inverted) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rc_Channel_action_item,
			_action,
			_supported_type,
			_calibrated_type,
			_inverted);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Discover_drones(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Discover_drones);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Connect(
		const struct arsdk_cmd *cmd,
		const char **_serial,
		const char **_key) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Connect,
			_serial,
			_key);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Forget(
		const struct arsdk_cmd *cmd,
		const char **_serial) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Forget,
			_serial);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Drone_list_item(
		const struct arsdk_cmd *cmd,
		const char **_serial,
		uint16_t *_model,
		const char **_name,
		uint8_t *_connection_order,
		uint8_t *_active,
		uint8_t *_visible,
		int32_t *_security,
		uint8_t *_has_saved_key,
		int8_t *_rssi,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Drone_list_item,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Connection_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		const char **_serial,
		uint16_t *_model,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Connection_state,
			_state,
			_serial,
			_model,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Authentication_failed(
		const struct arsdk_cmd *cmd,
		const char **_serial,
		uint16_t *_model,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Authentication_failed,
			_serial,
			_model,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Connection_refused(
		const struct arsdk_cmd *cmd,
		const char **_serial,
		uint16_t *_model,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Connection_refused,
			_serial,
			_model,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Drone_manager_Known_drone_item(
		const struct arsdk_cmd *cmd,
		const char **_serial,
		uint16_t *_model,
		const char **_name,
		int32_t *_security,
		uint8_t *_has_saved_key,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Drone_manager_Known_drone_item,
			_serial,
			_model,
			_name,
			_security,
			_has_saved_key,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Grab(
		const struct arsdk_cmd *cmd,
		uint32_t *_buttons,
		uint32_t *_axes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Grab,
			_buttons,
			_axes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Map_button_action(
		const struct arsdk_cmd *cmd,
		uint16_t *_product,
		int32_t *_action,
		uint32_t *_buttons) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Map_button_action,
			_product,
			_action,
			_buttons);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Map_axis_action(
		const struct arsdk_cmd *cmd,
		uint16_t *_product,
		int32_t *_action,
		int32_t *_axis,
		uint32_t *_buttons) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Map_axis_action,
			_product,
			_action,
			_axis,
			_buttons);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Reset_mapping(
		const struct arsdk_cmd *cmd,
		uint16_t *_product) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Reset_mapping,
			_product);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Set_expo(
		const struct arsdk_cmd *cmd,
		uint16_t *_product,
		int32_t *_axis,
		int32_t *_expo) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Set_expo,
			_product,
			_axis,
			_expo);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Set_inverted(
		const struct arsdk_cmd *cmd,
		uint16_t *_product,
		int32_t *_axis,
		uint8_t *_inverted) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Set_inverted,
			_product,
			_axis,
			_inverted);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Enter_volatile_mapping(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Enter_volatile_mapping);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Exit_volatile_mapping(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Exit_volatile_mapping);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Grab_state(
		const struct arsdk_cmd *cmd,
		uint32_t *_buttons,
		uint32_t *_axes,
		uint32_t *_buttons_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Grab_state,
			_buttons,
			_axes,
			_buttons_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Grab_button_event(
		const struct arsdk_cmd *cmd,
		uint32_t *_button,
		int32_t *_event) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Grab_button_event,
			_button,
			_event);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Grab_axis_event(
		const struct arsdk_cmd *cmd,
		uint32_t *_axis,
		int8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Grab_axis_event,
			_axis,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Button_mapping_item(
		const struct arsdk_cmd *cmd,
		uint32_t *_uid,
		uint16_t *_product,
		int32_t *_action,
		uint32_t *_buttons,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Button_mapping_item,
			_uid,
			_product,
			_action,
			_buttons,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Axis_mapping_item(
		const struct arsdk_cmd *cmd,
		uint32_t *_uid,
		uint16_t *_product,
		int32_t *_action,
		int32_t *_axis,
		uint32_t *_buttons,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Axis_mapping_item,
			_uid,
			_product,
			_action,
			_axis,
			_buttons,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Application_axis_event(
		const struct arsdk_cmd *cmd,
		int32_t *_action,
		int8_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Application_axis_event,
			_action,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Application_button_event(
		const struct arsdk_cmd *cmd,
		int32_t *_action) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Application_button_event,
			_action);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Expo_map_item(
		const struct arsdk_cmd *cmd,
		uint32_t *_uid,
		uint16_t *_product,
		int32_t *_axis,
		int32_t *_expo,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Expo_map_item,
			_uid,
			_product,
			_axis,
			_expo,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Inverted_map_item(
		const struct arsdk_cmd *cmd,
		uint32_t *_uid,
		uint16_t *_product,
		int32_t *_axis,
		uint8_t *_inverted,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Inverted_map_item,
			_uid,
			_product,
			_axis,
			_inverted,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Active_product(
		const struct arsdk_cmd *cmd,
		uint16_t *_product) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Active_product,
			_product);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_Volatile_mapping_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_active) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_Volatile_mapping_state,
			_active);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Get_all_settings(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Get_all_settings);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Set_setting(
		const struct arsdk_cmd *cmd,
		uint16_t *_id,
		const char **_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Set_setting,
			_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Tag(
		const struct arsdk_cmd *cmd,
		const char **_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Tag,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Settings_info(
		const struct arsdk_cmd *cmd,
		uint8_t *_list_flags,
		uint16_t *_id,
		const char **_label,
		int32_t *_type,
		int32_t *_mode,
		const char **_range_min,
		const char **_range_max,
		const char **_range_step,
		const char **_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Settings_info,
			_list_flags,
			_id,
			_label,
			_type,
			_mode,
			_range_min,
			_range_max,
			_range_step,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Settings_list(
		const struct arsdk_cmd *cmd,
		uint16_t *_id,
		const char **_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Settings_list,
			_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Debug_Tag_notify(
		const struct arsdk_cmd *cmd,
		const char **_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Debug_Tag_notify,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Controller_info_Gps(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude,
		float *_horizontal_accuracy,
		float *_vertical_accuracy,
		float *_north_speed,
		float *_east_speed,
		float *_down_speed,
		double *_timestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Controller_info_Gps,
			_latitude,
			_longitude,
			_altitude,
			_horizontal_accuracy,
			_vertical_accuracy,
			_north_speed,
			_east_speed,
			_down_speed,
			_timestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Controller_info_Barometer(
		const struct arsdk_cmd *cmd,
		float *_pressure,
		double *_timestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Controller_info_Barometer,
			_pressure,
			_timestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Controller_info_Validity_from_drone(
		const struct arsdk_cmd *cmd,
		uint8_t *_is_valid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Controller_info_Validity_from_drone,
			_is_valid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_mini_Map_button_action(
		const struct arsdk_cmd *cmd,
		uint8_t *_modes,
		int32_t *_action,
		uint32_t *_buttons) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_mini_Map_button_action,
			_modes,
			_action,
			_buttons);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_mini_Map_axis_action(
		const struct arsdk_cmd *cmd,
		uint8_t *_modes,
		int32_t *_action,
		int8_t *_axis,
		uint32_t *_buttons) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_mini_Map_axis_action,
			_modes,
			_action,
			_axis,
			_buttons);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_mini_Reset_mapping(
		const struct arsdk_cmd *cmd,
		uint8_t *_modes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_mini_Reset_mapping,
			_modes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_mini_Button_mapping_item(
		const struct arsdk_cmd *cmd,
		uint16_t *_uid,
		uint8_t *_modes,
		int32_t *_action,
		uint32_t *_buttons,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_mini_Button_mapping_item,
			_uid,
			_modes,
			_action,
			_buttons,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mapper_mini_Axis_mapping_item(
		const struct arsdk_cmd *cmd,
		uint16_t *_uid,
		uint8_t *_modes,
		int32_t *_action,
		int8_t *_axis,
		uint32_t *_buttons,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mapper_mini_Axis_mapping_item,
			_uid,
			_modes,
			_action,
			_axis,
			_buttons,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Activate(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Activate,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Deactivate(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Deactivate,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Set_sensitivity(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_range) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Set_sensitivity,
			_cam_id,
			_range);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Flat_field_calibrate(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibrate,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Set_flat_field_calibration_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Set_flat_field_calibration_mode,
			_cam_id,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Camera_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Camera_state,
			_cam_id,
			_state,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Sensitivity(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_current_range,
		uint8_t *_available_ranges,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Sensitivity,
			_cam_id,
			_current_range,
			_available_ranges,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Calibration_infos(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_roll,
		float *_pitch,
		float *_yaw,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Calibration_infos,
			_cam_id,
			_roll,
			_pitch,
			_yaw,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Charging_status(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Charging_status,
			_cam_id,
			_state,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Flat_field_calibration_status(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_status,
			_cam_id,
			_state,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_cam_Flat_field_calibration_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_cam_Flat_field_calibration_mode,
			_cam_id,
			_mode,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_exposure_settings(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_shutter_speed,
		int32_t *_iso_sensitivity,
		int32_t *_max_iso_sensitivity,
		int32_t *_metering_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_exposure_settings,
			_cam_id,
			_mode,
			_shutter_speed,
			_iso_sensitivity,
			_max_iso_sensitivity,
			_metering_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Lock_exposure(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Lock_exposure,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Lock_exposure_on_roi(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_roi_center_x,
		float *_roi_center_y) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Lock_exposure_on_roi,
			_cam_id,
			_roi_center_x,
			_roi_center_y);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Unlock_exposure(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Unlock_exposure,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_white_balance(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_temperature) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_white_balance,
			_cam_id,
			_mode,
			_temperature);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_white_balance_lock(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_white_balance_lock,
			_cam_id,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_ev_compensation(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_ev_compensation,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_antiflicker_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_antiflicker_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_style(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_style) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_style,
			_cam_id,
			_style);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_style_params(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int8_t *_saturation,
		int8_t *_contrast,
		int8_t *_sharpness) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_style_params,
			_cam_id,
			_saturation,
			_contrast,
			_sharpness);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_zoom_target(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_control_mode,
		float *_target) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_zoom_target,
			_cam_id,
			_control_mode,
			_target);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Reset_zoom(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Reset_zoom,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_max_zoom_speed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_max_zoom_speed,
			_cam_id,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_zoom_velocity_quality_degradation(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint8_t *_allow) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_zoom_velocity_quality_degradation,
			_cam_id,
			_allow);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_hdr_setting(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_hdr_setting,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_camera_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_camera_mode,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_recording_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_resolution,
		int32_t *_framerate,
		int32_t *_hyperlapse) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_recording_mode,
			_cam_id,
			_mode,
			_resolution,
			_framerate,
			_hyperlapse);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_photo_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_format,
		int32_t *_file_format,
		int32_t *_burst,
		int32_t *_bracketing,
		float *_capture_interval) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_photo_mode,
			_cam_id,
			_mode,
			_format,
			_file_format,
			_burst,
			_bracketing,
			_capture_interval);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_streaming_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_streaming_mode,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Take_photo(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Take_photo,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Stop_photo(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Stop_photo,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Start_recording(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Start_recording,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Stop_recording(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Stop_recording,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_autorecord(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_autorecord,
			_cam_id,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Set_alignment_offsets(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_yaw,
		float *_pitch,
		float *_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Set_alignment_offsets,
			_cam_id,
			_yaw,
			_pitch,
			_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Reset_alignment_offsets(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Reset_alignment_offsets,
			_cam_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Camera_capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_model,
		uint8_t *_exposure_modes,
		int32_t *_exposure_lock_supported,
		int32_t *_exposure_roi_lock_supported,
		uint64_t *_ev_compensations,
		uint32_t *_white_balance_modes,
		uint64_t *_custom_white_balance_temperatures,
		int32_t *_white_balance_lock_supported,
		uint16_t *_styles,
		uint8_t *_camera_modes,
		uint16_t *_hyperlapse_values,
		uint16_t *_bracketing_presets,
		uint16_t *_burst_values,
		uint8_t *_streaming_modes,
		float *_timelapse_interval_min,
		float *_gpslapse_interval_min,
		uint16_t *_auto_exposure_metering_modes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Camera_capabilities,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Recording_capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_id,
		uint16_t *_recording_modes,
		uint16_t *_resolutions,
		uint32_t *_framerates,
		int32_t *_hdr,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Recording_capabilities,
			_id,
			_recording_modes,
			_resolutions,
			_framerates,
			_hdr,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Photo_capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_id,
		uint16_t *_photo_modes,
		uint16_t *_photo_formats,
		uint16_t *_photo_file_formats,
		int32_t *_hdr,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Photo_capabilities,
			_id,
			_photo_modes,
			_photo_formats,
			_photo_file_formats,
			_hdr,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Antiflicker_capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_supported_modes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Antiflicker_capabilities,
			_supported_modes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Exposure_settings(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_manual_shutter_speed,
		uint64_t *_manual_shutter_speed_capabilities,
		int32_t *_manual_iso_sensitivity,
		uint64_t *_manual_iso_sensitivity_capabilities,
		int32_t *_max_iso_sensitivity,
		uint64_t *_max_iso_sensitivities_capabilities,
		int32_t *_metering_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Exposure_settings,
			_cam_id,
			_mode,
			_manual_shutter_speed,
			_manual_shutter_speed_capabilities,
			_manual_iso_sensitivity,
			_manual_iso_sensitivity_capabilities,
			_max_iso_sensitivity,
			_max_iso_sensitivities_capabilities,
			_metering_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Exposure(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_shutter_speed,
		int32_t *_iso_sensitivity,
		int32_t *_lock,
		float *_lock_roi_x,
		float *_lock_roi_y,
		float *_lock_roi_width,
		float *_lock_roi_height) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Exposure,
			_cam_id,
			_shutter_speed,
			_iso_sensitivity,
			_lock,
			_lock_roi_x,
			_lock_roi_y,
			_lock_roi_width,
			_lock_roi_height);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_White_balance(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_temperature,
		int32_t *_lock) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_White_balance,
			_cam_id,
			_mode,
			_temperature,
			_lock);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Ev_compensation(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Ev_compensation,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Antiflicker_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Antiflicker_mode,
			_mode,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Style(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_style,
		int8_t *_saturation,
		int8_t *_saturation_min,
		int8_t *_saturation_max,
		int8_t *_contrast,
		int8_t *_contrast_min,
		int8_t *_contrast_max,
		int8_t *_sharpness,
		int8_t *_sharpness_min,
		int8_t *_sharpness_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Style,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Zoom_level(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_level) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Zoom_level,
			_cam_id,
			_level);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Zoom_info(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_available,
		float *_high_quality_maximum_level,
		float *_maximum_level) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Zoom_info,
			_cam_id,
			_available,
			_high_quality_maximum_level,
			_maximum_level);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Max_zoom_speed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_min,
		float *_max,
		float *_current) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Max_zoom_speed,
			_cam_id,
			_min,
			_max,
			_current);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Zoom_velocity_quality_degradation(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint8_t *_allowed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Zoom_velocity_quality_degradation,
			_cam_id,
			_allowed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Hdr_setting(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Hdr_setting,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Hdr(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_available,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Hdr,
			_cam_id,
			_available,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Camera_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Camera_mode,
			_cam_id,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Recording_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_resolution,
		int32_t *_framerate,
		int32_t *_hyperlapse,
		uint32_t *_bitrate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Recording_mode,
			_cam_id,
			_mode,
			_resolution,
			_framerate,
			_hyperlapse,
			_bitrate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Photo_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_mode,
		int32_t *_format,
		int32_t *_file_format,
		int32_t *_burst,
		int32_t *_bracketing,
		float *_capture_interval) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Photo_mode,
			_cam_id,
			_mode,
			_format,
			_file_format,
			_burst,
			_bracketing,
			_capture_interval);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Streaming_mode(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Streaming_mode,
			_cam_id,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Photo_progress(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_result,
		uint8_t *_photo_count,
		const char **_media_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Photo_progress,
			_cam_id,
			_result,
			_photo_count,
			_media_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Photo_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_available,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Photo_state,
			_cam_id,
			_available,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Recording_progress(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_result,
		const char **_media_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Recording_progress,
			_cam_id,
			_result,
			_media_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Recording_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_available,
		int32_t *_state,
		uint64_t *_start_timestamp) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Recording_state,
			_cam_id,
			_available,
			_state,
			_start_timestamp);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Autorecord(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Autorecord,
			_cam_id,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Camera_states(
		const struct arsdk_cmd *cmd,
		uint32_t *_active_cameras) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Camera_states,
			_active_cameras);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Next_photo_delay(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		float *_remaining) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Next_photo_delay,
			_mode,
			_remaining);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Camera_Alignment_offsets(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		float *_min_bound_yaw,
		float *_max_bound_yaw,
		float *_current_yaw,
		float *_min_bound_pitch,
		float *_max_bound_pitch,
		float *_current_pitch,
		float *_min_bound_roll,
		float *_max_bound_roll,
		float *_current_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Camera_Alignment_offsets,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Cancel(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Cancel);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_flip(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_flip,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_horizontal_panorama(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_rotation_angle,
		float *_rotation_speed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_horizontal_panorama,
			_provided_params,
			_rotation_angle,
			_rotation_speed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_dronie(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_dronie,
			_provided_params,
			_speed,
			_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_horizontal_reveal(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_horizontal_reveal,
			_provided_params,
			_speed,
			_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_vertical_reveal(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_vertical_reveal,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_spiral(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_radius_variation,
		float *_vertical_distance,
		float *_revolution_nb,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_spiral,
			_provided_params,
			_speed,
			_radius_variation,
			_vertical_distance,
			_revolution_nb,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_parabola(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_vertical_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_parabola,
			_provided_params,
			_speed,
			_vertical_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_candle(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_vertical_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_candle,
			_provided_params,
			_speed,
			_vertical_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_dolly_slide(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_angle,
		float *_horizontal_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_dolly_slide,
			_provided_params,
			_speed,
			_angle,
			_horizontal_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_vertigo(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_duration,
		float *_max_zoom_level,
		int32_t *_finish_action,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_vertigo,
			_provided_params,
			_duration,
			_max_zoom_level,
			_finish_action,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_twist_up(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_twist_up,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_position_twist_up(
		const struct arsdk_cmd *cmd,
		uint8_t *_provided_params,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_position_twist_up,
			_provided_params,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_horizontal_180_photo_panorama(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_horizontal_180_photo_panorama);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_vertical_180_photo_panorama(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_vertical_180_photo_panorama);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Start_spherical_photo_panorama(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Start_spherical_photo_panorama);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Availability(
		const struct arsdk_cmd *cmd,
		uint32_t *_values) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Availability,
			_values);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_State(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		uint8_t *_percent) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_State,
			_type,
			_percent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Flip_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Flip_state,
			_state,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Horizontal_panorama_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_rotation_angle,
		float *_rotation_speed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Horizontal_panorama_state,
			_state,
			_rotation_angle,
			_rotation_speed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Dronie_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Dronie_state,
			_state,
			_speed,
			_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Horizontal_reveal_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Horizontal_reveal_state,
			_state,
			_speed,
			_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Vertical_reveal_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Vertical_reveal_state,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Spiral_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_radius_variation,
		float *_vertical_distance,
		float *_revolution_nb,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Spiral_state,
			_state,
			_speed,
			_radius_variation,
			_vertical_distance,
			_revolution_nb,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Parabola_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_vertical_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Parabola_state,
			_state,
			_speed,
			_vertical_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Candle_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_vertical_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Candle_state,
			_state,
			_speed,
			_vertical_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Dolly_slide_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_angle,
		float *_horizontal_distance,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Dolly_slide_state,
			_state,
			_speed,
			_angle,
			_horizontal_distance,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Vertigo_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_duration,
		float *_max_zoom_level,
		int32_t *_finish_action,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Vertigo_state,
			_state,
			_duration,
			_max_zoom_level,
			_finish_action,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Twist_up_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Twist_up_state,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Position_twist_up_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		float *_speed,
		float *_vertical_distance,
		float *_rotation_angle,
		float *_rotation_speed,
		int32_t *_play_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Position_twist_up_state,
			_state,
			_speed,
			_vertical_distance,
			_rotation_angle,
			_rotation_speed,
			_play_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Horizontal_180_photo_panorama_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Horizontal_180_photo_panorama_state,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Vertical_180_photo_panorama_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Vertical_180_photo_panorama_state,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Animation_Spherical_photo_panorama_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Animation_Spherical_photo_panorama_state,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Format(
		const struct arsdk_cmd *cmd,
		const char **_label) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Format,
			_label);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Format_with_type(
		const struct arsdk_cmd *cmd,
		const char **_label,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Format_with_type,
			_label,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Format_with_encryption(
		const struct arsdk_cmd *cmd,
		const char **_label,
		const char **_password,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Format_with_encryption,
			_label,
			_password,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Start_monitoring(
		const struct arsdk_cmd *cmd,
		uint8_t *_period) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Start_monitoring,
			_period);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Stop_monitoring(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Stop_monitoring);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Encryption_password(
		const struct arsdk_cmd *cmd,
		const char **_password,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Encryption_password,
			_password,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_supported_features) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Capabilities,
			_supported_features);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Supported_formatting_types(
		const struct arsdk_cmd *cmd,
		uint8_t *_supported_types) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Supported_formatting_types,
			_supported_types);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Info(
		const struct arsdk_cmd *cmd,
		const char **_name,
		uint64_t *_capacity) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Info,
			_name,
			_capacity);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Monitor(
		const struct arsdk_cmd *cmd,
		uint64_t *_available_bytes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Monitor,
			_available_bytes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_State(
		const struct arsdk_cmd *cmd,
		int32_t *_physical_state,
		int32_t *_file_system_state,
		uint8_t *_attribute,
		uint8_t *_monitor_enabled,
		uint8_t *_monitor_period) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_State,
			_physical_state,
			_file_system_state,
			_attribute,
			_monitor_enabled,
			_monitor_period);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Sdcard_uuid(
		const struct arsdk_cmd *cmd,
		const char **_uuid) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Sdcard_uuid,
			_uuid);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Format_result(
		const struct arsdk_cmd *cmd,
		int32_t *_result) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Format_result,
			_result);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Decryption(
		const struct arsdk_cmd *cmd,
		int32_t *_result) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Decryption,
			_result);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_User_storage_Format_progress(
		const struct arsdk_cmd *cmd,
		int32_t *_step,
		uint8_t *_percentage) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_User_storage_Format_progress,
			_step,
			_percentage);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_preferred_home_type(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_preferred_home_type,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_custom_location(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_custom_location,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_delay(
		const struct arsdk_cmd *cmd,
		uint16_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_delay,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Return_to_home(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Return_to_home);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Abort(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Abort);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Cancel_auto_trigger(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Cancel_auto_trigger);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_min_altitude(
		const struct arsdk_cmd *cmd,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_min_altitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_auto_trigger_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_auto_trigger_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_ending_behavior(
		const struct arsdk_cmd *cmd,
		int32_t *_ending_behavior) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_ending_behavior,
			_ending_behavior);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Set_ending_hovering_altitude(
		const struct arsdk_cmd *cmd,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Set_ending_hovering_altitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Home_type_capabilities(
		const struct arsdk_cmd *cmd,
		uint32_t *_values) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Home_type_capabilities,
			_values);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Home_type(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Home_type,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Preferred_home_type(
		const struct arsdk_cmd *cmd,
		int32_t *_type) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Preferred_home_type,
			_type);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Takeoff_location(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude,
		uint8_t *_fixed_before_takeoff) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Takeoff_location,
			_latitude,
			_longitude,
			_altitude,
			_fixed_before_takeoff);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Custom_location(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Custom_location,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Followee_location(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		float *_altitude) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Followee_location,
			_latitude,
			_longitude,
			_altitude);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Delay(
		const struct arsdk_cmd *cmd,
		uint16_t *_delay,
		uint16_t *_min,
		uint16_t *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Delay,
			_delay,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_State(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		int32_t *_reason) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_State,
			_state,
			_reason);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Home_reachability(
		const struct arsdk_cmd *cmd,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Home_reachability,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Rth_auto_trigger(
		const struct arsdk_cmd *cmd,
		int32_t *_reason,
		uint32_t *_delay) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Rth_auto_trigger,
			_reason,
			_delay);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Min_altitude(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Min_altitude,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Auto_trigger_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Auto_trigger_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Ending_behavior(
		const struct arsdk_cmd *cmd,
		int32_t *_ending_behavior) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Ending_behavior,
			_ending_behavior);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Rth_Ending_hovering_altitude(
		const struct arsdk_cmd *cmd,
		float *_current,
		float *_min,
		float *_max) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Rth_Ending_hovering_altitude,
			_current,
			_min,
			_max);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Radiometric_calib_start(
		const struct arsdk_cmd *cmd,
		uint8_t *_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_start,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Open_session(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		const char **_name) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Open_session,
			_id,
			_name);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Close_session(
		const struct arsdk_cmd *cmd,
		uint8_t *_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Close_session,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Set_live_stitch_mask(
		const struct arsdk_cmd *cmd,
		uint8_t *_id,
		uint8_t *_sensors_mask) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Set_live_stitch_mask,
			_id,
			_sensors_mask);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Get_storage_infos(
		const struct arsdk_cmd *cmd,
		uint8_t *_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Get_storage_infos,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Factory_reset(
		const struct arsdk_cmd *cmd,
		uint8_t *_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Factory_reset,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Radiometric_calib_status(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_status,
			_cam_id,
			_value,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Radiometric_calib_result(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_value,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Radiometric_calib_result,
			_cam_id,
			_value,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Session_state_changed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_state,
		const char **_session_path,
		const char **_live_stitch_path,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Session_state_changed,
			_cam_id,
			_state,
			_session_path,
			_live_stitch_path,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Live_stitch_mask_changed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint8_t *_mask,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_mask_changed,
			_cam_id,
			_mask,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Live_stitch_last_picture_id_changed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint32_t *_picture_id,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_last_picture_id_changed,
			_cam_id,
			_picture_id,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Storage_infos(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		int32_t *_selected,
		uint8_t *_internal_available,
		uint64_t *_internal_total_size,
		uint64_t *_internal_free_size,
		uint8_t *_internal_is_ro,
		uint8_t *_internal_is_corrupted,
		uint8_t *_sd_available,
		uint64_t *_sd_total_size,
		uint64_t *_sd_free_size,
		uint8_t *_sd_is_ro,
		uint8_t *_sd_is_corrupted,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Storage_infos,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_System_status(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint16_t *_errors,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_System_status,
			_cam_id,
			_errors,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed(
		const struct arsdk_cmd *cmd,
		uint8_t *_cam_id,
		uint32_t *_nb_pictures,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Sequoia_cam_Live_stitch_pictures_in_progress_number_changed,
			_cam_id,
			_nb_pictures,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Set_max_speed(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		float *_yaw,
		float *_pitch,
		float *_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Set_max_speed,
			_gimbal_id,
			_yaw,
			_pitch,
			_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Set_target(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		int32_t *_control_mode,
		int32_t *_yaw_frame_of_reference,
		float *_yaw,
		int32_t *_pitch_frame_of_reference,
		float *_pitch,
		int32_t *_roll_frame_of_reference,
		float *_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Set_target,
			_gimbal_id,
			_control_mode,
			_yaw_frame_of_reference,
			_yaw,
			_pitch_frame_of_reference,
			_pitch,
			_roll_frame_of_reference,
			_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Start_offsets_update(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Start_offsets_update,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Stop_offsets_update(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Stop_offsets_update,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Set_offsets(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		float *_yaw,
		float *_pitch,
		float *_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Set_offsets,
			_gimbal_id,
			_yaw,
			_pitch,
			_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Reset_orientation(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Reset_orientation,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Calibrate(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Calibrate,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Cancel_calibration(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Cancel_calibration,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Gimbal_capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		int32_t *_model,
		uint8_t *_axes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Gimbal_capabilities,
			_gimbal_id,
			_model,
			_axes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Relative_attitude_bounds(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		float *_min_yaw,
		float *_max_yaw,
		float *_min_pitch,
		float *_max_pitch,
		float *_min_roll,
		float *_max_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Relative_attitude_bounds,
			_gimbal_id,
			_min_yaw,
			_max_yaw,
			_min_pitch,
			_max_pitch,
			_min_roll,
			_max_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Absolute_attitude_bounds(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		float *_min_yaw,
		float *_max_yaw,
		float *_min_pitch,
		float *_max_pitch,
		float *_min_roll,
		float *_max_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Absolute_attitude_bounds,
			_gimbal_id,
			_min_yaw,
			_max_yaw,
			_min_pitch,
			_max_pitch,
			_min_roll,
			_max_roll);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Max_speed(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		float *_min_bound_yaw,
		float *_max_bound_yaw,
		float *_current_yaw,
		float *_min_bound_pitch,
		float *_max_bound_pitch,
		float *_current_pitch,
		float *_min_bound_roll,
		float *_max_bound_roll,
		float *_current_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Max_speed,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Attitude(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		int32_t *_yaw_frame_of_reference,
		int32_t *_pitch_frame_of_reference,
		int32_t *_roll_frame_of_reference,
		float *_yaw_relative,
		float *_pitch_relative,
		float *_roll_relative,
		float *_yaw_absolute,
		float *_pitch_absolute,
		float *_roll_absolute) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Attitude,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Axis_lock_state(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		uint8_t *_locked) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Axis_lock_state,
			_gimbal_id,
			_locked);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Offsets(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		int32_t *_update_state,
		float *_min_bound_yaw,
		float *_max_bound_yaw,
		float *_current_yaw,
		float *_min_bound_pitch,
		float *_max_bound_pitch,
		float *_current_pitch,
		float *_min_bound_roll,
		float *_max_bound_roll,
		float *_current_roll) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Offsets,
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
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Calibration_state(
		const struct arsdk_cmd *cmd,
		int32_t *_state,
		uint8_t *_gimbal_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Calibration_state,
			_state,
			_gimbal_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Calibration_result(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		int32_t *_result) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Calibration_result,
			_gimbal_id,
			_result);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gimbal_Alert(
		const struct arsdk_cmd *cmd,
		uint8_t *_gimbal_id,
		uint8_t *_error) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gimbal_Alert,
			_gimbal_id,
			_error);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Battery_Alert(
		const struct arsdk_cmd *cmd,
		int32_t *_alert,
		int32_t *_level,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Battery_Alert,
			_alert,
			_level,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Battery_Health(
		const struct arsdk_cmd *cmd,
		uint8_t *_state_of_health) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Battery_Health,
			_state_of_health);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Battery_Voltage(
		const struct arsdk_cmd *cmd,
		uint16_t *_voltage) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Battery_Voltage,
			_voltage);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Battery_Cycle_count(
		const struct arsdk_cmd *cmd,
		uint32_t *_count) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Battery_Cycle_count,
			_count);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Battery_Serial(
		const struct arsdk_cmd *cmd,
		const char **_serial) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Battery_Serial,
			_serial);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mediastore_State(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mediastore_State,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Mediastore_Counters(
		const struct arsdk_cmd *cmd,
		int32_t *_video_media_count,
		int32_t *_photo_media_count,
		int32_t *_video_resource_count,
		int32_t *_photo_resource_count) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Mediastore_Counters,
			_video_media_count,
			_photo_media_count,
			_video_resource_count,
			_photo_resource_count);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Precise_home_Set_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Precise_home_Set_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Precise_home_Capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_modes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Precise_home_Capabilities,
			_modes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Precise_home_Mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Precise_home_Mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Precise_home_State(
		const struct arsdk_cmd *cmd,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Precise_home_State,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_palette_part(
		const struct arsdk_cmd *cmd,
		float *_red,
		float *_green,
		float *_blue,
		float *_index,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_palette_part,
			_red,
			_green,
			_blue,
			_index,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_palette_settings(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		float *_lowest_temp,
		float *_highest_temp,
		int32_t *_outside_colorization,
		int32_t *_relative_range,
		int32_t *_spot_type,
		float *_spot_threshold) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_palette_settings,
			_mode,
			_lowest_temp,
			_highest_temp,
			_outside_colorization,
			_relative_range,
			_spot_type,
			_spot_threshold);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_rendering(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		float *_blending_rate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_rendering,
			_mode,
			_blending_rate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_emissivity(
		const struct arsdk_cmd *cmd,
		float *_emissivity) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_emissivity,
			_emissivity);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_background_temperature(
		const struct arsdk_cmd *cmd,
		float *_background_temperature) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_background_temperature,
			_background_temperature);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_sensitivity(
		const struct arsdk_cmd *cmd,
		int32_t *_range) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_sensitivity,
			_range);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Set_shutter_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_trigger) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Set_shutter_mode,
			_trigger);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Trigg_shutter(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Trigg_shutter);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_modes) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Capabilities,
			_modes);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Palette_part(
		const struct arsdk_cmd *cmd,
		float *_red,
		float *_green,
		float *_blue,
		float *_index,
		uint8_t *_list_flags) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Palette_part,
			_red,
			_green,
			_blue,
			_index,
			_list_flags);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Palette_settings(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		float *_lowest_temp,
		float *_highest_temp,
		int32_t *_outside_colorization,
		int32_t *_relative_range,
		int32_t *_spot_type,
		float *_spot_threshold) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Palette_settings,
			_mode,
			_lowest_temp,
			_highest_temp,
			_outside_colorization,
			_relative_range,
			_spot_type,
			_spot_threshold);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Rendering(
		const struct arsdk_cmd *cmd,
		int32_t *_mode,
		float *_blending_rate) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Rendering,
			_mode,
			_blending_rate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Emissivity(
		const struct arsdk_cmd *cmd,
		float *_emissivity) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Emissivity,
			_emissivity);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Background_temperature(
		const struct arsdk_cmd *cmd,
		float *_background_temperature) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Background_temperature,
			_background_temperature);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Sensitivity(
		const struct arsdk_cmd *cmd,
		int32_t *_current_range) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Sensitivity,
			_current_range);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Thermal_Shutter_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_current_trigger) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Thermal_Shutter_mode,
			_current_trigger);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Leds_Activate(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Leds_Activate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Leds_Deactivate(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Leds_Deactivate);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Leds_Capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_supported_capabilities) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Leds_Capabilities,
			_supported_capabilities);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Leds_Switch_state(
		const struct arsdk_cmd *cmd,
		int32_t *_switch_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Leds_Switch_state,
			_switch_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Piloting_style_Set_style(
		const struct arsdk_cmd *cmd,
		int32_t *_style) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Piloting_style_Set_style,
			_style);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Piloting_style_Style(
		const struct arsdk_cmd *cmd,
		int32_t *_style) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Piloting_style_Style,
			_style);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Piloting_style_Capabilities(
		const struct arsdk_cmd *cmd,
		uint8_t *_styles) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Piloting_style_Capabilities,
			_styles);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gauge_fw_updater_Prepare(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gauge_fw_updater_Prepare);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gauge_fw_updater_Update(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gauge_fw_updater_Update);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gauge_fw_updater_Status(
		const struct arsdk_cmd *cmd,
		int32_t *_diag,
		uint32_t *_missing_requirements,
		int32_t *_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gauge_fw_updater_Status,
			_diag,
			_missing_requirements,
			_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Gauge_fw_updater_Progress(
		const struct arsdk_cmd *cmd,
		int32_t *_result,
		uint8_t *_percent) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Gauge_fw_updater_Progress,
			_result,
			_percent);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Dri_mode(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Dri_mode,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Set_dri_type(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_id) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Set_dri_type,
			_type,
			_id);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_supported_capabilities) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Capabilities,
			_supported_capabilities);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Dri_state(
		const struct arsdk_cmd *cmd,
		int32_t *_mode) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Dri_state,
			_mode);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Drone_id(
		const struct arsdk_cmd *cmd,
		int32_t *_type,
		const char **_value) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Drone_id,
			_type,
			_value);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Dri_Dri_type(
		const struct arsdk_cmd *cmd,
		const char **_id,
		int32_t *_type,
		int32_t *_status) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Dri_Dri_type,
			_id,
			_type,
			_status);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Security_edition_Deactivate_logs(
		const struct arsdk_cmd *cmd) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Security_edition_Deactivate_logs);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Security_edition_Capabilities(
		const struct arsdk_cmd *cmd,
		uint16_t *_supported_capabilities) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Security_edition_Capabilities,
			_supported_capabilities);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Security_edition_Log_storage_state(
		const struct arsdk_cmd *cmd,
		int32_t *_log_storage_state) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Security_edition_Log_storage_state,
			_log_storage_state);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Move_Extended_move_to(
		const struct arsdk_cmd *cmd,
		double *_latitude,
		double *_longitude,
		double *_altitude,
		int32_t *_orientation_mode,
		float *_heading,
		float *_max_horizontal_speed,
		float *_max_vertical_speed,
		float *_max_yaw_rotation_speed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Move_Extended_move_to,
			_latitude,
			_longitude,
			_altitude,
			_orientation_mode,
			_heading,
			_max_horizontal_speed,
			_max_vertical_speed,
			_max_yaw_rotation_speed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Move_Extended_move_by(
		const struct arsdk_cmd *cmd,
		float *_d_x,
		float *_d_y,
		float *_d_z,
		float *_d_psi,
		float *_max_horizontal_speed,
		float *_max_vertical_speed,
		float *_max_yaw_rotation_speed) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Move_Extended_move_by,
			_d_x,
			_d_y,
			_d_z,
			_d_psi,
			_max_horizontal_speed,
			_max_vertical_speed,
			_max_yaw_rotation_speed);
}

static inline int
__attribute__ ((warn_unused_result))
arsdk_cmd_dec_Move_Info(
		const struct arsdk_cmd *cmd,
		uint32_t *_missing_inputs) {
	return arsdk_cmd_dec(cmd,
			&g_arsdk_cmd_desc_Move_Info,
			_missing_inputs);
}

