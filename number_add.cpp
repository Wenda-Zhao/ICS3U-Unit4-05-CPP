// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program for continue statement

#include <iostream>
#include <cmath>


int main() {
    // this fuction for continue statement

    int positive_integer;
    int add_number_int;
    int loop_number = 0;
    int want_add_number_int;
    std::string add_number;
    std::string want_add_number;

    // input
    std::cout << "Enter how many number do you wangt to add: ";
    std::cin >> add_number;

    // process & output
    try {
        add_number_int = std::stoi(add_number);
        if (add_number_int > 0) {
            for (positive_integer = 0; positive_integer < add_number_int;
                 positive_integer+=2) {
                positive_integer = positive_integer - 1;
                std::cout << "Enter number that you want to add: ";
                std::cin >> want_add_number;
                try {
                    want_add_number_int = std::stoi(want_add_number);
                    if (want_add_number_int >= 0) {
                        loop_number = loop_number + want_add_number_int;
                        continue;
                    } else {
                        std::cout << "Please enter a non-negative integer\n";
                    }
                } catch (std::invalid_argument) {
                    std::cout << "It not a integer\n";
                }
            } std::cout << "The answer is " << loop_number;
        } else {
            std::cout << "It is not a positive number";
        }
    } catch (std::invalid_argument) {
        std::cout << "It not a integer";
    }
}
