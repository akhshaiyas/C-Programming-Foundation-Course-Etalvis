//Program 1
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x==50);
    printf("Result = %d",y);
}
//Program 2
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x!=50);
    printf("Result = %d",y);
}
//Program 3
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x<50);
    printf("Result = %d",y);
}
//Program 4
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x>50);
    printf("Result = %d",y);
}
//Program 5
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x<=50);
    printf("Result = %d",y);
}
//Program 6
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = (x>=50);
    printf("Result = %d",y);
}
//Program 7
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (a==b);
    printf("Result = %d",y);
}
//Program 8
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (a!=b);
    printf("Result = %d",y);
}
//Program 9
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (b<a);
    printf("Result = %d",y);
}
//Program 10
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (b>a);
    printf("Result = %d",y);
}
//Program 11
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (a<=b);
    printf("Result = %d",y);
}
//Program 12
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b;
    a = x/10;
    b = x%10;
    y = (b<=a);
    printf("Result = %d",y);
}
//Program 13
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b,c;
    a = x/100;
    b = (x%100)/10;
    c = x % 10;
    y = (c==b);
    printf("Result = %d",y);
}
//Program 14
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int a,b,c,d;
    a = x/1000;
    b = (x%1000)/100;
    c = ((x%1000)%100)/10;
    d = x % 10;
    y = (c==d);
    printf("Result = %d",y);
}
