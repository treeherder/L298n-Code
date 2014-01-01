/*
simple code to manipulate motors
*/

int enable_r_one = 7;  //on each driver, we have bridged the outputs
int enable_r_two = 8;  //

int enable_l_one = 9;
int enable_l_two = 10;
int r_dir_one = 11; 
int l_dir_one = 12; 
int r_dir_two = 13
int l_dir_two = 14

void setup () {

pinMode(enable_r_one, OUTPUT);
pinMode(enable_r_two, OUTPUT);

pinMode(enable_l_one, OUTPUT);
pinMode(enable_l_two, OUTPUT);

pinMode(r_dir_one, OUTPUT);
pinMode(l_dir_one, OUTPUT);

pinMode(r_dir_two, OUTPUT);
pinMode(l_dir_two, OUTPUT);

}
void loop(){

//put control here	

}

int forward(int speed, int time){
digitalWrite(r_dir_one, HIGH)
digitalWrite(l_dir_one, LOW)
digitalWrite(r_dir_two, LOW)
digitalWrite(l_dir_two, HIGH)

analogWrite(enable_r_one, speed)
analogWrite(enable_r_two, speed)
analogWrite(enable_l_one, speed)
analogWrite(enable_l_two, speed)

delay(time);
return 1;
}

int backward(int speed, int time){
digitalWrite(r_dir_one, LOW)
digitalWrite(l_dir_one, HIGH)
digitalWrite(r_dir_two, HIGH)
digitalWrite(l_dir_two, LOW)



analogWrite(enable_r_one, speed)
analogWrite(enable_r_two, speed)
analogWrite(enable_l_one, speed)
analogWrite(enable_l_two, speed)

delay(time);
return 1;
}

