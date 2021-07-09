/* Assignment 3: Bit reversal
 *
 * @Author:		 Kasonde Musonda
 * Description:  Writes a program that reverses the order of
 * 			     the bits in an unsigned integer value and prints
 * 			     results in stdio
 */
#include <reverse.h>

/* Prompts the user to enter an unsigned digit
 * @param: void
 * @return: void
 */
void enteredData(){
	unsigned int num;

	printf("\nPlease enter a positive whole number: ");
	scanf("%u",&num);

	//Method Invocation
	printToScreen(num);

	printf("Bits after reversing for original number\n");
	printToScreen(reverseBits(num));
}

/* Converts decimal numbers to binary and prints
 * to screen for confirmation
 * @param: unsigned int
 * @return: void
 */
void printToScreen(unsigned num){

	unsigned int mask = ONE<<HEXSHIFT; 				//Mask for performing bitwise manipulation
	printf("\nEntered number: %d\t Binary: ",num);	//Prints the entered integer to the screen

	//prints a 1 if 1 and 1 else 0.
	for(int i=ONE;i <= SIXTEEN;i++){
		if(mask & num){
			putchar('1');
		}else{
			putchar('0');
		}
		num<<=ONE;

		if(i % EIGHT==ZERO){
			putchar(' '); 	//prints space with 8th bit
		}
	}
	putchar('\n');
}

/* Prints the bits of an entered integer in reverse order
 * @param: unsigned int
 * @return: unsigned int
 */
unsigned int reverseBits(unsigned num){

	//Local Variables
	unsigned int mask = ONE;
	unsigned int rev = ZERO;

	for(int i = ZERO; i<=HEXSHIFT;i++){
		rev<<=ONE;
		rev|=(num & mask);
		num>>=ONE;
	}
	return rev;
}

/* Method Invocation
 * @param: void
 * @return: integer
 */
int main(void){

	printf("\nThis program prompts the user to enter an unsigned integer\n");
	printf("computes its binary equivalence and prints the results to the screen\n");

	while(1){
		enteredData();
	}
}
