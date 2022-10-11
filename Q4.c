#include<stdio.h>

void main()
{
    int n1,n2,i,width;
    
    printf("Enter the numbers:");
    scanf("%d %d", &n1,&n2);

    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            width=i;
        }
    }

printf("Width of the cloth : %d",width);

}