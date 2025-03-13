#ifndef FOODITEM_H
#define FOODITEM_H

#include <iostream>
#include <vector>
using namespace std;

class foodItem
{   
    public:
    int userInput;
    vector <string> items;
    vector<double> calorieS;
    vector<int> itemSugar;
    vector<int> itemFat;
    vector<int> itemProtein;
    vector<int> itemSodium;
    double totalcalorieS = 0;
    int totalSugar, totalFat, totalProtein, totalSodium;

    foodItem()
    {
    
    items = {"Apple", "French Fires", "Burger", "Instant Ramen", "Protein Bar", "Cereal", 
    "Burger", "Banana", "Pita", "Mtn Dew", "Finished"};
    
    calorieS = {95, 365, 354, 380, 200, 150, 307, 105, 165, 170};
    itemSugar = {19, 0, 9, 2, 12, 10, 8, 14, 3, 46};
    itemFat = {0, 17, 20, 14, 7, 2, 18, 0, 1, 0};
    itemProtein = {0, 3, 17, 9, 20, 3, 14, 1, 6, 0};
    itemSodium = {2, 246, 500, 1500, 200, 220, 450, 1, 150, 60};

    totalcalorieS = 0;
    totalSugar = 0;
    totalFat = 0;
    totalProtein = 0;
    totalSodium = 0;

    }
    
    void listofFoods();
    void userChoice();
    void sumofCalories();
    double operator+(double value);
    int operator+(int value);


};

#endif