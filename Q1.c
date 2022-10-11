#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,r,sum=0;

    printf("Enter the train number:\n");
    scanf("%d",&n);
    
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;

    while(n>0)
    {
        r=n%10;
        
    switch(r)
    {
    case 1:printf("one\t");
              break;
           
    case 2:printf("two\t");
              break;
            
    case 3:printf("three\t");
              break;
            
    case 4:printf("four\t");
              break;
              
    case 5:printf("five\t");
              break;
            
    case 6:printf("six\t");
              break;
           
    case 7:printf("seven\t");
              break;
            
    case 8:printf("eight\t");
              break;
            
    case 9:printf("nine\t");
             break;
            
    case 0:printf("zero\t");
              break;
    }
        
    n=n/10;
  
    }
}
