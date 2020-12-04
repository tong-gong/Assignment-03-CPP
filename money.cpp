// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a  "Number Guessing Game" program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This function calculate the cost of pizza.
  const float constants = 0.05;
  int money;
  int workYear;
  int bonusMoney;

  // input
  std::cout << "Enter the money you earn for a year:" << std::endl;
  std::cin >> money;
  std::cout << "Enter the length of service year:" << std::endl;
  std::cin >> workYear;
  std::cout << "" << std::endl;

  // process
  bonusMoney = money * constants;

  // output
  if (workYear > 5) {
      // output
      std::cout << "Your bonus money for this year is $" << (bonusMoney) <<
      std::endl;
  } else {
      std::cout << "Sorry, you will not have bonus money for this year." <<
      std::endl;
  }
}
