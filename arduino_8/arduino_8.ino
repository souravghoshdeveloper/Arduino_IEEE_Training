#include <wire.h>
#imclude <BH1750.h>
BH1750 lightmeter;
void setup(){
  serial.begin (9600);
  lightmeter.begin();
  serial.println ("Running...");
}
void loop(){
  unit16_t lux = lightMeter.readinLightLevel();
  serial.print("Light");
  serial.print(lux);
  serial.println("lx")
  delay(1000);
}
