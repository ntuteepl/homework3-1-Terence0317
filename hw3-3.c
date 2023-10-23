#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num1, num2, a1, b1, c1, d1, a2, b2, c2, d2,numplus1,numplus2;
    scanf("%d%d", &num1, &num2);
    a1 = num1 / 1000;
    b1 = (num1 % 1000) / 100;
    c1 = (num1 % 100) / 10;
    d1 = (num1 % 10);
    a2 = num2 / 1000;
    b2 = (num2 % 1000) / 100;
    c2 = (num2 % 100) / 10;
    d2 = (num2 % 10);
    numplus1 = a1 + b1 + c1 + d1;
    numplus2 = a2 + b2 + c2 + d2;
    if (numplus1 > numplus2) printf("%d", num2);
    else if (numplus1 < numplus2) printf("%d", num1);
    else {
        if (num1 < num2) printf("%d", num1);
        else printf("%d", num2);
    }
}
