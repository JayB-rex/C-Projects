//
// Created by jayb on 2/13/26.
//

#include "matrix_numbers.h"
#include <iostream>


int main() {
    // declaring both matrix

    int matrix_one[2][2] = {
        {3, 2},
        {2, 8}
    };

    int matrix_two[2][2] = {
        {1, 2},
        {3, 4}
    };

// first 3 * 1 + 2 * 3
        // 3 * 2 + 2 * 4
        //
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix_one[i][j] << " ";
        }
    }


}