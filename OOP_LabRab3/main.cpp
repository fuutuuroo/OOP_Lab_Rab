/* ������� 12
������� ����� Pair (���� �����). ���� ������ ���� ������������ ����� ������: 
���� int ��� ������� ����� � ���� double ��� �������. 
������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������. 
�����������:
- �������� ��������� (<, >).
- �������� ++, ������� �������� ��������� �������: 
���� ����� �������� ����������, �� ������������� ������ �����, 
���� ����� �������� �����������, �� ������������� ������ �����.
*/

#include "Pair.h"

int main() {
	setlocale(LC_ALL, "RU");

	Pair p1;				//����������� �� ���������
	Pair p2(122, 444.44);	//����������� � �����������
	cout << p1 << p2;
	p1 < p2;				//��������� "������"
	cout << endl;
	Pair p3 = p2;			//���������� �����������
	p3.set_left(222);
	p3.set_right(0.999);
	cout << p3 << p2;
	p3 > p2;				//��������� "������"
	cout << endl;
	cout << "�������� ����: " << p3;
	++p3;
	cout << "���������� ���������: " << p3;
	p3++;
	cout << "����������� ���������: " << p3;
	cout << endl;
	return 0;
}