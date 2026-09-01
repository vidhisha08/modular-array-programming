/**
* @file array_manipulation.h
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Header file for Module 2
* 
* @details
* This module has the working function declarations for sorting, randomizing, finding
* minimum & maximum, and printing the elements of an array.
*/

#ifndef ARRAY_MANIPULATION_H //start of include guard
#define ARRAY_MANIPULATION_H //to make sure the file is included only once


/**
* @brief function 5: Sort an array
*
* @param arr[]: array to be sorted
* @param capacity: size of the array
*
* @return
* an array sorted in ascending order with all unused elements (-1) at the end
*/
void sort_array(int arr[], int capacity);


/**
* @brief function 6: Randomize an array
*
* @param arr[]: array to be randomized
* @param capacity: size of the array
*
* @return
* an array randomized with all unused elements (-1) at the end
*/
void randomize_array(int arr[], int capacity);


/**
* @brief function 7: Print used elements of an array
*
* @param arr[]: array to be printed
* @param capacity: size of the array
*
* @return
* array of used elements (excluding -1)
*/
void print_used(int arr[], int capacity);


/**
* @brief function 8: Print all elements of an array
*
* @param arr[]: array to be printed
* @param capacity: size of the array
*
* @return
* array of all elements (including -1)
*/
void print_all(int arr[], int capacity);


/**
* @brief function 9: Return minimum element in an array
*
* @param arr[]: array to be checked
* @param capacity: size of the array
*
* @return
* minimum element in the array
*/
int min_element(int arr[], int capacity);


/**
* @brief function 10: Return maximum element in an array
*
* @param arr[]: array to be checked
* @param capacity: size of the array
*
* @return
* maximum element in the array
*/
int max_element(int arr[], int capacity);


/**
* @brief function 15: Return number of used elements in an array
*
* @param arr[]: array to be checked
* @param capacity: size of the array
*
* @return
* number of used elements in the array
*/
int count_used(int arr[], int capacity);


#endif // end of include guard