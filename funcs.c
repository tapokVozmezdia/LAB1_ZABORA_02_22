#include "funcs.h"

void selectionSort(int size, float *array)
{
        float min = pow(2,31) + 1;
        int minInd;
        float assist;
        int j;
        for(int i = 0; i < size; ++i) {
            minInd = i;
            min = array[i];
            for(j = i; j < size; ++j) {
                if (array[j] > min) {
                    minInd = j;
                    min = array[j];
                }
            }
            assist = array[minInd];
            array[minInd] = array[i];
            array[i] = assist;
        }
}


void printArray(int size, float *array) 
{
        for(int counter0 = 0; counter0 < size; counter0++) {
            printf("%f ", array[counter0]);
        }
}
