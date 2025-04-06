#include <stdio.h>
#include <stdlib.h>//queu
void enqueue();
void dequeue();
void disp ();
struct node
{
    int id ;

    struct node *link;
};
struct node *front=NULL;
struct node *back;
struct node *ptr;



int main ()
{
 int x;
 printf("enter num operation 1 add 2 del 3 disp\n");
 scanf("%d",&x);
 switch (x)
 { case 1:
     enqueue();
     break;
  case 2:
       dequeue();
      break;
   case 3:

     disp();
    break;
 }

}

 void enqueue ()
 { int value;
 printf ("enter value\n");
 scanf("%d",&value);

 if(front==NULL)
 {
     ptr=(struct node*)malloc(sizeof(struct node));
     ptr->id=value;
     ptr->link=NULL;
     front=ptr;
     back=ptr;
 }
 else{ ptr=back;
        ptr->link=(struct node*)malloc(sizeof(struct node));
 ptr=ptr->link;
 ptr->id=value;
 ptr->link=NULL;
 back=ptr;

 }

      main();
}
void disp ()
{
    ptr=front;
    do{
        printf("%d\n",ptr->id);
        ptr=ptr->link;}
        while(ptr!=NULL);
    main();
}
void dequeue()
{
   ptr=front;
   front=ptr->link;
   free(ptr);
    main();
}
