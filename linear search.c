#include<stdio.h>
 void main(){
 	int a[100], n, key, i, pos;
 	printf("Enter no of element: ");
 	scanf("%d",&n);
 	printf("\nEnter number one by one: ");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	printf("THe elements are : ");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	printf("\nEnter the element to bo search: ");
	scanf("%d",&key);
	
	pos = reclinsearch(a,n,key,0);
	if(pos!=-1)
		printf("\nThe element is found at position: %d",pos);
	else
		printf("\n====The element is not found====\n");
 }
 int reclinsearch(int a[], int n, int key, int p){
 	
 	if(p>=n)
 		return(-1);
 	if(a[p]==key)
 		return(p+1);
 	else
 		reclinsearch(a,n,key,p+1);
 }
