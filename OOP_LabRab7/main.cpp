/* ������� 12.
�����-��������� ������ � ��������� ���������� ���� int. ����������� ��������:
[] � ������� �� �������;
() � ����������� ������� ������;
+ ����� � ��������� ��������� �� ���� ��������� ������;

���������������� ����� Pair (���� �����). ���� ������ ���� ������������ ����� ������: 
���� int ��� ������� ����� � ���� double ��� �������. 
������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������.
*/

#include "List.h"
#include "List.cpp"
#include "Pair.h"

int main() {
	setlocale(LC_ALL, "RU");
	//�������� ������ ����� ����� ���������� � �����������
	List<string> list1(4, "list");
	cout << "������ ������: " << list1 << endl;
	//�������� ������� ������ � ������� �����
	List<int> list2;
	cin >> list2;
	cout << "������ ������: " << list2 << endl;
	//�������� ���������� [] � ()
	int ind1;
	cout << "������� ������ �������� ��� �����������: ";
	cin >> ind1;
	cout << "������� � �������� " << ind1 << " ��� " << list2[ind1] << endl;
	cout << "������ ������� ������: " << list2() << endl;
	//���������� ��������� �� ���� ��������� ������� ������
	list2 + 5;
	cout << "������ ������ ����� ���������� ��������� 5: " << list2 << endl;
	//�������� ��� ����� � ������� �����
	Pair pair1, pair2;
	cout << "���� ������ ���� �����: " << endl;
	cin >> pair1;
	cout << "���� ������ ���� �����: " << endl;
	cin >> pair2;
	cout << "������ ����: " << pair1 << endl << "������ ����: " << pair2 << endl;
	//���������� �������� ��������� ��� ���
	pair1 > pair2;
	cout << endl;
	//�������� ������� � ���������� � ���� ��� �����
	List<Pair> list3, list4;
	cin >> list3;
	cout << "������ ������: " << list3 << endl;
	//����������� �������� ������ � ��������
	list4 = list3;
	cout << "�������� ������, ������������� �� ��������: " << list3 << endl;
	cout << "������� ������ �������� ��� �����������: ";
	//�������� ���������� [] � ()
	int ind2;
	cin >> ind2;
	cout << "������� � �������� " << ind2 << " ��� " << "(" << list4[ind2] << ")" << endl;
	cout << "������ ��������� ������: " << list4() << endl;
	//���������� ��������� �� ���� ��������� ���������� ������
	for (int i = 0; i < list4(); i++) {
		list4[i] + 5;
	}
	cout << "�������� ������ ����� ���������� ��������� 5: " << list4 << endl;
	
	return 0;
}