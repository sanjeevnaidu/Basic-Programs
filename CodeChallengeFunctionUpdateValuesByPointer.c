#include <stdio.h>

int main(){
	
	int a,b,c,d;
	void updation(int *, int *, int *, int *);	//function prototype
	printf("Enter the 4 values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	updation(&a,&b,&c,&d);
	printf("\na:%d\nb:%d\nc:%d\nd:%d\n",a,b,c,d);
}

//following is the definition of function fact()
void updation(int *A, int *B, int *C, int *D){	//formal parameters
	*A*=4;
	*D*=4;
	*B/=2;
	*C/=2;	
}
