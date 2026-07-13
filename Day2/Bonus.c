#include <stdio.h>

int main()
{
    int A=10,B=20;
    printf("%d\n",A++ + B);//30
    printf("%d\n",++A + B);//32
    printf("%d\n",A > B);//0
    printf("%d\n",A < B && B==20);//1
    printf("%d\n",!(A == B));//1
    


}