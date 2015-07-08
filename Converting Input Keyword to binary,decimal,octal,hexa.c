#include<stdio.h>
#include<conio.h>

int main()
{
	char inputKey;
	printf(" Enter a Key Word you wanna type : ");
	do
	{
		inputKey = getch();
		printf(" Input Keyword you type is : %c \n Binary value is :  \n Octal value is : %o \n Decimal value is : %d \n Hexadecimal value is : %x \n\n " , inputKey , inputKey , inputKey , inputKey );
	}while( inputKey != 10 );
	
return 0;
}
