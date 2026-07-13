#include <stdio.h>


int main()
{
    int A=11,B=13,C=9;
    printf("%d\n",A>B&&A>C);//0
    printf("%d\n",A>B||A>C);//1
    printf("%d\n",!(A>B));//1
}