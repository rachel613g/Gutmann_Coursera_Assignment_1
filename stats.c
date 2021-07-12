
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

     sort_array(test);
     print_statistics(find_minimum(test), find_maximum(test), find_mean(test), 0);
     print_array(test);
}

void print_statistics( unsigned int minimum, unsigned int maximum, 
		unsigned int mean, unsigned int median){
     printf("minimum: %x\nmaximum: %u\nmean: %u\nmedian:%u\n", 
		     minimum, maximum, mean, median);
     
}

void print_array(unsigned char *ptr){
     printf("sorted array:");
     for (int i = 0; i < SIZE; i++){
	 
	 //format in rows of five
	 if(i % 5 == 0){
	      printf("\n");
	 }
	 
         printf("%u\t", *ptr++);
     }

     printf("\n");
}

unsigned int find_median(unsigned char *ptr){
     if(SIZE%2 == 0){
     
     }else{
          
     }
}


unsigned int find_mean(unsigned char *ptr){
     int sum = 0;
     for (int i = 0; i < SIZE; i++) {
	 sum += *ptr++;
     }
     return sum/SIZE;//i.e.average
}


unsigned int find_minimum(unsigned char *ptr){
     //return first element of sorted array
     return *ptr;
}


unsigned int find_maximum(unsigned char *ptr){
     //return last element of sorted array
     unsigned char *ptr_to_last = (char *) ptr;
     ptr_to_last = ptr + (SIZE-1);
     return *ptr_to_last;
}

void sort_array(unsigned char *ptr){
     qsort((void *)ptr, SIZE, sizeof(char), strcmp);
}
