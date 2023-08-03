#include <stdio.h>

struct band{
	char reg_no[15];
	float bnd1,bnd2,bnd3;
};

int main(){
	float avgbnd(struct band);
	struct band b;
	float avg;
	printf("Enter the reg no and 3 test scores: ");
	scanf("%c%f%f%f",&b.reg_no,&b.bnd1,&b.bnd2,&b.bnd3);
	avg = avgbnd(b);
	printf("\nAverage score is %.2f",avg);
}

float avgbnd(struct band b){
	float avg = (b.bnd1+b.bnd2+b.bnd3)/3;
	return avg;
}
