#include <stdio.h>

int main()
{
    int array [10];
    int i=0;
    int n,sum=0;


    do{
    printf ("enter degree of student %d ",i);
    scanf ("%d",&array[i]);
      }
    while (array [i++]>0);
n=i-1;
printf ("%d\n",n );
for (i=0;i<=n;i++)
    {
        sum =sum + array[i];
    }
printf ("res is %d\n",sum);

int  max = array[0];

for (i=1;i<=n;i++)
    { if ( array [i]>max){
    max=array[i];}
    }
     printf (" minium is %d \n", max ) ;
return 0;

}
