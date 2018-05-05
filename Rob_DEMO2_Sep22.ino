//const int Interpin=2;
//If the wire from Pin2 is connected to 5v on the Arduino the robot stops moving
const int speedrate=255; //Enter some value between 0-255 zero means motor doesn't rotate,255 means it rotates with max speed

//I have used PWM pins for all Enable Pins
const int EN1=3;
const int EN2=4;
const int EN3=5;
const int EN4=6;
const int EN5=7;
//I have used ordiary digital pins for motor driver Input pins that control Direction of rotation
const int M1_I1=30;
const int M1_I2=31;
const int M2_I3=32;
const int M2_I4=33;
const int M3_I1=34;
const int M3_I2=35;
const int M4_I3=36;
const int M4_I4=37;
const int M5_I1=38;
const int M5_I2=39;
void setup()
{
  pinMode(8,INPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(EN3,OUTPUT);
  pinMode(EN4,OUTPUT);
  pinMode(EN5,OUTPUT);
  pinMode(M1_I1,OUTPUT);
  pinMode(M1_I2,OUTPUT);
  pinMode(M2_I3,OUTPUT);
  pinMode(M2_I4,OUTPUT);
  pinMode(M3_I1,OUTPUT);
  pinMode(M3_I2,OUTPUT);
  pinMode(M4_I3,OUTPUT);
  pinMode(M4_I4,OUTPUT);
  pinMode(M5_I1,OUTPUT);
  pinMode(M5_I2,OUTPUT);
  //attachInterrupt(Interpin, brake, HIGH);
}
//Motor M1 goes forward at a given rate
void m1fwd (int rate)
{
digitalWrite(EN1, LOW);
digitalWrite(M1_I1, HIGH);
digitalWrite(M1_I2, LOW);
analogWrite(EN1, rate);
}
//Motor M1 goes backward at given rate (from 0-255)
void m1rev (int rate)
{
digitalWrite(EN1, LOW);
digitalWrite(M1_I1, LOW);
digitalWrite(M1_I2, HIGH);
analogWrite(EN1, rate);
}
//Motor M2 goes forward at a given rate
void m2fwd (int rate)
{
digitalWrite(EN2, LOW);
digitalWrite(M2_I3, HIGH);
digitalWrite(M2_I4, LOW);
analogWrite(EN2, rate);
}
//Motor M2 goes backward at given rate (from 0-255)
void m2rev (int rate)
{
digitalWrite(EN2, LOW);
digitalWrite(M2_I3, LOW);
digitalWrite(M2_I4, HIGH);
analogWrite(EN2, rate);
}
//Motor M3 goes forward at a given rate
void m3fwd (int rate)
{
digitalWrite(EN3, LOW);
digitalWrite(M3_I1, HIGH);
digitalWrite(M3_I2, LOW);
analogWrite(EN3, rate);
}
//Motor M3 goes backward at given rate (from 0-255)
void m3rev (int rate)
{
digitalWrite(EN3, LOW);
digitalWrite(M3_I1, LOW);
digitalWrite(M3_I2, HIGH);
analogWrite(EN3, rate);
}
//Motor M4 goes forward at a given rate
void m4fwd (int rate)
{
digitalWrite(EN4, LOW);
digitalWrite(M4_I3, HIGH);
digitalWrite(M4_I4, LOW);
analogWrite(EN4, rate);
}
//Motor M4 goes backward at given rate (from 0-255)
void m4rev (int rate)
{
digitalWrite(EN4, LOW);
digitalWrite(M4_I3, LOW);
digitalWrite(M4_I4, HIGH);
analogWrite(EN4, rate);
//Motor M5 goes forward at a given rate
}
void m5fwd (int rate)
{
digitalWrite(EN5, LOW);
digitalWrite(M5_I1, HIGH);
digitalWrite(M5_I2, LOW);
analogWrite(EN5, rate);
}
//Motor M5 goes backward at given rate (from 0-255)
void m5rev (int rate)
{
digitalWrite(EN5, LOW);
digitalWrite(M5_I1, LOW);
digitalWrite(M5_I2, HIGH);
analogWrite(EN5, rate);
}
void brake ()
{
digitalWrite(EN1, LOW);
digitalWrite(EN2, LOW);
digitalWrite(EN3, LOW);
digitalWrite(EN4, LOW);
digitalWrite(EN5, LOW);
digitalWrite(M1_I1, LOW);
digitalWrite(M1_I2, LOW);
digitalWrite(M2_I3, LOW);
digitalWrite(M2_I4, LOW);
digitalWrite(M3_I1, LOW);
digitalWrite(M3_I2, LOW);
digitalWrite(M4_I3, LOW);
digitalWrite(M4_I4, LOW);
digitalWrite(M5_I1, LOW);
digitalWrite(M5_I2, LOW);
}

void loop()
{
  //m1fwd(speedrate);
  m1rev(speedrate);
  delay(700);
  brake();
  //m2fwd(speedrate);
  m2rev(speedrate);
  delay(700);
  brake();
  //m3fwd(speedrate);
  m3rev(speedrate);
  delay(700);
  brake();
  //m4fwd(speedrate);
  m4rev(speedrate);
  delay(700);
  brake();
  //m5fwd(speedrate);
  m5rev(speedrate);
  delay(700);
  brake();
}
