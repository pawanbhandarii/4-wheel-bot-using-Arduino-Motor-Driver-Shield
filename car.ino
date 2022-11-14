#include <AFMotor.h>

AF_DCMotor motor1(3);
AF_DCMotor motor2(2);

char bt='F';
void Stop()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void forward()
{
  Stop();
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}
void backward()
{
  Stop();
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
}
void forwardleft()
{
  Stop();
  motor1.run(RELEASE);
  motor2.run(FORWARD);
}
void forwardright()
{
  Stop();
  motor1.run(FORWARD);
  motor2.run(RELEASE);
}

void backleft()
{
  Stop();
  motor1.run(RELEASE);
  motor2.run(BACKWARD);
}
void backright()
{
  Stop();
  motor1.run(BACKWARD);
  motor2.run(RELEASE);
}

void left()
{
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}
void right()
{
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}

void setup()
{
  Serial.begin(9600);
 
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  Stop();
}
void loop() {
  bt=Serial.read();
  Serial.print(bt);
  Serial.print("\n");

if(bt=='F')
{
 forward();
}
if(bt=='B')
{
 backward();
 } 
if(bt=='L')
{
 left(); 
 }
if(bt=='R')
{
 right(); 
 }
if(bt=='G')
{
 forwardleft();
 }
if(bt=='I')
{
 forwardright();
 }
if(bt=='H')
{
 backleft();
 } 
if(bt=='J')
{
 backright();
 } 
if(bt=='S')
{
 Stop();
}
}
