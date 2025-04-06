#include <stdio.h>

typedef struct xo{
int id;
char name[10];
} card;
card* data[10];
void addaccount(card* p );

int main()
{   int num,i;

    printf ("plz enter num \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        data[i]=(card*)malloc(sizeof(card));
        addaccount(data[i]);
    }
    for(i=0;i<num;i++)
    {
        printf("your name is %s and your id is %d \n",data[i]->name,data[i]->id);
    }

for(i=0;i<num;i++)
  {
  free(data[i]);//لازم اعملها عشام ينظف القيم الي بجطها اول اول
  }
}

 void addaccount(card* p)
 {
      printf ("plz enter your id \n");
      scanf("%d",&p->id);
     printf ("plz enter your name \n");
     scanf("%s",&p->name);
 }
