#include <stdio.h>

struct students{
		int reg_no;
		float mk1,mk2,mk3;
		float p;
	};
	
int main(){
	int n;
	printf("Total number of students: ");
	scanf("%d",&n);
	struct students svar[n];
	void percent(struct students *, int); //function prototype
	int i;
	for(i=0;i<n;i++){
		percent(&svar[i],i);
	}
	for(i=0;i<n;i++){
		printf("\nRegistration no: %d\tPercentage: %.2f", svar[i].reg_no, svar[i].p);
	}
}

void percent(struct students * var, int j){
	printf("Enter the reg no, marks of 3 subjects for student %d: ", j+1);
	scanf("%d%f%f%f",&var->reg_no,&var->mk1,&var->mk2,&var->mk3);
	var->p = (var->mk1 + var->mk2 + var->mk3)/300 *100;
}
