// This #include statement was automatically added by the Particle IDE.

#include "robo.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//This is a made by for 
//ty :)
//We gonna need a servo library
//should also look up how interupts owkr on this thing
#define micPinA A0
#define micPinD A1
#define buzzPin A2
#define motorIn1 D0
#define motorIn2 D1
#define motorIn3 D2
#define motorIn4 D3
#define IR0 D7
#define IR1 D6
#define IR2 D5 
#define IR3 D4
#define servoPin1 A5
#define servoPin2 A4

Servo myServo1;
Servo myServo2;



void setup() {
    startUp();
    myServo1.attach(servoPin1);
    myServo2.attach(servoPin2);
    Serial.begin();
    Serial.println("Hello World!");
    digitalWrite(A3, HIGH);
    delay(500);
    digitalWrite(A3,LOW);
    buzz("50");
    
    // Function setup
    
    Particle.function("forward", goForward);
    Particle.function("backward", goBackward);
    Particle.function("buzz", buzz);
    Particle.function("forwardL", goForwardL);
    Particle.function("forwardR", goForwardR);
    Particle.function("backwardL", goBackwardL);
    Particle.function("backwardR", goBackwardR);
    Particle.function("wait", wait);
    Particle.function("headlightOn", headlampOn);
    Particle.function("headlightOff", headlampOff);
    

}

void loop() {
    
}