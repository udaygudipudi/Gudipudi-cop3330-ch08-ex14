/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

void f (const int size){

  for(int i = 0; i < size; i++){

    std::cout << "Hello World!\n";

  }

  return;

}

int main() {

  int size = 20;

  f(size);
  
  return 0;
} 