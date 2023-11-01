#include <stdio.h>
void print (int n,int i)
{
if (n==i) return;
{
    printf("I love Recursion\n");
    print(n,i+1);
}


}


int main () 
{

int n;
scanf("%d",&n);

print(n,0);
    return 0;
}