// Homework3_week3.cpp 


#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\nЗадание 1";
	int sec;
	cout << "\nВведите секунды :";
	cin >> sec;
	int hout = sec / 3600;
	int minut = (sec - hout * 3600) / 60;
	int sec1 = sec - ((hout * 3600) + (minut * 60));
	cout << "\nПоточний час :  " << hout << " годин   " << minut << " хвилин  " << sec1 << "  секунд ";
	//Расчет времени до конца суток
	float dif = (24 * 3600) - sec;
	int hour = dif / 3600;
	int minut1 = (dif - hour * 3600) / 60;
	int sec2 = dif - ((hour * 3600) + (minut1 * 60));
	cout << "\n Осталось времени до конца суток :  " << hour << " годин  " << minut1 << " хвилин  " << sec2 << " секунд ";
	//Задание 2
	cout << "\n";
	cout << "\nЗадание 2";
	float d;
	cout << "\nВведите диаметр окружности :";
	cin >> d;
	float p = d * 3.14;
	float r = d / 2;
	float s = 3.14 * r * r;
	cout << "\nПлоща окружности" << s ;
	cout << "\nПериметр окружности  " << p;
	cout << "\n";
	//Задание 3
	cout << "\nЗадание3";
	float x, y;
	cout << "\nвведите первое число :";
	cin >> x;
	cout << "\n Введите второе число :";
	cin >> y;
	float sym = x + y;
    float dob = x * y;
	float ser = (x + y) / 2;
	cout << "\n Сума  " <<  sym;
	cout << "\nДобуток  " << dob;
	cout << "\n Середнє арефмитичне  " << ser;
	cout << "\n";
	//Задание4
	cout << "\nЗадание4";
	float a, b , n;
	cout << "\nвведите первое число :";
	cin >> a;
	cout << "\n Введите второе число :";
	cin >> b;
	cout << "\n Введите второе число :";
	cin >> n;
	float sym1 = x + y+n;
	float dob1 = x * y*n;
	float ser1 = (x + y+n) / 3;
	cout << "\n Сума  " << sym1;
	cout << "\nДобуток  " << dob1;
	cout << "\n Середнє арефмитичне  " << ser1;
	cout << "\n";
	//Задание5
	cout << "\nЗадание5";
	float cost, sale;
	cout << "\nВведите цену :";
	cin >> cost;
	cout << "\nВведите скидку :";
	cin >> sale;
	int van;
	cout << "\n Введите количество :";
	cin >> van;
	float xy = van * cost;
	float syma_nout = xy- xy*( sale/100);
	cout << "\nСтоимость заказа :" << syma_nout;
	cout << "\n";
	//Задание6
	cout << "\nЗадание6";
	int ygot;
	cout << "\nВведите сумму количеств сделок :";
	cin >> ygot;
	float zar = 100 + ((5 * ygot) / 100);
	cout << "\nВаша зарплата :" << zar  << char(36);
	cout << "\n";
	//Задание7
	cout << "\nЗадание7";
	double gb, bit;
	cout << "\nВведите размер файла (Gb):";
	cin >> gb;
	cout << "Введите скорость интернет соеденения (Mbit/s):";
	cin >> bit;
	gb = gb * 1024 * 8;
	gb /= bit;
	int hours = gb / 3600;
	int min = gb / 60 - hours * 60;
	int se = gb - min * 60 - hours * 3600;
	cout << hours << " год " << min << " хв " << se << " сек" << endl;





}

