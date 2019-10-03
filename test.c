#include<stdio.h>
#include<stdlib.h>
int  main()
{
int i=10,k=0;
int *a;
for(int i=0;i<=20;i++){
i++;
k++;
}
a=(int*)malloc(sizeof(int)*5);
for(k=0;k<5;k++)
 a[k]=k;
for(k=0;k<5;k++)
printf("%d\n",a[k]);
return 0;
}

