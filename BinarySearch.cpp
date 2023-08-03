#include <stdio.h>
#include <conio.h>
int main(){
	
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int lft = 1, rft = 10, md = 5,n,num;
	
	printf("Enter number to be searched for: ");
	scanf("%d", &num);
	
	while(lft<=rft){
		if(num>arr[md]){
			lft = md + 1;
		} else if(num<arr[md]){
			rft = md -1;
		} else{
			printf("Found %d at %d", num, md);
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
