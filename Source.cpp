#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void solution00();
void solution01();
void solution02();

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
	printf("0. Завершение выполнения программы\n");
}

double getIndexMassBody(int mass, double height)
{
	return mass / pow(height, 2);
}

// Задание 1: Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
void solution00()
{
	printf("\n##########################################\n");
	printf("\nУсловие задачи:\n");
	printf("Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
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
	printf("\n##########################################\n\n");
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
	printf("\n##########################################\n");
	printf("\nУсловие задачи:\n");
	printf("Найти максимальное из четырех чисел. Массивы не использовать.\n");
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
	printf("\n##########################################\n\n");
}
// Задание: 
void solution02()
{
	// Решение

}