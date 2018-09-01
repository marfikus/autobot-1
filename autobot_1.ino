
#include <Ultrasonic.h>

Ultrasonic ultrasonic(8, 9);

int tr1 = 0;
int tr2 = 1;
int tr3 = 2;
int tr4 = 3;

int distance;
int a = 10;
int b = 15;

void setup() {
  //Serial.begin(9600);
  
  pinMode(tr1, OUTPUT);
  pinMode(tr2, OUTPUT);
  pinMode(tr3, OUTPUT);
  pinMode(tr4, OUTPUT);

  
}

void loop() {
 // Serial.print("Distance in CM: ");
 // Serial.println(ultrasonic.distanceRead());
  
  distance = ultrasonic.distanceRead();

  if (distance > b) 
  {
    digitalWrite(tr2, LOW);
    digitalWrite(tr3, LOW);
    
    digitalWrite(tr4, HIGH);
    digitalWrite(tr1, HIGH);
  } 
  else if (distance > a && distance < b)
  {
    digitalWrite(tr1, LOW);
    digitalWrite(tr2, LOW);
    digitalWrite(tr3, LOW);
    digitalWrite(tr4, LOW);
  }
  else if (distance < a)
  {
    digitalWrite(tr1, LOW);
    digitalWrite(tr4, LOW);
    
    digitalWrite(tr3, HIGH);
    digitalWrite(tr2, HIGH);
  }
  
  delay(250);
}
