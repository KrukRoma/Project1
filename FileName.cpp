#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //1

    float seconds, minutes, hours;

    cout << "Enter the time in seconds: ";
    cin >> seconds;
    cout << "Time in seconds: " << seconds << endl;

    minutes = seconds / 60;
    cout << "Time in minutes: " << minutes << endl;

    hours = seconds / 3600;
    cout << "Time in hours: " << hours << endl;

    //2

    double number;
    cout << "Enter the amount of money: ";
    cin >> number;

    int hryvnia = static_cast<int>(number);
    int kopiyka = static_cast<int>((number - hryvnia) * 100);

    cout << hryvnia << " grn " << kopiyka << " kop\n";

    //3

    float lenght, time, speed;

    cout << "Enter the length of the distance(meters): ";
    cin >> lenght;

    cout << "Enter time(second): ";
    cin >> time;

    speed = lenght / time;
    cout << "You were running at speed " << speed << " km/hours\n";

    //4

    int day;

    cout << "Enter the number of days: ";
    cin >> day;

    int week = static_cast<int>(day / 7);
    int days = static_cast<int>(day - (week * 7));

    cout << week << " weeks " << days << " days\n";

}

