#include "../include/arrays.h"
#include <stdlib.h>
void bubbleSort(float *arr, const int size){
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortReverse (float *arr, const int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void generateRandomArray(float *arr, const int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = generateRandomNumber(10000);
    }
}
float generateRandomNumber(const int max) {
    return (float)rand()/(float)(RAND_MAX/max);
}