// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on September 2019
// this program solves the sum of two integers
// with user input

#include <iostream>


int main() {
    // this function calculates sum of two integers
    int number1;
    int number2;
    int answer;

    // input
    std::cout << "Enter first number (integer): ";
    std::cin >> number1;
    std::cout << "Enter second number (integer): ";
    std::cin >> number2;

    // process
    answer = number1 + number2;

    // output
    std::cout << "" << std::endl;
    std::cout << number1 << "+" << number2 << "=" << answer << std::endl;
}
