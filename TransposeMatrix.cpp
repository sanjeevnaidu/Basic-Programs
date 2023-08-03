#include <stdio.h>
void transpose(int original[3][3]){
	int transposeMatrix[3][3],a,b,c;
	
	
	for(a=0;a<3;++a){		//outer loop
		for(b=0;b<3;++b){	//middle loop
			transposeMatrix[a][b]= original[b][a];
		}
	}
	
	for(a=0;a<3;++a){
		for(b=0;b<3;++b){
			printf("%d\t",transposeMatrix[a][b]);	//printing the matrix c
		}
		printf("\n");
	}
	
}
int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;++i){		//outer loop
		for(j=0;j<3;++j){	//inner loop
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);	//scanning element a[i][j]
		}
	}
	
	transpose(a);
}

