#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
int fib[10]; int i; fib[0]=0; fib[1]=1;

for (i=2; i<=9; i++)
fib[i]=fib[i-1] + fib[i-2];

for (i=0; i<=9; i++)
printf("%d. Fibonacci sayisi :%d\n",i+1,fib[i]);



getch();
}
