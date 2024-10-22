#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include/arrays.h"
#include "include/io.h"

int main(void) {
    srand((unsigned int)time(NULL));
    int size = 0;
    int choice = 0;
    int reverse = 0;
    do {
        getArraySizeFromUser(&size);
        float arr[size] = {};
        getArrayFillTypeFromUser(&choice);
        choice == 1 ? generateRandomArray(arr, size) : getArrayFromUser(arr, size);

        getSortTypeFromUser(&reverse);
        printArray("Array", arr, size);
        reverse ? bubbleSortReverse(arr, size) : bubbleSort(arr, size);
        printArray("\nSorted Array", arr, size);

        printf("\n\033[32mPrint \'r\' to restart\033[0m ");
    }while (getchar() == 'r');
    return 0;
}
