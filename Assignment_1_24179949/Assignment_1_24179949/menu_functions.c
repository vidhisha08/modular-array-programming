/**
* @file menu_functions.c
* @author Vidhisha Nataraj
* @date 27/10/2025
*
* @brief Defining all the menu functions.
*
* @details This file contains specifications and definitions for the menu functions.
*/

#include <stdio.h>
#include <stdlib.h>
#include "array_creation.h"
#include "array_manipulation.h"
#include "array_calculation.h"
#include "menu_functions.h"


/**
 * @brief Menu Function 1
 *
 * Creates an array with capacity 10 and performs the following:
 * 1. Fill array with 7 random numbers in the range 10 to 20 (WF3)
 * 2. Prints used elements (WF7)
 * 3. Prints all elements (WF8)
 * 4. Clears the array (WF4)
 * 5. Prints used elements (WF7)
 * 6. Prints all elements (WF8)
 * 7. Fills array with 5 random numbers in range 20 to 30 (WF3)
 * 8. Sorts array (WF5)
 * 9. Prints all elements (WF8)
 * 10. Prints minimum and maximum values (WF9, WF10)
 */

 // function declaration
void menu_function_1(void)
{
	printf("\n*******************");
	printf("\n* MENU FUNCTION 1 *");
	printf("\n*******************\n");
	printf("!!! the array has a capacity of 10 elements. !!!\n");

	int arr[10]; // declare array of capacity 10;
	int capacity = 10;

	printf("\n");
	printf("\n");
	//1. using wf_3: fill array with 7 random numbers in the range 10 to 20.
	printf("1. Filling array with 7 random numbers in the range 10 to 20\n");

	fill_array_random(arr, 7, 10, 20, 10);
	// to print the array elements
	printf("array: \n");
	printf("{");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]); //print the element
		if (i < 10 - 1) {
			printf(", ");
		}
	}
	printf("}");
	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//2. using wf_7: print used elements of the array
	printf("2. Printing used elements of the array\n");

	// using the same array 'arr'
	// call print_used function
	print_used(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//3. using wf_8: print all elements of the array
	printf("3. Printing all elements of the array\n");

	// using the same array 'arr'
	// call print_all function
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//4. using wf_4: clear the array
	printf("4. Clearing the array\n");

	// using the same array 'arr'
	clear_array(arr, capacity);
	// to print the array elements
	printf("array after clearing \n");
	printf("{");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]); //print the element
		if (i < 10 - 1) {
			printf(", ");
		}
	}
	printf("}");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//5. using wf_7: print used elements of the array
	printf("5. Printing used elements\n");

	// using the same array 'arr'
	print_used(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//6. using wf_8: print all elements of the array
	printf("6. Printing all elements\n");

	// using the same array 'arr'
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//7. using wf_3: fill array with 5 random numbers in the range 20 to 30.
	printf("7. Filling array with 5 random numbers in the range 20 to 30\n");

	fill_array_random(arr, 5, 10, 30, 20);
	// to print the array elements
	printf("array: \n");
	printf("{");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]); //print the element
		if (i < 10 - 1) {
			printf(", ");
		}
	}
	printf("}");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//8. using wf_5: sort the array
	printf("8. Sorting the array\n");

	// using the newly generated array 'arr'
	sort_array(arr, capacity);
	printf("SORTED!!\n");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//9. using wf_8: print all elements of the array
	printf("9. Printing all elements\n");

	// using the same array 'arr'
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//10. using wf_9 & wf_10: find minimum & maximum element of the array
	printf("10. Finding minimum & maximum element of the array\n");

	// using the same array 'arr'
	printf("The minimum element: %d\n", min_element(arr, capacity));
	printf("The maximum element: %d\n", max_element(arr, capacity));

	printf("\n");
	printf("\n");
}



