#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
char arr[9] = {'1','2','3','4','5','6','7','8','9'};

void board()   
{
	system("cls");
	cout << "\n\n\t\t   Tic Tac Toe\n\n";
	cout << "  Player 1 (X) \n";
	cout << "  Player 2 (O)\n\n\n";
	cout << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << endl;
	cout << "\t\t     |     |     " << endl << endl;
}

int main()
{
	int p1;
	board();
	int i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
		{
			cout << "Player 1 enter number to enter X : ";
			cin >> p1;
			system("cls");
			p1 = p1 - 1;
			arr[p1] = 'X';
		}
		else
		{
			cout << "Player 2 enter number to enter O : ";
			cin >> p1;
			system("cls");
			p1 = p1 - 1;
			arr[p1] = 'O';
		}
		board();
		i++;

		if (arr[0] == arr[1]&& arr[1] == arr[2])
		{
			if (arr[0] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}
	
		if (arr[3] == arr[4] && arr[4] == arr[5])
		{
			if (arr[3] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}

		if (arr[6] == arr[7] && arr[7] == arr[8])
		{
			if (arr[6] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;
		}


		if (arr[0] == arr[3] && arr[3] == arr[6])
		{
			if (arr[0] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}

		if (arr[1] == arr[4] && arr[4] == arr[7])
		{
			if (arr[1] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}

		if (arr[2] == arr[5] && arr[5] == arr[8])
		{
			if (arr[2] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}

		if (arr[0] == arr[4] && arr[4] == arr[8])
		{
			if (arr[0] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;

		}

		if (arr[2] == arr[4] && arr[4] == arr[6])
		{
			if (arr[2] == 'X')
				cout << "\t\nPlayer one won!\t\n";
			else
				cout << "\t\nPlayer 2 won!\t\n";
			break;
			
		}	
		else
		cout<< "Game Draw!";	
	}

	system("pause");
	
	


}
