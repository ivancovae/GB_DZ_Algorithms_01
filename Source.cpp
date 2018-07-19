#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void solution00();
void solution01();
void solution02();
void solution03();
void solution04();
void solution05();
void solution06();
void solution07();
void solution08();
void solution09();

void menu();

// Задание выполнил Иванцов Александр Евгеньевич
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	int select = 0;

	do
	{
		menu();
		scanf("%i", &select);
		switch (select)
		{
		case 1:
			solution00();
			break;
		case 2:
			solution01();
			break;
		case 3:
			solution02();
			break;
		case 4:
			solution03();
			break;		
		case 5:
			solution04();
			break;	
		case 6:
			solution05();
			break;
		case 7:
			solution06();
			break;
		case 8:
			solution07();
			break;
		case 9:
			solution08();
			break;
		case 10:
			solution09();
			break;
		case 0:
			printf("Программа закончила свое выполнение. Нажмите на любую кнопку для выхода из программы...\n");
			break;
		default:
			printf("Некорректный символ, введите значения из списка меню.\n");
		}
	} while (select != 0);
	getch();
	return 0;
}

void menu()
{
	printf("Меню выбора решения задания:\n\n");

	printf("1. Решение задачи 1\n");
	printf("2. Решение задачи 2\n");
	printf("3. Решение задачи 3\n");
	printf("4. Решение задачи 4\n");
	printf("5. Решение задачи 5\n");
	printf("6. Решение задачи 6\n");
	printf("7. Решение задачи 7\n");
	printf("8. Решение задачи 8\n");
	printf("9. Решение задачи 9\n");
	printf("10. Решение задачи 10\n");
	printf("0. Завершение выполнения программы\n");
}

void descriptionTask(char *task)
{
	printf("\n##########################################\n");
	printf("\nУсловие задачи:\n");
	printf(task);
}

void endTask()
{
	printf("\n##########################################\n\n");
}

double getIndexMassBody(int mass, double height)
{
	return mass / pow(height, 2);
}

// Задание 1: Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
void solution00()
{
	descriptionTask("Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
	// Ввод данных
	int m = 0;
	printf("Введите массу тела(вес) человека в килограммых(вес должен быть больше нуля): ");
	scanf("%d", &m);
	double h = 0.0;
	printf("Введите рост человека в метрах(рост должен быть больше нуля): ");
	scanf("%lf", &h);
	// Решение
	printf("Результат: ");
	printf("%lf\n", getIndexMassBody(m, h));
	endTask();
}
int getMaxOf(int a, int b, int c, int d)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	return max;
}
// Задание 2: Найти максимальное из четырех чисел. Массивы не использовать. 
void solution01()
{
	descriptionTask("Найти максимальное из четырех чисел. Массивы не использовать.\n");
	// Ввод данных
	int a = 0;
	printf("Введите первое число: ");
	scanf("%d", &a);
	int b = 0;
	printf("Введите второе число: ");
	scanf("%d", &b);
	int c = 0;
	printf("Введите третье число: ");
	scanf("%d", &c);
	int d = 0;
	printf("Введите четвертое число: ");
	scanf("%d", &d);
	// Решение
	printf("Результат: ");
	printf("%d\n", getMaxOf(a, b, c, d));
	endTask();
}
// Простой обмен
void swap(int *a, int *b);
// Cпособ через сложение\вычитание (также можно и через умножение\деление(не целочисленное))
void swapSummSub(int *a, int *b);
// Битовые операции
void swapBit(int *a, int *b);

// Задание 3: Написать программу обмена значениями двух целочисленных переменных:
//				a.с использованием третьей переменной;
//				b. *без использования третьей переменной.
void solution02()
{
	descriptionTask("Написать программу обмена значениями двух целочисленных переменных:\n\ta.с использованием третьей переменной;\n\tb. *без использования третьей переменной.\n");
	// Ввод данных
	int a = 0;
	printf("Введите первое число: ");
	scanf("%d", &a);
	int b = 0;
	printf("Введите второе число: ");
	scanf("%d", &b);
	// Решение
	printf("Результат: ");
	int a0 = a;
	int b0 = b;
	swap(&a0, &b0);
	printf("\nЧерез дополнительную переменную: до a=%d b=%d после a=%d b=%d\n", a, b, a0, b0);	
	int a1 = a;
	int b1 = b;
	swapSummSub(&a1, &b1);
	printf("\nЧерез сложение\\вычитание: до a=%d b=%d после a=%d b=%d\n", a, b, a1, b1);
	int a2 = a;
	int b2 = b;
	swapBit(&a2, &b2);
	printf("\nЧерез битовые операции: до a=%d b=%d после a=%d b=%d\n", a, b, a2, b2);
	endTask();
}

