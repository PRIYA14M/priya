#include <stdio>
using namespace std;

int main(void) {
	int a;
	printf("\n enter the number");
	scanf("%d",&a);
	if(a!=0)
	{
		if(a>0)
		printf("Number is positive");
		else
		printf("Number is negative");
	}
	else 
	printf("Number is zero");
	return 0;
}
