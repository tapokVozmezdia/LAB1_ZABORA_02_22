#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

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
        for(int counter0 = 0; counter0 < numOfElements; counter0++){
            printf("%f ", array[counter0]);
        }
        free(array);
        return 0;
}
