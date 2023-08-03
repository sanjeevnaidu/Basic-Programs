#include <stdio.h>

int main(){
	
	int i;
	int t[10];
	int evenNo(int *);	//function prototype
	printf("Enter the numbers\n");
	for(i=0;i<10;i++){
	printf("t[%d]: ", i);
	scanf("%d",&t[i]);
	}
	printf("Total even numbers in the array is: %d",evenNo(t));
}

//following is the definition of function fact()
int evenNo(int *t){	//formal parameters
	int j,count=0;
	for(j=0;j<10;j++){
		if(*(t+j)%2==0){
			count++;
		}
	}
	return count;		
}
