// flat_04-07-2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Создать класс квартира  реализовать перегруженные операторы
//проверка на равенство площадей квартир (опрерация ==)
// операция присваивания одного обьекта в другой (операция =)
// сравнение двух квартир (операция >)

#include <iostream>
using namespace std;
class Flat
{
private:
	double square;
	int price;

public:

	Flat(double psquare, int pprise) // переприсваивание
		:square{ psquare }, price{ pprise }{}
	//Flat() {}
	Flat() :Flat(0, 0) {} // Конструктор по умолчанию

	//Flat(const Flat& object) // Конструктор копирования
	//{
	//	cout << "\nСработал Конструктор копирования\n";
	//}
	
	// Перегрузка оператора равенство
	friend bool operator ==(const Flat psquare1,
		const Flat psquare2)
	{
		return psquare1.price == psquare2.price;
		
	}
	// Перегрузка оператора больше >
	friend bool operator >(const Flat psquare1,
		const Flat psquare2)
	{
		return psquare1.price > psquare2.price;

	}
	//////// Перегруженное присваивание для поля prise
	////Flat operator=(const Flat & other)
	////{
	////	this->price = other.price;
	////	cout << "вызвался конструктор копирования" <<"\t" << this << endl;
	////	return  Flat();
	////}
	//// Перегруженное присваивание для двух полей
	Flat operator=(const Flat& other)
	{
		this->price = other.price;
		this->square = other.square;
		cout << "вызвался конструктор копирования" << "\t" << this << endl;
		return  Flat();
	}
	void display() const
	{
		cout << endl;
		cout << "(" << square << "," << price << ")";
		cout << endl;
	}
	~Flat() {} // Деструктор
};


int main()
{
	system("chcp 1251");

	cout << "Hello World!\n";
	Flat one(11.11, 11);
	Flat two(22.2, 222);
	one.display();
	two.display();
	if (one == two)
	{
		cout << "Цена равна" << endl;
	}else cout << "Цена не равна" << endl;
	Flat tree;
	tree.display();
	tree = two;
	tree.display();
	Flat four(100, 550);
	four.display();
	four = one;
	four.display();

	////if (one > two) 
	////	{
	////		cout << "Цена 1 квартиры > второй" << endl;
	////	}
	////else cout << "Цена 1 квартиры !> второй" << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
