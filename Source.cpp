#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void solution00();
void solution01();
void solution02();
void solution03();

void menu();

// ������� �������� ������� ��������� ����������
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
		case 0:
			printf("��������� ��������� ���� ����������. ������� �� ����� ������ ��� ������ �� ���������...\n");
			break;
		default:
			printf("������������ ������, ������� �������� �� ������ ����.\n");
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
	printf("4. ������� ������ 4\n");
	printf("0. ���������� ���������� ���������\n");
}

double getIndexMassBody(int mass, double height)
{
	return mass / pow(height, 2);
}

// ������� 1: ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������.
void solution00()
{
	printf("\n##########################################\n");
	printf("\n������� ������:\n");
	printf("������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������.\n");
	// ���� ������
	int m = 0;
	printf("������� ����� ����(���) �������� � �����������(��� ������ ���� ������ ����): ");
	scanf("%d", &m);
	double h = 0.0;
	printf("������� ���� �������� � ������(���� ������ ���� ������ ����): ");
	scanf("%lf", &h);
	// �������
	printf("���������: ");
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
// ������� 2: ����� ������������ �� ������� �����. ������� �� ������������. 
void solution01()
{
	printf("\n##########################################\n");
	printf("\n������� ������:\n");
	printf("����� ������������ �� ������� �����. ������� �� ������������.\n");
	// ���� ������
	int a = 0;
	printf("������� ������ �����: ");
	scanf("%d", &a);
	int b = 0;
	printf("������� ������ �����: ");
	scanf("%d", &b);
	int c = 0;
	printf("������� ������ �����: ");
	scanf("%d", &c);
	int d = 0;
	printf("������� ��������� �����: ");
	scanf("%d", &d);
	// �������
	printf("���������: ");
	printf("%d\n", getMaxOf(a, b, c, d));
	printf("\n##########################################\n\n");
}
// ������� �����
void swap(int *a, int *b);
// C����� ����� ��������\��������� (����� ����� � ����� ���������\�������(�� �������������))
void swapSummSub(int *a, int *b);
// ������� ��������
void swapBit(int *a, int *b);

// ������� 3: �������� ��������� ������ ���������� ���� ������������� ����������:
//				a.� �������������� ������� ����������;
//				b. *��� ������������� ������� ����������.
void solution02()
{
	printf("\n##########################################\n");
	printf("\n������� ������:\n");
	printf("�������� ��������� ������ ���������� ���� ������������� ����������:\n");
	printf("\ta.� �������������� ������� ����������;\n");
	printf("\tb. *��� ������������� ������� ����������.\n");
	// ���� ������
	int a = 0;
	printf("������� ������ �����: ");
	scanf("%d", &a);
	int b = 0;
	printf("������� ������ �����: ");
	scanf("%d", &b);
	// �������
	printf("���������: ");
	int a0 = a;
	int b0 = b;
	swap(&a0, &b0);
	printf("\n����� �������������� ����������: �� a=%d b=%d ����� a=%d b=%d\n", a, b, a0, b0);	
	int a1 = a;
	int b1 = b;
	swapSummSub(&a1, &b1);
	printf("\n����� ��������\\���������: �� a=%d b=%d ����� a=%d b=%d\n", a, b, a1, b1);
	int a2 = a;
	int b2 = b;
	swapBit(&a2, &b2);
	printf("\n����� ������� ��������: �� a=%d b=%d ����� a=%d b=%d\n", a, b, a2, b2);
	printf("\n##########################################\n\n");
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

// ������� 4: �������� ��������� ���������� ������ ��������� ����������� ���������.
void solution03()
{
	printf("\n##########################################\n");
	printf("\n������� ������:\n");
	printf("�������� ��������� ���������� ������ ��������� ����������� ���������(a*x^2 + b*x + c = 0).\n");
	// ���� ������
	int a = 0;
	printf("������� ����������� a: ");
	scanf("%d", &a);
	int b = 0;
	printf("������� ����������� b: ");
	scanf("%d", &b);
	int c = 0;
	printf("������� ����������� c: ");
	scanf("%d", &c);
	// �������
	printf("���������: ");
	double D = pow(b, 2) - (4 * a * c);
	double x1 = 0;
	double x2 = 0;

	if (D >= 0)
	{
		double temp = ((D > 0) ? sqrt(D) : 0);
		x1 = (-b + temp) / (2 * a);
		x2 = (-b - temp) / (2 * a);
		printf("� ��������� (%d)*x^2 + (%d)*x + (%d) = 0 ��� �����: x1=%lf, x2=%lf.\n", a, b, c, x1, x2);
	}
	else 
	{
		printf("� ��������� (%d)*x^2 + (%d)*x + (%d) = 0 ������ ���.\n", a, b, c);
	}

	printf("\n##########################################\n\n");
}