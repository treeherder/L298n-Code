/*
This code demonstrates how to move a motor forward, backward, and free stop

This is just for one side
*/

//PINS just 

(You may need to purchase some M-F Connectors to connect to the board's headers)

int EnablePin = 9;  // This is the "E1" or "E2" pin on the DFRobot Board 
int DirectionPin = 10; //this is the "M1" or "M2" pin on the DFRobot Board


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

delay(1000);

//FREESTOP -- just don't enable
Serial.println("Freestop");
digitalWrite(EnablePin, LOW);

delay(2000);


//BACKWARDS -- remember, first set direction, then enable
Serial.println("Backwards");
digitalWrite(DirectionPin,LOW);
digitalWrite(EnablePin, HIGH);

delay(3000);

//FREESTOP AGAIN
Serial.println("Freestop");
digitalWrite(EnablePin, LOW);

delay(1000);


}
