#include<stdio.h>

void hi();
void myfunction(void)
{
    printf("hello there \n");
}



void main()
{
    myfunction();
    hi("pushkar");
}
void hi(name)
{
    printf(name);
}
