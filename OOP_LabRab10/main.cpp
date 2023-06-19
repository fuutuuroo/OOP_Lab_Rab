/* ������� 12.
������� ����� Pair (���� �����). ���� ������ ���� ������������ ����� ������: 
���� int ��� ������� ����� � ���� double ��� �������. 
������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������. 
�����������:
- �������� ��������� (<, >).
 - �������� ++, ������� �������� ��������� �������: 
 ���� ����� �������� ����������, �� ������������� ������ �����, 
 ���� ����� �������� �����������, �� ������������� ������ �����.
�������:
�	������� ��� ������ ������� ��������� ��������.
�	��������� ��� ������ � �������� ��������� �� ����� L.
�	�������� K ������� ����� ������ � ������� N. */

#include "Pair.h"
#include "file_work.h"

int main() {
	setlocale(LC_ALL, "RU");
	Pair p;
	int k, c;
	char file_name[30];
	do
	{ //����
		cout << "1.������� ����";
		cout << "\n2.������� ���������� �����";
		cout << "\n3.������� ������ �� ����� ������ ��������� ��������";
		cout << "\n4.��������� ��� ������ � �������� ��������� �� ����� L";
		cout << "\n5.�������� K ������� ����� �������� � ������� N";
		cout << "\n0.�����\n";
		cout << "��� �����: "; 
		cin >> c;
		switch (c)
		{
		case 1: cout << "������� �������� �����: "; 
			cin >> file_name; //������ ��� �����
			k = make_file(file_name); //����� ������� ��� ������ � ����
			if (k < 0)
				cout << "�� ������� ������� ����!"; //����� ��������� �� ������
			break;
		case 2: cout << "������� �������� �����: "; 
			cin >> file_name; //������ ��� �����
			k = print_file(file_name); //����� ������� ��� ������ �����
			if (k == 0)
				cout << "���� ������!\n"; //���� ���� ������
			if (k < 0)
				cout << "�� ������� ������� ����!\n"; //���� ���� ������ �������
			break;
		case 3: cout << "������� �������� �����: "; 
			cin >> file_name;
			int valueDelete;
			cout << "������� ��������, ������ ������ ���� ����� �������: "; 
			cin >> valueDelete;
			k = deletePairs(file_name, valueDelete);
			if (k == 0)
				cout << "���� ������!\n";
			if (k < 0)
				cout << "�� ������� ������� ����!\n";
			break;
		case 4: cout << "������� �������� �����: "; 
			cin >> file_name;
			int valueIncrease, L;
			cout << "������� ��������, ������ � ������� ����� ���������: "; 
			cin >> valueIncrease;
			cout << "������� ����� L: "; 
			cin >> L;
			k = increasePairs(file_name, valueIncrease, L);
			if (k == 0)
				cout << "���� ������!\n";
			if (k < 0)
				cout << "�� ������� ������� ����!\n";
			break;
		case 5: cout << "������� �������� �����: "; 
			cin >> file_name;
			int N, K;
			Pair newPair;
			cout << "������� ����� N: "; 
			cin >> N;
			cout << "������� � - ���������� ������� ��� ����������: "; 
			cin >> K;
			cout << "����� ���� �����:" << endl;
			cin >> newPair;
			k = add_file(file_name, N, newPair);
			if (k > 0) {
				for (int i = 1; i < K; i++) {
					cout << "����� ���� �����:" << endl;
					cin >> newPair;
					k = add_file(file_name, N + 1, newPair);
					N++;
				}
			}
			if (k == 0)
				cout << "���� ������!\n";
			if (k < 0)
				cout << "�� ������� ������� ����!\n";
			break;
		}
	} while (c != 0);
	return 0;
}