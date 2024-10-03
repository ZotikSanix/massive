#include <stdio.h>
#include <math.h>

void Print(int* data, size_t size_x, size_t size_y){
    for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            printf("data[%d][%d] = %d ", i, j, *(data + i * size_x + j)); //
        }
    printf("\n");
    }
}

void Addition (int* data3, int* data, int* data2, size_t size_x, size_t size_y){
     for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            *(data3 + i * size_x + j) = *(data + i * size_x + j) + *(data2 + i * size_x + j);
        }
    }

}
