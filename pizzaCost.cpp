// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>
#include <cmath>

int main() {
  // declare constants
  const float HST = 0.13;
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGRED_COST = 1.5;

  // declare variables
  float total, tax, subtotal, diameter, totalNew;

  // get the diameter from the user
  std::cout << "Enter the diameter (inches): ";
  std::cin >> diameter;

  // calculate the subtotal using labour cost + rental cost + diameter * 1.5

  subtotal = LABOUR_COST + RENTAL_COST + diameter * INGRED_COST;

// calculate the tax using subtotal and HST

  tax = subtotal * HST;

// calculate the total using subtotal and tax

  total = subtotal + tax;

// display integral value closest to 15.5

  totalNew = (floor(total * 100)) / 100;

// display the Total to the user
  std::cout << "\n";
  std::cout << "total = " << totalNew << " $" << std::endl;
}
