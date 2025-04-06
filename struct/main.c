#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 typedef struct employee
{int id;
char name[10];
float salary;
}person;
void printinfo (person );
void mod(person*);
person getdata ();
void main()
{person sd[10];
int n;
   printf("how many people ");
   scanf("%d",&n);
   int i;
for ( i=0;i<n;i++)
{
   sd[i]=getdata();
}
for (i=0;i<n;i++)
{
    printinfo(sd[i]);
    puts("-----------------------");
}
}
void printinfo (person x)
{
    printf("%d \n",x.id);
    printf("%s\n",x.name);
    printf("%f\n",x.salary);
}
void mod(person*x)
{
    x->id=500;
}
person getdata ()
{person temp;
     printf ("enter your id\n ");
    scanf("%d",&temp.id);
   // fflush(stdin);
     printf ("enter your name\n");
     getchar();
     gets(temp.name);
    printf ("enter your money\n");
      scanf("%f",&temp.salary);

return(temp);
}
