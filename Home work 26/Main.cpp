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
	cout << "�������� ������: " << P.title << '\n';
	cout << "��� ������ ������: " << P.year << '\n';
	cout << "���� ������: " << P.genre << '\n';
	cout << "����������������� ������ � �������: " << P.duration << '\n';
	cout << "���� �� ���� ������: " << P.price << '\n';
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
	cout << "������� ����� ��������� ������, ������� �������� ���������:\n";
	cout << "1.�������� ������: \n";
	cout << "2.��� ������ ������: \n";
	cout << "3.���� ������: \n";
	cout << "4.����������������� ������ � �������: \n";
	cout << "5.���� �� ���� ������: \n";
	int num;
	cin >> num;
	if (num == 1){
	cout << "�������� �������� ������ ��: \n";
	cin.ignore();
	getline(cin, cinema.title);}
	if (num == 2){
		cout << "�������� ��� ������ ������ �� : \n";
	cin >> cinema.year;}
	if (num == 3){
		cout << "�������� ���� ������ ��: \n";
	cin.ignore();
	getline(cin, cinema.genre);}
	if (num == 4){
		cout << "�������� ����������������� ������ � ������� ��: \n";
	cin >> cinema.duration;}
	if (num == 5){
		cout << "5.�������� ���� �� ���� ������ ��: \n";
	cin >> cinema.price;}
	cout << "���������� ���������!!!\n";
	
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "�������\n";
	movies x = { "Cat", 2024, "comedy", 3, 1 };
	cout << "������ 1\n";
	show_movies(x);
	cout << "������ 2\n";
	movies n = { "dog", 2024, "comedy", 3, 7 };
	movies m = { "dog", 2024, "comedy", 3, 80 };
	movies k = { "dog", 2024, "comedy", 3, 45 };
	cout << "����� � ����� ������� ����������: ";
	expensive(n, m, k);
	cout << "\n������ 3\n";
	update_info(x);
	
	

	return 0;
}