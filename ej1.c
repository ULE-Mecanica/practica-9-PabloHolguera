#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int *p;
int i;
int min;
printf("Dime el número de elementos \n");
scanf("%d",&n);
p = (int *) malloc (n * sizeof(int));
for(i=0;i<n;i++)
{
printf("Dame los valores \n");
scanf("%d",&*(p+i));
}
min = * (p+0);
for (i=0;i<n;i++)
{
if (*(p+i)<min){
min = *(p+i);
}
}
printf("El menor es: %d \n",min);
}
