// rotate an integer right or left by b bits, take input n,b and d (d=0 for R, d=1 for L)
#include <stdio.h>
#define INT_BITS 32
int rotateLR(int n, unsigned int d, int b)
{
    if(b==1){
       return (n << d) | (n >> (INT_BITS - d));
    }
    else{
        return (n >> d) | (n << (INT_BITS - d));
    }
}
int main(){
    int inp;
    printf("Enter number to shift: ");
    scanf("%d", &inp);
    int b;
    printf("Enter bits to shift: ");
    scanf("%d", &b);
    int d;
    printf("Enter direction to rotate (0 for R, 1 for L): ");
    scanf("%d", &d);
    int op = rotateLR(inp, d, b);
    printf("%d", op);
}