#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {
    int stone;
    printf("�п�J���Y���ƶq: ");
    scanf("%d",&stone);
    if(stone < 0){
        printf("�L�k��d");
    }
    else{
        printf("�i�H�i�� %d ����d",drawCardcount(stone));
    }
    return 0;
}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}

int getTriangleType(int a, int b, int c) {
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;
}

int drawCardcount(int stone){
    if(stone < 0){
        return -1;
    }
    else{
        return stone / 5;
    }
}
