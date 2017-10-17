//
//  main.c
//  Degrees
//
//  Created by Fredrick Ohen on 10/11/17.
//  Copyright © 2017 geeoku. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a global variable
static float lastTemperature = 50;

float fahrenheitFromCelsius(float cel)
{
  lastTemperature = cel;
  float fahr = cel * 1.8 + 32.0;
  printf("%f Celsius is %f Fahrenheit \n", cel, fahr);
  return fahr;
  
}




int main(int argc, const char * argv[]) {

  float freezeInC = 0;
  float freezeInF = fahrenheitFromCelsius(freezeInC);
  printf("Water freezes at %f degrees Fahrenheit. \n", freezeInF);
  printf("The last temperature converted was %f. \n", lastTemperature);
  return EXIT_SUCCESS;
  

  
}
