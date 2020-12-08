#include <iostream>
using namespace std;

int main()
{
	int choice;
	int dimension;
	do {
		cout << "1. Rectangle 1\n2. Rectangle 2\n3. Rectangle 3\n4. Rectangle 4\n5. Rhomb(Only Odd)\n6. Circle\n7. Close Application\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice < 7) {
			cout << "Enter a dimension: ";
			cin >> dimension;
		}

		switch (choice)
		{
		case 1:
			for (int i = 0; i <= dimension; i++)
			{
				for (int j = 0; j < i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;
		case 2:
			for (int i = dimension; i >= 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i <= dimension; i++)
			{
				for (int j = 0; j < dimension - i; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < i; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;
		case 4:
			for (int i = 0; i <= dimension; i++)
			{
				for (int j = 0; j < dimension - i; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < (i + i) - 1; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;

		case 5:

			for (int i = 0; i < dimension; i++)
			{
				for (int j = 0; j < dimension - i; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < (i+i) - 1; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
			for (int i = dimension; i >= 0; i--)
			{
				for (int j = 0; j < dimension - i; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < (i+i) - 1; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;

		case 6:
			for (int i = 0; i < dimension; i++) {
				for (int j = 0; j < dimension; j++) {
					if ((i == 0 || i == dimension - 1) && (j > 1 && j < dimension - 1))
						cout << "*";
					else if ((j == 1 || j == dimension - 1) && (i > 0 && i < dimension - 1))
						cout << "*";
					else if (i == 1 && (i == j || j == dimension - 1))
						cout << "*";
					else if (i == dimension - 2 && (j == 1 || j == dimension - 1))
						cout << "*";
					else if (i == 1 && i == j)
						cout << "*";
					else if (i == 1 && j == i + 1)
						cout << "*";
					else if (i == dimension - 2 && j == 2)
						cout << "*";
					else if (i == 1 && (j - i) == dimension - 3)
						cout << "*";
					else if (i == dimension - 2 && (j - i) == dimension - 3)
						cout << "*";
					else if (i == dimension - 2 && (i - j) == 0)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;

		case 7:
			break;

		default:
			cout << "Please enter a number between 1 and 7..." << endl;
			break;

		}

	} while (choice != 7);

	return 0;
}

