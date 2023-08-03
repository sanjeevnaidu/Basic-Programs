#include <stdio.h>

int main(){
	
	long n;
	void reverse(long);	//function prototype
	printf("Enter the value of n: ");
	scanf("%ld",&n);
	reverse(n);		//calling the function by passing 3 arguments
}

//following is the definition of function sumfnc()
void reverse(long N){	

	long n = 0;
	while(N !=0){
		n = n*10 + N%10;
		N/=10;
	}
	printf("\n\nReverse: %ld",n);
}
