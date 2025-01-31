#include<stdio.h>
#include<stdlib.h>

main(){
	int *p,n,*t,i;
	
	printf("Enter no of element: ");
	scanf("%d",&n);
	
	p = (int*)malloc(n*sizeof(int));
	t = p;
	
	printf("Enter %d element \n",n);
	for(i=0;i<n;i++){
		scanf("%d",p);
		p++;
	}
	p = t;
	printf("entered elements ===>>> ");
	for(i=0;i<n;i++){
		printf("%d ",*p);
		p++;
	}
}
