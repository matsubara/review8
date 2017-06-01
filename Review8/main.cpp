//
//  main.cpp
//  Review8
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/*
 
 1. Test the initial program
 2. Change the program to get data from the user (cin)
 3. change the program to get 10 numbers from the user (hint: use a loop)
 4. Sort the array in ascending order (hint: use bubble sort https://www.youtube.com/watch?v=8Kp-8OGwphY)
 
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    int numbers[3];
    int a;
    int b;
    int c;
    std::cout<<"Give me a value:";
    std::cin>> a;
    std::cout<< "Give me a second value:";
    std::cin>> b;
    std::cout<< "Give me a 3rd value:";
    std::cin>> c;
    numbers[0] = a;
    numbers[1] = b;
    numbers[2] = c;
    
    
    std::cout << numbers[0];
    std::cout << numbers[1];
    std::cout << numbers[2];
    
    return 0;
}
