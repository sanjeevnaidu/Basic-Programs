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
	
	printf("\n\t%d is added successfully at first node", item);
	getch();
	return(start);
}

node *insertNode(int item, int var, node *start){
	node *temp, *p1, *p;
	p = (node *)malloc(sizeof(node));
	for(temp=start;(temp->no != var) && (temp != NULL);temp=temp->link){
		p1=temp;
	}
	if(temp==NULL){
		printf("\n\n\t Number not found in the linked list");
		getch();
	} else if(temp==start){
		start = insertNew(item, start);
	} else{
		p->no = item;
		p->link = p1->link;
		p1->link=p;
		printf("\n\t%d is inserted successfully at %d", item, p1);
		getch();
	}
	
	return(start);
}

node *search(int item, node *start){
	node *temp;
	for(temp=start;temp!=NULL;temp=temp->link){
		if(temp->no == item){
			return(temp);
		}
	}
	return(NULL);
}

int main(){
	node *start, *temp;
	int item, op, var;
	start=NULL;	
	
	while(1){
		system("cls");
		printf("\n********** MAIN MENU ***********");
		printf("\n1) Create the linked list");
		printf("\n2) Insert a new node in the beginning");
		printf("\n3) Insert a node before a particular node");
		printf("\n4) Search for a number in the linked list");
		printf("\n5) Display the linked list");
		printf("\n6) Exit");
		printf("\n\n\t Enter your choice: ");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				start = create(start);
				break;
			case 2:
				printf("\n\n\tEnter the number to be inserted: ");
				scanf("%d", &item);
				start = insertNew(item, start);
				break;
			case 3:
				printf("\n\n\tEnter the value of node before which you need to insert new node: ");
				scanf("%d", &var);
				printf("\n\tEnter the number to be inserted: ");
				scanf("%d", &item);
				start = insertNode(item, var, start);
				
				getch();
				break;
			case 4:
				printf("Enter the value of node to be searched for: ");
				scanf("%d", &item);
				temp = search(item, start);
				if(temp != NULL){
					printf("\n\n\tNode found at location %d", temp);
				} else{
					printf("\n\n\tNode not found in linked list");
				}
				getch();
				break;
			case 5:
				print(start);
				break;
			case 6:
				exit(0);
		}
	}
	
}
