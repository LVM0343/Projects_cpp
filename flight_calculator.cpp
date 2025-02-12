#include <iostream>
#include <stdlib.h>
#include <cmath>
#define r 3958.8 // readius of earth

using namespace std;

double haversine (double lat1, double long1, double lat2, double long2);
double getFlightTime(double lat1, double long1, double lat2, double long2);


int main(){
    int userInput1;
    int userInput2;

    cout << "Welcome to Arlines" << endl;
    cout << "---------------------" << endl;

    string locations [] = 
    {"Miami Beach, FL", "Fargo, ND", "Idaho City, ID", "Holyoke, MA", "Cambridge, MD",
    "Bath, ME", "Paris, KY", "Aurora, TX", "Escanaba, MI", "Vernal, UT"};

    int numLocations = sizeof(locations) / sizeof(locations[0]);
    for (int i = 0; i < numLocations; i++)
    {
        cout << i + 1 << ". " << locations[i] << endl;
    }
    cout << "--------------------------------------" << endl;

    cout << "Please select location and destination" << endl;
    cout << "Location: " << endl;
    cin >> userInput1;
    cout << "Destination: " << endl;
    cin >> userInput2;
    cout << "---------------------" << endl;

    if (userInput1 && userInput2 >= 1, userInput1 && userInput2 <= numLocations)
    {
        cout << "Location is: " << locations[userInput1- 1] << endl;
        cout << "Destination is: " << locations[userInput2 - 1] << endl;
    }
    else {
        cout << "Please try again" << endl;
    }

    cout << "-------------------" << endl;

    double lat [] = {25.793449, 46.877186, 43.828850, 42.203217, 38.563461,
                     43.917503, 38.206348, 33.061062, 45.745312, 40.454086};
    
    double lonG[] = {-80.139198, -96.789803, -115.837860, -72.625481, -76.085251,
                     -69.829712, -84.270172, -97.511391, -87.070457, -109.538246};

    double lat1 = lat[userInput1 - 1];
    double lat2 = lat[userInput2 - 1];
    double long1 = lonG[userInput1 - 1];
    double long2 = lonG[userInput2 - 1];
   
    double distance = haversine(lat1, long1, lat2, long2);
    //double finalDistance = (distance * 180) / M_PI;
    cout << "Distance is: " << distance << " miles" << endl;

    double flighTime = getFlightTime(lat1, long1, lat2, long2);
    cout << "Flight time is: " << flighTime << " hours" << endl;

    return 0;

}

    double haversine (double lat1, double long1, double lat2, double long2) { 
    double distance = 2 * r * asin(sqrt(pow(sin((lat2-lat1)/ 2),2)+cos(lat1)*cos(lat2)* pow(sin((long2-long1)/ 2),2)));
    return distance;
    }

    double getFlightTime(double lat1, double long1, double lat2, double long2){
    double flighTime = 
    ( 2 * r * asin(sqrt(pow(sin((lat2-lat1)/2),2)+cos(lat1)*cos(lat2)* pow(sin((long2-long1)/2),2))) ) / 500.0 ;
    return flighTime;
    }
