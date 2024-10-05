// Вариант 7
#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	char y;
	_asm
	{
		mov al, 11110111b; кладем в al
		mov bl, al; копируем
		mov cl, al; кпируем

		and bl, 00100000b; подцепляем 5 бит
		shr bl, 2; переставляем на 2 вправо

		and cl, 00001000b; подцепляем 3 бит
		shl cl, 2; переставляем влево на два

		or bl, cl; соединяем в один регистор
		and al, 11010111b; зануляем биты на 5 и 3 позиции
		or al, bl; накладываем 5 и 3 биты поменянные местами на исходное число
		shl al, 3; делим на 8 ~ свигу влево на степень двойки
		not al; инвертируем число

		mov y, al; перекладываем ответ в у

	}
	cout << bitset<8>(y) << endl;
}