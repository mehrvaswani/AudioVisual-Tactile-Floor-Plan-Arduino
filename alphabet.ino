#include <CapacitiveSensor.h>

// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_12_3 = CapacitiveSensor(12,3);       
CapacitiveSensor   cs_12_4 = CapacitiveSensor(12,4);        
CapacitiveSensor   cs_12_5 = CapacitiveSensor(12,5);    
CapacitiveSensor   cs_12_6 = CapacitiveSensor(12,6);    
CapacitiveSensor   cs_12_7 = CapacitiveSensor(12,7);     
CapacitiveSensor   cs_12_8 = CapacitiveSensor(12,8);        
CapacitiveSensor   cs_12_9 = CapacitiveSensor(12,9); 
CapacitiveSensor   cs_12_10 = CapacitiveSensor(12,10);    

void setup()                   
{
  Serial.begin(9600);
//  // turn off autocalibrate on channel 1 - just as an example
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);    
  cs_12_10.set_CS_AutocaL_Millis(0xFFFFFFFF);

}

void loop()                   
{
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(30);
  long touch2 =  cs_12_4.capacitiveSensor(30);
  long touch3 =  cs_12_5.capacitiveSensor(30);
  long touch4 =  cs_12_6.capacitiveSensor(30);
  long touch5 =  cs_12_7.capacitiveSensor(30);
  long touch6 =  cs_12_8.capacitiveSensor(30);
  long touch7 =  cs_12_9.capacitiveSensor(30);
  long touch8 =  cs_12_10.capacitiveSensor(30);

  
 
  // When we touched the sensor, the buzzer will produce a tone.

  if (touch1 > 100) {
    Serial.write("H");
    Serial.print("H");
    Serial.print('\n');
    delay(60);
  }

   if (touch2 > 100) {
    Serial.write("G");
    Serial.print('\n');
    delay(60);
  }

  if (touch3 > 100) {
    Serial.write("F");
    Serial.print('\n');
    delay(60);
  }

  if (touch4 > 100) {
    Serial.write("E");
    Serial.print('\n');
    delay(60);
  }

  if (touch5 > 100) {
    Serial.write("D");
    delay(60);
  }

   if (touch6 > 100) {
    Serial.write("C");
    delay(60);
  }

  if (touch7 > 100) {
    Serial.write("B");
    delay(60);
  }

  if (touch8 > 100) {
    Serial.write("A");
    delay(60);
  }
    
 if (touch1<=100  &  touch2<=100  &  touch3<=100 & touch4<=100 & touch5<=100  &  touch6<=100  &  touch7<=100 & touch8<=100)
    Serial.println("0");
  delay(60); 
 }
