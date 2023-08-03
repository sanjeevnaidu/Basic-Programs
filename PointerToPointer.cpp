#include <stdio.h>
#include <conio.h>

int main(){
	
	int *ip,**iip, a=100;
	ip=&a;
	iip=&ip;
	
	printf("\nAddress of a: %u",ip);
	printf("\nValue of a: %d",*ip);
	printf("\nAddress of pointer: %u",iip);
	printf("\nValue of a: %d",**iip);
	printf("\nAddress of a: %u",*iip);
	
}
