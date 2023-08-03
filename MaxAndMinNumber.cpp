#include <stdio.h>
int main(){
	
	int size;
	int n = 0;
	
	printf("Enter size of array: ");
	scanf("%d", &size);	//taking size of array as input
		
	int num[size];	//declaring array of size 'size'
	
	while(n<size){
		
		printf("Enter number %d: ", n+1);
		scanf("%d", &num[n]);	//taking nth number as input
		n++;
		
	}
	
	int max = num[0];	//initializing max number as first element of array
	int min = num[0];	//initializing min number as first element of array
	n = 0;
	
	while(n<size){
		
		if(max<=num[n]){	//checking if the num[n] is bigger than max
			max = num[n];
		}
		if(min>=num[n]){	//checking if the num[n] is smaller than min
			min = num[n];
		}
		n++;
		
	}
	
	printf("\nBiggest number out of the array of %d numbers is: %d", size, max);
	printf("\nSmallest number out of the array of %d numbers is: %d", size, min);

	/*
	Algo:
	1.	set i:=0
	2.	repeat step 3 for i<3
	3.	read: num[i]
	5.	set i:=0,min:=num[0],max:=num[0]
	6.	repeat step 7 while i<3
	7.	If max<=num[i], then:
		max:=num[i]
		If min>=num[i], then:
		min:=num[i]
		i++
	8.	write: max,min
	*/
}
