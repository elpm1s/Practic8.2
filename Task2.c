#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 

{
    setlocale(LC_ALL, "RUS");
    
    double step, y, x;


    printf("Введите шаг табуляции: \n");
    scanf("%lf", &step);

    printf("-------------------------\n");
    printf("\n%10s | %10s\n", "x", "f(x)");
    printf("-------------------------\n");


    // Табулирование функции
    for (x = 0.1; x <= 2.2; x += step / 2) {
        printf("%10.2lf | %10.2lf\n", x, y = pow(x, 2) - pow(cos(x + 1), 2));
    }

    return 0;
}
