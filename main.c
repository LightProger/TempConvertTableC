#include <stdio.h>

/* ����� ⠡���� ⥬������ �� ��७�����
� ������ ��� fahr = 0, 20, ..., 300 */

int main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // ������ �࠭�� ⥬������
    upper = 300; // ������ �࠭�� ⥬������
    step = 1; // ���

    printf("������ ��ॢ��� ⥬������ �� ��७���⮢ � ����ᨨ: \n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}