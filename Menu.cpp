#include <iostream>
#include <iomanip>
using namespace std;

void Display_MenuA()
{
    cout << "         ____________________________________________________\n";
    cout << "        |  No   |           Items             |  Price (RM)  |\n";
    cout << "        |_______|_____________________________|______________|\n";
    cout << "        |   1   |McChicken                    |" << setw(10) << " 9.43 " << setw(6) << " |\n";
    cout << "        |   2   |Spicy Chicken McDeluxe       |" << setw(10) << "13.87 " << setw(6) << " |\n";
    cout << "        |   3   |GCB                          |" << setw(10) << "13.77 " << setw(6) << " |\n";
    cout << "        |   4   |Spicy Crispy Chicken Burger  |" << setw(10) << "12.88 " << setw(6) << " |\n";
    cout << "        |   5   |Filet-O-Fish                 |" << setw(10) << " 9.95 " << setw(6) << " |\n";
    cout << "        |   6   |Big Mac                      |" << setw(10) << "14.10 " << setw(6) << " |\n";
    cout << "        |_______|_____________________________|______________|\n";
    cout << endl;
}

void Display_MenuB()
{
    cout << "         ______________________________________________________\n";
    cout << "        |  No   |           Items               |  Price (RM)  |\n";
    cout << "        |_______|_______________________________|______________|\n";
    cout << "        |   1   |3pcs Fried Chicken McD Regular |" << setw(10) << "18.87 " << setw(6) << " |\n";
    cout << "        |   2   |3pcs Fried Chicken McD Spicy   |" << setw(10) << "18.87 " << setw(6) << " |\n";
    cout << "        |   3   |5pcs Fried Chicken McD Regular |" << setw(10) << "33.30 " << setw(6) << " |\n";
    cout << "        |   4   |5pcs Fried Chicken McD Spicy   |" << setw(10) << "33.30 " << setw(6) << " |\n";
    cout << "        |   5   |6pcs Chicken McNuggets         |" << setw(10) << "10.61 " << setw(6) << " |\n";
    cout << "        |   6   |9pcs Chicken McNuggets         |" << setw(10) << "14.10 " << setw(6) << " |\n";
    cout << "        |_______|_______________________________|______________|\n";
    cout << endl;
}

int main()
{

    Display_MenuA();
    Display_MenuB();
}