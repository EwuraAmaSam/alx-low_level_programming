#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL; // return NULL if size = 0
    }

    char *arr = (char *) malloc(size * sizeof(char)); // allocate memory for the array

    if (arr == NULL) {
        return NULL; // return NULL if memory allocation fails
    }

    for (unsigned int i = 0; i < size; i++) {
        arr[i] = c; // initialize each element of the array with the given char
    }

    return arr; // return a pointer to the array
}
