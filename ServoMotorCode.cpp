#include <Servo.h>

Servo myservo;
int servosignal = 3;

void setup()
{
    myservo.attach(servosignal);
}

void loop()
{
    myservo.write(90);
    delay(1000);
    myservo.write(180);
    delay(1000);



}