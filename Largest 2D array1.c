#include<stdio.h>
main()
{
	int x=0,y=0,n,max=0;
	int a[3][3]={{2,7,1},{3,5,4},{8,9,6}};
	
	printf("Enter the array's row size: ");
	scanf("%d",&n);
	printf("\nEnter the array's column size: ");
	scanf("%d",&n);
	
		for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			scanf("\n%d",&a[x][y]);
		}
	}

	printf("\nEnter array's elements: ");
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("\na[%d][%d]= %d\n",x,y,a[x][y]);
		}
	}
	printf("\nThe largest element is: ");
	 for(x=0; x<3; x++) {
      for(y=0;y<3;y++) {
         if(a[x][y]>max){
         	max=a[x][y];
    }
      }
   }
        printf("%d",max);
}