// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program
#include <iostream>

int main() {
    // this function prints numbers from 1000 to 2000, five per line
    for (int number = 1000; number <= 2000; number++) {
        std::cout << number << " ";
        if ((number - 999) % 5 == 0) {
            std::cout << std::endl;
        }
    }
}
