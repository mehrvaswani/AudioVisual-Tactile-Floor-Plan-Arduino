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
//  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
//  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
//  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
//  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
//  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
//  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
//  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);    
//  cs_12_10.set_CS_AutocaL_Millis(0xFFFFFFFF);

}

void loop()                   
{
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(60);
  long touch2 =  cs_12_4.capacitiveSensor(60);
  long touch3 =  cs_12_5.capacitiveSensor(60);
  long touch4 =  cs_12_6.capacitiveSensor(60);
  long touch5 =  cs_12_7.capacitiveSensor(60);
  long touch6 =  cs_12_8.capacitiveSensor(30);
  long touch7 =  cs_12_9.capacitiveSensor(60);
  long touch8 =  cs_12_10.capacitiveSensor(60);

  if (touch1 > 200 & touch1 < 700 & touch2<=100  &  touch3<=100 & touch4<=100 & touch5<=100  &  touch6<=100  &  touch7<=100 & touch8<=100){
    Serial.write("Gstairs");
    Serial.print('\n');
    delay(1000);
  } 
  
  if (touch1 > 700) {
    Serial.write("Pstairs");
    Serial.print('\n');
    delay(1000);
  }
    
  if (touch2 > 200 & touch2 < 1200 & touch1 <= 100 & touch3<=100 & touch4<=100 & touch5<=100  &  touch6<=100  &  touch7<=100 & touch8<=100){
    Serial.write("Gclassroom1");
    Serial.print('\n');
    delay(1000);
   } 

    if (touch2 > 1200 ) {
    Serial.write("Pclassroom1");
    Serial.print('\n');
    delay(1000);
  }
    
  if (touch3 > 100 & touch3 < 900 & touch1<= 100 & touch2<=100 & touch4<=100 & touch5<=100  &  touch6<=100  &  touch7<=100 & touch8<=100){
    Serial.write("Gtoilets");
    Serial.print('\n');
    delay(1000);
  }

   if (touch3 > 900) {
    Serial.write("Ptoilets");
    Serial.print('\n');
    delay(1000);
  }
  
  if (touch4 > 200 & touch4 < 800 & touch1 <= 100 & touch2<=100 & touch3<=100 & touch5<=100  &  touch6<=100  &  touch7<=100 & touch8<=100) {
    Serial.write("Glabs");
    Serial.print('\n');
    delay(1000);
  }

  if (touch4 > 800) {
    Serial.write("Plabs");
    Serial.print('\n');
    delay(1000);
  }

  if (touch5 > 200 & touch5 < 1000 & touch1 <= 100 & touch2<=100 & touch3<=100 & touch4<=100  &  touch6<=100  &  touch7<=100 & touch8<=100){
    Serial.write("Gclassroom2");
    Serial.print('\n');
    delay(1000);
  }

  if (touch5 > 1100){
    Serial.write("Pclassroom2");
    Serial.print('\n');
    delay(1000);
  }
  
  if (touch6 > 200 & touch6 < 800 & touch1 <= 100 & touch2<=100 & touch3<=100 & touch4<=100  &  touch5<=100  &  touch7<=100 & touch8<=100){
//        Serial.write(touch6);
    Serial.write("Gkitchen");
    Serial.print('\n');
    delay(1000);
  }

  if (touch6 > 800){
    Serial.write("Pkitchen");
    Serial.print('\n');
    delay(1000);
  }
  
  if (touch7 > 200 & touch7 < 1000 & touch1 <= 100 & touch2<=100 & touch3<=100 & touch4<=100  &  touch5<=100  &  touch6<=100 & touch8<=100){
    Serial.write("Gentrance");
    Serial.print('\n');
    delay(1000);
  }

  if (touch7 > 1000){
    Serial.write("Pentrance");
    Serial.print('\n');
    delay(1000);
  }
  
  if (touch8 > 200 & touch8 < 1000 & touch1 <= 100 & touch2<=100 & touch3<=100 & touch4<=100  &  touch5<=100  &  touch6<=100 & touch7<=100){
    Serial.write("Goffices");
    Serial.print('\n');
    delay(1000);
  }

  if (touch8 > 1000){
    Serial.write("Poffices");
    Serial.print('\n');
    delay(1000);
  }

 if (touch1<=500  &  touch2<=500  &  touch3<=500 & touch4<=500 & touch5<=500  &  touch6<=500  &  touch7<=500 & touch8<=500)
    Serial.println("0");
  delay(60); 
 }
