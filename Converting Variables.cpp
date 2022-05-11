#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /////////1ST TASK
    int int_first, int_second, sum_int_numbers;
    double num1, num2, frac_part1, frac_part2, sum_frac_parts;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int_first = (int)num1;
    int_second = (int)num2;
    sum_int_numbers = int_first + int_second;

    frac_part1 = num1 - int_first;
    frac_part2 = num2 - int_second;
    sum_frac_parts = frac_part1 + frac_part2;

    cout << "The sum of fractional parts equal to " << sum_frac_parts << endl;
    cout << "The sum of integer parts equal to " << sum_int_numbers << endl;



    ////////2ND TASK
    double distance, mins, hours, speed;

    cout << "Enter distance to the airport: ";
    cin >> distance;

    cout << "In how many minutes do you have to be at the airport: ";
    cin >> mins;

    hours = mins / 60;

    speed = distance / hours;
    cout << "You must move at a speed " << (int)speed + 1 << " km/h" << endl;



    /////////3RD TASK
    const int working_day = 28800;
    int seconds;
    float rem_hours;

    cout << "How many seconds have passed since the start of the working day? ";
    cin >> seconds;

    rem_hours = (working_day - seconds) / 3600;

    if (rem_hours > 0) {
        cout << "You have " << (int)rem_hours << " whole hours left to work" << endl;
    }
    else
    {
        cout << "You should be paid overtime, you overworked your 8 hours" << endl;
    }




    //////////////4TH TASK
    int laptop_count;
    float laptop_price, discount, cost;

    cout << "How many laptops: ";
    cin >> laptop_count;

    cout << "Price of laptops: ";
    cin >> laptop_price;

    cout << "Amound of discount: ";
    cin >> discount;

    cost = laptop_count * laptop_price * (1 - discount / 100);
    cout << "The total cost of the order is equal to " << cost << endl;



    //////////5TH TASK
    float film_size, mins, hours;
    int speed_of_internet, secs;

    cout << "Size of the movie in gigabytes: ";
    cin >> film_size;

    cout << "Enter the speed of Internet-connection (Mbit/s): ";
    cin >> speed_of_internet;

    film_size = film_size * pow(2, 13);

    secs = film_size / speed_of_internet;

    hours = secs / 3600.0;
    mins = (hours - (int)hours) * 60;
    secs = (mins - (int)mins) * 60;

    cout << "The movie will download " << (int)hours << " hours " << (int)mins << " minutes " << secs << " seconds " << endl;


}


