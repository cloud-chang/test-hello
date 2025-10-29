#include <stdio.h>

void functionA() {
    int x = 10;  // x是局部变量
    printf("In functionA, x = %d\n", x);
}

void functionB() {
    int y = 20;  // y是局部变量
    printf("In functionB, y = %d\n", y);
    functionA(); // 调用 functionA
}

int main() {
    int z = 30;  // z是局部变量
    printf("In main, z = %d\n", z);
    functionB();  // 调用 functionB
    return 0;
}
