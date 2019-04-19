#include <ESP8266WiFi.h>  

const char *SSID=""; //WLAN-Name
const char *Passwort=""; //WLAN-Schlüssel

void setup() {
  WiFi.begin(SSID, Passwort);
  int retries=0;
  while ((WiFi.status()!=WL_CONNECTED)&&(retries<100)){
    retries++;
    delay(200);
    Serial.print(".");
  }
  if (WiFi.status()==WL_CONNECTED) {
    Serial.println(F("WiFi connected"));
    Serial.println(WiFi.localIP());
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
