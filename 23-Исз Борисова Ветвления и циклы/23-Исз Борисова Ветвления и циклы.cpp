﻿// 23-Исз Борисова Ветвления и циклы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Задание1
{
public:
    void Задание()
    {
        printf("Задание 1: По координатам точки, определить номер координатной четверти, к которой находится данная точка.\n");

        float x, y;
        printf("Введите координату x: ");
        scanf_s("%f", &x);
        printf("Введите координату y: ");
        scanf_s("%f", &y);

        if (x > 0 && y > 0)
        {
            printf("Точка %-3.1f,%-3.1f находится в 1 четверти\n", x, y);
        }
        else if (x > 0 && y < 0)
        {
            printf("Точка %-3.1f,%-3.1f находится в 4 четверти\n", x, y);
        }
        else if (x > 0 && y == 0)
        {
            printf("Точка %-3.1f,%-3.1f находится на оси Ox между 1 и 4 четвертями\n", x, y);
        }
        else if (x < 0 && y < 0)
        {
            printf("Точка %-3.1f,%-3.1f находится в 3 четверти\n", x, y);
        }
        else if (x < 0 && y>0)
        {
            printf("Точка %-3.1f,%-3.1f находится во 2 четверти\n", x, y);
        }
        else if (x < 0 && y == 0)
        {
            printf("Точка %-3.1f,%-3.1f находится на оси Ox между 2 и 3 четвертями\n", x, y);
        }
        else if (x == 0 && y > 0)
        {
            printf("Точка %-3.1f,%-3.1f находится на оси Oy между 1 и 2 четвертями\n", x, y);
        }
        else if (x == 0 && y < 0)
        {
            printf("Точка %-3.1f,%-3.1f находится на оси Oy между 3 и 4 четвертями\n", x, y);
        }
        else if (x == 0 && y == 0)
        {
            printf("Точка %-3.1f,%-3.1f находится в начале координат\n", x, y);
        }

    }
};

class Задание2
{
public:
    void Задание()
    {
        printf("Задание 2: Написать калькулятор (вычисление простейших арифметических операций, на основании введенной пользователем операции и двух операндов).\n");

        int answer = 0;
        while (answer != 5)
        {
            float a = 0, b = 0, result = 0;
            printf("Введите действие (сложение-1, вычитание-2, умножение-3, деление-4, закончить - 5): ");
            scanf_s("%d", &answer);
            if (answer != 5)
            {
                printf("Введите первый операнд: ");
                scanf_s("%f", &a);
                printf("Введите второй операнд: ");
                scanf_s("%f", &b);

                switch (answer)
                {
                case 1:
                    result = a + b;
                    break;
                case 2:
                    result = a - b;
                    break;
                case 3:
                    result = a * b;
                    break;
                case 4:
                    result = a / b;
                    break;
                default:
                    break;
                }
                printf("Результат: %-3.3f\n", result);
            }
        }
    }
};

class Задание3
{
public:
    void Задание()
    {
        printf("Задание 3: Написать программу расчета y по следующему правилу (x вводится пользователем с клавиатуры), используя тернарный оператор\n");

        float x3, y3;
        printf("Введите x: ");
        scanf_s("%f", &x3);
        y3 = x3 < 5 ? x3 * x3 - 1 : 1 / x3;
        printf("y = %-3.3f\n", y3);
    }
};

class Задание4
{
public:
    void Задание()
    {
        printf("Задание 4: Распознать вводимый с клавиатуры символ - это цифра, буква латинского алфавита или другой символ.\n");
        char c;
        printf("Введите символ: ");
        scanf_s("%c", &c);
        if (c >= 48 && c <= 57)
        {
            printf("Введенный символ %c - это цифра\n", c);
        }
        else if (c >= 65 && c <= 90)
        {
            printf("Введенный символ %c - это заглавная буква латинского алфавита\n", c);
        }
        else if (c >= 97 && c <= 122)
        {
            printf("Введенный символ %c - это маленькая буква латинского алфавита\n", c);
        }
        else
        {
            printf("Введенный символ %c - это не цифра и не буква латинского алфавита\n", c);
        }
    }
};

class Задание5
{
public:
    void Задание()
    {
        printf("Задание 5: Вывести на экран таблицу умножения.\n");

        for (int a = 1; a < 10; a++)
        {
            for (int b = 1; b < 10; b++)
            {
                printf("%d*%d=%d\t", b, a, a * b);
            }
            printf("\n");
        }
    }
};

class Задание6
{
public:
    void Задание()
    {
        printf("Задание 6: Вычислить сумму n натуральных чисел тремя способами, используя циклы for, while, do.\n");

        const int n = 3;
        int sum = 0;
        int mas[n];
        printf("С помощью цикла for: \n");
        for (int i = 0; i < n; i++)
        {
            printf("Введите %d число: ", i + 1);
            scanf_s("%d", &mas[i]);
            sum += mas[i];
        }
        printf("Сумма чисел равна %d \n", sum);

        sum = 0;
        int j = 0;
        printf("С помощью цикла while: \n");
        while (j < n)
        {
            printf("Введите %d число: ", j + 1);
            scanf_s("%d", &mas[j]);
            sum += mas[j];
            j++;
        }
        printf("Сумма чисел равна %d \n", sum);

        sum = 0, j = 0;
        printf("С помощью цикла do: \n");
        do
        {
            printf("Введите %d число: ", j + 1);
            scanf_s("%d", &mas[j]);
            sum += mas[j];
            j++;
        } while (j < n);

        printf("Сумма чисел равна %d \n", sum);
    }
};

class Задание7
{
public:
    void Задание()
    {
        printf("Задание 7: Определить значение факториала n!\n");
        int n = 0;
        int fact = 1;
        printf("Введите n для нахождения факториала: \n");
        scanf_s("%d", &n);

        for (int i = 1; i < n + 1; i++)
        {
            fact *= i;
        }
        printf("%d! = %d\n", n, fact);
    }
};

class Задание8
{
public:
    void Задание()
    {
        printf("Задание 8: Распечатать таблицу ASCI I кодов символов\n");
        for (unsigned char i = 32; i < 255; i++)
        {
            printf("%5d - %c", i, i);
            if (i % 10 == 0)
            {
                printf("\n");
            }       
        }
        printf("\n");
    }
};

class Задание9
{
public:
    void Задание()
    {
        printf("Задание 9: Пользователь вводит число. Найти сумму цифр числа.\n");
        int n = 0, sum = 0;
        printf("Введите число: ");
        scanf_s("%d", &n);
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        printf("Сумма цифр: %d\n", sum);
    }
};


int main()
{
    system("chcp 1251>null");
    Задание4 n4;
    n4.Задание();

    printf("\n");

    Задание1 n1;
    n1.Задание();

    printf("\n");

    Задание2 n2;
    n2.Задание();

    printf("\n");

    Задание3 n3;
    n3.Задание();

    printf("\n");

    Задание5 n5;
    n5.Задание();

    printf("\n");

    Задание6 n6;
    n6.Задание();

    printf("\n");

    Задание7 n7;
    n7.Задание();

    printf("\n");

    Задание8 n8;
    n8.Задание();

    printf("\n");

    Задание9 n9;
    n9.Задание();

    return 0;

}

