#include <stdio.h>

void decimal_to_binary(int num) {
    if (num==0) return;
        decimal_to_binary(num / 2);
        printf("%d", num % 2);
    }


int main() {
    int t;
    scanf("%d", &t);
 int a;
    for (int i = 0; i < t; i++) {
       
        scanf("%d", &a);
        if (a == 0) {
            printf("0\n");
        }
        else if (a<0)
        {
            break;
        }
         else {
            decimal_to_binary(a);
            printf("\n");
        }
    }

    return 0;
}
