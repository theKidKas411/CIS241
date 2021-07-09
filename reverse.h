/* Header File for the Reverse Bits File
 * @author: Kasonde Musonda
 */
#include <stdio.h>
#include <stdlib.h>

/*Program Definitions*/
#define ZERO     0
#define SHIFT 	 1
#define ONE 	 1
#define EIGHT    8
#define HEXSHIFT 15
#define SIXTEEN  16

/*Function Prototypes*/
void enteredData(void);
void printToScreen(unsigned num);
unsigned int reverseBits(unsigned num);
