/*
���������-��������� �� ������ ������� � �� ��������� �������.

1: vector
2:list
3 ��� :���������� (�������)
������� ����� ���� ����������������� � �� �����������������
� ���������������� ������ �� ����� �������� ��������� ��������������� �����.

2 ����������: set, map.
������� ������������ ��� ���������� ������
������ ������� ������ ����������, �.�. �� �����������
���������� ��������
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
		s.insert(car(6, "blue")); //����� ���������� ������� ��� implace, �.�. ��������� ������� ����� �������� �����
		s.emplace(car(15, "silver"));//��� ��� ���������� ��������, ������ ����� �����
		//s.erase(car("18","black"));//�������� �������� �� ��������
		//s.erase(s.begin());//����� ������� �� ���������
		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;

		//c �������������� ��������, �� �����
	case 2: {
		set<car,cmpByCo> s;
		s.insert(car(3, "white"));
		s.insert(car(6, "blue")); //����� ���������� ������� ��� implace, �.�. ��������� ������� ����� �������� �����
		s.emplace(car(12, "silver"));
		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;
		// c �������������� ��������, �� ������
	case 3: {
		set<car, cmpByNo> s;
		s.insert(car(3, "white"));
		s.emplace(car(12, "silver"));
		s.insert(car(6, "blue")); //����� ���������� ������� ��� implace, �.�. ��������� ������� ����� �������� �����

		for (set<car>::iterator it = s.begin();it != s.end();it++)
			cout << *it << endl;
	}break;
	}
	system("pause");
	return 0;
}