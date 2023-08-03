#include <stdio.h>

int main(){
	
	float tmp[5]; //initialising array of 5 temperature elements
	int n = 0;	//number to keep the count in loop
	while(n<5){
		
		printf("Enter the temperature of day %d: ", n+1);
		scanf("%f", &tmp[n]);	//scanning the nth element of temp array
		n++;	//incrementing the count element
		
	}
	
	float sum = 0.0;	//initialising the sum variable as 0.0
	n = 0;	//re-initialising the count element to 0
	while(n<5){
		
		printf("\nThe temperature of day %d is %.2f", n, tmp[n]); 
		//printing the temperature of nth day
		sum+= tmp[n];	//calculating the sum of temperatures
		n++;	//incrementing the count element
	}
	
	printf("\n\nThe average temperature for 5 days is %.2f", sum/5.0);
	//printing the average of temperatures for 5 days
	
}
