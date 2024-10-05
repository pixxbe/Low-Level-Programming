// Assembly_1_lab.cpp: 7 Вариант

#include <iostream>
#include <stdio.h>
using namespace std;

int main()

{
	 char  y;
	_asm
	{
		mov ax, 22; в ax кладем 22
		mov bl, 3; в bl кладем 3
		div bl; делим
		mov ah, 0; зануляеми остаток
		mov dl, al; перекладываем в dl, al

		mov ax, 14; в ax кладем 14
		mov bl, 5; в bl кладем 5
		div bl; делим
		mov ah, 0; зануляеми остаток

		xchg al, dl; менеям значения al с dl
		sub al, dl; вычитаем из al dl
		add al, 3; в al кладем 22

		mov bl, 5; в bl кладем 5
		add bl, 5; в bl кладем 6
		div bl; делим
		sub al, 12; вычитаем из al 12

		mov y, al; в y кладем  al

	}
	printf("%d", y);
}
