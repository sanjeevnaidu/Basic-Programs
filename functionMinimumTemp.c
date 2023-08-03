#include <stdio.h>

int main(){
	
	int i;
	int t[3];
	void minTemp(int *);	//function prototype
	printf("Enter the temperatures\n");
	for(i=0;i<3;i++){
	printf("Day %d: ", i+1);
	scanf("%d",&t[i]);
	}
	minTemp(t);
}

//following is the definition of function fact()
void minTemp(int *t){	//formal parameters
	int j,k=1;
	int min = *t;
	for(j=0;j<2;j++){
		if(min>*(t+j)){
			min = *(t+j);
			k=j+1;
		}
	}
	printf("\nMinimum temperature was on Day %d: %d C", k, min);		
}
