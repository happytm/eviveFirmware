 /*
  * Version 1.0.3
  * This firmware is developed for evive [http://evive.cc].
  * This is licensed under GNU GPL V3 [http://www.gnu.org/licenses/gpl.txt].
  * Written by Dhrupal R Shah for evive platform, Agilo Research.
  * Last update: 2017, July 29, by Harsh Chittora
  * Contact: support@evive.cc
  * Copyright (c) 2017 Agilo Research.  All rights reserved.
  *
  * Getting started with evive: http://learn.evive.cc/
  *
  * NOTE: Works with Arduino IDE 1.6.6 or later [https://www.arduino.cc/en/Main/Software]
 */

#include <evive.h>

void setup(){
  Serial.begin(BAUDRATE);			//Default BAUD Rate: 250000, edit the macro in configuration.h
  tft_init();									//Initialize TFT screen in library screen.cpp
}

void loop(){
  tft_update();								//Updates the TFT on any action in menu
  action();										//Runs the function in array actionFuncList. All functions/user defined programs are added in action FuncList array upon selection.
}