#include<stdio.h>

#define PI 3.1422

int main()
{  //Calculate Area of Circle
	
	float r;
	printf("Please enter a radius of Circle : ");
	scanf( "%f" , &r );
	printf("The area of Circle with a radius you enter is : %f" , PI * r * r );

return 0;
}
