#include <stdio.h>
#include <conio.h>

int main(){
	
	int i, arr[]={100,200,300};	//declared an array with 3 elements
	printf("Base Address: %u\n",arr);	//a pointer is created with same name as array with value as address of base element
	printf("2nd element Address: %u\n",arr+1);	//arr+1 jumps 4 bytes as we declared int data type
	printf("3rd element Address: %u\n",arr+2);
	printf("1st element value: %d\n",*arr);		//value of element at address=value of *arr
	printf("2nd element value: %d\n",*(arr+1));
	printf("3rd element value: %d\n\n",*(arr+2));
	
	for(i=0;i<3;i++){
		printf("Address: %u\tValue: %d\n", arr+i, *(arr+i));
	}
	getch();
}
