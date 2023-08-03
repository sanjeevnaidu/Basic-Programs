#include <stdio.h>

int main(){
	
	int a,b,c,sum;
	int sumfnc(int,int,int);	//function prototype
	printf("Enter the values of a,b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	sum = sumfnc(a,b,c);		//calling the function by passing 3 arguments
	printf("The sum of a,b and c is: %d",sum);
}

//following is the definition of function sumfnc()
int sumfnc(int A, int B, int C){	//function that calculates and returns the sum of 3 integers
	int SUM = A+B+C;				//A,B and C are formal(dummy) variables
	return SUM;						//return is keyword that returns the value of SUM to main function
}
