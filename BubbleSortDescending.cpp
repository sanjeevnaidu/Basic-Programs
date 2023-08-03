#include <stdio.h>
#include <conio.h>

int main(){
	
	int size, i=0, j, temp;
	
	printf("Enter size of array: ");
	scanf("%d", &size);	//taking size of array as input
		
	int arr[size];	//declaring array of size 'size'
	
	while(i<size){
		
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);	//taking nth number as input
		i++;
		
	}
	
	for(i=0;i<size-1;i++){
		for(j=0;j<(size-1-i);j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
	
}
