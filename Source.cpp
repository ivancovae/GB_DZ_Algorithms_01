#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution00();
void solution01();
void solution02();

void menu();

// Задание выполнил Иванцов Александр Евгеньевич
int main(int argc, char* argv[])
{
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
			printf("Программа закончила свое выполнение. Нажмите на любую кнопку для выхода из программы.");
			break;
		default:
			printf("Некорректный символ, введите значения из списка меню.");
			break;
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

// Задание: 
void solution00()
{
	// Решение

}
// Задание: 
void solution01()
{
	// Решение

}
// Задание: 
void solution02()
{
	// Решение

}