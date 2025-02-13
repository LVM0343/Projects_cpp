#include <iostream>
#include <vector>
using namespace std;


 class employeeS
 {
    public:
    vector<string> employeeNames;
    double numInput;

    employeeS()
    {
        wages.push_back(40);
        wages.push_back(35);
        wages.push_back(30);
        wages.push_back(25);
        wages.push_back(20);
        resultWages.resize(wages.size());
    }

    void selectNumber()
    {
    cout << "Welcome to Employee DataBase" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Print list of employess" << endl;
    cout << "2. Calculate total Wages" << endl;
    cout << "3. Exit Program" << endl;
    }


    void addName(string newName)
    {
        employeeNames.push_back(newName);

    }

    void structureName()
    {   
        for (int i = 0; i < employeeNames.size(); i++)
        {
            cout << i + 1 << ". " << employeeNames[i] << endl;
        }
    }

    void setWage()
    {   
        resultWages.clear();
        for (int i = 0; i < wages.size(); i++) {
            cout << "For " << employeeNames[i] << ", how many hours: ";
            cin >> numInput;
            double wage = wages[i] * numInput;
            resultWages.push_back(wage); 
        }
    }

    void getWage()
    {
        for (int i = 0; i < employeeNames.size(); i++) {
            cout << employeeNames[i] << "'s total wages: $" << resultWages[i] << endl;

    }
    }       
    private: 
    vector<double> wages;
    vector<double> resultWages;

 };

int main()
{   
    int userInput;
    
    employeeS intro;
    employeeS userSelect;
    intro.selectNumber();
    
    cin >> userInput;

    if (userInput == 1)
    {   
        userSelect.addName("Butters, Owner, $40 per hour");
        userSelect.addName("Stan, Supervisor, $35 per hour");
        userSelect.addName("Kenny, Sous Chef, $30  ");
        userSelect.addName("Kyle, Manager, $25 per hour");
        userSelect.addName("Craig, Server, $20 per hour");
        userSelect.structureName();
    }
    else if (userInput == 2)
    { 
        userSelect.addName("Butters");
        userSelect.addName("Stan");
        userSelect.addName("Kenny");
        userSelect.addName("Kyle");
        userSelect.addName("Craig");
        userSelect.setWage();
        userSelect.getWage();

    }
    else
    {
     return 0;
    }


    return 0;
}