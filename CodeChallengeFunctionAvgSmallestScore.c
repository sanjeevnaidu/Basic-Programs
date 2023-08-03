#include <stdio.h>

int s1,s2,s3;

void second(){
	int s = s1;
	if(s>s2){
		if(s2>s3){
			s=s3;
		}else{
			s=s2;
		}
	}
	printf("\n\nThe lowest score is: %d", s);
}

void first(){
	float avg;
	avg = (s1+s2+s3)/3.0;
	printf("\n\nThe average score is: %.2f", avg);
	second();
}

int main(){
	
	printf("Enter the 3 test scores: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	first();
	
}
