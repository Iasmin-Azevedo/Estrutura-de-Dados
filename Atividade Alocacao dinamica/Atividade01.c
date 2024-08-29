#include <stdio.h>
#include <stdlib.h>

int main(){

    int v_char = sizeof(char);
    int v_int = sizeof(int);
    int v_float = sizeof(float);
    int v_double = sizeof(double);

    printf("Bytes char: %d\nBytes int: %d\nBytes float: %d\nBytes double: %d\n",v_char,v_int,v_float,v_double);

}