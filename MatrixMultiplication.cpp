#include <stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	for(i=0;i<3;++i){		//outer loop
		for(j=0;j<3;++j){	//inner loop
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);	//scanning element a[i][j]
		}
	}
	for(i=0;i<3;++i){		//outer loop
		for(j=0;j<3;++j){	//inner loop
			printf("b[%d][%d] = ",i+1,j+1);
			scanf("%d",&b[i][j]);	//scanning element b[i][j]
		}
	}
	
	for(i=0;i<3;++i){		//outer loop
		for(j=0;j<3;++j){	//middle loop
			for(k=0;k<3;++k){	//innermost loop
			sum+= a[i][k]*b[k][j]; 	//multiplying matrix a(row i) and b(column j)
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("%d\t",c[i][j]);	//printing the matrix c
		}
		printf("\n");
	}
	
	/*
	Algo:
	1. set i:=0,j:=0,sum:=0
	2. repeat step 3 for i<3
	3. repeat step 4 for j<3
	4. read: a[i][j]
	5. set i:=0,j:=0
	6. repeat step 7 for i<3
	7. repeat step 8 for j<3
	8. read: b[i][j]
	9. set i:=0,j:=0,k:=0
	10. repeat step 11 for i<3
	11. repeat steps 12,14 for j<3
	12. repeat step 13 for k<3
	13. sum:=sum+a[i][k]*b[k][j]
	14. c[i][j]:=sum
		sum:=0
	15. set i:=0,j:=0
	16. repeat step 16 for i<3
	17. repeat step 17 for j<3
	18. write: c[i][j]
	*/
}
