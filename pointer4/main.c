#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int size (char *);
int main()
{
   char *name ; int x1;int x2;
   char *lname;
   printf ("enter your name ");
   name =(char*)malloc(15);

   gets(name);
   printf ("your name is %s\n\n",name);
  x1= size (name);
  printf ("enter your 2 name ");
   lname =(char*)malloc(15);

   gets(lname);
   printf ("your name is %s\n\n",lname);
x2=size(lname);
printf ("%d    sizes    %d\n\n",x1,x2);

name=(char*)realloc(name,x1+x2+2);

int j;
name[x1]=' ';
for (j=0;j<x2;j++)
{
    name[j+x1+1]=lname[j];
}
name[x1+x2+2]='\0';
printf ("hello mr %s\n\n",name);

free(name);
free(lname);
printf ("hello mr %s\n\n",name);


    return 0;
}

  int size (char *pfa)
  {int length=0;
      while (*pfa!='\0')
      {
          length++;
          *(pfa++);
      }
     return length;
  }
