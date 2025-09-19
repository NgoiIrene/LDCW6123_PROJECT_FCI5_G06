#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void Display_MenuA()
{
    cout << "         _____________________________________________________" << endl;
    cout << "        |  No   |           Items             |  Price (RM)   |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << "        |   1   |McChicken                    |" << setw(4) << " " << " 9.43 " << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Spicy Chicken McDeluxe       |" << setw(4) << " " << "13.87 " << setw(4) << " " << " |" << endl;
    cout << "        |   3   |GCB                          |" << setw(4) << " " << "13.77 " << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Spicy Crispy Chicken Burger  |" << setw(4) << " " << "12.88 " << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Filet-O-Fish                 |" << setw(4) << " " << " 9.95 " << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Big Mac                      |" << setw(4) << " " << "14.10 " << setw(4) << " " << " |" << endl;
    cout << "        |_______|_____________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuB()
{
    cout << "         _______________________________________________________" << endl;
    cout << "        |  No   |           Items               |  Price (RM)   |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << "        |   1   |3pcs Fried Chicken McD Regular |" << setw(4) << " " << "18.87 " << setw(4) << " " << " |" << endl;
    cout << "        |   2   |3pcs Fried Chicken McD Spicy   |" << setw(4) << " " << "18.87 " << setw(4) << " " << " |" << endl;
    cout << "        |   3   |5pcs Fried Chicken McD Regular |" << setw(4) << " " << "33.30 " << setw(4) << " " << " |" << endl;
    cout << "        |   4   |5pcs Fried Chicken McD Spicy   |" << setw(4) << " " << "33.30 " << setw(4) << " " << " |" << endl;
    cout << "        |   5   |6pcs Chicken McNuggets         |" << setw(4) << " " << "10.61 " << setw(4) << " " << " |" << endl;
    cout << "        |   6   |9pcs Chicken McNuggets         |" << setw(4) << " " << "14.10 " << setw(4) << " " << " |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuE()
{
    cout << "         ________________________________________________________________________" << endl;
    cout << "        |  No   |                   Items                        |  Price (RM)   |" << endl;
    cout << "        |_______|________________________________________________|_______________|" << endl;
    cout << "        |   1   |Nasi Lemak McD + 2pcs Fried Chicken Mcd Regular |" << setw(4) << " " << "16.79 " << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Nasi Lemak McD + 2pcs Fried Chicken Mcd Spicy   |" << setw(4) << " " << "16.79 " << setw(4) << " " << " |" << endl;
    cout << "        |   3   |Nasi Lemak McD                                  |" << setw(4) << " " << " 8.02 " << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Medium Chicken Porridge McD                     |" << setw(4) << " " << " 8.68 " << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Smal Chicken Porridge McD                       |" << setw(4) << " " << " 7.26 " << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Plain Nasi Lemak                                |" << setw(4) << " " << " 2.83 " << setw(4) << " " << " |" << endl;
    cout << "        |_______|________________________________________________|_______________|" << endl;
    cout << endl;
}

void Display_MenuF()
{
    cout << "         _______________________________________________________" << endl;
    cout << "        |  No   |            Items              |  Price (RM)   |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << "        |   1   |Apple Pie                      |" << setw(4) << " " << " 5.52 " << setw(4) << " " << " |" << endl;
    cout << "        |   2   |Oreo Mc Flurry                 |" << setw(4) << " " << " 7.78 " << setw(4) << " " << " |" << endl;
    cout << "        |   3   |French Fries                   |" << setw(4) << " " << " 6.79 " << setw(4) << " " << " |" << endl;
    cout << "        |   4   |Chocolate Sundae               |" << setw(4) << " " << " 6.46 " << setw(4) << " " << " |" << endl;
    cout << "        |   5   |Strawberry Sundae              |" << setw(4) << " " << " 6.46 " << setw(4) << " " << " |" << endl;
    cout << "        |   6   |Corn                           |" << setw(4) << " " << " 5.85 " << setw(4) << " " << " |" << endl;
    cout << "        |_______|_______________________________|_______________|" << endl;
    cout << endl;
}

float Detect_Menu_Option(char option, float op1)
{
    // float op1;
    float sum = 0.0;

    if (toupper(option) == 'A')
    {
        if (op1 == 1)
        {
            sum = sum + 9.43;
        }

        else if (op1 == 2)
            sum = sum + 13.87;

        else if (op1 == 3)
            sum = sum + 13.77;

        else if (op1 == 4)
            sum = sum + 12.88;

        else if (op1 == 5)
            sum = sum + 9.95;

        else if (op1 == 6)
            sum = sum + 14.10;

        /* else
              cout << "Invalid! Please enter again" << endl;
              */
    }

    else if (toupper(option) == 'B')
    {
        if (op1 == 1)
            sum = sum + 18.87;

        else if (op1 == 2)
            sum = sum + 18.87;

        else if (op1 == 3)
            sum = sum + 33.30;

        else if (op1 == 4)
            sum = sum + 33.30;

        else if (op1 == 5)
            sum = sum + 10.61;

        else if (op1 == 6)
            sum = sum + 14.10;

        /*else
            cout << "Invalid! Please enter again" << endl;
            */
    }

    else if (toupper(option) == 'C')
    {
        if (op1 == 1)
            sum = sum + 11.13;

        else if (op1 == 2)
            sum = sum + 11.42;

        else if (op1 == 3)
            sum = sum + 11.13;

        else if (op1 == 4)
            sum = sum + 11.13;

        else if (op1 == 5)
            sum = sum + 11.13;

        else if (op1 == 6)
            sum = sum + 11.51;

        /* else
            cout << "Invalid! Please enter again" << endl;
            */
    }

    else if (toupper(option) == 'D')
    {
        if (op1 == 1)
            sum = sum + 5.66;

        else if (op1 == 2)
            sum = sum + 5.66;

        else if (op1 == 3)
            sum = sum + 5.66;

        else if (op1 == 4)
            sum = sum + 4.72;

        else if (op1 == 5)
            sum = sum + 6.04;

        else if (op1 == 6)
            sum = sum + 6.04;

        /*else
            cout << "Invalid! Please enter again" << endl;
            */
    }

    else if (toupper(option) == 'E')
    {
        if (op1 == 1)
            sum = sum + 16.79;

        else if (op1 == 2)
            sum = sum + 16.79;

        else if (op1 == 3)
            sum = sum + 8.02;

        else if (op1 == 4)
            sum = sum + 8.68;

        else if (op1 == 5)
            sum = sum + 7.26;

        else if (op1 == 6)
            sum = sum + 2.83;

        /* else
             cout << "Invalid! Please enter again" << endl;
             */
    }

    else if (toupper(option) == 'F')
    {
        if (op1 == 1)
            sum = sum + 5.52;

        else if (op1 == 2)
            sum = sum + 7.78;

        else if (op1 == 3)
            sum = sum + 6.79;

        else if (op1 == 4)
            sum = sum + 6.46;

        else if (op1 == 5)
            sum = sum + 6.46;

        else if (op1 == 6)
            sum = sum + 5.85;
    }

    return sum;
}

string Display_Menu_Catogorise()
{
    char answer;
    float money, sum, balance;
    float total = 0;
    char respose;

    do
    {
        char option;
        int quantity;
        float op1;
        const int OptionWidth = 10;
        const int CategoryWidth = 28;

        total = total + sum;
        cout << "-----------------------------------------" << endl;
        cout << "           Menu Categories      " << endl;
        cout << "-----------------------------------------" << endl;
        cout << left << setw(OptionWidth) << "Options" << left << setw(CategoryWidth) << "Food Categories" << endl;
        cout << left << setw(OptionWidth) << "A" << left << setw(CategoryWidth) << "Burgers" << endl;
        cout << left << setw(OptionWidth) << "B" << left << setw(CategoryWidth) << "Chickens & McNuggets" << endl;
        cout << left << setw(OptionWidth) << "C" << left << setw(CategoryWidth) << "Happy Meals" << endl;
        cout << left << setw(OptionWidth) << "D" << left << setw(CategoryWidth) << "Beverages" << endl;
        cout << left << setw(OptionWidth) << "E" << left << setw(CategoryWidth) << "Rice & Porridge" << endl;
        cout << left << setw(OptionWidth) << "F" << left << setw(CategoryWidth) << "Desserts & Sides" << endl;
        cout << endl;
        cout << "Please enter your choice (A to F): ";
        cin >> option;
        cout << endl
             << endl;

        switch (toupper(option))
        {
        case 'A':
            cout << "Go to menu A" << endl;
            Display_MenuA();
            cout << "Please choose one item by enter a numberic (1 to 6 ): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        case 'B':
            cout << "Go to menu B" << endl;
            Display_MenuB();
            cout << "Please choose one item by enter a numberic (1 to 6 ): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        case 'C':
            cout << "Go to menu C" << endl;
            // Display_MenuC();
            cout << "Please choose one item by enter a numberic (1 to 6 ): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        case 'D':
            cout << "Go to menu D" << endl;
            // Display_MenuD();
            cout << "Please choose one item by enter a numberic (1 to 6 ): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        case 'E':
            cout << "Go to menu E" << endl;
            Display_MenuE();
            cout << "Please choose one item by enter a numberic (1 to 6 ): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        case 'F':
            cout << "Go to menu F" << endl;
            Display_MenuF();
            cout << "Please choose one item by enter a numberic (1 to 6): ";
            cin >> op1;
            cout << "Please enter the quantity: ";
            cin >> quantity;
            sum = Detect_Menu_Option(option, op1) * quantity;
            cout << "Amount = RM " << sum << endl;
            break;
        default:
            cout << "Please enter A to F only" << endl;
            break;
        }
        cout << endl;
        cout << "Do you want to continue order? (Enter y / n): ";
        cin >> answer;
        cout << endl;

        if (tolower(answer) != 'n' && tolower(answer) != 'y')
        // else
        {
            cout << "Please enter y or n only" << endl;
            cout << "Do you want to continue order? (Enter y / n): ";
            cin >> answer;
            if (tolower(answer) == 'n')
            {
                cout << endl;
                total = total + sum;
            }
        }

        else if (tolower(answer) == 'n')
        {
            cout << endl;
            total = total + sum;
        }
        /*else if (tolower(answer) == 'y')
        {
            continue;
        }
            */
        /* else if (tolower(answer) != 'n' )
         //else
         {
             cout << "Please enter y or n only" << endl;
             cout << "Do you want to continue order? (Enter y/n): ";
             cin >> answer;
             if (tolower(answer) == 'n')
             {
                 cout << endl;
                 total = total + sum;
             }
         }
             */

    } while (tolower(answer) == 'y');
    cout << "The total bill is RM " << total << endl;
    cout << "Please top-up to make a payment: RM ";
    cin >> money;
    if (money >= total)
    {
        balance = money - total;
        cout << endl;
        cout << "Your payment is successful!" << " Your balance is RM " << showpoint
             << fixed << setprecision(2) << balance << endl
             << endl;
        cout << "Reminder: " << endl;
        cout << "Please collect your food items from counter." << endl;
        cout << "Have a nice day! Enjoy yourselves!" << endl
             << endl;
    }
    else if (money < total)
    {
        cout << endl;
        cout << "Payment unsuccessful!" << endl;
        cout << "The total bill is RM " << total << endl;
        cout << "Do you want to make a payment again? (Enter y / n): ";
        cin >> respose;
        cout << endl;

        if (tolower(respose) != 'y' && tolower(respose) != 'n')
        {
            do
            {
                cout << "The total bill is RM " << total << endl;
                cout << "Please enter y / n only: ";
                cin >> respose;
                cout << endl;

            } while (tolower(respose) != 'y' && tolower(respose) != 'n');

            if (tolower(respose) == 'y')
            {
                cout << "Please top-up again: RM ";
                cin >> money;
                if (money >= total)
                {
                    balance = money - total;
                    cout << endl;
                    cout << "Your payment is successful!" << " Your balance is RM " << showpoint
                         << fixed << setprecision(2) << balance << endl
                         << endl;
                    cout << "Reminder: " << endl;
                    cout << "Please collect your food items from counter." << endl;
                    cout << "Have a nice day! Enjoy yourselves!" << endl
                         << endl;
                }
                else if (money < total)
                {
                    cout << endl;
                    cout << "Payment unsuccessful!" << endl;
                    cout << "The total bill is RM " << total << endl;
                    cout << "Do you want to make a payment again? (Enter y / n): ";
                    cin >> respose;
                    cout << endl;
                }
            }
            else if (tolower(respose) == 'n')
            {
                cout << endl;
                cout << "Order cancelled.... Welcome back! Have a nice day!" << endl;
            }
        }

        else if (tolower(respose) == 'y')
        {
            cout << "Please top-up again: RM ";
            cin >> money;
            balance = money - total;
            cout << endl;
            cout << "Your payment is successful!" << " Your balance is RM " << showpoint
                 << fixed << setprecision(2) << balance << endl
                 << endl;
            cout << "Reminder: " << endl;
            cout << "Please collect your food items from counter." << endl;
            cout << "Have a nice day! Enjoy yourselves!" << endl
                 << endl;
        }

        else if (tolower(respose) == 'n')
        {
            cout << endl;
            cout << "Order cancelled.... Welcome back! Have a nice day!" << endl
                 << endl;
        }
    }
}

int main()
{
    // char answer;
    Display_Menu_Catogorise();
    //  string Welcome_message(); //jh part
    /*do
     {
         Display_Menu_Catogorise();
         cout << "yess" << endl;
         cout << "Do you want to continue order ? (Enter y / n): ";
         cin >> answer;
     } while (answer == 'y');*/

    return 0;
}
