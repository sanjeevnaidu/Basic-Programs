#include <stdio.h>

long main(){
	
	float pAmt, rInt, sInt;
	int t;
	float calcInterest(float, float, int);	//function prototype
	printf("Enter details in the following order:\n1.Principle amount\n2.Rate of Interest\n3.Time\n\n");
	scanf("%f%f%d",&pAmt,&rInt,&t);
	sInt = calcInterest(pAmt, rInt, t);		//calling the function by passing 3 argument
	printf("\n\nSimple Interest is: %f", sInt);
}

//following is the definition of function fact()
float calcInterest(float p, float r, int t){	//formal parameters
	float s;
	s = (p*r*t)/100;
	return s;		
}
