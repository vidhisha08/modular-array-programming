/**
* @file array_manipulation.c
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Source file for Module 2
* 
* @details
* This describes the definitions of the working functions for sorting,
* randomizing, finding minimum & maximum, and printing the elements of an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include "array_manipulation.h"


/**
* @brief function 5: Sort an array
*
* @details
* This function is used to sort an array of integers in ascending order
* using the bubble sort method. The bubble sort method iterates through the
* list, compares adjacent elements and swaps them if they are in the
* wrong order. This continues until the list is sorted. All unused
* elements (-1), if any, remain at the end of the array.
*/
void sort_array(int arr[], int capacity)
{
	int i, j, temp; // loop variables and temporary variable for swapping
	// using bubble sort method to sort the array in ascending order
	for (i = 0; i < capacity - 1; i++) {
		for (j = 0; j < capacity - i - 1; j++) {
			if (arr[j] > arr[j + 1]) { // compare adjacent elements
				// swap arr[j] and arr[j+1] if greater
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// after sorting make sure all -1s are at the end
	for (i = 0; i < capacity; i++) {
		for (j = 0; j < capacity - i - 1; j++) {
			if (arr[j] == -1 && arr[j + 1] != -1) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


/**
* @brief function 6: Randomize an array
*
* @details
* This function is used to randomize an array of integers.
* It first collects all the used elements in a temporary array,
* shuffles them, and then places them back into the original array
* with all unused elements (-1) at the end.
*/
void randomize_array(int arr[], int capacity)
{
	int usedCount = 0; // variable to count used elements
	// collect used elements
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			usedCount++;
		} else {
			break; // stops when -1 is found
		}
	}

	// shuffle only the used elements
	for (int i = usedCount - 1; i > 0; i--) {
		int j = rand() % (i + 1); // random index from 0 to i
		int temp = arr[i]; // swap arr[i] and arr[j]
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// fill rest with -1
	for (int i = usedCount; i < capacity; i++) {
		arr[i] = -1;
	}

}


/**
* @brief function 7: Print used elements of an array
*
* @details
* This function first counts the number of used elements in the array.
* Using the count in the loop, it prints the used elements. If there are no used
* element, it print an empty list "[]"
*/
void print_used(int arr[], int capacity)
{
	int count = 0;

	//counts number of used elements
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			count++;
		} else {
			break; // stops when first -1 is found
		}
	}

	//print elements before the first -1
	printf("{");
	for (int i = 0; i < count; i++) {
		printf("%d", arr[i]);
		if (i < count - 1) {
			printf(", ");
		}
	}
	printf("}");
	//result is in the form "{n1, n2, n3,..}"
	//empty list  = "{}"

	if (count == 0) {
		printf("\n");
	}
}


/**
* @brief function 8: Print all elements of an array
*
* @details
* This function iterates through an array using a loop, and
* then print all the elements (used and unused (-1)) in the form
* of "{n1, n2, n3,..}"
*/
void print_all(int arr[], int capacity)
{
	//print all the elements
	printf("{");
	for (int i = 0; i < capacity; i++) {
		printf("%d", arr[i]);
		if (i < capacity - 1) {
			printf(", ");
		}
	}
	printf("}\n");
	//result is in the form "{n1, n2, n3,..}"
}


/**
* @brief function 9: Return minimum element in an array
*
* @details
* This function returns the minimum element from an array  of integers
* with a given capacity. It iterates through the array to find and
* prints the minimum value.
*/
int min_element(int arr[], int capacity)
{
	if (capacity <= 0) {
		printf("array capacity must be greater than 0\n");
		return -1;
	}

	int count = 0; // to count used numbers
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			count++;
		}
	}

	// if no used elements in the array
	if (count == 0) {
		printf("array has no used elements to find minimum\n");
		return -1;
	}

	int min = arr[0]; // declare min variable to contain the first element of the array
	for (int i = 0; i < count; i++) { // loop through used elements
		if (arr[i] < min) {
			min = arr[i]; // if current element is less than min, then update min
		}
	}

	return min;
}



/**
* @brief function 10: Return maximum element in an array
*
* @details
* This function returns the maximum element from an array  of integers
* with a given capacity. It iterates through the array to find and
* prints the maximum value.
*/
int max_element(int arr[], int capacity)
{
	if (capacity <= 0) {
		printf("array capacity must be greater than 0\n");
		return -1;
	}

	int max = arr[0]; // declare max variable to contain the first element of the array
	for (int i = 0; i < capacity; i++) { // loop through array
		if (arr[i] > max) {
			max = arr[i]; // if current element is more than max, then update max
		}
	}

	return max;
}


/**
* @brief function 15: Return number of used elements in an array
*
* @details
* This function iterates through the array and counts the number of elements
* until it encounters the first "-1" value, which indicates the end of used elements.
* It then prints the count of used elements.
*/
int count_used(int arr[], int capacity)
{
	int count = 0;
	for (int i = 0; i < capacity; i++) {
		if (arr[i] != -1) {
			count++;
		}
	}

	return count;
}