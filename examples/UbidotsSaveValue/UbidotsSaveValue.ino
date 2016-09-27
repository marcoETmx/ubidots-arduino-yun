#include <UbidotsYUN.h>
#define TOKEN "YOUR_TOKEN_HERE"


Ubidots client(TOKEN);

void setup() {
  client.init();
  Serial.begin(9600);

}

void loop() {
  float value = analogRead(A0);
  client.add("Variable_Name", value);
  client.sendAll(); 
}