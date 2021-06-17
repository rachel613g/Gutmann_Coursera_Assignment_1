/**
 * @file stats.h
 * @brief Analyzes and sorts a int array.
 *
 * header file for program that sorts an char array and outputs the array's minimum,
 * maximum, mean,and  median.
 *
 * @author Rachel Gutmann
 * @date 16-06-2021
 *
 */

#ifndef __STATS_H__
#define __STATs_H__

/**
 *
 * @brief This function prints the minimum, maximum, mean, and median of an int array.
 * 
 */
 void print_statistics();

/**
  *
  * @brief This function prints the given array.
  *
  * @params unsigned char *ptr - pointer to char array.
  * @params unsigned int length - length of char array.
  *
  */
 void print_array(unsigned char *ptr, unsigned int length);

/**
 *
 * @brief This function returns the given array's median value.
 *
 * @params unsigned char *ptr - pointer to char array.
 * @params unsigned int length - length of char array.
 *
 * @returns unsigned int median - median value of char array.
 *
 */
 unsigned int find_median(unsigned char *ptr, unsigned int length);


/**
 *
 * @brief This function returns the given array's mean value.
 *
 * @params unsigned char *ptr - pointer to char array.
 * @params unsigned int length - length of char array.
 *
 * @returns unsigned int mean - mean value of char array.
 *
 */
 unsigned int find_mean(unsigned char *ptr, unsigned int length);


/**
 *
 * @brief This function returns the given array's maximum value.
 *
 * @params unsigned char *ptr - pointer to char array.
 * @params unsigned int length - length of char array.
 *
 * @returns unsigned int maximum - maximum value of char array.
 *
 */
 unsigned int find_maximum(unsigned char *ptr, unsigned int length);


/**
 *
 * @brief This function returns the given array's minimum value.
 *
 * @params unsigned char *ptr - pointer to char array.
 * @params unsigned int length - length of char array.
 *
 * @returns unsigned int minimum - minimum value of char array.
 *
 */
 unsigned int find_minimum(unsigned char *ptr, unsigned int length);


/**
 * @brief This function sorts the given array from largest value to
 * smallest value.
 *
 * @params unsigned char *ptr - pointer to char array.
 * @params unsigned int lenght - length of char array.
 *
 */
 void sort_array(unsigned char *ptr, unsigned int length);

