#include <stdio.h>
#include <stdlib.h>
void fun(int n, int a, int b){
    if(n==0){
        return;
    }
    fun(n-2, a, b+n);
    printf("\n %-3d %-3d %-3d", n, a, b);
}

int main(){
    int n=10, a=5, b=7;

    fun(n, a, b);
    printf("\n");

    return 0;
}
