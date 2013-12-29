/*
This code demonstrates how to move a motor forward, backward, and free stop

This is just for one side
*/

//PINS just 

EnablePin = 9;
DirectionPin = 10;


void setup () {
Serial.begin(9600);

pinMode(EnablePin, OUTPUT);
pinMode(DirectionPin, OUTPUT);

}

void loop () {

//FORWARDS -- first set direction, then enable
Serial.println("Forwards");
digitalWrite(DirectionPin,HIGH);
digitalWrite(EnablePin, HIGH);

delay(2000);

//FREESTOP -- just don't enable
Serial.println("Freestop");
digitalWrite(EnablePin, LOW);

delay(2000);


//BACKWARDS -- remember, first set direction, then enable
Serial.println("Backwards");
digitalWrite(DirectionPin,LOW);
digitalWrite(EnablePin, HIGH);

delay(2000);=

//FREESTOP AGAIN
Serial.println("Freestop");

delay(2000);


}
