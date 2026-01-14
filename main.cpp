#include <iostream>
#include <cstdlib> //rand function is defined here
#include <ctime>
using namespace std;

int main() 
{
    char playAgain = 'y';

    //using srand function
    srand((unsigned int) time(NULL)); //to use current time as seed value
    

    while (playAgain == 'y' || playAgain == 'Y')
    {
        int number = (rand() % 100 + 1); //generates random number between 1 and 100
        int guess = 0;
    

        do 
        {
            cout << "Enter Guess (1-100):";
            cin >> guess;

            if (guess > number)
                cout << "Too High!" << endl;
            else if (guess < number)
                cout << "Too Low!" << endl;
            else
                cout << "Congratulations! You guessed the number!" << endl; 
        
        } while (guess != number);

        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
        cout << endl;
    }

    return 0;
}