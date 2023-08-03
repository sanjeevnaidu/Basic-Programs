#include <stdio.h>
#include <string.h>

int main(){
	
	struct sales{
		char salesman_code[10];
		float jan,feb,mar;
	};
	
	struct sales sv; //structure variable declaration
	struct sales *pt;
	pt=&sv;
	strcpy(pt->salesman_code,"NY001");
	pt->jan=12000.00;
	pt->feb=15000.00;
	pt->mar=16000.00;
	puts(pt->salesman_code);
	printf("January sales = %10.2f\n",pt->jan);
	printf("February sales = %10.2f\n",pt->feb);
	printf("March sales = %10.2f\n",pt->mar);
}
