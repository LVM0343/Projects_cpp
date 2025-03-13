#include "foodItem.h"

void foodItem::listofFoods()
{   
    cout << "List of foods available:" << endl;
    for (size_t i = 0; i < items.size(); i++)
    {
        cout << i + 1 << ". " << items[i] << endl;
    }
}

void foodItem::userChoice()
{
    while (true)
    {
        cout << "Choose your food (Enter 11 to finish):" << endl;
        cin >> userInput;

        if (userInput == 11)
        {
            break;
        }
        else if (userInput >= 1 && userInput <= 10)
        {
            int index = userInput - 1;
            totalcalorieS = *this + calorieS[index];
            totalSugar += itemSugar[index];
            totalFat += itemFat[index];
            totalProtein += itemProtein[index];
            totalSodium += itemSodium[index];
        }
        else 
        {
            cout << "Invalid choice." << endl;
        }
    }
}

double foodItem::operator+(double calorie)
{
    return totalcalorieS + calorie;
}

void foodItem::sumofCalories()
{
    cout << "Total Calories: " << totalcalorieS << endl;
    cout << "Total Sugar: " << totalSugar << endl;
    cout << "Total Fat: " << totalFat << endl;
    cout << "Total Protein: " << totalProtein << endl;
    cout << "Total Sodium: " << totalSodium << endl;

    if (totalcalorieS > 2000)
        cout << "Exceeds calorie intake!" << endl;
    if (totalSugar > 50)
        cout << "Exceeds sugar intake!" << endl;
    if (totalFat > 70)
        cout << "Exceeds fat intake!" << endl;
    if (totalProtein > 56)
        cout << "Exceeds protein intake!" << endl;
    if (totalSodium > 2300)
        cout << "Exceeds sodium intake!" << endl;
}