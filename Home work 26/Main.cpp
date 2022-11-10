#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	unsigned int duration;
	unsigned int price;
};



void show_movies(movies P) {
	cout << "Название фильма: " << P.title << '\n';
	cout << "Год выхода фильма: " << P.year << '\n';
	cout << "Жанр фильма: " << P.genre << '\n';
	cout << "Продолжительность фильма в минутах: " << P.duration << '\n';
	cout << "Цена за диск фильма: " << P.price << '\n';
}

bool expensive(movies &A, movies &B, movies &C) {
	if (A.price > B.price || A.price > C.price)
		return A.price;
	else
		if (B.price > C.price || B.price > A.price)
			return B.price;
		else
			return C.price;
}
void update_info(movies &cinema) {
	cout << "Введите пункт параметра фильма, который подлежит изменению:\n";
	cout << "1.Название фильма: \n";
	cout << "2.Год выхода фильма: \n";
	cout << "3.Жанр фильма: \n";
	cout << "4.Продолжительность фильма в минутах: \n";
	cout << "5.Цена за диск фильма: \n";
	int num;
	cin >> num;
	if (num == 1){
	cout << "Изменить название фильма на: \n";
	cin.ignore();
	getline(cin, cinema.title);}
	if (num == 2){
		cout << "Изменить год выхода фильма на : \n";
	cin >> cinema.year;}
	if (num == 3){
		cout << "Изменить жанр фильма на: \n";
	cin.ignore();
	getline(cin, cinema.genre);}
	if (num == 4){
		cout << "Изменить продолжительность фильма в минутах на: \n";
	cin >> cinema.duration;}
	if (num == 5){
		cout << "5.Изменить цена за диск фильма на: \n";
	cin >> cinema.price;}
	cout << "Информация обновлена!!!\n";
	
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задание\n";
	movies x = { "Cat", 2024, "comedy", 3, 1 };
	cout << "Задача 1\n";
	show_movies(x);
	cout << "Задача 2\n";
	movies n = { "dog", 2024, "comedy", 3, 7 };
	movies m = { "dog", 2024, "comedy", 3, 80 };
	movies k = { "dog", 2024, "comedy", 3, 45 };
	cout << "Фильм с самой высокой стоимостью: ";
	expensive(n, m, k);
	cout << "\nЗадача 3\n";
	update_info(x);
	
	

	return 0;
}