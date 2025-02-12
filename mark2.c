#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "function.h"

void Print(int* data, size_t size_x, size_t size_y);
void Addition (int* data3, int* data, int* data2, size_t size_x, size_t size_y);

main(int argc, char** argv){
    int data3[5][4] = {};

    int data[5][4] = {{11, 12, 13, 14},  // int* data[] -> int*
                      {21, 22, 23, 24},
                      {31, 32, 33, 34},
                      {41, 42, 43, 44},
                      {51, 52, 53, 54}};

    int data2[5][4] = {{11, 12, 13, 14},  // int* data[] -> int*
                      {21, 22, 23, 24},
                      {31, 32, 33, 34},
                      {41, 42, 43, 44},
                      {51, 52, 53, 54}};

                                                // size_t == unsigned int (4 bytes)


    int size_y = sizeof (data)/sizeof(data[0]);
    int size_x = sizeof (data[0])/sizeof(data[0][0]);
    printf("%d %d\n", size_x, size_y);

    Addition((int*) data3, (int*) data, (int*)data2, size_x, size_y);
    Print((int*) data3, size_x, size_y);

    //Print((int*) data, size_x, size_y); // double* a -> int* == (int*) a
    return 0;
}



