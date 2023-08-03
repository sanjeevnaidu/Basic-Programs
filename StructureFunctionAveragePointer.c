#include <stdio.h>

struct band{
	char reg_no[15];
	float bnd1,bnd2,bnd3,avg;
};

int main(){
	void avgbnd(struct band *);
	struct band b;
	printf("Enter the reg no and 3 test scores: ");
	gets(b.reg_no);
	scanf("%f%f%f",&b.bnd1,&b.bnd2,&b.bnd3);
	avgbnd(&b);
	printf("\nAverage score is %.2f",b.avg);
}

void avgbnd(struct band * b){
	b->avg = (b->bnd1+b->bnd2+b->bnd3)/3;
}
