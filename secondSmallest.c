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
	
	int min = num[0];	//initializing min number as first element of array
	int secondMin = num[size];	//initializing min number as first element of array
	n = 0;
	
	while(n<size){
		
		if(min>=num[n]){	//checking if the num[n] is smaller than min
			min = num[n];
		}
		if(num[n]>min && secondMin>=num[n]){	//checking if the num[n] is smaller than min
			secondMin = num[n];
		}
		n++;
		
	}
	
	printf("\nSmallest number out of the array of %d numbers is: %d", size, min);
	printf("\nSecond smallest number out of the array of %d numbers is: %d", size, secondMin);

}
