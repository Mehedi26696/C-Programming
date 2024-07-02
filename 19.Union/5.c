//encryption using union


#include <stdio.h>

union intChar {
    int i;
    unsigned char c[4];
} n;

union intChar encrypt(union intChar x){
    char t;
    t = x.c[0];
    x.c[0] = x.c[1];
    x.c[1] = t;
    t = x.c[2];
    x.c[2] = x.c[3];
    x.c[3] = t;
    return x;
}

int main(){
    n.i = 0x00231115;
    n = encrypt(n);
    printf("%0x", n.i);
}
