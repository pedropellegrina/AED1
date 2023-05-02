// Pedro Esqueda Pellegrina RA:163964
//AED1 EP05: comparação de tempo dos tipos de ordenação de vetores. Selection Sort.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}