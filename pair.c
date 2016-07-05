#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i=1,j,count=0;
scanf("%d",&a);
n=2*a;
while(i<n)
{
for(j=i+1;j<=n;j++)
{
printf("(%d,%d)\t",i,j);
count++;
}
i++;
}
printf("No of paires %d",count);
getch();
}
