//Program 1
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x + 2;
    printf("Result = %d", y);
}
//Program 2
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x - 5;
    printf("Result = %d", y);
}
//Program 3
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x*3;
    printf("Result = %d", y);
}
//Program 4
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x/6;
    printf("Result = %d", y);
}
//Program 5
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x%8;
    printf("Result = %d", y);
}
//Program 6
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = x-(x/10)*10;
    printf("Result = %d", y);
}
//Program 7
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    y = (x/10);
    printf("Result = %d", y);
}
//Program 8
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1;
    y1 = (x/100)*100;
    y = x - y1;
    y = x - (x/10)*10;
    printf("Result = %d", y);
}
//Program 9
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1;
    y = (x/100);
    printf("Result = %d", y);
}
//Program 10
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1;
    y1 = (x/100)*100;
    x = x - y1;
    y = (x/10);
    printf("Result = %d", y);
}
//Program 11
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c; //number - abc
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    y = a+b+c;
    printf("Result = %d", y);
}
//Program 12
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b; //number - ab
    b = x-(x/10)*10;
    a = (x/10);
    y = b*10 + a;
    printf("Result = %d", y);
}   
//Program 13
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c; //number - abc
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    y = a+b*10+c*100;
    printf("Result = %d", y);
}   
//Program 14
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c,d; //number - abcd
    a = (x/1000);
    y1 = a*1000;
    x = x - y1;
    b = x/100;
    y1 = x - (x/100)*100;
    c = (y1/10);
    x = x - c*10 - b*100;
    d = (x);
    y = c+d*10+b*100+a*1000;
    printf("Result = %d",y);
}   
//Program 15
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b;
    b=0;//number - ab
    a = (x/10);
    y = a*10 + b;
    printf("Result = %d", y);
} 
//Program 16
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b; //number - ab
    b = x-(x/10)*10;
    a = 1;
    y = a*10 + b;
    printf("Result = %d", y);
} 
//Program 17
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c; //number - abc
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    c = 2;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    y = a*100+b*10+c;
    printf("Result = %d", y);
}   
//Program 18
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c; //number - abc
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    b=0;
    y = a*100+b*10+c;
    printf("Result = %d", y);
}   
//Program 19
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1;
    y1 = x % 2;
    y = (y1==1)?(x-5):x;
    printf("Result = %d", y);
}   
//Program 20
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,y2;
    y2 = x/100;
    y1 = y2 % 2;
    y = (y1==1)?(x-5):x;
    printf("Result = %d", y);
}   
//Program 21
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b; //number - ab
    b = x-(x/10)*10;
    a = x/10;
    y1 = (a+b)%2;
    y = (y1==1)?(x-5):x;
    printf("Result = %d", y);
} 
//Program 22
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c,y2; //number - abc
    y2 = x;
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    y1 = (a%2)&(c%2);
    y = (y1==1)?(y2-5):y2;
    printf("Result = %d", y);
}   
//Program 23
#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    int y1,a,b,c,y2,temp,y3; //number - abc
    y2 = x;
    y1 = (x/100)*100;
    y = x - y1;
    c = x - (x/10)*10;
    a = (x/100);
    x = x - y1;
    b = (x/10);
    y1 = a + b + c;
    temp = y1%10;
    y2 = (y1/10) + temp;
    temp = y2%10;
    y3 = (y2/10) + temp;
    y = (y1<10)?(y1):(y2<10)?(y2):y3;
    printf("Result = %d", y);
}   
