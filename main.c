#include <stdio.h>

/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */

int main() {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // Нижняя граница температур
    upper = 300; // Верхняя граница температур
    step = 2; // Шаг

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf ("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}