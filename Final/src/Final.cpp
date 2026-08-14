//============================================================================
// Name        : Final.cpp
// Author      : Joshua Banks
// Version     :
// Copyright   : Get off my lawn (no copying)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
enum Mon {
	JANUARY,
	FEBUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};
struct Event {
	string name;
	string data;
	int hour = 0;
	int min = 0;
};

struct Day {
	vector<Event> obj;
	int day = 0;
};
struct Month {
	Mon m;
	vector<Day> days;
	int monthNum = 0;
};
struct Year {
	vector<Month> months;
	int yearNum = 0;
};
struct Calendar {
	vector<Year> years;
};

Calendar inputEvent(Calendar l){
	Event e;
	Day a;
	Month o;
	Year r;
	int y = 0,
			m = 0,
			d = 0,
			h = 0,
			t = 0;
	string n, i;
	cout << "Enter Year, Month and Day (as numbers) (yyyy mm dd)\n";
	cin >> y;
	cin >> m;
	cin >> d;
	cout << "Enter Hour and Minute (as numbers, no :) (hh mm)\n";
	cin >> h;
	cin >> t;
	cout << "Enter event name\n";
	getline(cin, n);
	cout << "Enter event description\n";
	getline(cin, i);
	e.name = n;
	e.data = i;
	e.hour = h;
	e.min =t;
	d.obj.push_back(e);
	d.day = d;
	o.days.push_back(d);
	o.monthNum = m;
	r.months.push_back(o);
	r.yearNum = y;
	l.years.push_back(r);
	return l;
}
int main() {
	vector<Calendar> c;
	c = inputEvent(c);

	return 0;
}

