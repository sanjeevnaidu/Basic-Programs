#include <stdio.h>
#include <conio.h>

int main(){
	
	int *ip, a=100;
	float *fp, b=99.99;
	char *cp, c='y';
	
	ip=&a;
	fp=&b;
	cp=&c;
	
	printf("\nAddress of a: %u",ip);
	printf("\nValue of a: %d",*ip);
	printf("\nAddress of b: %u",fp);
	printf("\nValue of b: %.2f",*fp);
	printf("\nAddress of c: %u",cp);
	printf("\nValue of c: %c",*cp);
}
