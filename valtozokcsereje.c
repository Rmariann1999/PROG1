#include<stdio.h>

int main() 
{
int a=7, b=19;
	printf("a=%d b=%d\n",a,b);

	a=(a-b);
	b=(a+b);
	a=(b-a);

	printf("a=%d b=%d\n",a,b);

return 0;

}

		
