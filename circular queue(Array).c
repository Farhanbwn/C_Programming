#include<stdio.h>
#define MAX 5
int cq[10];
int x,t, f=-1, r=-1;
void cenqueue();
void cdequeue();
void cdisplay();

void cenqueue(){
	int x;
	if((r+1)%MAX==f){
		printf("\n===== CIRCULAR QUEUE OVERFLOW =====\n");
		return;
	}
	else{
		r=((r+1)%MAX);
		printf("Enter the  Number you want to insert:");
		scanf("%d",&x);
		cq[r]=x;
		if(f==-1)
			f=0;
		printf("\n=====  NUMBER %d INSERTED =====\n",x);
	}
}

void cdequeue(){
	int t;
	if(f==-1&&r==-1){
		printf("\n===== CIRCULAR QUEUE UNDERFLOW =====\n");
		return;
	}
	else{
		t=cq[f];
		if(f==r){
			f=-1;
			r=-1;
		}
		else{
			f=(f+1)%MAX;
		}
		printf("\n===== NUMBER %d DELETED =====\n",t);
	}
}

void cdisplay(){
	int i=0;
	if(f==-1&&r==-1){
		printf("\n===== CIRCULAR QUEUE IS EMPTY =====\n");
		return;
	}
	else{
		printf("\n CIRCULAR QUEUE CONTAINS=====>>>>> ");
		if(f<r){
			for(i=f;i<=r;i++){
				printf("%d ",cq[i]);
			}
		}
		else{
			for(i=f;i<MAX-1;i++){
				printf("%d ",cq[i]);
			}
			for(i=0;i<=r;i++){
				printf("%d ",cq[i]);
			}
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
			cenqueue();
			break;
		case 2:
			cdequeue();
			break;
		case 3:
			cdisplay();
			break;
		case 4:
			printf("\n====== THANK YOU =====\n");
			break;
		default:
			printf("\n======= wrong choice ======\n");	
		}
	}while(ch!=4);
}
