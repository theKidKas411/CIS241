/*
 * Author:      Kasonde Musonda
 * Assignment:  Homework Assignment - 6.31 Palindromes
 * Description: Program tests whether a passed String is a Palindrome
 *				returns true if is Palindrome and false otherwise
 */

#include "palindromes.h"

void programIntro(){

	//Local variables
	char str[50]; 	//Storage for user entered data
	char character;
	int count = 0;  //counter for adding data to the char array

	//Program introduction
	printf("\nThis program checks a passed string or sentence\n");
	printf("whether its a palindrome. Returns true if palindrome\n");
	printf("and false otherwise.\n");

	//Prompts the user to enter a single word or sentence
	printf ("\nEnter a word or sentence: ");
	while((character = getchar()) !='\n'){		//Keep getting data a single character at a time
		if(!isspace(character) && !ispunct(character)){
			str[count] = tolower(character);
			count++;
		}
	}
	//appends the null character to symbolize a string
	str[count]='\0';

	//prints to screen.
	printf("%s",isPalindrome(str) ? "1\n":"0\n");


}

/* isPalindrome main function
 * @param:  Character Array
 * @return: boolean - true or false
 */
bool isPalindrome(char str[]){
	if(strlen(str)== ZERO){
		return true;
	}
	return isPalLogic(str,0,strlen(str)-ONE);
}

/* Checks whether a passed word is a Palindrome
 * isPalindrome helper function
 * @param: char str
 * @return: True or False
 */
bool isPalLogic(char str[], int start, int end){

	//Str is a single character
	if(start == end){
		return true;
	}

	//The first and last letter are different
	//then the word is not a palindrome
	if(str[start] != str[end]){
		return false;
	}

	//If str is more than two characters
	//check if middle string substring is
	//a palindrome as well
	if(start < end + ONE){
		return isPalLogic(str,start+ONE,end-ONE);
	}
	return true;
}

/*
 * Main method for program testing
 */
int main(void){
	while(1){
	//Method invocation
	programIntro();
	}
}
