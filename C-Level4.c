//Program 1
#include <stdio.h>
int main ()
{
    int x;
    x=1;
    loop: if (x<6)
    {
        printf("%d\n",x);
        x = x+1;
        goto loop;
    }
}
//Program 2
#include <stdio.h>
int main ()
{
    int x;
    int y = 5;
    x = 1;
    loop: if (x<6)
    {
        printf("%d\n",y);
        y = y-1;
        x = x+1;
        goto loop;
    }
}
//Program 3
#include <stdio.h>
int main ()
{
    int x;
    int y = 0;
    x = 1;
    loop: if (x<6)
    {
        y = y + x;
        x = x+1;
        goto loop;
    }
    printf("%d\n",y);
}
//Program 4
#include <stdio.h>
int main ()
{
    int x;
    int y = 0;
    x = 1;
    loop: if (x<=6)
    {
        y = y + x;
        x = x + 1;
        goto loop;
    }
    printf("%d\n",y);
}
//Program 5
#include <stdio.h>
int main ()
{
    int x;
    x = 1;
    loop: if (x<10)
    {
        if (x%2 != 0)
        {    printf("%d\n",x);}
        x = x + 1;
        goto loop;
    }
}
//Program 6
#include <stdio.h>
int main ()
{
    int x;
    x = 10;
    loop: if (x<20)
    {
        if (x%2 != 0)
        {    printf("%d\n",x);}
        x = x + 1;
        goto loop;
    }
}
//Program 7
#include <stdio.h>
int main ()
{
    int x;
    x = 10;
    int a,b;
    loop: if (x<99)
    {
        a = x/10;
        b = x%10;
        if ((x%2 != 0) && ((a+b) == 7))
        {    printf("%d\n",x);}
        x = x + 1;
        goto loop;
    }
}
//Program 8
#include <stdio.h>
int main ()
{
    int x;
    x = 10;
    int a,b;
    loop: if (x<99)
    {
        a = x/10;
        b = x%10;
        if ((x%2 == 0) && ((a+b) == 6))
        {    printf("%d\n",x);}
        x = x + 1;
        goto loop;
    }
}
//Program 9
#include <stdio.h>
int main ()
{
    int x;
    x = 10;
    int a,b,y;
    y = 0;
    loop: if (x<99)
    {
        a = x/10;
        if ((x%2 != 0) && (a == 7))
        {   y = y + x;    }
        x = x + 1;
        goto loop;
    }
    printf("%d\n",y);
}
//Program 10
#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x == 0)
    {
        count = 1;
        goto print;
    }
check:
    if (x != 0)
    {
        x = x / 10;
        count++;
        goto check;
    }
    else
    {   goto print; }

print:
    printf("%d\n", count);
    return 0;
}
//Program 11
#include <stdio.h>
int main()
{
    int x, count = 0, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x == 0)
    {
        count = 0;
        goto print;
    }
check:
    if (x != 0)
    {
        temp = x%10;
        count = count + temp;
        x = x / 10;
        goto check;
    }
    else
    {   goto print; }

print:
    printf("%d\n", count);
    return 0;
}
//Program 12
#include <stdio.h>
int main()
{
    int x, count = 0, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x == 0)
    {
        count = 0;
        goto print;
    }
check:
    if (x != 0)
    {
        temp = x%10;
        count = count*10 + temp;
        x = x / 10;
        goto check;
    }
    else
    {   goto print; }

print:
    printf("%d\n", count);
    return 0;
}
//Program 13
#include <stdio.h>
int main()
{
    int x, temp = 0, count = 0;
    int first = 0, last = 0, pow10 = 1, result = 0, original;
    printf("Enter a number: ");
    scanf("%d", &x);
    original = x;

    if (x < 10)
        goto print; 
    last = x % 10;  

countdigits:
    if (x != 0)
    {
        first = x % 10;
        x = x / 10;
        count++;
        goto countdigits;
    }

power:
    if (count > 1)
    {
        pow10 = pow10 * 10;
        count--;
        goto power;
    }
    result = last * pow10 + (original % pow10) / 10 * 10 + first;

print:
    printf("%d\n", result);
    return 0;
}
//Program 14
#include <stdio.h>
int main()
{
    int x, temp, last, msb = 0, place = 1, result = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    temp = x;
    last = x % 10;

    if (last % 2 == 0)
    {
        printf("%d\n", x);
        goto end;
    }

find:
    if (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
        goto find;
    }
    else
    {
        msb = temp;
    }
    msb = msb - 1;
    result = msb * place + (x % place);
    printf("%d\n", result);

end:
    return 0;
}
//Program 15
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not Prime\n");
        return 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
