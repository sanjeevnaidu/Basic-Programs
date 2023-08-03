#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,n,*arr;	//declared a pointer
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int) * n);	//(int *) is type declaration
											//malloc is used for dynamically allocating space to array with n elements
	
	for(i=0;i<n;i++){
		printf("arr[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("Address: %u\tValue: %d\n", arr+i, *(arr+i));
	}
	getch();
}
