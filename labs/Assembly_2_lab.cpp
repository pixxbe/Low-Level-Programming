// ������� 7
#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	char y;
	_asm
	{
		mov al, 11110111b; ������ � al
		mov bl, al; ��������
		mov cl, al; �������

		and bl, 00100000b; ���������� 5 ���
		shr bl, 2; ������������ �� 2 ������

		and cl, 00001000b; ���������� 3 ���
		shl cl, 2; ������������ ����� �� ���

		or bl, cl; ��������� � ���� ��������
		and al, 11010111b; �������� ���� �� 5 � 3 �������
		or al, bl; ����������� 5 � 3 ���� ���������� ������� �� �������� �����
		shl al, 3; ����� �� 8 ~ ����� ����� �� ������� ������
		not al; ����������� �����

		mov y, al; ������������� ����� � �

	}
	cout << bitset<8>(y) << endl;
}