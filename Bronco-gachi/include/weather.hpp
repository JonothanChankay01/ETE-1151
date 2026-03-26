#ifndef WEATHER_H
#define WEATHER_H

#include <Arudino.h>

const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";\

struct weatherData{
    float temp;
    int humidity;
    
}


#endif