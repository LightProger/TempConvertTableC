#include <stdio.h>

/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */

int main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // Нижняя граница температур
    upper = 300; // Верхняя граница температур
    step = 1; // Шаг

    printf("Таблица перевода температур из Фаренгейтов в Цельсии: \n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}