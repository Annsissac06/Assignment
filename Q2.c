
#include <stdio.h>
#include<stdlib.h>
void main()
{
    int arr1[10][10],arr2[10][10],row1,col1,row2,col2;
    
    printf("Enter the rows and columns of first matrix:");
    scanf("%d %d",&row1,&col1);
    printf("Enter the rows and columns of second matrix:");
    scanf("%d %d",&row2,&col2);
    
    printf("Enter the elements of first matrix:");
    matrix_read(arr1,row1,col1);
    printf("Enter the elements of second matrix:");
    matrix_read(arr2,row2,col2);
    
    printf("The elements of first matrix are,\n");
    matrix_print(arr1,row1,col1);
    printf("\nThe elements of second matrix are,\n");
    matrix_print(arr2,row2,col2);
    
    printf("\nSum of matrices\n");
    matrix_add(arr1,arr2,row1,col1,row2,col2);
    
    printf("\nProduct of matrices:\n");
    matrix_mul(arr1,arr2,row1,col1,row2,col2);

    printf("Is First Matrix an identity matrix?\n");
    identity(arr1,row1,col1);

    printf("\nIs Second Matrix an identity matrix?\n");
    identity(arr2,row2,col2);   
}
    
    void matrix_read(int a[10][10],int r,int c){
	int i,j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
    }
    }
    }

    void matrix_print(int a[10][10],int r,int c){
	int i,j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    }
    
    void matrix_add(int arr1[][10],int arr2[][10],int row1,int col1, int row2,int col2)
    {
        int i,j,c[10][10];
        if(row1!=row2||col1!=col2){
            printf("Matrix addition not possible");
            return;
        }
        
        for(i=0;i<row1;i++){
            for(j=0;j<col2;j++){
                c[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        matrix_print(c,row1,col1);
    }
        
    void matrix_mul(int arr1[][10],int arr2[][10],int row1,int col1, int row2,int col2)
    {
    int i,j,k,d[10][10];
    
   
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
           d[i][j]=0;    
           for(k=0;k<col1;k++)    
           {    
                d[i][j]+=arr1[i][k]*arr2[k][j];  
                
           }    
        }  
    }
   
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
           
           printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
   
    printf("\n\n");      
}


    void identity(int arr[10][10],int r,int c){
        int i,j,x=1;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if((arr[i][i]!=1) || (i!=j) && (arr[i][j]!=0))
                {
                    x=0;
                    break;
                }
                
            }
        }
        if(x==0){
            printf("Not an Identity Matrix\n");
        }
        else{
            printf("\nIs an Identity Matrix\n");
        }
        
    }
