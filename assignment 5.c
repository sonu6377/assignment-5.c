 /*  1

 #include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n nubers");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("my sir g ");
        i++;
    }
    return 0;
}*/
/*  2
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n numbers");
    scanf("%d",&n);
    do
    {
        printf("%d  ",i);
        i++;
    }while(i<=n);
    return 0;
}*/

/* 3
#include<stdio.h>
int main()
{
    int n;
    printf("enter n numbers");
    scanf("%d",&n);

    do
    {
        printf("%d  ",n);
        n--;
    }while(n);
    return 0;
}*/

/* 4
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n nubers");
    scanf("%d",&n);
    do
    {
        printf("%d ",2*i-1);
        i++;
    }while(i<=n);
}*/

/* 5
#include<stdio.h>
int main()
{
    int n;
    printf("enter vn nubers ");
    scanf("%d",&n);
    for(n;n>=1;n--)
    {
        printf("%d  ",2*n-1);
    }
    return 0;
}*/

/* 6
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n nubers");
    scanf("%d",&n);
    do
    {
        printf("%d ",2*i);
        i++;
    }while(i<=n);
    return 0;
}*/
/* 7
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n nubers");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d  ",2*i);
        i--;
    }
    return 0;
}*/


/* 8
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n nubers");
    scanf("%d",&n);
    do
    {
        printf("%d*%d=%d\n",i,i,i*i);
        i++;
    }while(i<=n);

    return 0;
}*/

/* 9
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d*%d=%d\n",i,i,i,i*i*i);
    }
    return 0;
}*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,j;
    printf("enter a nubers");
    scanf("%d",&n);

       for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }

    getch();
}
