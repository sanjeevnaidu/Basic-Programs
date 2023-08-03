#include <stdio.h>

int main(){
	
	struct students{
		unsigned long reg_no;
		float mk1,mk2,mk3;
	};
	
	struct students svar[3]; //structure variable declaration
	float pc[3];
	int i;
	for(i=0;i<3;i++){
	
		printf("Enter the reg no, marks of 3 subjects for student %d: ", i+1);
		scanf("%lu%f%f%f",&svar[i].reg_no,&svar[i].mk1,&svar[i].mk2,&svar[i].mk3);
		pc[i] = (svar[i].mk1 + svar[i].mk2 + svar[i].mk3)/300 *100;
	}
	for(i=0;i<3;i++){
		printf("\nPercentage of student %d: %.2f", i+1, pc[i]);
	}
}
