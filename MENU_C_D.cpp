#include <iostream>
#include <iomanip>
using namespace std;

void Display_MenuC()
{
    cout << "         ____________________________________________________\n";
    cout << "        |  No   |              Items           |  Price (RM) |\n";
    cout << "        |_______|_______________________________|____________|\n";
    cout << "        |   1   |Happy Meal Chicken Burger      |" << setw(8) << "11.13" << setw(6) << " |\n";
    cout << "        |   2   |Happy Meal Chicken McNuggets   |" << setw(8) << "11.23" << setw(6) << " |\n";
    cout << "        |   3   |Happy Meal Fried Chicken Reg   |" << setw(8) << "11.13" << setw(6) << " |\n";
    cout << "        |   4   |Happy Meal Fried Chicken Spicy |" << setw(8) << "11.13" << setw(6) << " |\n";
    cout << "        |   5   |Happy Meal Fish McD            |" << setw(8) << "11.13" << setw(6) << " |\n";
    cout << "        |   6   |Happy Meal Cheese Burger       |" << setw(8) << "11.51" << setw(6) << " |\n";
    cout << "        |_______|_______________________________|____________|\n";
    cout << endl;
}

void Display_MenuD()
{
    cout << "         _______________________________________________\n";
    cout << "        |  No   |           Items          |  Price(RM) |\n";
    cout << "        |_______|__________________________|____________|\n";
    cout << "        |   1   |Coca-Cola                 |" << setw(8) << "5.65" << setw(6) << " |\n";
    cout << "        |   2   |Coca-Cola Zero Sugar      |" << setw(8) << "5.65" << setw(6) << " |\n";
    cout << "        |   3   |100 Plus                  |" << setw(8) << "5.65" << setw(6) << " |\n";
    cout << "        |   4   |Iced Lemon Tea            |" << setw(8) << "5.65" << setw(6) << " |\n";
    cout << "        |   5   |Iced Milo                 |" << setw(8) << "6.04" << setw(6) << " |\n";
    cout << "        |   6   |Hot Milo                  |" << setw(8) << "6.04" << setw(6) << " |\n";
    cout << "        |_______|__________________________|____________|\n";
    cout << endl;
}

int main()
{

    Display_MenuC();
    Display_MenuD();
}