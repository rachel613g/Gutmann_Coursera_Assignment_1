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

/**
 *
 * @brief This function prints the minimum, maximum, mean, and median of an int array.
 *
 * @params unsigned int minimum
 * @params unsigned int maximum
 * @params unsigned int mean
 * @params unsigned int median
 *
 */
void print_statistics(unsigned int minimum, unsigned int maximum, 
		unsigned int mean, unsigned int median);
/**
  *
  * @brief This function prints the given array.
  *
  * @params unsigned char *ptr - pointer to char array.
  *
  */
 void print_array(unsigned char *ptr);

/**
 *
 * @brief This function returns the given array's median value.
 *
 * @params unsigned char *ptr - pointer to char array.
 *
 * @returns unsigned int median - median value of char array.
 *
 */
 unsigned int find_median(unsigned char *ptr);


/**
 *
 * @brief This function returns the given array's mean value.
 *
 * @params unsigned char *ptr - pointer to char array. 
 * 
 * @returns unsigned int mean - mean value of char array.
 *
 */
 unsigned int find_mean(unsigned char *ptr);


/**
 *
 * @brief This function returns the given array's maximum value.
 *
 * @params unsigned char *ptr - pointer to char array.
 *
 * @returns unsigned int maximum - maximum value of char array.
 *
 */
 unsigned int find_maximum(unsigned char *ptr);


/**
 *
 * @brief This function returns the given array's minimum value.
 *
 * @params unsigned char *ptr - pointer to char array.
 *
 * @returns unsigned int minimum - minimum value of char array.
 *
 */
 unsigned int find_minimum(unsigned char *ptr);


/**
 * @brief This function sorts the given array from largest value to
 * smallest value.
 *
 * @params unsigned char *ptr - pointer to char array.
 *
 */
 void sort_array(unsigned char *ptr);
