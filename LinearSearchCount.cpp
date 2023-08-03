#include <stdio.h>
int main(){
	
	int size;
	int n = 0,count=0;
	
	printf("Enter size of array: ");
	scanf("%d", &size);	//taking size of array as input
		
	int num[size];	//declaring array of size 'size'
	
	while(n<size){
		
		printf("Enter number %d: ", n+1);
		scanf("%d", &num[n]);	//taking nth number as input
		n++;
		
	}
	
	int searchNum;
	
	printf("\nEnter number to be searched for in the array: ");
	scanf("%d", &searchNum);
	
	n = 0;
	
	while(n<size){
		
		if(searchNum == num[n]){
			printf("\n%d is found at position: %d", searchNum, n+1);
			count++;
		}
		n++;
	}
	
	if(count == 0){
		printf("\n\n%d is not found in the given array", searchNum);
	} else{
		printf("\n\nNumber of occurrences of %d is: %d",searchNum, count);
	}
	
	/*
	Algo:
	1.	set n:=0
	2.	repeat step 3 while n<size
	3.	read: num[n]
		n++
	4.	set n:=0
	5.	repeat step 6 while n<size
	6.	If num[n]==val
		write: Found at location, n+1
		count++
	7.	If count == 0, then:
		write: Not found
		else
		write: count
		[end of if block]
	*/
	
}
