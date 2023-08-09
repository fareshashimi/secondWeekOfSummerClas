#include <stdio.h>
#include <stdlib.h>
long powerNum(int x, int y){
    long result=1;

    if(y==0){
        return result;
    }
    result = x * powerNum(x, y-1);
}

int main(){
    int n;
    printf("Insert the base number: ");
    scanf("%d", &n);

    int p;
    printf("\nInset the value of power: ");
    scanf("%d", &p);


    int result = powerNum(n, p);
    printf("\n\n The value of %d for the power of %d is %d\n", n, p, result);

    return 0;
}
