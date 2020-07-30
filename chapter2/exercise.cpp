#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Exercise One
    string hash = "#";
    for (int index = 0; index < 7; index++)
    {
        cout << hash << endl;
        hash += "#";
    }

    //Exercise two
    int count = 100;
    for (size_t i = 1; i <= count; i++)
    {
        if (i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                cout << "FizzBuzz" << endl;
            }
            else
            {
                cout << "Fizz" << endl;
            }
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    //Exercise three
    int size = 8;
    string chess_board = "";
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if ((i + j) % 2 == 0)
            {
                chess_board += " ";
            }
            else
            {
                chess_board += "#";
            }
        }
        chess_board += "\n";
    }
    cout << chess_board << endl;
}