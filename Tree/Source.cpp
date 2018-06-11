/*
итераторы-указатели на первый элемент и на последний элемент.

1: vector
2:list
3 вид :контейнеры (деревья)
деревья могут быть сбалансированными и не сбалансированными
в сбалансированном дереве на поиск элемента тратиться логарифмическое время.

2 контейнера: set, map.
Деревья используются для сортировки данных
каждый элемент дерева уникальный, т.е. не повторяется
реализация деревьев
*/
#include"Car.h"

int main() {
	int n;
	cout << "Enter task num:";
	cin >> n;
	switch (n) {
	case 1: {
		set<car> s;
		s.insert(car(2, "white"));
		s.insert(car(6, "blue")); //более безопасный вариант чем implace, т.к. добавляет элемент через создание копии
		s.emplace(car(15, "silver"));//тож для добавления элемента, только через адрес
		//s.erase(car("18","black"));//удаление элемента по значению
		//s.erase(s.begin());//также удаляет по итератору
		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;

		//c использованием функтора, по цвету
	case 2: {
		set<car,cmpByCo> s;
		s.insert(car(3, "white"));
		s.insert(car(6, "blue")); //более безопасный вариант чем implace, т.к. добавляет элемент через создание копии
		s.emplace(car(12, "silver"));
		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;
		// c использованием функтора, по номеру
	case 3: {
		set<car, cmpByNo> s;
		s.insert(car(3, "white"));
		s.emplace(car(12, "silver"));
		s.insert(car(6, "blue")); //более безопасный вариант чем implace, т.к. добавляет элемент через создание копии

		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;
	}
	system("pause");
	return 0;
}