#include <stdio.h>
#include <conio.h>
int main(){
	
	int arr[10],i=0,j=0;
	int lft = 1, rft = 10, md = 5,n,num;
	
	for(i=0;i<10;++i){		//outer loop
			printf("arr[%d]= ",i+1);
			scanf("%d",&arr[i]);	//scanning element arr[i][j]
	}
	
	printf("Enter number to be searched for: ");
	scanf("%d", &num);
	
	while(lft<=rft){
		if(num>arr[md]){
			rft = md -1;
		} else if(num<arr[md]){
			lft = md + 1;
		} else{
			printf("Found %d at %d", num, md+1);
			break;
		}
		
		md = (lft+rft)/2;
	}
	if(lft>rft){
		printf("Not Found");
		getch();
	}
	
	/*
	Algo:
	1.	set lft:=1,rt:=10,md:=(lft+rt)/2
	2.	repeat steps 3,4 while lft<=rt
	3.	If val>arr[md], then:
		set lft:=md+1
		else if val<arr[md], then:
		set rt:=md-1
		else
		write: found at location, md
		return
		[end of if]
	4.	set md:=(lft+rt)/2
	5.	write: No such value exists
	6.	return
	*/
	
}
