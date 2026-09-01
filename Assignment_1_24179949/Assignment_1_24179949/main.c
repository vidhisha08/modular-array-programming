/**
* @file main.c
* @author Vidhisha Nataraj
* @date 27/10/2025
*
* @brief Main program file.
*
* @details
* This file contains the main function which gives the user
* an option to select one of the 3 menu functions to execute:
* 1. Perform menu function 1
* 2. Perform menu function 2
* 3. Perform menu function 3
* 4. Terminate the program
*
*/


#include <stdio.h>
#include <stdlib.h>
#include "menu_functions.h"

int main(void)
{
	int choice = 0;

	do {
		printf("\n*******************");
		printf("\n*    MAIN MENU    *");
		printf("\n*******************\n");
		printf("Select an option from the menu (1-3) or 4 to exit:\n");
		printf("1. Menu function 1\n");
		printf("2. Menu function 2\n");
		printf("3. Menu function 3\n");
		printf("4. EXIT\n");
		printf("\n");
		printf("Enter your choice: "); //promt user for input
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			menu_function_1(); // call menu_function_1
			break;

		case 2:
			menu_function_2(); // call menu_function_2
			break;

		case 3:
			menu_function_3(); // call menu_function_3
			break;

		case 4:
			printf("\nExiting the program. Bye!!\n"); // exit message
			break;

		default:
			printf("\n!!INVALID OPTION!!\n"); // invalid option message

		}

	} while (choice != 4); // loop until user chooses to exit

	return EXIT_SUCCESS;
}