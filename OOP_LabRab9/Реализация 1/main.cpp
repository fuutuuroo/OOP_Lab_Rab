/* ������� 12.
�����-��������� ������ � ��������� ���������� ���� int.
����������� ��������:
[] � ������� �� �������;
() � ����������� ������� ������;
+ ����� � ��������� ��������� �� ���� ��������� ������;
++ - ���������� �������� � ����� ������.

���������� 1 - ���������� �� �������������� ���������
���������� � ������� ������������ ���� ������. */

#include "List.h"

int main() {
	setlocale(LC_ALL, "RU");

	try {
		int s1, s2, ind;
		cout << "������� ������ ������� ������: ";
		cin >> s1;
		List list1(s1);
		cout << "������ ������: " << list1;
		cout << "������� ������ �������� ��� ������: ";
		cin >> ind;
		cout << "��������� ������� ������� ������: " << list1[ind] << endl;
		cout << "������� ������ ������� ������: ";
		cin >> s2;
		List list2(s2);
		cout << "������ ������: " << list2 << endl;
		list2 + 5;
		cout << "������ ������ ����� ���������� ���������: " << list2 << endl;
		++list2;
		cout << "������ ������ � ����������� ��������: " << list2 << endl;
	}
	catch (int) {
		cout << "Error, incorrect data!" << endl;
	}
	catch (exception& err) {
		cout << err.what();
	}


	return 0;
}