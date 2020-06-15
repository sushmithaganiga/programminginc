
#include<stdio.h>
void main()
{
int n,i,a[10];
int unique = 1;
printf("Enter the array size:\n");
scanf("%d",&n);
printf("Enter the array elments:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i = 0; i < n -1 ; i++)
{
if(a[i]==a[i+1])
continue;
else
unique++;
}
printf("The number of unique elements are %d ",unique);
}