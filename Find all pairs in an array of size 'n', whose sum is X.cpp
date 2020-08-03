//Find all pairs in an array of size 'n', whose sum is X
#include<stdio.h>
#define max 100000
void printarr(int a[],int n,int sum)
{
  int s[max]={0};
int i,temp;
for(i=0;i<n;i++)
{
  temp=sum-a[i];
  if(s[temp]==1)
    {
      printf("THE PAIR IS %d %d",temp,a[i]);
       return;
    }
  s[a[i]]=1;
}
}
int main()
{
int n,sum;
scanf("%d %d",&n,&sum);
int a[n],i,j,k;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printarr(a,n,sum);
}
