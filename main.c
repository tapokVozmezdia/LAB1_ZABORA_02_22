#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int numOfElements;
        int inputGiven = 0;
        do {
            scanf("%d", &numOfElements);
            if (numOfElements <= 0) {
                printf("Invalid input. Number of elements must be positive.\n");
            }
            else {
                inputGiven = 1;
            }
        }
        while (inputGiven == 0);
        float *array = (float*) malloc(sizeof(float) * numOfElements);
        for (int counter = 0; counter < numOfElements; ++counter) {
            scanf("%f", &array[counter]);
        }
        selectionSort(numOfElements, array);
        printArray(numOfElements, array);
        free(array);
        return 0;
}
