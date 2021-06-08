// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: June 2021
// This program program uses a list

#include <iostream>
#include <list>


main() {
    // this function uses a list to calculate the average of marks

    std::list<float> marks;
    float tempMark;
    float average;
    float total = 0;
    float counter = 0;

    // input
    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;

    std::cout << "What is your mark? (as %): ";
    std::cin >> tempMark;
    marks.push_back(tempMark);

    while (tempMark != -1) {
        std::cout << "What is your mark? (as %): ";
        std::cin >> tempMark;
        marks.push_back(tempMark);
    }

    marks.pop_back();  // remove the "-1" that was added
    std::cout << "" << std::endl;

    for (float tempMark2 : marks) {
        marks.push_front(tempMark2);
        total += tempMark2;
        counter += 1;
    }

    average = total / (counter);

    std::cout << "The average is: " << average << std::endl;
    std::cout << std::endl;
}