#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct linklist{
	int no;		// or data
	struct linklist *link;		//address of next node
}node;

char ch;

node *create(node *start){
	node *temp, *p;
	ch='y';
	printf("\n\t\t **** INPUT BLOCK ****\n");
	if(start != NULL){
		printf("\n\n\t **** LIST ALREADY EXIST ****");
		getch();
		return(start);
	}
	fflush(stdin);
	while(ch=='y'){
		temp=(node *)malloc(sizeof(node));
		printf("\n\t Enter the no: ==>");
		scanf("%d", &temp->no);
		temp->link = NULL;
		if(start == NULL){
			p=start=temp;
		} else{
			p->link=temp;
			p=temp;
		}
		
		printf("\n\t %d added to linked list\n",temp->no);
		fflush(stdin);
		printf("\t Do you want to continue (y/n) ? : ");
		ch = getchar();
	}
	return(start);
}

void print(node *start){
	node *temp;
	system("cls");
	printf("\n\n Base address \tNumber \tLink");
	printf("\n=======================================");
	for(temp=start;temp!=NULL;temp=temp->link){
		printf("\n%10u	%10d	%10u",temp, temp->no,temp->link);
	}
	printf("\n\n\t Press any key to goto MAIN BLOCK........");
	getch();
	return;
	
}

node *insertNew(int item, node *start){
	node *temp;
	if(start == NULL){
		printf("\n\nThe linked list is not created....Please create it first\n\n");
		return(create(start));
	}
	temp = (node *)malloc(sizeof(node));
	temp->no = item;
	temp->link = start;
	start = temp;
	
	printf("%d is added successfully at first node", item);
	getch();
	return(start);
}

int main(){
	node *start;
	int item, op;
	start=NULL;	
	
	while(1){
		system("cls");
		printf("\n********** MAIN MENU ***********");
		printf("\n1) Create the linked list");
		printf("\n2) Insert a new node in the beginning");
		printf("\n3) Display the linked list");
		printf("\n4) Exit");
		printf("\n\n\t Enter your choice\n\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				start = create(start);
				break;
			case 2:
				printf("Enter the number to be entered: ");
				scanf("%d", &item);
				start = insertNew(item, start);
				break;
			case 3:
				print(start);
				break;
			case 4:
				exit(0);
		}
	}
	
}
