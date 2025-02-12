#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {

    srand(time(0));
    
    string inPut;
    string inPut2;
    int cashInput;

    cout << "Want to play the slot machine (F to exit or G to continue)" << endl;
    cin >> inPut;

    while (inPut != "F")
    {

        cout << "Insert $10 or less" << endl;
        cin >> cashInput;
    
        if(cashInput <= 10)
        {   
            cout << "Let the game begin" << endl;
            cout << "$" << cashInput << " left." << endl;
        }
        else {
            cout << "Renter Amount" << endl;
            continue;
        }
    
        do{
        cout << "Enter P to pull" << endl;
        cin >> inPut2;
    
        if(inPut2 == "P") // 0=x , 1=# , 2=$, 3=7
        {
            int num1 = rand()%4;
            int num2 = rand()%4;
            int num3 = rand()%4;
            int num4 = rand()%4;

            if (num1 == 0)
            {
            cout << "x";
            }
            else if (num1 == 1)
            {
            cout << "#";
            }
            else if (num1 ==2)
            {
            cout << "$";
            }
            else{
            cout << "7";
            }
    
        if (num2 == 0)
        {
        cout << "x";
        }
        else if (num2 == 1)
        {
        cout << "#";
        }
        else if (num2 ==2)
        {
        cout << "$";
        }
        else{
        cout << "7";}
                            
            if (num3 == 0)
            {
            cout << "x";
            }
            else if (num3 == 1)
            {
            cout << "#";
            }
            else if (num3 ==2)
            {
            cout << "$";
            }
            else{
            cout << "7";
            }
    
    if (num4 == 0)
    {
        cout << "x " << endl;
    }
    else if (num4 == 1)
    {
        cout << "# " << endl;
    }
    else if (num4 ==2)
    {
        cout << "$ " << endl;
    }
    else{
        cout << "7 " << endl;
    }


        if (num1 == 0 && num2 == 0 && num3 == 0 && num4==0)
        {
        cout << " Congrats on $10" << endl;
        }
        else if (num1 == 1 && num2 == 1 && num3 == 1 && num4==1)
        {
        cout << " Congrats on $25" << endl;
        }
        else if (num1 == 2 && num2 == 2 && num3 == 2 && num4==2)
        {
        cout << " Congrats on $50" << endl;
        }
        else if (num1 == 3 && num2 == 3 && num3 == 3 && num4==3)
        {
        cout << " 100 Mula" << endl;
        }
        
        cashInput --;
        cout << "$" << cashInput << " " << "left" << endl;

        if (cashInput == 0) {
            cout << "End of game" << endl;
            break;
        }
        }

        }

    while (inPut2 == "P");
        cout << "Want to play again? P to pull or F to exit" << endl;
        cin >> inPut2;
        
    }
    return 0;
}
