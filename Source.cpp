#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution00();
void solution01();
void solution02();

void menu();

// ������� �������� ������� ��������� ����������
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
			printf("��������� ��������� ���� ����������. ������� �� ����� ������ ��� ������ �� ���������.");
			break;
		default:
			printf("������������ ������, ������� �������� �� ������ ����.");
			break;
		}
	} while (select != 0);
	getch();
	return 0;
}

void menu()
{
	printf("���� ������ ������� �������:\n\n");

	printf("1. ������� ������ 1\n");
	printf("2. ������� ������ 2\n");
	printf("3. ������� ������ 3\n");
	printf("0. ���������� ���������� ���������\n");
}

// �������: 
void solution00()
{
	// �������

}
// �������: 
void solution01()
{
	// �������

}
// �������: 
void solution02()
{
	// �������

}