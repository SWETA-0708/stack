#include<stdio.h>
#include<stdlib.h>
#define max 10
int count=0;
struct stack{//declaration
	int items[max];
	int top;
};
typedef struct stack st;
void emptystack(st *s){//checking if stack is empty
	s->top=-1;
}
int isfull(st *s){//checking if stack is full
	if(s->top==max-1)
	return 1;
	else
	return 0;
}
int isempty(st *s)//checking if stack is empty
{
	if(s->top==-1){
		return 1;
	}
	else
		return 0;
	
}
void push(st *s,int nitems){//inserting the item
	if(isfull(s)){
		printf("stack is full");
	}
	else{
		s->items[s->top]==nitems;
		s->top++;
	}
	count++;
}
int pop(st *s){//deleting the item
	if(isempty(s)){
		printf("stack is empty");
		return 0;
	}
	else{
		printf("item pop=%d",s->items[s->top]);
		s->top--;
		return 1;
	}
	count--;
	printf("\n");
}
//printing element of stack
void display(st *s){
	int i;
	printf("stack");
	for(i=0;i<count;i++){
		printf("%d",s->items[i]);
	}
	printf("\n");
}
int main(){
	int ch,nitems,items;
	//st *s=(st *)malloc(sizeof(st));
	struct stack s;
	emptystack(&s);
	while(1){
		printf("\nstack options are:");
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\nexit");
		
		printf("\nenter your choice:");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("enter the item to be inserted:");
				scanf("%d",&nitems);
				push(&s,nitems);
				break;
			case 2:
				items=pop(&s);
				if(items != -1){				
				printf("Popped item:%d\n",items);
			     }
			     break;
			case 3:
				display(&s);
				break;
			case 4:
				printf("exiting the program");
				exit(0);
			default:
				printf("invalid choice");
		}
	}
}
