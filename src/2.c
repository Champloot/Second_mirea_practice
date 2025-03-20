#include <stdio.h>
#include <stdlib.h>

int main() {
    // Три указателя на тип float
    float *ptr1, *ptr2, *ptr3;

    // Выделение динамической памяти
    ptr1 = (float *)malloc(sizeof(float));
    ptr2 = (float *)malloc(sizeof(float));
    ptr3 = (float *)malloc(sizeof(float));

    // Проверка успешности выделения памяти
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1; // Выход из программы с ошибкой
    }

    // Присвоение произвольных значений
    *ptr1 = 1.23;
    *ptr2 = 4.56;
    *ptr3 = 7.89;

    printf("До обмена:\n");
    printf("ptr1 = %.2f, ptr2 = %.2f, ptr3 = %.2f\n", *ptr1, *ptr2, *ptr3);

    // Обмен
    float temp = *ptr1; // Временная переменная для обмена
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("После обмена:\n");
    printf("ptr1 = %.2f, ptr2 = %.2f, ptr3 = %.2f\n", *ptr1, *ptr2, *ptr3);

    // Освобождение выделенной памяти
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
