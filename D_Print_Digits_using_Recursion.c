#include <stdio.h>

void fun (int num)
{
    if (num==0) return ;
    
    
    
int digit =num %10;
int n =num/10;

fun (n);
if (num==0)
{
    printf("%d",digit);
}
else
printf("%d ",digit);


}
int main ()
{

int t;
scanf("%d",&t);
int a;
for (int i = 0; i < t; i++)
{
    scanf("%d",&a);
    if (a==0)
    {printf("%d",a);
    }
    else{
    fun(a);
    printf("\n");}
}







    return 0;
}