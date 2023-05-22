 #include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    
    double a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    
    double min = a[0];
    double max = a[0];
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int i = 1; i < n; i++)//за допомогою циклу for, ми знаходимо найменший та найбільший елементи, а також їх порядкові номери
      {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    
    printf("Найменший елемент: %.2lf (індекс: %d)\n", min, minIndex);
    printf("Найбільший елемент: %.2lf (індекс: %d)\n", max, maxIndex);
    
    return 0;
}
