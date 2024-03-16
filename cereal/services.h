/* THIS IS AN AUTOGENERATED FILE, PLEASE EDIT services.py */
#ifndef __SERVICES_H
#define __SERVICES_H
#include <map>
#include <string>
struct service { std::string name; int port; bool should_log; int frequency; int decimation; };
static std::map<std::string, service> services = {
  { "gyroscope", {"gyroscope", 8001, true, 104, 104}},
  { "gyroscope2", {"gyroscope2", 8002, true, 100, 100}},
  { "accelerometer", {"accelerometer", 8003, true, 104, 104}},
  { "accelerometer2", {"accelerometer2", 8004, true, 100, 100}},
  { "magnetometer", {"magnetometer", 8005, true, 25, 25}},
  { "lightSensor", {"lightSensor", 8006, true, 100, 100}},
  { "temperatureSensor", {"temperatureSensor", 8007, true, 2, 200}},
  { "temperatureSensor2", {"temperatureSensor2", 8008, true, 2, 200}},
  { "gpsNMEA", {"gpsNMEA", 8009, true, 9, -1}},
  { "deviceState", {"deviceState", 8010, true, 2, 1}},
  { "can", {"can", 8011, true, 100, 1223}},
  { "controlsState", {"controlsState", 8012, true, 100, 10}},
  { "pandaStates", {"pandaStates", 8013, true, 10, 1}},
  { "peripheralState", {"peripheralState", 8014, true, 2, 1}},
  { "radarState", {"radarState", 8015, true, 20, 5}},
  { "roadEncodeIdx", {"roadEncodeIdx", 8016, false, 20, 1}},
  { "liveTracks", {"liveTracks", 8017, true, 20, -1}},
  { "sendcan", {"sendcan", 8018, true, 100, 139}},
  { "logMessage", {"logMessage", 8019, true, 0, -1}},
  { "errorLogMessage", {"errorLogMessage", 8020, true, 0, 1}},
  { "liveCalibration", {"liveCalibration", 8021, true, 4, 4}},
  { "liveTorqueParameters", {"liveTorqueParameters", 8023, true, 4, 1}},
  { "androidLog", {"androidLog", 8024, true, 0, -1}},
  { "carState", {"carState", 8025, true, 100, 10}},
  { "carControl", {"carControl", 8026, true, 100, 10}},
  { "longitudinalPlan", {"longitudinalPlan", 8027, true, 20, 5}},
  { "procLog", {"procLog", 8028, true, 0, 15}},
  { "gpsLocationExternal", {"gpsLocationExternal", 8029, true, 10, 10}},
  { "gpsLocation", {"gpsLocation", 8030, true, 1, 1}},
  { "ubloxGnss", {"ubloxGnss", 8031, true, 10, -1}},
  { "qcomGnss", {"qcomGnss", 8032, true, 2, -1}},
  { "gnssMeasurements", {"gnssMeasurements", 8033, true, 10, 10}},
  { "clocks", {"clocks", 8034, true, 0, 1}},
  { "ubloxRaw", {"ubloxRaw", 8035, true, 20, -1}},
  { "liveLocationKalman", {"liveLocationKalman", 8036, true, 20, 5}},
  { "liveParameters", {"liveParameters", 8037, true, 20, 5}},
  { "cameraOdometry", {"cameraOdometry", 8038, true, 20, 5}},
  { "thumbnail", {"thumbnail", 8039, true, 0, 1}},
  { "onroadEvents", {"onroadEvents", 8040, true, 1, 1}},
  { "carParams", {"carParams", 8041, true, 0, 1}},
  { "roadCameraState", {"roadCameraState", 8042, true, 20, 20}},
  { "driverCameraState", {"driverCameraState", 8043, true, 20, 20}},
  { "driverEncodeIdx", {"driverEncodeIdx", 8044, false, 20, 1}},
  { "driverStateV2", {"driverStateV2", 8045, true, 20, 10}},
  { "driverMonitoringState", {"driverMonitoringState", 8046, true, 20, 10}},
  { "wideRoadEncodeIdx", {"wideRoadEncodeIdx", 8047, false, 20, 1}},
  { "wideRoadCameraState", {"wideRoadCameraState", 8048, true, 20, 20}},
  { "modelV2", {"modelV2", 8049, true, 20, 40}},
  { "managerState", {"managerState", 8050, true, 2, 1}},
  { "uploaderState", {"uploaderState", 8051, true, 0, 1}},
  { "navInstruction", {"navInstruction", 8052, true, 1, 10}},
  { "navRoute", {"navRoute", 8053, true, 0, -1}},
  { "navThumbnail", {"navThumbnail", 8054, true, 0, -1}},
  { "navModel", {"navModel", 8055, true, 2, 4}},
  { "mapRenderState", {"mapRenderState", 8056, true, 2, 1}},
  { "uiPlan", {"uiPlan", 8057, true, 20, 40}},
  { "qRoadEncodeIdx", {"qRoadEncodeIdx", 8058, false, 20, -1}},
  { "userFlag", {"userFlag", 8059, true, 0, 1}},
  { "microphone", {"microphone", 8060, true, 10, 10}},
  { "frogpilotCarControl", {"frogpilotCarControl", 8061, true, 100, 10}},
  { "frogpilotDeviceState", {"frogpilotDeviceState", 8062, true, 2, 1}},
  { "frogpilotNavigation", {"frogpilotNavigation", 8063, true, 1, 10}},
  { "frogpilotPlan", {"frogpilotPlan", 8064, true, 20, 5}},
  { "uiDebug", {"uiDebug", 8065, true, 0, 1}},
  { "testJoystick", {"testJoystick", 8066, true, 0, -1}},
  { "roadEncodeData", {"roadEncodeData", 8067, false, 20, -1}},
  { "driverEncodeData", {"driverEncodeData", 8068, false, 20, -1}},
  { "wideRoadEncodeData", {"wideRoadEncodeData", 8069, false, 20, -1}},
  { "qRoadEncodeData", {"qRoadEncodeData", 8070, false, 20, -1}},
  { "livestreamWideRoadEncodeIdx", {"livestreamWideRoadEncodeIdx", 8071, false, 20, -1}},
  { "livestreamRoadEncodeIdx", {"livestreamRoadEncodeIdx", 8072, false, 20, -1}},
  { "livestreamDriverEncodeIdx", {"livestreamDriverEncodeIdx", 8073, false, 20, -1}},
  { "livestreamWideRoadEncodeData", {"livestreamWideRoadEncodeData", 8074, false, 20, -1}},
  { "livestreamRoadEncodeData", {"livestreamRoadEncodeData", 8075, false, 20, -1}},
  { "livestreamDriverEncodeData", {"livestreamDriverEncodeData", 8076, false, 20, -1}},
  { "customReservedRawData0", {"customReservedRawData0", 8077, true, 0, -1}},
  { "customReservedRawData1", {"customReservedRawData1", 8078, true, 0, -1}},
  { "customReservedRawData2", {"customReservedRawData2", 8079, true, 0, -1}},
};
#endif

