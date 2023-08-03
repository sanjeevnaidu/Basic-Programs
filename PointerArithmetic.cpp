#include <stdio.h>
#include <conio.h>

int main(){
	
	int *ip,a=100;	//declaration of Pointer to Int
	ip=&a;
	
	printf("\nAddress: %u and Value: %d", ip, *ip);
	++ip;
	printf("\nAddress: %u and Value: %d", ip, *ip);
	
	double *fp,b=100.0;	//declaration of Pointer to Int
	fp=&b;
	
	printf("\nAddress: %u and Value: %lf", fp, *fp);
	++fp;
	printf("\nAddress: %u and Value: %lf", fp, *fp);
}
