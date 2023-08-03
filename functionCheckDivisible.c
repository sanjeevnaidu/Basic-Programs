#include <stdio.h>

int main(){
	int checkDivisible(int);
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	int check = checkDivisible(num);
	if(check==1)
		printf("Divisible by 6");
	else
		printf("Not Divisible by 6");
}

//following is the definition of function fact()
int checkDivisible(int n){	//formal parameters
	int r = n%6;
	if(r == 0)
		return 1;
	else
		return 0;
	return 0;
}