/**
 * @brief Menu Function 2
 *
 * Creates an array with capacity 20 and performs the following:
 * 1. Fills array with 15 random numbers in range 10 to 20 (WF3)
 * 2. Prints all elements (WF8)
 * 3. Sorts array (WF5)
 * 4. Print all elements (WF8)
 * 5. Randomizes the array (WF6)
 * 6. Print all elements (WF8)
 */
void menu_function_2(void)
{
	printf("\n*******************");
	printf("\n* MENU FUNCTION 2 *");
	printf("\n*******************\n");
	printf("!!! the array has a capacity of 20 elements. !!!\n");

	int arr[20]; // declare array of capacity 20;
	int capacity = 20;

	printf("\n");
	printf("\n");
	//1. using wf_3: fill array with 15 random numbers in the range 10 to 20
	printf("1. Filling array with 15 random numbers in the range 10 to 20\n");

	fill_array_random(arr, 15, 20, 20, 10);
	// to print the array elements
	printf("ARRAY IS CREATED!!\n");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//2. using wf_8: print all elements of the array
	printf("2. Printing all elements\n");

	// using the same array 'arr'
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//3. using wf_5: sort the array
	printf("3. Sorting the array\n");

	// using the same array 'arr'
	sort_array(arr, capacity);
	printf("SORTED!!\n");
	// to print the array elements

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//4. using wf_8: print all elements of the array
	printf("4. Printing all elements\n");

	// using the same array 'arr'
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//5. using wf_6: randomize the array
	printf("5. Randomizing the array\n");

	// using the same array 'arr'
	randomize_array(arr, capacity);
	printf("ARRAY RANDOMIZED!!\n");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//6. using wf_8: print all elements
	printf("6. Printing all elements\n");

	// using the same array 'arr'
	print_all(arr, capacity);

	printf("\n");
	printf("\n");

}



/**
 * @brief Menu Function 3
 *
 * Creates an array with capacity 100 and performs:
 * 1. Fills array with values from keyboard (WF2)
 * 2. Prints minimum and maximum (WF9, WF10)
 * 3. Prints average and median (WF11, WF12)
 * 4. Prints variance and standard deviation (WF13, WF14)
 * 5. Prints the count of used elements (WF15)
 */
void menu_function_3(void)
{
	printf("\n*******************");
	printf("\n* MENU FUNCTION 3 *");
	printf("\n*******************\n");
	printf("!!! the array has a capacity of 100 elements. !!!\n");

	int arr[100]; // declare array of capacity 100;
	int capacity = 100;

	printf("\n");
	printf("\n");
	//1. using wf_2: fill array with values from the keyboard
	printf("1. Filling array with values from keyboard\n");

	fill_array(arr, capacity);

	// to print the array elements
	printf("final array: \n");
	printf("{ ");
	for (int i = 0; i < capacity; i++) {
		printf("%d ", arr[i]); //print the element
		if (i < capacity - 1) {
			printf(", ");
		}
	}
	printf("}\n");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//2. using wf_9 & wf_10: find minimum & maximum element of the array
	printf("2. Finding minimum & maximum element of the array\n");

	// using the same array 'arr'
	printf("The minimum element: %d\n", min_element(arr, capacity));
	printf("The maximum element: %d\n", max_element(arr, capacity));

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//3. using wf_11 & wf_12: find average & median of used elements in the array
	printf("3. Finding average & median of used elements in the array\n");
	printf("\n");
	// using the same array 'arr'
	printf("array has average value %.2f and median value %.2f\n",
		print_average(arr, capacity),
		print_median(arr, capacity));

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");
	//4. using wf_13 & wf_14: find variance & standard deviation of used elements in the array
	printf("4. Finding variance & standard deviation of used elements in the array\n");
	printf("\n");

	// using the same array 'arr'
	printf("array with %d used elements has variance %.2f and standard deviation %.2f\n",
		count_used(arr, capacity),
		print_variance(arr, capacity),
		print_standard_deviation(arr, capacity));

	printf("\n");
	printf("\n");

}