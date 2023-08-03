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
	printf("\nAddress of b: %u",fp);
	printf("\nAddress of c: %u",cp);
}
