#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int traverse_arr(int *array, int start, int end, int value) {
    int middle;
    int i;
    if (start >= end) {
      return (-1);
    }

    printf("Searching in array: ");
    for (i = start; i < end; i++) {
        if (i == end - 1) {
            printf("%d", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf("\n");

    middle = floor((start + end) / 2);
    if (array[middle] == value) {
      return (middle);
    }

    if (array[middle] > value) {
      return (traverse_arr(array, start, middle, value));
    } else {
      return (traverse_arr(array, middle + 1, end, value));
    }
}

int binary_search(int *array, size_t size, int value) {
    if (size == 0) {
      return (-1);
    }
    return (traverse_arr(array, 0, (int)size, value));
}
