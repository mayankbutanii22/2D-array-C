#include<stdio.h>
main()
{
	int x=0,n;
	int a[5]={0,1,2,3,4};
	
	printf("Enter the array's size: ");
	scanf("%d",&n);
	
	printf("\nEnter array's elements: ");
	a[0] = 2;
    a[1] = -4;
	a[2] = 1;
    a[3] = -3;
    a[4] = -5;
	
	for(x=0; x<5; x++){
	printf("\na[%d]= %d\n",x,a[x]);
	}

	printf("\nNegative elements from an Array: ");
	for(x=0; x<5; x++){
		if(a[x]<0){
			printf("%d, ",a[x]);
		}
	}
}
	