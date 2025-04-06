#include<stdio.h>
int bupple (int x[],int y );
int print (int z[],int n );
int main (){

int rates[]={4,8,9,6};
int rates1 []={5,6,3,8,1,0,2,9,4};
int n1=sizeof(rates)/sizeof(rates[0]);
int n2=sizeof(rates1)/sizeof(rates1[0]);
print(rates,n1);
bupple(rates,n1);
puts ("--------------");
print(rates,n1);
puts ("--------------");
print(rates1,n2);
bupple(rates1,n2);
puts ("--------------");
print(rates1,n2);

return 0;}

int bupple (int x[],int y)
{  int i,temp ;int sort;
do {sort=1;
    for (i=0;i<y-1;i++){

        if(x[i]>x[i+1])
            { temp=x[i];x[i]=x[i+1];x[i+1]=temp;sort=0;}
}

}
while (sort==0);
}
int print (int z[],int n){
    int i;
    for (i=0;i<n;i++){printf ("res is %d=%d\n",i,z[i]);}

}
