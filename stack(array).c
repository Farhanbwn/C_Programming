#include <stdio.h>
#define MAX 5
int s[10],top=-1;
void push();
void pop();
void display();

void push(){
	int n;
	if(top==MAX-1){
		printf("\n-------STACK OVERFLOW------\n");
	}
	else{
		printf("\nEnter the number which you want to push:");
		scanf("%d",&n);
		top++;
		s[top]=n;
		printf("\n======number %d pushed======\n",n);
	}	
}

void pop(){
	int n;
	if(top==-1){
		printf("\n---------STACK UNDERFLOW--------\n");
	}
	else{
		n = s[top];
		top--;
		printf("\n======NUMBER POPED======\n");
	}	
}

void display(){
	int i;
	if(top==-1){
		printf("\n--------STACK IS EMPTY--------\n");
	}
	else{
		printf("\nSTACK CONTAINS ======>>>> ");
		for(i=0;i<=top;i++){
			printf("%d ",s[i]);
		}
	}	
}

void main(){
	int ch;
	do{
		printf("\n===========STACK MANU===========\n");
		printf("1 push\n");
		printf("2 pop\n");
		printf("3 display\n");
		printf("4 exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\n======THANK YOU======\n");
				break;
			default:
				printf("\n=======wrong choice======\n");
		}
	}while(ch!=4);
}
