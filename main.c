#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){
    return a+b;
}

int soustraction(int a, int b){
    return a-b;
}

int main(){
    printf("4+7 = %d\n", addition(4, 7));
    return 0;
}
