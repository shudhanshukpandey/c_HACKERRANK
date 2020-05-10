#include<stdio.h>
#include<string.h>

int main()
{
char a[1000][20],b[1000][20];
int i,n,l,j,z,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%19s",&a[i][0]);
}
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%19s",&b[i][0]);
}
for(i=0;i<l;i++)
{

for(j=0;j<n;j++)
{
    z=strcmp(b[i],a[j]);
    if(z==0)
    {
        count ++;
    }
}

printf("%d\n",count);
    count=0;
}
return 0;
}

