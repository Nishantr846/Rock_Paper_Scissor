#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int userChoice;
    int computerChoice;
    char playAgain;

    do
    {
        system("cls");

        srand(time(0));

        computerChoice = rand() % 3 + 1;

        cout << "--------------------------" << endl;
        cout << "Rock, Paper, Scissors Game" << endl;
        cout << "--------------------------" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3)
        {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
        else
        {
            cout << "Computer's choice: " << computerChoice << endl;
            if (userChoice == computerChoice)
            {
                cout << "It's a tie!" << endl;
            }
            else if ((userChoice == 1 && computerChoice == 3) ||
                     (userChoice == 2 && computerChoice == 1) ||
                     (userChoice == 3 && computerChoice == 2))
            {
                cout << "You win!" << endl;
            }
            else
            {
                cout << "Better Luck Next Time!" << endl;
            }
        }

        cout << "One more try? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
