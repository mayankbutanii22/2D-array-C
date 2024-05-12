#include<stdio.h>
main()
{
	int x=0,y=0,n,m,rowsum=0,colsum=0;
	int a[3][3]={{2,7,1},{3,5,4},{8,9,6}};
	
	printf("Enter the array's row size: ");
	scanf("%d",&n);
	printf("Enter the array's column size: ");
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
     
	printf("\nEnter row number: ");
	scanf("%d",&a[x][y]);
	printf("Elements of row 0: ");
	scanf("%d",&a[x][y]);
	printf("The sum of a row 0: ");
	 for(x=0; x<1; x++) {
        for(y=0;y<3;y++) {
           rowsum = rowsum + a[x][y];
      }
      printf("%d ",rowsum);
   }
    printf("\n");
    
   printf("\n\nEnter column number:");
   scanf("%d",&a[x][y]);
   printf("\nElements of column 2: ");
   scanf("%d",&a[x][y]);
   
   printf("\nThe sum of a column 2: ");
	 for(x=0; x<1; x++) {
        for(y=0;y!=2;y++) {
           colsum = colsum + a[x][y];
      }
      printf("%d ",colsum);
   }
}