void swapBit(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void swapSummSub(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Задание 4: Написать программу нахождения корней заданного квадратного уравнения.
void solution03()
{
	descriptionTask("Написать программу нахождения корней заданного квадратного уравнения(a*x^2 + b*x + c = 0).\n");
	// Ввод данных
	int a = 0;
	printf("Введите коэффициент a: ");
	scanf("%d", &a);
	int b = 0;
	printf("Введите коэффициент b: ");
	scanf("%d", &b);
	int c = 0;
	printf("Введите коэффициент c: ");
	scanf("%d", &c);
	// Решение
	printf("Результат: ");
	double D = pow(b, 2) - (4 * a * c);
	double x1 = 0;
	double x2 = 0;

	if (D >= 0)
	{
		double temp = ((D > 0) ? sqrt(D) : 0);
		x1 = (-b + temp) / (2 * a);
		x2 = (-b - temp) / (2 * a);
		printf("В уравнение (%d)*x^2 + (%d)*x + (%d) = 0 два корня: x1=%lf, x2=%lf.\n", a, b, c, x1, x2);
	}
	else 
	{
		printf("В уравнение (%d)*x^2 + (%d)*x + (%d) = 0 корней нет.\n", a, b, c);
	}

	endTask();
}

// Задание 5: С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
void solution04()
{
	descriptionTask("С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");
	// Ввод данных
	int month = 0;
	printf("Введите номер месяца: ");
	scanf("%d", &month);
	// Решение
	switch (month)
	{
	case 1:
	case 2:
	case 12: { printf("Номер месяца соответствует зимнему времени года\n"); }break;
	case 3:
	case 4:
	case 5: { printf("Номер месяца соответствует весеннему времени года\n"); }break;
	case 6:
	case 7:
	case 8:	{ printf("Номер месяца соответствует летнему времени года\n"); }break;
	case 9:
	case 10:
	case 11: { printf("Номер месяца соответствует осеннему времени года\n"); }break;
	default:
		printf("Номер месяца должен быть в приделах 1-12.\n");
	}
	
	endTask();
}

// Задание 6: Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет». (основное правило работает в пределах 20 лет(1 год, 2-4 года, 5-20 лет, на сотни и тысяч также...))
void solution05()
{
	descriptionTask("Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».\n");
	// Ввод данных
	int year = 0;
	printf("Введите возраст от 1 до 150: ");
	scanf("%d", &year);
	// Решение
	int n = year % 20;
	switch (n)
	{
	case 1: { printf("%d год\n", year); }break;
	case 2:
	case 3:
	case 4: { printf("%d года\n", year); }break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 0: { printf("%d лет\n", year); }break;
	default:
		printf("Некорректное число, диапозон от 1 до 150");
		break;
	}

	endTask();
}

typedef struct tagPoint {
	int x;
	int y;
} Point;

typedef int bool;
#define true 1
#define false 0

bool isWhite(Point point)
{
	return (point.x % 2) != (point.y % 2);
}

bool isEquilColor(Point firstFigure, Point secondFigure)
{
	return !(isWhite(firstFigure) ^ isWhite(secondFigure));
}

// Задание 7: С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся поля к одному цвету или нет.
void solution06()
{
	descriptionTask("С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся поля к одному цвету или нет.\n");
	// Ввод данных
	Point firstFigure;
	printf("Введите координаты первой фигуры: ");
	scanf("%d %d", &firstFigure.x, &firstFigure.y);
	Point secondFigure;
	printf("Введите координаты первой фигуры: ");
	scanf("%d %d", &secondFigure.x, &secondFigure.y);
	// Решение
	if (isEquilColor(firstFigure, secondFigure))
	{
		printf("Поля относятся к одинаковому цвету");
	} 
	else
	{
		printf("Поля относятся к разному цвету");
	}
	endTask();
}

// Задание 8: Ввести a и b и вывести квадраты и кубы чисел от a до b.
void solution07()
{
	descriptionTask("Ввести a и b и вывести квадраты и кубы чисел от a до b.\n");
	// Ввод данных
	int a;
	printf("Введите первое число: ");
	scanf("%d", &a);
	int b;
	printf("Введите второе число: ");
	scanf("%d", &b);
	if (a > b)
	{
		printf("Вы ввели первое число больше второго, числа будут поменены местами.\n");
		swap(&a, &b);
	}
	// Решение
	for (int i = a; i <= b; i++)
	{
		printf("Квадрат числа %d равен %lf, Куб числа %d равен %lf\n", i, pow(i, 2), i, pow(i, 3));
	}
	endTask();
}

// Задание 9: Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
void solution08()
{
	descriptionTask("Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.\n");
	// Ввод данных
	int n;
	printf("Введите N целое положительное число: ");
	scanf("%d", &n);
	int k;
	printf("Введите K целое положительное число: ");
	scanf("%d", &k);
	// Решение
	int int_part = 0;

	while (n >= k)
	{
		int_part++;
		n -= k;
	}
	printf("Целая часть %d остаток от деления %d\n", int_part, n);

	endTask();
}

// Задание 10: Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
void solution09()
{
	descriptionTask("Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.\n");
	// Ввод данных
	int n;
	printf("Введите целое положительное число: ");
	scanf("%d", &n);
	// Решение

	int k = 0, n0 = n;
	bool hasEven = false;
	while (n0 > 0)
	{
		k = n0 % 10;
		if (k % 2 == 1)
		{
			hasEven = true;
			break;
		}
		n0 = div(n0, 10).quot;
	}
	if (hasEven == true)
	{
		printf("Число %d содержит нечетные цифры", n);
	} 
	else
	{
		printf("Число %d несодержит нечетные цифры", n);
	}
	
	endTask();
}
