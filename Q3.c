#include <stdio.h>

void main() {

    int a[10],i,n,min,max;

    void min_max(int[],int,int,int);
    
    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the ages:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    
    printf("Ages are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        }

    min=max=a[0];
    min_max(a,n,min,max);
    }

void min_max(int a[],int n,int min,int max){

    int i;
    
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }

    printf("\nSmallest age %d",min);
    printf("\nlargest age %d",max);
}