#include <stdio.h>

int main(){
	
	struct students{
		unsigned long reg_no;
		float mk1,mk2,mk3;
	};
	
	struct students svar1, svar2, svar3; //structure variable declaration
	float avg_pc;
	printf("Enter the reg no, marks of 3 subjects of student 1: ");
	scanf("%lu%f%f%f",&svar1.reg_no,&svar1.mk1,&svar1.mk2,&svar1.mk3);
	printf("Enter the reg no, marks of 3 subjects subjects of student 2: ");
	scanf("%lu%f%f%f",&svar2.reg_no,&svar2.mk1,&svar2.mk2,&svar2.mk3);
	printf("Enter the reg no, marks of 3 subjects subjects of student 3: ");
	scanf("%lu%f%f%f",&svar3.reg_no,&svar3.mk1,&svar3.mk2,&svar3.mk3);
	avg_pc = (svar1.mk1 + svar1.mk2 + svar1.mk3 +svar2.mk1 + svar2.mk2 + svar2.mk3 + svar3.mk1 + svar3.mk2 + svar3.mk3)/900 *100;
	printf("Average Percentage: %.2f", avg_pc);
	
}
