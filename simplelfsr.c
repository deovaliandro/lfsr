/*
    Simple Linear-Feedback Shift Register
    I try to implement in x86 assembly using nasm,
    but its pain.
*/
#include <stdio.h>

int main(){
    int seed[4] = {1, 0, 1, 1};
    
    for(int i=0; i<sizeof(seed);i++){
        int fxor = seed[0] ^ seed[3];
        printf("%d", fxor);
        for (int j=0; j<sizeof(seed)/sizeof(seed[0])-1; j++){
            seed[j] = seed[j+1];
        }
        seed[3] = fxor;
    }
    printf("\n");
}