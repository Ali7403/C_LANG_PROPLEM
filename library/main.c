#include <stdio.h>
#include <stdlib.h>
struct book {
int id;
char name [20];
int statos;
struct book*link;};
struct book *front=NULL;
struct book *back=NULL;
struct book *temp;
void insert () ;
void search();
void del ();
void lend ();
void record();

int main()
{int x;
    puts ("enter num of operation  \n 1-insert\n 2-search\n 3-delete\n 4-lend \n 5- record in file\n");
    scanf("%d",&x);
    switch(x)
    {   case 1:
        insert();
        break;
        case 2:
         search();
        break;
        case 3:
            del();
        break;
        case 4:
            lend();
        break;
        case 5:
            record();
        break;


    }
}
void insert()
{ if (front==NULL){
    temp = (struct book*)malloc(sizeof(struct book));
    puts("the book id");
    scanf ("%d",&temp->id);
    puts("the book name");
    fflush(stdin);
    gets(&temp->name);
    puts("the book status 0 for borrow 1 for found");
    scanf("%d",&temp->statos);
    temp->link=NULL;
    front =temp;
    back=temp;}
    else
        {
        temp->link = (struct book*)malloc(sizeof(struct book));
        temp=temp->link;
    puts("the book id");
    scanf ("%d",&temp->id);
    puts("the book name");
    fflush(stdin);
    gets(&temp->name);
    puts("the book status 0 for borrow 1 for found");
    scanf("%d",&temp->statos);
    temp->link=NULL;
    back =temp;}

main();
}
void search()
{ temp=front;
int ans;
puts ("enter id to search");
scanf("%d",&ans);
while (temp!=NULL)
{
    if (ans==temp->id)
        {
            if(temp->statos==-1){
        printf("the book is %s and his statos is lost \n",temp->name);
        break;}
         else if (temp->statos==1){
        printf("the book is %s and his statos is found\n",temp->name);
        break;}
         else{
        printf("the book is %s and his statos is borrowed \n",temp->name);
        break;}

        }
    temp=temp->link;
}
    main();
}
void del ()
{int ans;
puts ("enter id to delete");
scanf("%d",&ans);
temp=front;
struct book *fptr;
while (temp!=NULL)
{
    if (ans==temp->id)
        {
       struct book*ptr=temp->link;
       fptr->link=temp->link;
       free(temp);
        break;
        }
         fptr=temp;
    temp=temp->link;

}
main();
}
void lend()
{int ans;
puts ("enter id to delete");
scanf("%d",&ans);
temp=front;
    while (temp!=NULL)
{
    if (ans==temp->id){
    if (temp->statos>0){
         temp->statos=0;

        break;}
        else {printf ("this is not found \n");}}
    temp=temp->link;
}
main();
}
void record()
{
FILE *foptr=fopen("books.txt","w");
fputs("id  \t  name  \t statos \t \n",foptr);
temp=front;
while (temp!=NULL){
    fprintf(foptr,"%-10d \t%-20s \t %-2d\n",temp->id,temp->name,temp->statos);
    temp=temp->link;
}
fclose(foptr);
main();
}
