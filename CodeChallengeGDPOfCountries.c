#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,n,*gdp;	/* declaration of array through pointer 
					as array name is pointer to base address */
	printf("Enter the total number of countries: ");
	scanf("%d",&n);		// reading the number of countries
	gdp = (int *)malloc(sizeof(int) * n);	/* in the following statement we are using malloc() function to allocate 
											space dynamically for the array GDP */
	
	if (gdp==NULL) 	// if dynamic space allocation encounters failure 
	{
		printf("dynamic memory allocation resulted into failure....exiting") ;
	exit(0);    	// terminates the program …. Note that in some compilers argument 0 is not given
	}
	
	for(i=0;i<n;i++){	// using loop to read GDP's of n number of countries into array
		printf("GDP of country %d (in RS): ",i+1);
		scanf("%d",&gdp[i]);
	}
	printf("\n\n_____________OUTPUT_____________\n");
	// the following loop prints the GDP's of countries
	for(i=0;i<n;i++){
		printf("GDP of country %d: Rs %d\n", i+1, *(gdp+i));
	}
	getch();
}
