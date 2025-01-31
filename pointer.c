#include<stdio.h>

main(){
	int a,b,*p;
	a= 10;
	b= 20;
	p=&a;
	printf("*p = %d\n",*p);
	p=&b;
	printf("*p = %d\n",*p);
	
	/*printf("Enter number:");
	scanf("%d",&a);
	p=&a;
	printf("a = %d\n",a);
	printf("&a = %u\n",&a);
	printf("p = %u\n",p);
	printf("&p = %u\n",&p);
	printf("*p = %d\n",*p);*/
}
