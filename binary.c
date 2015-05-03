#include<stdio.h>
#define max 5
int main()
{
int i,a[max],mid,search=3;
for(i=0;i<max;i++)
{
    printf("Enter %d element\n",i+1);
    scanf("%d",&a[i]);
}
printf("Enter Search item value\n");
    scanf("%d",&search);
mid=max/2;
if(search==mid)
printf("Found at %d index\n",mid);
else if(search<mid)
{
for(i=0;i<mid;i++)
{
    if(a[i]==search)
    { 
       printf("found at %d\n",i+1);
        break;
    }
}
}
else
{
for(i=mid+1;i<max;i++)
{
    if(a[i]==search)
    { 
       printf("found at %d\n",i+1);
        break;
    }
}
}








    return 0;
}