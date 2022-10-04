//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <cstdlib>
#include <ctime>



void my_swap(int num1, int num2 ) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

template <typename T>
void sum_arr(T *arr, const int length, T *var) {
	*var = 0;
	for (int i = 0; i < length; i++)
		*var += *(arr + i);
}

template <typename T> //���������� ������� ���������� ������� �� begin �� end
void fill_arr(T arr, const int length, int begin, int end ) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template <typename T> // ����� �������� �������
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

	// ��������� � �������
	std::cout << n << ' ' << m << ' ' << '\n';
	//my_swap(n, m); // �� �������� ��� ��� ��������� ��� �����
	std::cout << n << ' ' << m << ' ' << '\n';

	pswap(&n, &m); // �������� ��� ��� ���������� ������ ����������
	std::cout << n << ' ' << m << ' ' << '\n';



	// ��������� �� ����������
	std::cout << "����� n = " << &n << '\n'; // vyvod adresa

	int *pn; //obyyavlenie ykazatelya tipa int - ���������� ��������� ���� int

	pn = &n; // ���������� ��������� �� ����� ���������� n - napravlyaen ukazatel na adress peremennoy n
	// int  *pn = &n; // ������������ - alternativa

	std::cout << "����� n = " << pn << '\n'; //����� �������� ��������� pn 

	std::cout << "n = " << n << '\n';
	std::cout << "n = " << pn << '\n'; // ����� �������� n � ������� ������������� ��������� pn 

	*pn = 15; // ������ �������� n c ������� ��������� pn
	std::cout << "����� n = " << n << '\n';


	std::cout << "����� m = " << &m << '\n';
	
	pn = &m; // �������������� ��������� �� ����� ���������� m 

	std::cout << "����� m = " << pn << '\n';


	int* pm = &m;

	



	double pi = 3.14;
	double *ppi = &pi;



	//��������� � �������
	/*const int size = 5;
	//              0   1   2   3  4
	int arr[size]{ 10, 20, 30, 40, 50 };

	int* pa2 = &arr[2];

	std::cout << "arr[2] = " << *pa2 << '\n';//30

	std::cout << pa2 << '\n';
	pa2++;

	std::cout << "*pa2 = " << *pa2 << '\n'; // 40

	pa2 -= 2;

	std::cout << "*pa2 = " << *pa2 << '\n';//20


	std::cout << arr << '\n';

	pa2 = arr;
	// ���������� ��������� pa2 �� ����� ������� �������� �������
	std::cout << "*pa2 = " << *pa2 << '\n';//10

	//����� ������� ����� ��������� pa2
	std::cout << "������: \n";
	for (int i = 0; i < size; i++)
		std::cout << (pa2 + i) << ' ';
	std::cout << '\n';*/



	//������ 1. ����� � ����������
	std::cout << "������ 1.\n����������� ������: \n";
	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);
	sum_arr(arr1, size1, &n);
	std::cout << "����� ��������� ������� ����� " << n << '\n';



	return 0;
}