#define echoPin 7
#define trigPin 8

long duration;
long distance;

void setup() 

{

Serial.begin(9600);
pinMode (echoPin, INPUT);
pinMode (trigPin, OUTPUT);

}
void loop() 

{
  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn (echoPin, HIGH);
//This gives us distance in cm
distance = duration/58.2;
Serial.println (distance);
//Milliseconds
delay(50);

}
