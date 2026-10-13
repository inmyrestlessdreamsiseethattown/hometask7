```c
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    char c;

    printf("Нажмите цифровую клавишу: ");

    c = _getch();

    switch (c)
    {
    case '0':
        printf("\nНажата клавиша 0\n");
        break;

    case '1':
        printf("\nНажата клавиша 1\n");
        break;

    case '2':
        printf("\nНажата клавиша 2\n");
        break;

    case '3':
        printf("\nНажата клавиша 3\n");
        break;

    case '4':
        printf("\nНажата клавиша 4\n");
        break;

    case '5':
        printf("\nНажата клавиша 5\n");
        break;

    case '6':
        printf("\nНажата клавиша 6\n");
        break;

    case '7':
        printf("\nНажата клавиша 7\n");
        break;

    case '8':
        printf("\nНажата клавиша 8\n");
        break;

    case '9':
        printf("\nНажата клавиша 9\n");
        break;

    default:
        printf("\nНажата не цифровая клавиша\n");
    }

    return 0;
}
```
