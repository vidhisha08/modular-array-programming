/**
* @file array_calculation.h
* @author Vidhisha Nataraj
* @date 27/10/2025
* 
* @brief Header file for Module 3
* 
* @details
* This module has the working function declarations for returning average, median,
* variance, and standard deviation of used elements.
*/

#ifndef ARRAY_CALCULATION_H // start of include guard
#define ARRAY_CALCULATION_H // //to make sure the file is included only once


/**
* @brief function 11: return average of used elements in an array
*
* @param arr[]: array to calculate average
* @param capacity: size of the array
*
* @return
* average of used elements in the array
*/
double print_average(int arr[], int capacity);


/**
* @brief function 12: return median value of used elements in an array
*
* @param arr[]: array to be checked
* @param capacity: size of the array
*
* @return
* median value in the array
*/
double print_median(int arr[], int capacity);


/**
* @brief function 13: return variance of used elements in an array
*
* @param arr[]: array to calculate variance
* @param capacity: size of the array
*
* @return
* variance of used elements in the array
*/
double print_variance(int arr[], int capacity);


/**
* @brief function 14: return standard deviation of used elements in an array
*
* @param arr[]: array to calculate standard deviation
* @param capacity: size of the array
*
* @return
* standard deviation of used elements in the array
*/
double print_standard_deviation(int arr[], int capacity);


#endif // end of include guard
