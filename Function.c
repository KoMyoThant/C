#include<stdio.h>

void name();					//Function declaration
int main()
{
	char yourname[20];
	//char* fetchStr = "%[^\n]%*c" ;		//Solving warning
	name();					//Function Call
	scanf( "%s" , &yourname );
	printf("Your name is : %s\n " , yourname );

return 0; 
}

//Request name function defination

void name()
{
	printf("Please enter your name : ");
}
