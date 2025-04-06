#include <stdio.h>
#include<string.h>

int main()
{int j,i;
char word [10][25];
for (i=0;i<5;i++)
{
    printf ("enter value [%d]",i);
    gets (word[i]);
}
for (i=0;i<4;i++)
for (j=i+1;j<5;j++){

    if (strcmp(word [i],word [j])>0)
    {char temp [25];
        strcpy(temp,word[i]);
        strcpy(word [i],word[j]);
        strcpy(word[j],temp);
    }
}


for (i=0;i<5;i++){printf("\n",word [i]);}

    return 0;
      }
