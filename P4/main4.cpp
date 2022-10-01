/*****************************************
  Programmer: Dillon Hendrix
  Discription:
  Date: 9/27/22
*****************************************/

#include <iostream>
#include <iomanip>

using namespace std;

// Function input
//char userMonthInput(char month);

int main() {

  // Initialize variable 
  string month;
  int day;
  int t; // number of times to take and astology
  int t_min; // min number of times to take and astrology
  int userTinput(int t);

  // Prompt user for times (t) wanted astrology taken
  //cout << "Input times wanted astology taken (t): ";
  //cin >> t;
  //cout << endl;
  t = userTinput(t);

  // Loop to run outcomes of month and day to determine astology sign
  for(t_min = 1; t_min <= t; t_min = t_min + 1){
    //cout << "Please enter the day of your birthday followed by the month (ex. 22 Apr)";
    cin >> day >> month;

    if ((month == "Mar" && day >= 21)||(month == "Apr" && day <= 20)){
      cout << "Aries \n" << endl;
    }
    else if ((month == "Apr" && day >= 21)||(month == "May" && day <= 20)){
      cout << "Taurus \n" << endl;
    }
    else if ((month == "May" && day >= 21)||(month == "Jun" && day <= 21)){
      cout << "Gemini \n" << endl;
    }
    else if ((month == "Jun" && day >= 22)||(month == "Jul" && day <= 22)){
      cout << "Cancer \n" << endl;
    }
    else if ((month == "Jul" && day >= 23)||(month == "Aug" && day <= 21)){
      cout << "Leo \n" << endl;
    }
    else if ((month == "Aug" && day >= 23)||(month == "Sep" && day <= 21)){
      cout << "Virgo \n" << endl;
    }
    else if ((month == "Sep" && day >= 22)||(month == "Oct" && day <= 22)){
      cout << "Libra \n" << endl;
    }
    else if ((month == "Oct" && day >= 23)||(month == "Nov" && day <= 22)){
      cout << "Scorpio \n" << endl;
    }
    else if ((month == "Nov" && day >= 23)||(month == "Dec" && day <= 21)){
      cout << "Sagittarius \n" << endl;
    }
    else if ((month == "Dec" && day >= 22)||(month == "Jan" && day <= 20)){
      cout << "Capricorn \n" << endl;
    }
    else if ((month == "Jan" && day >= 21)||(month == "Feb" && day <= 19)){
      cout << "Aquarius \n" << endl;
    }
    else if ((month == "Feb" && day >= 20)||(month == "Mar" && day <= 20)){
      cout << "Pisces \n" << endl;
    }
  }
  //else
  // cout << "Incorrect user input. Try again." << endl;
  
  return 0;
}

  int userTinput(int t){
  cout << " ";
  cin >> t;
  return t; 
  }