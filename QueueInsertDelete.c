#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5
typedef struct queue_type{
	int arr[MAX];
	int front;
	int rear;
}node;

void insert(node *q, int item){
	if((q->front==0 && q->rear==MAX-1) || q->front==q->rear+1){
		printf("\n\n\t Queue overflow error");
		return;
	}
	if(q->front==-1){
		q->front=q->rear=0;
	} else if(q->rear==MAX-1){
		q->rear=0;
	} else{
		q->rear=q->rear+1;
	}
	q->arr[q->rear]=item;	//inserting new value in queue
	
	printf("\n\n\t Element %d pushed successfully",item);
}

int delete(node *q){
	int val;
	if(q->front==-1){
		printf("\n\n\t Queue underFlow error");
		return;
	}
	val=q->arr[q->front];
	if(q->front==q->rear){
		q->front=q->rear=-1;
	} else if(q->front==MAX-1){
		q->front=0;
	} else{
		q->front++;
	}
	printf("\n\n\t The value of deleted element is %d", val);
	return val;
}

void main(){
	char ch;
	int val,item;
	node queue;
	queue.front=-1;
	queue.rear=-1;
	
	while(1){
		system("cls");
		printf("\n\n\t**********Main Menu**********");
		printf("\n\n\tArray representation of Queue");
		printf("\n\n\t=============================");
		printf("\n\n\t 1) Inserting element into Queue");
		printf("\n\n\t 2) Deleting element into Queue");
		printf("\n\n\t 3) Exit from program");
		printf("\n\n\t    Enter your Choice: ");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch){
			case '1':
				printf("\n\n\t Enter the number to Push: ");
				scanf("%d",&item);
				insert(&queue,item);
				getch();
				break;
			case '2':
				val = delete(&queue);
				getch();
				break;
			case '3':
				exit(0);
		}
	}
}
