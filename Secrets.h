#include <pgmspace.h>

#define SECRET

const char WIFI_SSID[] = "";
const char WIFI_PASSWORD[] = "";

#define THINGNAME "ESP8266"

int8_t TIME_ZONE = -8; // UTC

const char MQTT_HOST[] = "";


static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";


// XXXXXXXX-certificate.pem.crt
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";


// Private key
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
)KEY";
