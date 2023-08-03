#include <stdio.h>
#include <conio.h>

int main(){
	
	int size, i=0, j, k, temp, check=0;
	
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
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				check=1;
			}
		}
		if(check==0){
			printf("skipped at loop %d", i+1);
			break;
		}else{
			check=0;
		}
	}
	
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
	
	/*
	Algo:
	1. repeat for i=0 to size-2		[outer loop for number of passes]
	2. repeat for j=0 to size-2-i	[inner loop for comparisons]
	3. If arr[j]>arr[j+1], then:
		set temp:=arr[j]
		set arr[j]:=arr[j+1]
		set arr[j+1]:=temp
		[end of if]
		[end of inner loop]
		[end of outer loop]
	4. return
	*/
	
}
