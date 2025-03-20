#include <stdio.h>

int main() {
    int a, b;
  
    printf("Введите значение переменной a: ");
    scanf("%d", &a);
    printf("Введите значение переменной b: ");
    scanf("%d", &b);

    // Указатели на a и b
    int *ptrA = &a;
    int *ptrB = &b;

    // Увеличение a и b в 2
    *ptrA *= 2;
    *ptrB /= 2;

    printf("Новое значение a: %d\n", a);
    printf("Новое значение b: %d\n", b);

    return 0;
}
