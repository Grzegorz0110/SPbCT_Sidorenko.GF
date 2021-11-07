#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i, N;
	float maxs = 0;
	cout << "Введите данные пациентов";
	cout << "\nВведите количество пациентов: ";
	cin >> N;

	struct hospital {
		char familiya[20];
		char name[20];
		char data[20];
		char otchestvo[20];

		int time;
		int polic;
	};
	hospital stud[20];
	for (i = 0; i < N; i++)
	{
		cout << "\n" << i + 1 << "-й пациент\n";
		cout << "Фамилия";
		cin >> stud[i].familiya;
		cout << "Имя";
		cin >> stud[i].name;
		cout << "Отчество";
		cin >> stud[i].otchestvo;

		cout << "\n" << "||Данные о записи|| \n";
		cout << "Дата записи";
		cin >> stud[i].data;
		cout << "Время записи (количество часов)";
		cin >> stud[i].time;
		cout << "Номер полиса";
		cin >> stud[i].polic;
	}

	cout << endl;
	cout << "||Пациенты, записанные на 11.11.2021: ||";
	for (i = 0; i < N; i++)
	{
		cout << "\nФамилия: " << stud[i].familiya
			<< " " << "Имя " << stud[i].name << " "
			<< "Отчество " << stud[i].otchestvo << " "
			<< "Полис " << stud[i].polic << " "
			<< "Время записи " << stud[i].time << " ";
	}
	system("PAUSE");

}


