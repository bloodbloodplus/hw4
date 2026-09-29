#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int healboss = 1000;
    int A, B, C;
    printf("Введите уровень силы первого героя: ");
    scanf("%d", &A);
    printf("Введите уровень силы второго героя: ");
    scanf("%d", &B);
    printf("Введите уровень силы третьего героя: ");
    scanf("%d", &C);
    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) {
        healboss = healboss - (A + B + C) * 3;
        printf("Босс потерял %d здоровья, текущее здоровье босса: %d\n", (A + B + C) * 3, healboss);
    }
    else {
        healboss = healboss - (A + B + C);
        printf("Текущее здоровье босса: %d\n", healboss);
    }

    return 0;
}