#include <stdio.h>
int digit (int n);

int main()
{   int num;
int z;

    printf ("enter number ...");
scanf ("%d",&num);
z= digit (num);
printf ("%d",z);

    return 0;
}
int digit (int n)
{int count =0;

 while (n!=0){
     if
    ((n %10) == 6)
        ++count;
n=n/10;}
return count ;
       }

