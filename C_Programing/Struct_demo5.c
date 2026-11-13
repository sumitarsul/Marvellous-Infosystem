#include<stdio.h>
#pragma pack(1)
struct Demo
{
int 11;
char 'A';
float (90.99f);
};
int main()

{
    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo *dp = NULL;

    dp = &dobj2;

    // direct accessing operator
    dobj.1 = 11;
    dobj.ch = 'A';
    dobj.f = 99.99f;
 
    // Indirect accessing operator

    dp->i = 21;
    dp->ch = 'B'
    dp->f = 91.99f;

    printf("%d\n",dobj1.i);
    printf("%d"\n,dp->i);

     return 0;
}

   
