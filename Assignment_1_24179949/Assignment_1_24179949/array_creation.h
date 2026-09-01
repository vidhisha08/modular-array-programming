/**
* @file array_creation.h
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Header file for Module 1
* 
* @details
* This module has the working function declarations for generating random integers,
* filling arrays with keyboard inputs & random integers, and clearing arrays.
*/

#ifndef ARRAY_CREATION_H //start of include guard
#define ARRAY_CREATION_H //to make sure the file is included only once


/**
* @brief function 1: return a random integer within given limits

* @param l_limit: lower limit
* @param u_limit: upper limit
*
* @return
* random integer between the given limits (both inclusive)
*
*/
int random_int(int l_limit, int u_limit);


/**
* @brief function 2: fill an array with inputs from the keyboard
* 
* @param arr[]: array to be filled
* @param capacity: size of the array
*
* @return
* an array with inputs from the keyboard
*/
void fill_array(int arr[], int capacity);


/**
* @brief function 3: fill array random
*
* @param arr[]: array to be filled,
* @param size: number of elements to be filled,
* @param capacity: size of the array,
* @param max: maximum value for random number generation,
* @param min: minimum value for random number generation
*
* @return
* an array filled with random numbers within the specified range
*/
void fill_array_random(int arr[], int size, int capacity, int max, int min);


/**
* @brief function 4: clear an array
*
* @param arr[]: array to be cleared
* @param capacity: size of the array
*
* @return
* an array with all elements marked as "unused" (set to -1)
*/
void clear_array(int arr[], int capacity);



#endif //end of include guard