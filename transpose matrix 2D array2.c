#include<stdio.h>
main()
{
	int x=0,y=0,n,matrix;
	int a[3][3]={{2,4,1},{3,5,4},{8,2,6}};
	 
	
	printf("Enter the array's row & column size: ");
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
	      
	printf("\nThe transpose matrix of an array: \n");
	 for(x=0; x<3; x++) {
        for(y=0;y<3;y++) {
          
        printf("%d ",a[y][x]);
      }
           printf("\n");
   }
}