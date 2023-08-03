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
	int i,item,j;
	char ch;
	node stack1,stack2,stack3;	//decl. of structure variable
	stack1.top = -1;	//empty
	stack2.top = -1;	//empty
	stack3.top = -1;	//empty
	
	while(1){
		//crscr();
		system("cls");
		
		printf("\n\n\t********Main Menu*********\n");
		printf("\n\tArray representation of Stack");
		printf("\n\t ==============================");
		printf("\n\n\t 1) Push Operation on Stack 1");
		printf("\n\n\t 2) Push Operation on Stack 2");
		printf("\n\n\t 3) Pop Operation on Stack 1");
		printf("\n\n\t 4) Pop Operation on Stack 2");
		printf("\n\n\t 5) Push all to Stack 3");
		printf("\n\n\t 6) Pop all from Stack 3");
		printf("\n\n\t 7) Show elements of Stack 3");
		printf("\n\n\t 8) Exit");
		printf("\n\n\t Enter your Choice: ");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch){
			case '1':
				printf("\n\n\t Enter the no. you want to add to stack 1: ");
				scanf("%d",&item);
				getch();
				printf("\n\n\tElement is pushed into Stack");
				push(item,&stack1);
				break;
			case '2':
				printf("\n\n\t Enter the no. you want to add to stack 2: ");
				scanf("%d",&item);
				push(item,&stack2);
				getch();
				printf("\n\n\tElement is pushed into Stack");
				break;
			case '3':
				pop(&stack1);
				break;
			case '4':
				pop(&stack2);
				break;
			case '5':
				for(i=stack1.top;i>-1;i--){
					push(stack1.arr[i],&stack3);
				}
				for(i=stack2.top;i>-1;i--){
					push(stack2.arr[i],&stack3);
				}
				getch();
				printf("\n\n\tElement is pushed into Stack");
				break;
			case '6':
				while(stack3.top>-1){
					pop(&stack3);
				}
				break;
			case '7':
				printf("\n\n\t");
				for(i=stack3.top;i>=0;i--){
					printf("%d\t",stack3.arr[i]);
				}
				getch();
				break;
			case '8':
				exit(0);	//terminates the program
		}
	}	//end of loop
}
