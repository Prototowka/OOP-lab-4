#include <iostream>
#include <string>
#include <locale>

using namespace std;

class File
{
public:
	string name;//имя
	int size;//размер
	int date[3];//дата создания
	int count;//кол-во обращений
};

File file[5];
int i, j;
int select;

int main()
{

	setlocale(LC_ALL, "RUSSIAN");

	file[0].name = "a";
	file[0].size = 105;
	file[0].date[0] = 3;//день
	file[0].date[1] = 3;//месяц
	file[0].date[2] = 2002;//год
	file[0].count = 0;

	file[1].name = "b";
	file[1].size = 8;
	file[1].date[0] = 10;//день
	file[1].date[1] = 9;//месяц
	file[1].date[2] = 2008;//год
	file[1].count = 15;

	file[2].name = "c";
	file[2].size = 1024;
	file[2].date[0] = 19;//день
	file[2].date[1] = 6;//месяц
	file[2].date[2] = 1979;//год
	file[2].count = 14;

	file[3].name = "d";
	file[3].size = 512;
	file[3].date[0] = 3;//день
	file[3].date[1] = 6;//месяц
	file[3].date[2] = 2004;//год
	file[3].count = 75;

	file[4].name = "e";
	file[4].size = 105;
	file[4].date[0] = 7;//день
	file[4].date[1] = 1;//месяц
	file[4].date[2] = 0;//год
	file[4].count = 532;

	do
	{
		cout << "0-выход" << endl;
		cout << "1-Вывод файлов, размер которых превышает заданный" << endl;
		cout << "2-Вывод файлов, размер которых не превышает заданный" << endl;
		cout << "3-Вывод файлов, число обращений к которым превышает заданное" << endl;
		cout << "4-Вывод файлов, число обращений к которым не превышает заданное" << endl;
		cin >> select;
		switch (select)
		{
		case 0:return 0;break;
		case 1:
			cout << "Введите размер" << endl;
			cin >> select;
			for (i = 0; i < 5; i++)
			{
				if (file[i].size > select)
				{
					cout << "--------------------" << endl;
					cout << "Имя:" << file[i].name << endl;
					cout << "Размер:" << file[i].size << endl;
					cout << "Дата создания:";
					for (j = 0; j < 3; j++)
					{
						cout << file[i].date[j] << ".";
					}
					cout << endl << "Кол-во обращений:" << file[i].count << endl;
					cout << "--------------------" << endl;
				}
			}
			break;
		case 2:
			cout << "Введите размер" << endl;
			cin >> select;
			for (i = 0; i < 5; i++)
			{
				if (file[i].size <= select)
				{
					cout << "--------------------" << endl;
					cout << "Имя:" << file[i].name << endl;
					cout << "Размер:" << file[i].size << endl;
					cout << "Дата создания:";
					for (j = 0; j < 3; j++)
					{
						cout << file[i].date[j] << ".";
					}
					cout << endl << "Кол-во обращений:" << file[i].count << endl;
					cout << "--------------------" << endl;
				}
			}
			break;

		case 3:
			cout << "Введите кол-во запросов" << endl;
			cin >> select;
			for (i = 0; i < 5; i++)
			{
				if (file[i].count > select)
				{
					cout << "--------------------" << endl;
					cout << "Имя:" << file[i].name << endl;
					cout << "Размер:" << file[i].size << endl;
					cout << "Дата создания:";
					for (j = 0; j < 3; j++)
					{
						cout << file[i].date[j] << ".";
					}
					cout << endl << "Кол-во обращений:" << file[i].count << endl;
					cout << "--------------------" << endl;
				}
			}
			break;
		case 4:

			cout << "Введите кол-во запросов" << endl;
			cin >> select;
			for (i = 0; i < 5; i++)
			{
				if (file[i].count <= select)
				{
					cout << "--------------------" << endl;
					cout << "Имя:" << file[i].name << endl;
					cout << "Размер:" << file[i].size << endl;
					cout << "Дата создания:";
					for (j = 0; j < 3; j++)
					{
						cout << file[i].date[j] << ".";
					}
					cout << endl << "Кол-во обращений:" << file[i].count << endl;
					cout << "--------------------" << endl;
				}
			}
			break;
		}
	} while (i);

	return 0;
}