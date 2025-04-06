#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{    char word [20]={0};int i;
    printf ("please enter word to check");
    scanf("%s",word);
    int freq [26]={0};
    int x;
   // printf ("%d",'c'-'a');
for (i=0;word[i]!=0;i++)
{
x=word[i]-'a';
freq[x]++;
}
for (i=0;i<26;i++)
{
    if (freq [i]>1){printf ("the repeated car is %c and repeat for %d times\n",i+'a',freq[i]);}
}
  return 0;
}
