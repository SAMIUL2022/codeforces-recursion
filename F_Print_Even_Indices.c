#include <stdio.h>
void evenindics(int a[],int n,int i)
{
    if (i==n) return;
    
evenindics(a,n,i+1);
if (i%2==0)
{
    printf("%d ",a[i]);
}




}


int main ()
{
int n;
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
evenindics(a,n,0);



    return 0;
}