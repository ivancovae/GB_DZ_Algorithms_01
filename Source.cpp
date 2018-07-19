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
	printf("5. ������� ������ 5\n");
	printf("6. ������� ������ 6\n");
	printf("7. ������� ������ 7\n");
	printf("8. ������� ������ 8\n");
	printf("9. ������� ������ 9\n");
	printf("10. ������� ������ 10\n");
	printf("0. ���������� ���������� ���������\n");
}

void descriptionTask(char *task)
{
	printf("\n##########################################\n");
	printf("\n������� ������:\n");
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

// ������� 1: ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������.
void solution00()
{
	descriptionTask("������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������.\n");
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
// ������� 2: ����� ������������ �� ������� �����. ������� �� ������������. 
void solution01()
{
	descriptionTask("����� ������������ �� ������� �����. ������� �� ������������.\n");
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
	endTask();
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
	descriptionTask("�������� ��������� ������ ���������� ���� ������������� ����������:\n\ta.� �������������� ������� ����������;\n\tb. *��� ������������� ������� ����������.\n");
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

// ������� 4: �������� ��������� ���������� ������ ��������� ����������� ���������.
void solution03()
{
	descriptionTask("�������� ��������� ���������� ������ ��������� ����������� ���������(a*x^2 + b*x + c = 0).\n");
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

	endTask();
}

// ������� 5: � ���������� �������� ����� ������. ��������� ����������, � ������ ������� ���� �� ���������.
void solution04()
{
	descriptionTask("� ���������� �������� ����� ������. ��������� ����������, � ������ ������� ���� �� ���������.\n");
	// ���� ������
	int month = 0;
	printf("������� ����� ������: ");
	scanf("%d", &month);
	// �������
	switch (month)
	{
	case 1:
	case 2:
	case 12: { printf("����� ������ ������������� ������� ������� ����\n"); }break;
	case 3:
	case 4:
	case 5: { printf("����� ������ ������������� ��������� ������� ����\n"); }break;
	case 6:
	case 7:
	case 8:	{ printf("����� ������ ������������� ������� ������� ����\n"); }break;
	case 9:
	case 10:
	case 11: { printf("����� ������ ������������� �������� ������� ����\n"); }break;
	default:
		printf("����� ������ ������ ���� � �������� 1-12.\n");
	}
	
	endTask();
}

// ������� 6: ������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����. (�������� ������� �������� � �������� 20 ���(1 ���, 2-4 ����, 5-20 ���, �� ����� � ����� �����...))
void solution05()
{
	descriptionTask("������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.\n");
	// ���� ������
	int year = 0;
	printf("������� ������� �� 1 �� 150: ");
	scanf("%d", &year);
	// �������
	int n = year % 20;
	switch (n)
	{
	case 1: { printf("%d ���\n", year); }break;
	case 2:
	case 3:
	case 4: { printf("%d ����\n", year); }break;
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
	case 0: { printf("%d ���\n", year); }break;
	default:
		printf("������������ �����, �������� �� 1 �� 150");
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

// ������� 7: � ���������� �������� �������� ���������� ���� ����� ��������� ����� (x1,y1,x2,y2). ��������� ����������, ��������� ���� � ������ ����� ��� ���.
void solution06()
{
	descriptionTask("� ���������� �������� �������� ���������� ���� ����� ��������� ����� (x1,y1,x2,y2). ��������� ����������, ��������� ���� � ������ ����� ��� ���.\n");
	// ���� ������
	Point firstFigure;
	printf("������� ���������� ������ ������: ");
	scanf("%d %d", &firstFigure.x, &firstFigure.y);
	Point secondFigure;
	printf("������� ���������� ������ ������: ");
	scanf("%d %d", &secondFigure.x, &secondFigure.y);
	// �������
	if (isEquilColor(firstFigure, secondFigure))
	{
		printf("���� ��������� � ����������� �����");
	} 
	else
	{
		printf("���� ��������� � ������� �����");
	}
	endTask();
}

// ������� 8: ������ a � b � ������� �������� � ���� ����� �� a �� b.
void solution07()
{
	descriptionTask("������ a � b � ������� �������� � ���� ����� �� a �� b.\n");
	// ���� ������
	int a;
	printf("������� ������ �����: ");
	scanf("%d", &a);
	int b;
	printf("������� ������ �����: ");
	scanf("%d", &b);
	if (a > b)
	{
		printf("�� ����� ������ ����� ������ �������, ����� ����� �������� �������.\n");
		swap(&a, &b);
	}
	// �������
	for (int i = a; i <= b; i++)
	{
		printf("������� ����� %d ����� %lf, ��� ����� %d ����� %lf\n", i, pow(i, 2), i, pow(i, 3));
	}
	endTask();
}

// ������� 9: ���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� �� ������� ������ N �� K, � ����� ������� �� ����� �������.
void solution08()
{
	descriptionTask("���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� �� ������� ������ N �� K, � ����� ������� �� ����� �������.\n");
	// ���� ������
	int n;
	printf("������� N ����� ������������� �����: ");
	scanf("%d", &n);
	int k;
	printf("������� K ����� ������������� �����: ");
	scanf("%d", &k);
	// �������
	int int_part = 0;

	while (n >= k)
	{
		int_part++;
		n -= k;
	}
	printf("����� ����� %d ������� �� ������� %d\n", int_part, n);

	endTask();
}

// ������� 10: ���� ����� ����� N (> 0). � ������� �������� ������� ������ � ������ ������� �� ������� ����������, ������� �� � ������ ����� N �������� �����. ���� �������, �� ������� True, ���� ��� � ������� False.
void solution09()
{
	descriptionTask("���� ����� ����� N (> 0). � ������� �������� ������� ������ � ������ ������� �� ������� ����������, ������� �� � ������ ����� N �������� �����. ���� �������, �� ������� True, ���� ��� � ������� False.\n");
	// ���� ������
	int n;
	printf("������� ����� ������������� �����: ");
	scanf("%d", &n);
	// �������

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
		printf("����� %d �������� �������� �����", n);
	} 
	else
	{
		printf("����� %d ���������� �������� �����", n);
	}
	
	endTask();
}
