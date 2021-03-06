#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
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
void solution10();
void solution11();
void solution12();
void solution13();

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
		case 11:
			solution10();
			break;
		case 12:
			solution11();
			break;
		case 13:
			solution12();
			break;
		case 14:
			solution13();
			break;
		case 0:
			printf("��������� ��������� ���� ����������.\n");
			break;
		default:
			printf("������������ ������, ������� �������� �� ������ ����.\n");
		}
	} while (select != 0);
	system("pause");
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
	printf("11. ������� ������ 11\n");
	printf("12. ������� ������ 12\n");
	printf("13. ������� ������ 13\n");
	printf("14. ������� ������ 14\n");
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
double getMaxOfThree(double a, double b, double c)
{
	double max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	return max;
}
double getMaxOfFour(double a, double b, double c, double d)
{
	double max = getMaxOfThree(a, b, c);
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
	double a = 0;
	printf("������� ������ �����: ");
	scanf("%lf", &a);
	double b = 0;
	printf("������� ������ �����: ");
	scanf("%lf", &b);
	double c = 0;
	printf("������� ������ �����: ");
	scanf("%lf", &c);
	double d = 0;
	printf("������� ��������� �����: ");
	scanf("%lf", &d);
	// �������
	printf("���������: ");
	printf("%lf\n", getMaxOfFour(a, b, c, d));
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
	printf("���������: ");
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
	printf("���������: ");
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
	printf("���������: ");
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

	// �������
	printf("���������: ");
	if (a > b)
	{
		printf("�� ����� ������ ����� ������ �������, ����� ����� �������� �������.\n");
		swap(&a, &b);
	}
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
	printf("���������: ");
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
	printf("���������: ");
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

// ������� 11: � ���������� �������� �����, ���� �� ����� ������ 0. ���������� ������� �������������� ���� ������������� ������ �����, �������������� �� 8.
void solution10()
{
	descriptionTask("� ���������� �������� �����, ���� �� ����� ������ 0. ���������� ������� �������������� ���� ������������� ������ �����, �������������� �� 8.\n");
	// ���� ������
	int count = 0;
	int sum = 0;
	int n = -1;
	while (n != 0)
	{
		printf("������� ����� �����: ");
		scanf("%d", &n);
		if ((n > 0) && ((n % 2) == 0) && ((n % 10) == 8))
		{
			sum += n;
			count++;
		}
	}

	// �������
	printf("���������: ");
	if (count > 0)
	{
		printf("������� �������������� ���� ��������� ������������� ������ ����� �������������� �� 8 ����� %d\n", sum / count);
	} 
	else
	{
		printf("��������� ����� �� �������� ������������� ������ ����� �������������� �� 8.\n");
	}
	endTask();
}

// ������� 12: �������� ������� ���������� ������������� �� ���� �����.
void solution11()
{
	descriptionTask("�������� ������� ���������� ������������� �� ���� �����.\n");
	// ���� ������
	double a;
	printf("������� ������ �����: ");
	scanf("%lf", &a);
	double b;
	printf("������� ������ �����: ");
	scanf("%lf", &b);
	double c;
	printf("������� ������ �����: ");
	scanf("%lf", &c);

	// �������
	double max = getMaxOfThree(a, b, c);
	printf("���������: ");
	printf("������������ ����� �� %lf, %lf, %lf �������� %lf\n", a, b, c, max);
	endTask();
}

int prev_rand_value = 1;

int genRand()
{
	int A = 5;
	int B = 3;
	int M = 99;
	int value_without_rand = (A*prev_rand_value + B) % M + 1;
	prev_rand_value = value_without_rand;
	return value_without_rand;
}

// ������� 13: * �������� �������, ������������ ��������� ����� �� 1 �� 100.
//					�) � �������������� ����������� ������� rand()
//					�) ��� ������������� ����������� ������� rand()
void solution12()
{
	descriptionTask("* �������� �������, ������������ ��������� ����� �� 1 �� 100.\n\t�) � �������������� ����������� ������� rand()\n\t�) ��� ������������� ����������� ������� rand()\n");
	// ���� ������

	int prev_value = 0;
	// �������
	int value_without_rand = genRand();
	int value_with_rand = rand() % 99 + 1;
	
	printf("���������: ");
	printf("\n��������� ����� ��� rand ����� %d\n", value_without_rand);
	printf("��������� ����� � rand ����� %d\n", value_with_rand);
	endTask();
}

bool isNatural(int number)
{
	int count = number + 10;
	int *arr = (int *)malloc(count * sizeof(int));
	for (int i = 0; i < count; i++)
	{
		arr[i] = i;
	}

	printf("����������� ������� �����: \n");
	for (int i = 2; i*i <= count; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = i * i; j < count; j+=i)
			{
				arr[j] = false;
			}
		}
	}
	bool isN = false;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] != 0)
			printf(" %d", i);
		if ((arr[i] != 0) && (number == arr[i]))
			isN = true;
	}
	free(arr);
	return isN;
}

// ������� 14: *����������� �����. ����������� ����� ���������� �����������, ���� ��� ����� ��������� ������ ������ ��������. ��������, 252 = 625. �������� ���������, ������� ������ ����������� ����� N � ������� �� ����� ��� ����������� �����, �� ������������� N.
void solution13()
{
	descriptionTask("*����������� �����. ����������� ����� ���������� �����������, ���� ��� ����� ��������� ������ ������ ��������. ��������, 252 = 625. �������� ���������, ������� ������ ����������� ����� N � ������� �� ����� ��� ����������� �����, �� ������������� N.\n");
	// ���� ������
	int N;
	printf("������� �����: ");
	scanf("%d", &N);
	// �������
	printf("���������: ");
	bool temp = isNatural(N);
	if(temp == false)
	{
		printf("\n������� �� ������� ����������� �����.\n");
	}
	else 
	{
		printf("\n������� ������� ����������� �����.\n");
		printf("\n����������� ����� �� %d:\n", N);
		for (int i = 0; i < N; i++)
		{
			int pI = (int)pow(i, 2);
			int k = 0, n0 = i, m = 0, pi0 = pI;
			bool isAutomorf = true;
			while (n0 > 0)
			{
				k = n0 % 10;
				n0 = div(n0, 10).quot;
				m = pi0 % 10;
				pi0 = div(pi0, 10).quot;
				if (k != m)
				{
					isAutomorf = false;
				}
			}
			if (isAutomorf == true)
			{
				printf("%d(%d)", i, pI);
			}
		}
	}


	
	endTask();
}