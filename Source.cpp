#include <iostream> 
using namespace std; 
int main() {
	//описание массива целых чисел
/* const int size = 5; 
	int mas[size];
	//ввод массива с клавиатуры 
	for (int i = 0; i < size; i = i + 1) {
		cin >> mas[i];
	}
	//вывод массива на экран 
	for (int i = 0; i < size; i = i + 1) {
		cout << mas[i] << ' ';
	}
	cout << endl; */ 
	/*Series1◦
. Даны десять вещественных чисел. Найти их сумму*/
/*  const int size = 10; 
	double mas[size]; 
	for (int i = 0; i < size; i++){
		cin >> mas[i]; 
	}
	double sum = 0; 
	for (int i = 0; i < size; i++) {
		sum = sum + mas[i]; 
	}
	cout << "sum=" << sum << endl; */ 
	/*Series2. Даны десять вещественных чисел. Найти их произведение.
*/
/* const int size = 10;
	double mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	double sum = 1;
	for (int i = 0; i < size; i++) {
		sum = sum * mas[i];
	}
	cout << "sum=" << sum << endl; */ 
	/*Series3. Даны десять вещественных чисел. Найти их среднее арифметическое.
*/ 
	const int size = 10;
	double mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + mas[i];
	}
	cout << "sum=" << sum / size << endl; 
		return 0; 
}