#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

typedef struct stack_node{
	int arr[MAX];
	int top;
}node;	//alias (second name)

void push(int item, node *ptr){
	if(ptr->top == MAX-1){
		printf("\n\n\t*********OverFlow**********");
		printf("\n\n\tElements can't be inserted into Stack'");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] = item;
		printf("\n\n\tElement is pushed into Stack");
	}
	getch();
}

void pop(node *ptr){
	int item;
	if(ptr->top<0){
		printf("\n\n\t********UnderFlow*********");
	} else{
		item = ptr->arr[ptr->top];
		ptr->top--;
		printf("\n\n\tElement [%d] is popped from stack", item);
	}
	getch();
	return ;
}

int main(){
	int i,item;
	char ch;
	node stack;	//decl. of structure variable
	stack.top = -1;	//empty
	
	while(1){
		//crscr();
		system("cls");
		
		printf("\n\n\t********Main Menu*********\n");
		printf("\n\tArray representation of Stack");
		printf("\n\t ==============================");
		printf("\n\n\t 1) Push Operation on Stack");
		printf("\n\n\t 2) Pop Operation on Stack");
		printf("\n\n\t 3) Exit");
		printf("\n\n\t Enter your Choice: ");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch){
			case '1':
				printf("\n\n\t Enter the no. you want to add: ");
				scanf("%d",&item);
				push(item,&stack);
				break;
			case '2':
				pop(&stack);
				break;
			case '3':
				exit(0);	//terminates the program
		}
	}	//end of loop
}
