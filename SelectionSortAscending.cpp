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
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
	
	/*
	Algo:
	1. repeat for i=0 to size-2		[outer loop for number of passes]
	2. repeat for j=i+1 to size-1	[inner loop for comparisons]
	3. If arr[i]>arr[j], then:
		set temp:=arr[i]
		set arr[i]:=arr[j]
		set arr[j]:=temp
		[end of if]
		[end of inner loop]
		[end of outer loop]
	4. return
	*/
	
}
