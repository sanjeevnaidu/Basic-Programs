#include <stdio.h>
#include <conio.h>

int main(){
	
	int a[]={100,200,300,150,500};	
	int ip=&a[4]-&a[2];	//declaration of Pointer to Int
	printf("\nip: %d", ip);
	
	double b[]={100.0,200.0,300.0,150.0,500.0};	
	ip=&b[4]-&b[0];	//declaration of Pointer to Int
	printf("\nip: %d", ip);
}
