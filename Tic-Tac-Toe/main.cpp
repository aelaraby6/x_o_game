#include <iostream>
#include <windows.h>
#include <algorithm>

using namespace std;

char player1 = 'x', player2 = 'o';

char body[3][3] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
};

void print() {
	system("cls");
	cout << "---+---+---" << endl;
	cout << "Tic-Tac-Toe " << endl;
	cout << "---+---+---" << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			cout << " " << body[i][x] << " ";
			if (x < 2) {
				cout << "|"; 
			}
		}
		cout << endl;
		if (i < 2) {
			cout << "---+---+---" << endl; 
		}
	}
	cout << endl;
}

void change() {
	char place;
	cout << "Enter the place : " << "(" << player1 << ") " << endl;
	cin >> place;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			if (body[i][x] == place) {
				body[i][x] = player1;
			}
		}
	}
	swap(player1, player2);
}

char checkwinner() {
	int a = 0, b = 0, count = 0;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			if (body[i][x] == 'x') {
				a++;
			}
			else if (body[i][x] == 'o') { b++; }
			if (a == 3) { return 'x'; }
			if (b == 3) { return 'o'; }
		}
		a = 0, b = 0;
	}



	for (int x = 0; x < 3; x++) {
		for (int i = 0; i < 3; i++) {
			if (body[i][x] == 'x') {
				a++;
			}
			else if (body[i][x] == 'o') { b++; }
			if (a == 3) { return 'x'; }
			if (b == 3) { return 'o'; }
		}
		a = 0, b = 0;
	}


	if (body[0][0] == 'x' && body[1][1] == 'x' && body[2][2] == 'x') {
		return 'x';
	}

	if (body[0][0] == 'o' && body[1][1] == 'o' && body[2][2] == 'o') {
		return 'o';
	}

	if (body[0][2] == 'x' && body[1][1] == 'x' && body[2][0] == 'x') {
		return 'x';
	}

	if (body[0][2] == 'o' && body[1][1] == 'o' && body[2][0] == 'o') {
		return 'o';
	}


	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			if (body[i][x] != 'x' && body[i][x] != 'o') {
				count++;
			}
		}
	}
	if (count == 0) {
		return 'y';
	}

	return 'c';

}
int main()
{

	while (checkwinner() == 'c') {
		print();
		change();
		checkwinner();
	}
	print();
	if (checkwinner() == 'x') {
		cout << "The winner is x player";
	}
	if (checkwinner() == 'o') {
		cout << "The winner is o player";
	}

	if (checkwinner() == 'y') {
		cout << "No winner";
	}
}