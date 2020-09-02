#include <iostream>
using namespace std;

char box[10] = {'o','1','2','3','4','5','6','7','8','9'};

int WinCondition() {

	if (box[1] == box[2] && box[2] == box[3])
	{
		return 1;
	}
	else if (box[4] == box[5] && box[5] == box[6])
	{
		return 1;
	}
	else if (box[7] == box[8] && box[8] == box[9])
	{
		return 1;
	}
	else if (box[1] == box[4] && box[4] == box[7])
	{
		return 1;
	}
	else if (box[2] == box[5] && box[5] == box[8])
	{
		return 1;
	}
	else if (box[3] == box[6] && box[6] == box[9])
	{
		return 1;
	}
	else if (box[3] == box[5] && box[5] == box[7])
	{
		return 1;
	}
	else if (box[1] == box[5] && box[5] == box[9])
	{
		return 1;
	}
	else if (box[1] != '1' && box[2] != '2'&& box[3] != '3'&&
		box[4] != '4'&& box[5] != '5'&& box[6] != '6'&& box[7] != '7'&&
		box[8] != '8'&& box[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void board() {
	system("cls");
	
	cout << "|||||||||||||||||" << endl;
	cout << "|| TIK TAK TOE ||" << endl;
	cout << "|||||||||||||||||" << endl;
	
	cout << " "<< endl;

	cout << " player 1 = O & player 1 = X " << endl;


	cout << " " << endl;


	cout << box[1] << "|" << box[2] << "|" << box[3] << endl;
	cout << "-----" << endl;
	cout << box[4] << "|" << box[5] << "|" << box[6] << endl;
	cout << "-----" << endl;
	cout << box[7] << "|" << box[8] << "|" << box[9] << endl;



}

int main() {

	
	int player = 1, i, choice;

	char mark;
		do
		{
			board();
			player = (player % 2) ? 1 : 2;
			cout << "Player: " << player << ", enter a number plz: ";
			cin >> choice;
			
			mark = (player == 1) ? 'O' : 'X';
			if (choice == 1 && box[1] == '1')
			{
				box[1] = mark;
			}
			else if (choice == 2 && box[2] == '2')
			{
				box[2] = mark;
			}
			else if (choice == 3 && box[3] == '3')
			{
				box[3] = mark;
			}
			else if (choice == 4 && box[4] == '4')
			{
				box[4] = mark;
			}
			else if (choice == 5 && box[5] == '5')
			{
				box[5] = mark;
			}
			else if (choice == 6 && box[6] == '6')
			{
				box[6] = mark;
			}
			else if (choice == 7 && box[7] == '7')
			{
				box[7] = mark;
			}
			else if (choice == 8 && box[8] == '8')
			{
				box[8] = mark;
			}
			else if (choice == 9 && box[9] == '9')
			{
				box[9] = mark;
			}
			else
			{
				cout << "invalid";
				player--;
				cin.ignore();
				cin.get();
			}
			i = WinCondition();
			
			player++;


		} while (i == -1); 
			
		board();
		if (i == 1)
		{
			cout << "The Winner is " << --player;


		}
		else
		{
			cout << "draw";
		}
		
}