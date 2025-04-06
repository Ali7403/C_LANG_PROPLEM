#include <stdio.h>
#include <stdlib.h>
int add (int ,int);
int sub (int ,int );

int main()
{ int k;int p;int o;int res;
    int (*ptr[2])(int , int )={add,sub};
    printf ("enter num1");
    scanf ("%d",&k);
  printf ("enter num2");
    scanf ("%d",&o);
    printf ("choose aperation 1-add 2- sub");
    scanf ("%d",&p);
     res = ptr[p-1](k,o);
    printf ("result is %d",res);
    return 0;
}
int add (int x ,int z)
{ int res;
res=x+z;
    return res;
}
int sub (int x,int z )
{
    return (x-z);
}
