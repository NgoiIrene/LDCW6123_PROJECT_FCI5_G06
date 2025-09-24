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

void Display_MenuD()
{
    cout << "         ________________________________________________" << endl;
    cout << "        |  No   |          Items          |  Price(RM)   |" << endl;
    cout << "        |_______|_________________________|______________|" << endl;
    cout << "        |   1   |Coca-Cola                |" << setw(4) << " " << " 5.65" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Coca-Cola Zero Sugar     |" << setw(4) << " " << " 5.65" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |100 Plus                 |" << setw(4) << " " << " 5.65" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Iced Lemon Tea           |" << setw(4) << " " << " 5.65" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Iced Milo                |" << setw(4) << " " << " 6.04" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Hot Milo                 |" << setw(4) << " " << " 6.04" << setw(4) << " " << " |" << endl;
    cout << "        |_______|_________________________|______________|" << endl;
    cout << endl;
}

void Display_MenuE()
{
    cout << "         ________________________________________________________________________" << endl;
    cout << "        |  No   |                      Items                     |  Price (RM)   |" << endl;
    cout << "        |_______|________________________________________________|_______________|" << endl;
    cout << "        |   1   |Nasi Lemak McD + 2pcs Fried Chicken McD Regular |" << setw(4) << " " << " 16.79" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Nasi Lemak McD + 2pcs Fried Chicken McD Spicy   |" << setw(4) << " " << " 16.79" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |Nasi Lemak McD                                  |" << setw(4) << " " << "  8.02" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Medium Chicken Porridge McD                     |" << setw(4) << " " << "  8.68" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Small Chicken Porridge McD                      |" << setw(4) << " " << "  7.26" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Plain Nasi Lemak                                |" << setw(4) << " " << "  2.83" << setw(4) << " " << " |" << endl;
    cout << "        |_______|________________________________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuF()
{
    cout << "         _____________________________________________________" << endl;
    cout << "        |  No   |            Items            |  Price (RM)   |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << "        |   1   |Apple Pie                    |" << setw(4) << " " << "  5.52" << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Oreo Mc Flurry               |" << setw(4) << " " << "  7.78" << setw(4) << " " << " |" << endl;
    cout << "        |   3   |French Fries                 |" << setw(4) << " " << "  6.79" << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Chocolate Sundae             |" << setw(4) << " " << "  6.46" << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Strawberry Sundae            |" << setw(4) << " " << "  6.46" << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Corn                         |" << setw(4) << " " << "  5.85" << setw(4) << " " << " |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << endl;
}

int get_valid_choice()
{
    int choice;
    char cont;

    while (true)
    {
        cout << "Please choose one item by entering a number (1 to 6): ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 6)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 6." << endl
                 << endl;

            while (true)
            {
                cout << "Do you want to continue order items? (y / n): ";
                cin >> cont;
                cont = tolower(cont);

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Please enter y / n." << endl
                         << endl;
                    continue;
                }

                if (cont == 'n')
                {
                    cout << "Due to invalid input, the system is cancelling your order." << endl;
                    cout << "Order cancelled.... Welcome back! Have a nice day!" << endl;
                    exit(0);
                }

                else if (cont == 'y')
                {
                    break; // Go back to ask for choice again
                }

                else
                {
                    cout << "Invalid input! Please enter y / n." << endl
                         << endl;
                }
            }
        }
        else
        {
            cin.ignore(1000, '\n');
            return choice;
        }
    }
}
