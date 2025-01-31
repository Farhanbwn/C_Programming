#include<stdio.h>
#define MAX 5
int q[10];
int x,t, f=-1, r=-1;
void enqueue();
void dequeue();
void display();


void enqueue(){
	int x;
	if(r==MAX-1){
		printf("\n======Queue is Overflow=======\n");
		return;
	}
	else{
		printf("\nEnter the number which you want to insert:");
		scanf("%d",&x);
		r++;
		q[r]=x;
		if(f==-1){
			f=0;
		}
		printf("\n=====Number %d inserted======\n",x);
	}
}

void dequeue(){
	int t;
	if(f==-1&&r==-1){
		printf("\n========Queue is Underflow======\n");
		return;      
	}
	else{
		t=q[f];
		if(f==r){
			f=-1;
			r=-1;
		}
		else{
			f++;
		}	printf("\n=======The number %d is deleted========\n",t);	
	}
}

void display(){
	int i;
	if(f==-1&&r==-1){
		printf("\n=======Queue is Empty=======\n");	
	}
	else{
		printf("\nThe Queue contains:===>>> ");
		for(i=f;i<=r;i++){
		printf("%d ",q[i]);       
		}
	}	
}


void main(){
	int ch;
	do{
	printf("\n=========Queue manu=========\n");
	printf("press 1 to add new element\n");
	printf("press 2 to delete an element\n");
	printf("press 3 to diplay the Queue\n");
	printf("press 4 to exit\n");
	printf("\nEnter your choise:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\n ======Thank you======\n");
			break;
		default:
			printf("\n-----wrong choise-----\n");
		
		}
	}while(ch!=4);
}
