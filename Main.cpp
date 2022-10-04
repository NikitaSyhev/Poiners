//Этот проект создан с помощью классического шаблона
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

template <typename T> //заполнение массива случайными числами от begin до end
void fill_arr(T arr, const int length, int begin, int end ) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template <typename T> // вывод массивав консоль
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

	// Указатели и функции
	std::cout << n << ' ' << m << ' ' << '\n';
	//my_swap(n, m); // не работает так как параметры это копии
	std::cout << n << ' ' << m << ' ' << '\n';

	pswap(&n, &m); // работает так как передаются адреса переменных
	std::cout << n << ' ' << m << ' ' << '\n';



	// Указатели на переменные
	std::cout << "Адрес n = " << &n << '\n'; // vyvod adresa

	int *pn; //obyyavlenie ykazatelya tipa int - объявление указателя типа int

	pn = &n; // направляем указатель на адрес переменной n - napravlyaen ukazatel na adress peremennoy n
	// int  *pn = &n; // альтернатива - alternativa

	std::cout << "Адрес n = " << pn << '\n'; //вывод значения указателя pn 

	std::cout << "n = " << n << '\n';
	std::cout << "n = " << pn << '\n'; // вывод значения n с помощью разыменования указателя pn 

	*pn = 15; // меняем значение n c помощью указателя pn
	std::cout << "Новая n = " << n << '\n';


	std::cout << "Адрес m = " << &m << '\n';
	
	pn = &m; // перенаправляем указатель на адрес переменной m 

	std::cout << "Адрес m = " << pn << '\n';


	int* pm = &m;

	



	double pi = 3.14;
	double *ppi = &pi;



	//указатели и массивы
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
	// направляем указатель pa2 на адрес первого элемента массива
	std::cout << "*pa2 = " << *pa2 << '\n';//10

	//Вывод массива через указатель pa2
	std::cout << "Массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << (pa2 + i) << ' ';
	std::cout << '\n';*/



	//Задача 1. Сумма в переменную
	std::cout << "Задача 1.\nИзначальный массив: \n";
	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);
	sum_arr(arr1, size1, &n);
	std::cout << "Сумма элементов массива равно " << n << '\n';



	return 0;
}