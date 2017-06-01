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

void sortAscending(int *a, int *b) {
    if (*a > *b){
        int c;
        c = *b;
        *b = *a;
        *a = c;
    }
}

int main(int argc, const char * argv[]) {
    int numbers[5];

    // initialize array with zeros
    // doing it from the end just for fun
    for(int i = 4; i >= 0 ; i--){
        numbers[i] = 0;
    }
    
    // get array values from user
    for(int i = 0; i < 5 ; i++){
        std::cout << "Give me a value:";
        std::cin >> numbers[i];
    }

    // sort using bubblesort
    for (int y = 4; y > 0 ; y--){
        for (int i = 0; i < y ; i++) {
            sortAscending(&numbers[i], &numbers[i+1]);
        }
    }

    
    // get array values from user
    for(int i = 0; i < 5 ; i++){
        std::cout << "numbers[" << i << "]=" << numbers[i] << "\n";
    }
    
    return 0;
}
