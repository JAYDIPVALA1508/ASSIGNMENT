/* Q-3). Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.
*/
#include<stdio.h>
#define ch 'f'
int main()
{
	//declaration of variables with data types
	const int a = 20; 
	char d = 'a'; 
	float c = 2.3520;
	
	printf("\nThe value of a = %d",a);
	printf("\nthe value of b = %d",a);
	printf("\nthe value of c = %.2f",c);
	printf("\nthe value of d = %c",d);
	printf("\nthe value of e = %c",ch); 
	
	return 0;
}
