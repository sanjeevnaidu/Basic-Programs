#include <stdio.h>

long main(){
	
	int n;
	long f;
	long fact(int);	//function prototype
	printf("Enter a number: ");
	scanf("%d",&n);
	f = fact(n);		//calling the function by passing 1 argument
	printf("The factorial of %d is: %ld", n, f);
}

//following is the definition of function fact()
long fact(int N){	
	int i;
	long fact=1;
	for(i=N;i>=1;i--){
		fact*=i;
	}
	return fact;		
}
