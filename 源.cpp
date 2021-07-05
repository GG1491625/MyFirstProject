#include<iostream>
#include<stdlib.h>
using namespace std;
int i, j;
const int N = 50;

void input(int a[50][50],int M ,int N)
{
	for (i = 0; i < M; i++)
	{
		cout << "�������" << i + 1 << "�е�����";
		for (j = 0; j < N; j++)
			cin >> a[i][j];
	}
}

void output(int a[50][50], int M, int N)
{
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

void add(int a[50][50], int b[50][50], int c[50][50], int M, int N)
{
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			c[i][j] = a[i][j] + b[i][j];
	}
}

void minu(int a[50][50], int b[50][50], int c[50][50], int M, int N)
{
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			c[i][j] = a[i][j] - b[i][j];
	}
}

void mul(int a[50][50], int b[50][50], int c[50][50], int M, int N, int P)
{
	int k;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < P; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < N; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	}
}

int main()
{
	int a[50][50], b[50][50], c[50][50], a1, b1, c1, d1, m;
	while (1)
	{
		//system("cls");
		cout << "1.���о���ļӼ���  2.���о���ĳ˷�  3.�˳�����  4.����" << endl;
		cout << "����������ѡ��" << endl;
		cin >> m;
		if (m == 1)
		{
			cout << "�������һ�������������������" << endl;
			cin >> a1 >> b1;
			cout << "������ڶ��������������������" << endl;
			cin >> c1 >> d1;
			if ((a1 = c1) && (b1 = d1))
			{
				cout << "����������Խ��мӼ�������" << endl;
				cout << "�������һ������" << endl;
				input(a, a1, b1);
				cout << "������ڶ�������" << endl;
				input(b, c1, d1);
				add(a, b, c, a1, b1);
				cout << "�ӷ����Ϊ��" << endl;
				output(c, a1, b1);
				minu(a, b, c, a1, b1);
				cout << "�������Ϊ��" << endl;
				output(c, a1, b1);
			}
			else
				cout << "������ľ����ܽ��мӼ�������" << endl;
		}
		else if (m == 2)
		{
			cout << "�������һ�������������������" << endl;
			cin >> a1 >> b1;
			cout << "������ڶ��������������������" << endl;
			cin >> c1 >> d1;
			if (b1 = c1)
			{
				cout << "����������Խ��г˷�����" << endl;
				cout << "�������һ������" << endl;
				input(a, a1, b1);
				cout << "������ڶ�������" << endl;
				input(b, c1, d1);
				mul(a, b, c, a1, b1, d1);
				cout << "������ƵĽ��Ϊ��" << endl;
				output(a, a1, b1);
				cout << endl << "*" << endl << endl;
				output(b, c1, d1);
				cout << endl << "=" << endl << endl;
				output(c, a1, d1);
				cout << endl;
			}
			else
				cout << "������ľ����ܽ��г˷�����" << endl;
		}
		else if (m == 3)
			exit(0);
		else if (m == 4)
			system("cls");
	}
	return 0;
}