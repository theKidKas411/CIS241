












/*
 * Author:      Kasonde Musonda
 * Assignment:  Homework Assignment - Calculator using pointer functions
 *
 * Description: Program prompts the user to enter two numbers and further
 * 				prompts the user to select the mathematical operations to
 * 				to be performed on the entered data. Results of the data
 * 				manipulations are printed to the screen thereafter
 */

#include "calculator.h"

/* Program heading
 * @param: void
 * @return: void
 */
void heading(){
	 //Program introduction
	 printf("\nThis program prompts the user to enter two numbers\n");
	 printf("further prompts the user to select a mathematical operation\n");
	 printf("and displays the results to the screen\n\n");
}

/* Prompts user to enter data at command prompt
 * @param: void
 * @return: void
 */
void programIntro(){

	 //Local variables
	 char numOne[6];  //Storage for user entered data
	 char numTwo[6];
	 char choice[2];

	 //An array of pointers to functions
	 void(*pointerArray[])(double, double) = {addition,subtraction,multiply,division};

	 //Pronpts the user to enter data.
	 printf("Enter first number: ");
	 scanf("%5s",numOne);
	 getchar();		//removes the null character in the input buffer

	 printf("Enter second number: ");
	 scanf("%5s",numTwo);
	 getchar();

	 printf("\n 0 - Addition\n 1 - Subtraction\n 2 - Multiplication\n 3 - Division\n");	//Menu selection options
	 printf("\nPlease enter choice of operation: ");
	 scanf(" %1s", choice);

	 //String to double conversion.
	 double x = atof(numOne);
	 double y = atof(numTwo);
	 int choiceInt = atoi(choice);

	 //Menu selection oer user selection
	 //Menu selection
	 switch(choiceInt){
	 	 case ZERO:
	 		 pointerArray[choiceInt](x,y);
	 		 break;
	 	 case ONE:
	 		 pointerArray[choiceInt](x,y);
	 		 break;
	 	 case TWO:
	 		 pointerArray[choiceInt](x,y);
	 		 break;
	 	 case THREE:
	 		 pointerArray[choiceInt](x,y);
	 	 	 break;
		 default:
	 	 	printf("\nInvalid choice - valid options are 0 - 3\n\n");

	 }
 }

 /* Addition of two double numbers x and y
  * @param: double x, double y
  * @preturn: void
  */
 void addition(double x, double y){
	 printf("\nEntered numbers: %.3f and %.3f\n", x,y);
	 printf("Sum: %.3f\n\n", x+y);
 }

 /* Subtraction of two double numbers x and y
  * @param: double x, double y
  * @return: void
  */
 void subtraction(double x, double y){
	 printf("\nEntered numbers: %.3f and %.3f\n", x,y);
	 printf("Difference: %.3f\n\n", x-y);
 }

 /* Multiplication of two double numbers x and y
  * @param: double x, double y
  * @return: void
  */
 void multiply(double x, double y){
	 printf("\nEntered numbers: %.3f and %.3f\n", x,y);
	 printf("Product: %.3f\n\n", x*y);
 }

 /* Division of two double numbers x and y
  * @param: double x, double y
  * @return: void
  */
 void division(double x, double y){
	 printf("\nEntered numbers: %.3f and %.3f\n", x,y);
	 printf("Quotient: %.3f\n\n", x/y);
 }

 /*
  * Main Function - Function invocation
  */
int main(void){

	heading();
	while(1){
		programIntro();
	}
}
