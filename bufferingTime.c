#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
int main()
{
    int n,b,i,sum=0,count=0;
    scanf("%d%d",&n,&b);
    int *a = malloc(sizeof(int) * n);
    if(1<=n<=10^5 && 1<=b<=10^6)
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>=1 || a[i]<=10^6){
        sum = sum + a[i];
        if(sum-b < b)
            count++;
        else if(sum-b == 0)
        sum =0;
        else if(sum-b > b)
        sum = sum-b;
        }
    }
    printf("%d",count);
}
