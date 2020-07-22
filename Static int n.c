#include<stdio.h>
int increment();
int main()
{
    int val1,val2;
    val1=increment();
    val2=increment();
    printf("val1=%d\t val2=%d",val1,val2);
}
int increment()
{
    static int a=0;
    a++;
    return a;
}