#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
  string time;
  cout << "Enter the time in 12 hour format 👇" << endl;
  getline(cin, time);
  string timePeriod;

  timePeriod.push_back(time[time.length() - 2]);
  timePeriod.push_back(time[time.length() - 1]);

  string hh, mm, ss;
  hh.push_back(time[0]);
  hh.push_back(time[1]);
  mm.push_back(time[3]);
  mm.push_back(time[4]);
  ss.push_back(time[6]);
  ss.push_back(time[7]);

  int hours, mins, secs;
  stringstream hourstream(hh);
  stringstream minstream(mm);
  stringstream secstream(ss);
  hourstream >> hours;
  secstream >> secs;
  minstream >> mins;
  if (
      !(timePeriod.compare("PM") &&
        timePeriod.compare("pm") &&
        timePeriod.compare("Pm") &&
        timePeriod.compare("pM")))
  {
    if (hours == 12)
    {
      hours = 12;
    }
    else
    {
      hours = hours + 12;
    }
    cout << endl;
    cout << "Converted time is -> " << hours << ':' << mm << ':' << ss << endl;
  }
  else
  {
    if (hours == 12)
    {
      hours = 00;
    }
    cout << endl;
    cout << "Converted time is -> " << hours << ':' << mm << ':' << ss << endl;
  }
}