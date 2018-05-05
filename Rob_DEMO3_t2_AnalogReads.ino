//const int Interpin=2;
//If the wire from Pin2 is connected to 5v on the Arduino the robot stops moving
const int speedrate=150; //Enter some value between 0-255 zero means motor doesn't rotate,255 means it rotates with max speed
#include <stdio.h>
#include <stdlib.h>
//I have used PWM pins for all Enable Pins
const int EN1=8;
const int EN2=9;
const int EN3=10;
const int EN4=11;
const int EN5=12;
int count=0;
int val1;
//I have used ordiary digital pins for motor driver Input pins that control Direction of rotation
const int M1_I1=3;
const int M2_I2=4;
const int M3_I3=5;
const int M4_I4=6;
const int M5_I5=7;

void setup()
{
  Serial.begin(9600);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(EN3,OUTPUT);
  pinMode(EN4,OUTPUT);
  pinMode(EN5,OUTPUT);

  pinMode(M1_I1,OUTPUT);
  pinMode(M2_I2,OUTPUT);
  pinMode(M3_I3,OUTPUT);
  pinMode(M4_I4,OUTPUT);
  pinMode(M5_I5,OUTPUT);
  
  brake();
  while(count<250)
  {
    count=count+1;
  m3rev(speedrate);
  delay(20);
  //m2fwd(speedrate);
  val1=analogRead(A2);
  Serial.println(val1);
  }
  brake();
 /* m3fwd(speedrate);
  delay(1000);
  brake();
  m4fwd(speedrate);
  delay(1000);
  brake();
  m5fwd(speedrate);
  delay(1000);
  brake();*/
  //attachInterrupt(Interpin, brake, HIGH);
}
//Motor M1 goerateints forward at a given rate
void m1fwd (int rate)
{
digitalWrite(EN1, LOW);
digitalWrite(M1_I1, LOW);
analogWrite(EN1, rate);
}
//Motor M1 goes backward at given rate (from 0-255)
void m1rev (int rate)
{
digitalWrite(EN1, LOW);
digitalWrite(M1_I1, HIGH);
analogWrite(EN1, rate);
}
//Motor M2 goes forward at a given rate
void m2fwd (int rate)
{
digitalWrite(EN2, LOW);
digitalWrite(M2_I2, LOW);
analogWrite(EN2, rate);
}
//Motor M2 goes backward at given rate (from 0-255)
void m2rev (int rate)
{
digitalWrite(EN2, LOW);
digitalWrite(M2_I2, HIGH);
analogWrite(EN2, rate);
}
//Motor M3 goes forward at a given rate
void m3fwd (int rate)
{
digitalWrite(EN3, LOW);
digitalWrite(M3_I3, LOW);
analogWrite(EN3, rate);
}
//Motor M2 goes backward at given rate (from 0-255)
void m3rev (int rate)
{
digitalWrite(EN3, LOW);
digitalWrite(M3_I3, HIGH);
analogWrite(EN3, rate);
}
//Motor M3 goes forward at a given rate
void m4fwd (int rate)
{
digitalWrite(EN4, LOW);
digitalWrite(M4_I4, LOW);
analogWrite(EN4, rate);
}
//Motor M2 goes backward at given rate (from 0-255)
void m4rev (int rate)
{
digitalWrite(EN4, LOW);
digitalWrite(M4_I4, HIGH);
analogWrite(EN4, rate);
}
//Motor M3 goes forward at a given rate

void m5fwd (int rate)
{
digitalWrite(EN5, LOW);
digitalWrite(M5_I5, LOW);
analogWrite(EN5, rate);
}
//Motor M5 goes backward at given rate (from 0-255)
void m5rev (int rate)
{
digitalWrite(EN5, LOW);
digitalWrite(M5_I5, HIGH);
analogWrite(EN5, rate);
}
void brake ()
{
digitalWrite(EN1, LOW);

digitalWrite(EN2, LOW);
digitalWrite(EN3, LOW);
digitalWrite(EN4, LOW);
digitalWrite(EN5, LOW);
}
void loop()
{
  brake();
}

/*void loop()
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
}*/
