#include "../include/io.h"
#include <stdio.h>
#include <math.h>

void getArraySizeFromUser(int *size) {
    char isValid = 0;
    do {
        printf("\nPlease, enter a array length in range[2, 10000]: ");
        isValid = scanf("%d", &*size);
        while (getchar() != '\n');
        if (!isValid) {
            printf("\nPlease, try again!");
            continue;
        }
        if (*size < 2 || *size > 10000) {
            isValid = 0;
            printf("\nPlease, enter a valid array length");
        }
    } while (!isValid);
}
void getArrayFillTypeFromUser(int *choice) {
    char isValid = 0;
    do {
        printf("\nPlease select the method of setting the array (1 - generated, 2 - manually): ");
        isValid = scanf("%d", &*choice);
        while (getchar() != '\n');
        if (!isValid) {
            printf("\nPlease, try again!");
            continue;
        }
        if(*choice != 1 && *choice != 2) {
            printf("\nEnter 1 or 2!");
            isValid = 0;
        }
    } while (!isValid);
}
void getArrayFromUser(float *array, int size) {
    char isValid = 0;
    for (int i = 0; i < size; i++) {
        do {
            printf("\nEnter array element (%d) in range [-10000, 10000] (Accuracy will be preserved only for 5 decimal places): ", i + 1);
            isValid = scanf("%f", &array[i]);
            while (getchar() != '\n');
            if(!isValid) {
                printf("\nPlease, try again!");
            }
            if(array[i] < -10000 || array[i] > 10000) {
                isValid = 0;
                printf("\nPlease, try again!");
            }
        }while (!isValid);
    }
}
void getSortTypeFromUser(int *choice) {
    char isValid = 0;
    do {
        printf("Enter a sort type(0 - defalut 1 - reversed): ");
        isValid = scanf("%d", &*choice);
        while (getchar() != '\n');
        if(*choice != 0 && *choice != 1) {
            printf("Enter 0 or 1!");
        }
    }while(!isValid);
}

void printArray(char *message, float *array, int size) {
    int maxNumberLength = size == 0 ? 1 : (int) log10(size) + 2;
    printf("%s\n", message);
    for (int i = 0; i < size; i++) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("|| %d)%*s %-12f",
               i + 1,
               maxNumberLength - (i == 0 ? 1 : (int) log10(i) + 1),
               " ",
               array[i]);
    }
}
