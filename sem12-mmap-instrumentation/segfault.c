// %%cpp segfault.c
// %run gcc -g segfault.c -o segfault.exe

#include<stdio.h>

int main() {
    int a[2];
    printf("%d\n", a[100500]); // проезд по памяти
}

