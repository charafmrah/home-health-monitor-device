<!-- PROJECT LOGO -->
<br />
<div align="center">

 <h3 align="center">Home Health Monitor IoT Device Code</h3>

  <p align="center">
    Arduino code to read sensor data and publish it using MQTT client to AWS IoT core.
    <br />
    <br />
    <a href="https://github.com/charafmrah/home-health-monitor">Website Code</a>
    ·
    <a href="https://github.com/charafmrah/home-health-monitor-device/issues">Report Bug</a>
    ·
    <a href="https://github.com/charafmrah/home-health-monitor-device/issues">Request Feature</a>
  </p>
</div>

<!-- ABOUT THE PROJECT -->

## About The Project


This is a side project I worked on to build a home health monitor IoT device that reads temperature & humidity sensor data. The device publishes sensory data to AWS IoT core using using the MQTT lightweight protocol.

### Built With

- [![C++][cpp]][cpp-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Getting Started

Setup your AWS IoT core and create a thing. Download the certificates and private key and add them to the code. Add your WiFi credentials and MQTT host. Upload the code to your device and you are good to go.

Do all this by creating a `secrets.h` file that includes the following:

```c++
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
```

[license-shield]: https://img.shields.io/github/license/charafmrah/home-health-monitor.svg?style=for-the-badge
[license-url]: https://github.com/charafmrah/home-health-monitor/LICENSE.txt
[cpp]: https://img.shields.io/badge/c%2B%2B-044F88?style=for-the-badge&logo=c%2B%2B&logoColor=white
[cpp-url]: https://cplusplus.com/
