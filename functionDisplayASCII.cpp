//ASCII Table
#include <stdio.h>

//following is the definition of function sumfnc()
void display(){	

	int a = 0;
	while(a<=255){
		printf("[%d] = [%c]\n",a,a);
		a++;
	}
}

int main(){
	
	display(); //calling the function	
}

