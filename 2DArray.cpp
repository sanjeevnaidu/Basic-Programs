#include <stdio.h>

int main()
{
	
	int scores[3][3],i,j;
	
	for(i=0;i<3;++i){		//outer loop
		for(j=0;j<3;++j){	//inner loop
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&scores[i][j]);	//scanning element scores[i][j]
		}
	}
	
	
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("Score of player %d in test %d is %d\n",i+1,j+1,scores[i][j]);
		}
	}
	
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("%d\t",scores[i][j]);
		}
		printf("\n");
	}
	
	/*
	Algo:
	1.	set i:=0,j:=0
	2.	repeat step 3 for i<3
	3.	repeat step 4 for j<3
	4.	read: scores[i][j]
	5.	set i:=0,j:=0
	6.	repeat step 7 for i<3
	7.	repeat step 8 for j<3
	8.	write: scores[i][j]
	*/
	
}
