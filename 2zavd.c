 #include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int n, choice, i, lastPositive, product, sum;

    printf("Виберіть спосіб заповнення масиву:\n");
    printf("1. Введення з клавіатури\n");
    printf("2. Генерація псевдовипадкових чисел\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Введіть кількість елементів масиву (n <= %d): ", MAX_SIZE);
            scanf("%d", &n);

            printf("Введіть елементи масиву:\n");
            for (i = 0; i < n; i++) {
                printf("Елемент %d: ", i + 1);
                scanf("%d", &array[i]);
            }
            break;
        case 2:
            printf("Введіть кількість елементів масиву (n <= %d): ", MAX_SIZE); //Визначаємо максимальний розмір масиву 
            scanf("%d", &n);

            printf("Масив, згенерований випадковими числами:\n");
            for (i = 0; i < n; i++) {
                array[i] = rand() % 201 - 100;  // Генерувати числа від -100 до 100. rand  для генерації псевдовипадкових чисел у заданому діапазоні.
                printf("%d ", array[i]);//це масив, у якому ми зберігатимемо введені або згенеровані числа.
            }
            printf("\n");
            break;
        default:
            printf("Некоректний вибір.\n");
            return 0;
    }

    lastPositive = -1;//індекс останнього додатного елемента
    product = 1;// добуток додатніх елементів 
    sum = 0;//сума елементів до останнього додатного елемента.



    for (i = 0; i < n; i++) {
        if (array[i] > 0) {
            product *= array[i];
            lastPositive = i;
        }
        if (i < lastPositive) {
            sum += array[i];
        }
    }

    printf("Добуток додатніх елементів: %d\n", product);
    printf("Сума елементів до останнього додатного елемента: %d\n", sum);

    return 0;
}

