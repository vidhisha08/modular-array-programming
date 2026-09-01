/**
* @file array_creation.c
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Source file for Module 1
* 
* @details
* This describes the definitions of the working functions for generating random integers,
* filling arrays with keyboard inputs & random integers, and clearing arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#include "array_creation.h"


/**
* @brief function 1: Return a random integer within given limits

* @details
* This function is to return a random integer. Both the upper and lower
* limits are inclusive. For example, if 10 and 20 are the limits, then
* both 10 and 20 may be returned as the random integer.
*/
int random_int(int l_limit, int u_limit)
{
	int rand_num; // variable for random integer
	rand_num = (rand() % (u_limit - l_limit + 1)) + l_limit; // generate random integer within limits
	return rand_num; // return the random integer generated
}


/**
* @brief function 2: Fill an array with inputs from the keyboard
*
* @details
* This function fills an array with inputs from the keyboard given by
* the user. Entering a negative value will stop the input process and
* all the remaining elements (if any) will be populated with '-1'
*/
void fill_array(int arr[], int capacity)
{
	int i; // loop variable
	for (i = 0; i < capacity; i++) // loop to fill the array
	{
		printf("enter value %d (negative to stop): ", i + 1); // prompt for input from user
		scanf_s("%d", &arr[i]); // read input
		if (arr[i] < 0) break; // break the loop if input is negative
	}

	for (; i < capacity; i++) // loop to fill remaining array elements with -1
	{
		arr[i] = -1; // assign -1 to remaining elements
	}
}

/**
* @brief function 3: Fill array random
*
* @details
* This function fills an array with random values in range min to max
* (both incluive). After filling the array with 'size' number of
* element, it will then fill the remaining elements with '-1'
* (they are unused)
*/
void fill_array_random(int arr[], int size, int capacity, int max, int min)
{
	static int once = 0; // static variable to ensure srand is called only once
	if (!once) {
		srand((unsigned int)time(NULL)); // seed the random number generator
		once = 1; // set to true
	}

	int i; // loop variable
	for (i = 0; i < size; i++) // loop to fill the array with random numbers
	{
		arr[i] = random_int(min, max); // calling WF1 function
	}
	for (; i < capacity; i++) // loop to fill remaining array elements with -1
	{
		arr[i] = -1; // assign -1 to remaining elements
	}
}


/**
* @brief function 4: Clear an array
*
* @details
* This function is used to clear an array. It removes all the elements
* of an array of integers. Which means, that it marks all the elements
* as "unused" (sets value to -1)
*/
void clear_array(int arr[], int capacity)
{
	int i; // loop variable
	for (i = 0; i < capacity; i++) { // loop to go through each element of the array
		arr[i] = -1; // mark all elements as "unused" (value is set to -1);
	}
}