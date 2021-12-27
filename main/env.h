#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define DEVICE_API_USERNAME         "device.sim-dispenser@cowlar.com"
#define DEVICE_API_PASSWORD         "123456"
#define USS_SSL_API
#define HTTP_API_HOST               "api2.iotcore.cowlar.com"
// #define HTTP_API_HOST               "api2.sact.cowlar.com"
// #define HTTP_API_PORT               5000
#define HTTPS_API_PORT              443
#ifdef USS_SSL_API
#define HTTP_API_URL_CUSTOM         "https://"HTTP_API_HOST":"STR(HTTPS_API_PORT)
#else
#define HTTP_API_URL_CUSTOM         "http://"HTTP_API_HOST":"STR(HTTP_API_PORT)
#endif
// #define HTTP_API_VERSION            "backend/api/v1"
#define HTTP_API_VERSION            "v1"
#define MQTT_BROKER_USERNAME        "dockersim-dispenser"///"cowlargeyser"W
#define MQTT_BROKER_PASSWORD        "CowlarGeyser7890"//"CowlarGeyser7890"
#define MQTT_BROKER_HOST            "iotcore.cowlar.com"   // pi// asfund //"geyser.uaenorth.cloudapp.azure.com"
#define MQTT_BROKER_PORT            1883//1883
#define CONFIG_BROKER_URL_CUSTOM    "mqtt://"MQTT_BROKER_USERNAME":"MQTT_BROKER_PASSWORD"@"MQTT_BROKER_HOST":"STR(MQTT_BROKER_PORT)
