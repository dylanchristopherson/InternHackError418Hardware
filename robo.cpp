/*
Overview and documentation of this library:

*/

#include "application.h"
#include "robo.h"
#include <stdlib.h>
#include <stdio.h>

#define micPinA A0
#define micPinD A1
#define buzzPin A3
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
#define LEDPin A2

/*function to set all the pins to the correct mode
CALL IN SETUP BEFORE ANYOTHER FUCNTIONS
returns 1 if successful if not returns 0 (not sure if that actually works but why not?)
*/
int  startUp(){
    pinMode(micPinA, INPUT_PULLUP);
    pinMode(micPinD, INPUT_PULLUP);
    pinMode(buzzPin, OUTPUT);
    pinMode(motorIn1, OUTPUT);
    pinMode(motorIn2, OUTPUT);
    pinMode(motorIn3, OUTPUT);
    pinMode(motorIn4, OUTPUT);
    pinMode(IR0, INPUT_PULLUP);
    pinMode(IR1, INPUT_PULLUP);
    pinMode(IR2, INPUT_PULLUP);
    pinMode(IR3, INPUT_PULLUP);
    pinMode(servoPin1, OUTPUT);
    pinMode(servoPin2, OUTPUT);
   
    return 1;
}
/* function to play a tone one the buzzer
THIS IS A BLOCKING FUNCTION
takes in frequency to play and duration in milliseconds
*/
int buzz(String str){
    int dur = str.toInt();
    
    digitalWrite(buzzPin,HIGH);
    delay(dur);
    digitalWrite(buzzPin,LOW);
    return 1;
}
 
/* checks the Mic to see if there is sound
uses the Digital out of the Mic
returns a 1 if sound, 0 if none
*/
int checkMic(){
    return digitalRead(micPinD);
}
/*
gets the Mic Value on a scale of 
May want to call checkMic  first to check that there is data to be read
*/
int getMicVal(){
    return analogRead(micPinA);
}

/*
    THE PARAMETER FOR THESE  FUNCTIONS TAKES IN SECONDS
*/
int goBackward(String str){
    int dur = str.toInt();
    
 digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, HIGH);
  digitalWrite(motorIn4, LOW);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
 }
 
int goForward(String str){
    int dur = str.toInt();
    
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, HIGH);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, HIGH);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
 }

int goBackwardR(String str){
    int dur = str.toInt();
    
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, HIGH);
  digitalWrite(motorIn4, LOW);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
}

int goForwardR(String str){
    int dur = str.toInt();
    
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, HIGH);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
}

int goBackwardL(String str){
    int dur = str.toInt();
    
  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
}

int goForwardL(String str){
    int dur = str.toInt();
    
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, HIGH);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  delay(dur*1000);
  // now turn off motors
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  return 1;
}
/*
Check an IR sensor
returns 1 if the IRsensor senses something
takes in an IR sensors ie IR1..IR2..IR3..IR4
*/
int checkIR(String str){
    int IR = str.toInt();
    return !digitalRead(IR);
}

int headlampOn(String str){
    digitalWrite(LEDPin, HIGH);
    return 1;
}

int headlampOff(String str){
    digitalWrite(LEDPin, LOW);
    return 1;
}

int wait(String str){
    int wait = str.toInt();
    delay(wait * 1000);
    return 1;
}
