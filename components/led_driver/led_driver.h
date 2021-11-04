#pragma once

#define OUTPUT 1 
#define INPUT 0
#define HIGH 1
#define LOW 0

bool pinMode(int pin, int mode);
void digitalWrite(int pin, int value);
int digitalRead(int pin);