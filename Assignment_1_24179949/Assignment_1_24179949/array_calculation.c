/**
* @file array_calculation.c
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Source file for Module 3
* 
* @details
* This describes the definitions for the working functions for returning average, median,
* variance, and standard deviation of used elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include "array_calculation.h"
#include <math.h>


/**
* @brief function 11: Return average of used elements in an array
*
* @details
* This function iterates through an array using a loop, and
* then calculates the average of all the used elements (not -1)
* in the array and prints it along with the given array. If there
* are no elements, it returns 0.0.
*/
double print_average(int arr[], int capacity)
{
	int sum = 0;
	int count = 0;

	//calculate the number of used numbers and sum of them
	for (int i = 0; i < capacity; i++) { //loop through the array
		if (arr[i] != -1) {
			sum += arr[i]; //add to sum if used element
			count++; //increment count of used elements
		}
	}

	if (count == 0) {
		return 0.0; //no used elements 
	}

	//calcualte average
	double average = (double)sum / count;

	return average;
}


/**
* @brief function 12: Return median value of used elements in an array
*
* @details
* This function iterates through an array using a loop,
* extracts the used elements (not -1) into a new array,
* sorts that array using bubble sort, and then calculates
* the median of the used elements. If there are even number of elements,
* the median is the average of the middle two numbers,  if it odd then
* the median is the middle element. It then prints the array
* of used elements and their median. If there are no used
* elements, it returns 0.0.
*/
double print_median(int arr[], int capacity)
{
	//dynamically allocate memory for used elements array
	int* used_elements = (int*)malloc(capacity * sizeof(int));
	if (used_elements == NULL) {
		printf("Memory allocation failed\n");
		return 0.0;
	}
	int count = 0;

	//extract used elements from arr[] to used_elements[]
	for (int i = 0; i < capacity; i++) { //loop through the original array
		if (arr[i] != -1) {
			used_elements[count] = arr[i];
			count++;
		}
	}
	if (count == 0) {
		free(used_elements);
		return 0.0; //no used elements
	}

	//sort the used_elements[] array using bubble sort (lowest to highest)
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (used_elements[j] > used_elements[j + 1]) {
				//swap
				int temp = used_elements[j];
				used_elements[j] = used_elements[j + 1];
				used_elements[j + 1] = temp;
			}
		}
	}

	//calculate median
	double median;
	if (count % 2 == 1) {
		median = used_elements[count / 2]; //middle element for odd count
	} else {
		median = (used_elements[(count / 2) - 1] + used_elements[count / 2]) / 2.0; //average of two middle elements for even count
	}

	free(used_elements);
	return median;
}
/**
* @brief function 13: Return variance of an array
*
* @details
* This function takes an array of elements, using only the used elements,
* it finds the variance.
* It find the average, calculates the sum of the squared differences of the elements,
* and finally divides it by the total number of used elements.
*/
double print_variance(int arr[], int capacity)
{
	int count = 0;
	double sum = 0.0;

	//compute the sum and the number of used elements 
	for (int i = 0; i < capacity; i++) { //iterate through the array
		if (arr[i] != -1) {
			sum += arr[i];
			count++;
		}
	}

	//for empty list (that is no used elements)
	if (count == 0) {
		return 0.0;
	}

	//calculate average
	double avg = sum / count;

	//calculate the sum of the squared differences
	double sum_of_diff = 0.0;
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			double diff = arr[i] - avg; //diff = (n(i) - avg)
			sum_of_diff += diff * diff; //sum of ((n(i) - avg) ^ 2)
		}
	}

	//compute the variance
	double variance = sum_of_diff / count; // sum of ((n(i) - avg) ^ 2) / N (number of used elements

	return variance;
}


/**
* @brief function 14: Return standard deviation of used elements in an array
*
* @details
* This function takes an array of elements, using only the used elements,
* it finds the standard deviation.
* It find the average, calculates the sum of the squared differences of the elements,
* and finally divides it by the total number of used elements to get variance,
* then takes the square root of the variance to get the standard deviation.
*/
double print_standard_deviation(int arr[], int capacity)
{
	int count = 0;
	double sum = 0.0;

	//compute the sum and the number of used elements 
	for (int i = 0; i < capacity; i++) { //iterate through the array
		if (arr[i] != -1) {
			sum += arr[i];
			count++;
		}
	}

	//for empty list (that is no used elements)
	if (count == 0) {
		return 0.0;
	}

	//calculate average
	double avg = sum / count;

	//calculate the sum of the squared differences
	double sum_of_diff = 0.0;
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			double diff = arr[i] - avg; //diff = (n(i) - avg)
			sum_of_diff += diff * diff; //sum of ((n(i) - avg) ^ 2)
		}
	}

	//compute the standard deviation using the variance
	double variance = sum_of_diff / count; // sum of ((n(i) - avg) ^ 2) / N (number of used elements
	double std_dev = sqrt(variance); //standard deviation = sqrt(variance)

	return std_dev;
}