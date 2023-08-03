#include <stdio.h>

int main(){
	
	struct students{
		unsigned long reg_no;
		float mk1,mk2,mk3;
	};
	
	struct students svar; //structure variable declaration
	float pc;
	printf("Enter the reg no, marks of 3 subjects: ");
	scanf("%lu%f%f%f",&svar.reg_no,&svar.mk1,&svar.mk2,&svar.mk3);
	pc = (svar.mk1 + svar.mk2 + svar.mk3)/300 *100;
	printf("Percentage: %.2f", pc);
	
}
