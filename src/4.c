#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n; // Размер массива
    int *b; // Указатель на массив b
    float *c; // Указатель на массив 'c'
    int c_size = 0; // Размер массива 'c'
  
    printf("Введите размер массива: ");
    scanf("%d", &n);

    // Выделение динамической памяти для массива b
    b = (int *)malloc(n * sizeof(int));
    if (b == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1; // Выход из программы с ошибкой
    }

    // Ввод элементов массива b
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Подсчет количества положи. элементов для массива 'c'
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c_size++;
        }
    }

    // Выделение динамической памяти для массива 'c'
    c = (float *)malloc(c_size * sizeof(float));
    if (c == NULL) {
        printf("Ошибка выделения памяти!\n");
        free(b); // Освобождение памяти b
        return 1; // Выход из программы 'с' ошибкой
    }

    // Заполнение массива
    int c_index = 0; // Индекс для массива 'c'
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c[c_index] = sqrt(b[i]) / 5.0;
            c_index++;
        }
    }
  
    printf("Массив 'c' до сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    // Сортировка массива 'c'
    for (int i = 0; i < c_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < c_size; j++) {
            if (c[j] < c[min_index]) {
                min_index = j;
            }
        }
        // Перестановка элементов
        float temp = c[i];
        c[i] = c[min_index];
        c[min_index] = temp;
    }

    printf("Массив 'c' после сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    // Освобождение памяти
    free(b);
    free(c);

    return 0;
}
