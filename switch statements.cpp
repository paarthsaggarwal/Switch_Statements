# include <iostream>
# include <cmath>

using namespace std;

string getdayofweek(int daynum){
    string dayname ;

    switch(daynum){
        case 0:
            dayname = "Monday";
            break;
        case 1 :
            dayname = "Tuesday";
            break;
        case 2:
            dayname = "Wednesday";
            break;
        case 3:
            dayname = "Thursday";
            break;
        case 4:
            dayname = "Friday";
            break;
        case 5:
            dayname = "Saturday";
            break;
        case 7:
            dayname = "Sunday";
            break;

        default:
            dayname = "Invalid day number";
    }


    return dayname;
}

int main()
{
    cout << getdayofweek(0);


    return 0;

}


