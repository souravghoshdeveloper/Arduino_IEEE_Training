 //#include<LiquidCrystal.h>
 #define echoPin 7
 #define trigPin 8
 #define LEDPin 13
 int maximumRange=400;
 int minimumRange=5;
 long duration,distance;
 int frequency;
 void setup(){
 Serial.begin(9600);
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 pinMode(LEDPin,OUTPUT);
 }
 void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration/58.2;
  Serial.print("distance=");
  Serial.println(distance);
  if(distance>=maximumRange||distance<=minimumRange)
  {
  distance=50000;
  Serial.println("-1");
  }
  else{
  frequency+distance*50;
  }
  if(distance<150)
  {
  digitalWrite(LEDPin,LOW);
  }
  delay(50);
 }
  
  
    
  
 
 
 
 
