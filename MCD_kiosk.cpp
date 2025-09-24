#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float welcomemessage()
{
    int selection;
    float delivery = 0;

    cout << "-----------------------------------------" << endl;
    cout << "Welcome to McDonald's (MCD) Kiosk!" << endl
         << endl;
    do
    {
        cout << "You would like to Dine In or Take Away?" << endl;
        cout << "1.DINE IN" << endl;
        cout << "2.TAKE AWAY" << endl;
        cout << endl;
        cout << "Please enter 1 or 2 to continue: ";
        cin >> selection;
        cout << endl;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "INVALID INPUT! Please enter 1 or 2 only" << endl
                 << endl;
            continue;
        }

        else if (selection == 1)
        {
            cout << endl;
            cout << "--------------- DINE IN ----------------" << endl;
            delivery = 0;
        }
        else if (selection == 2)
        {
            cout << "--------------- TAKE AWAY ---------------" << endl;
            cout << "You will be charged RM 1.00 for packaging fee!" << endl;
            delivery = 1;
        }
        else
        {
            cout << "INVALID INPUT! Please Enter 1 or 2" << endl
                 << endl;
            continue;
        }

    } while (selection != 1 && selection != 2);
    return delivery;
}

void Display_MenuA()
{
    cout << "         _____________________________________________________" << endl;
    cout << "        |  No   |            Items            |  Price (RM)   |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << "        |   1   |McChicken                    |" << setw(4) << " " << "  9.43" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Spicy Chicken McDeluxe       |" << setw(4) << " " << " 13.87" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |GCB                          |" << setw(4) << " " << " 13.77" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Spicy Crispy Chicken Burger  |" << setw(4) << " " << " 12.88" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Filet-O-Fish                 |" << setw(4) << " " << "  9.95" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Big Mac                      |" << setw(4) << " " << " 14.10" << setw(4) << " " << " |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuB()
{
    cout << "         _______________________________________________________" << endl;
    cout << "        |  No   |             Items             |  Price (RM)   |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << "        |   1   |3pcs Fried Chicken McD Regular |" << setw(4) << " " << " 18.87" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |3pcs Fried Chicken McD Spicy   |" << setw(4) << " " << " 18.87" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |5pcs Fried Chicken McD Regular |" << setw(4) << " " << " 33.30" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |5pcs Fried Chicken McD Spicy   |" << setw(4) << " " << " 33.30" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |6pcs Chicken McNuggets         |" << setw(4) << " " << " 10.61" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |9pcs Chicken McNuggets         |" << setw(4) << " " << " 14.10" << setw(4) << " " << " |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuC()
{
    cout << "         _____________________________________________________________" << endl;
    cout << "        |  No   |                Items                |  Price (RM)   |" << endl;
    cout << "        |_______|_____________________________________|_______________|" << endl;
    cout << "        |   1   |Happy Meal Chicken Burger            |" << setw(4) << " " << " 11.13" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Happy Meal Chicken McNuggets         |" << setw(4) << " " << " 11.23" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |Happy Meal Fried Chicken McD Regular |" << setw(4) << " " << " 11.13" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Happy Meal Fried Chicken McD Spicy   |" << setw(4) << " " << " 11.13" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Happy Meal Chicken Porridge McD      |" << setw(4) << " " << " 11.13" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Happy Meal Cheese Burger             |" << setw(4) << " " << " 11.51" << setw(4) << " " << " |" << endl;
    cout << "        |_______|_____________________________________|_______________|" << endl;
    cout << endl;
}