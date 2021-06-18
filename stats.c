
/**
 * @file stats.c 
 * @brief Program outputs the minimum, maximum, mean, and median of the given char array.
 *
 *
 * @author Rachel Gutmann
 * @date 06-17-2021
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

     unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                  114, 88,   45,  76, 123,  87,  25,  23,
                                  200, 122, 150, 90,   92,  87, 177, 244,
                                  201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};

     print_statistics(0, 0, find_mean(test, SIZE), 0);
     sort_array(test, SIZE);
}

void print_statistics(unsigned int minimum, unsigned int maximum, 
		unsigned int mean, unsigned int median){
     printf("minimum: %x\nmaximum: %x\nmean: %x\nmode:%x\n", 
		     minimum, maximum, mean, median);
     //TODO: include sorted array
}

void print_array(unsigned char *ptr, unsigned int length){
}

unsigned int find_median(unsigned char *ptr, unsigned int length){
}


unsigned int find_mean(unsigned char *ptr, unsigned int length){
     int sum = 0;
     for (int i = 0; i < 40; i++) {
	 sum += *ptr;
     }
     return sum/length;//i.e. mean
}


unsigned int find_minimum(unsigned char *ptr, unsigned int length){
}


unsigned int find_maximum(unsigned char *ptr, unsigned int length){
}

void sort_array(unsigned char *ptr, unsigned int length){
     qsort((void *)ptr, length, sizeof(char), strcmp);
}
