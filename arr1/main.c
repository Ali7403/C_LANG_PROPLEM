#include <stdio.h>
char name (char*,char*);
int main ()
{   char word [10]; char harf;
 printf ("enter harf");
 scanf ("%c",&harf);
     printf ("enter word");
    scanf ("%s",&word);
    name (word,harf);

    return 0;
}
char name (char* s,char* g){
    int i=0,j=0;
    while (s[i]!= '\0'){
        if (s[i]==g){j++;}
        i++;
    }
    printf ("%d",j);}
