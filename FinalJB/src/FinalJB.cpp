//============================================================================
// Name        : FinalJB.cpp
// Author      : Joshua Banks
// Version     :
// Copyright   : Get off my lawn (no copying)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;
struct Event {
	string name, data;
	int hour = 0, min = 0;
};

struct Day {
	vector<Event> obj;
	int day = 0;
};
struct Month {
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

Calendar inputEvent(Calendar l, int& q){
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
	cout << "Enter Hour and Minute (as numbers, no : ) (hh mm)\n";
	cin >> h;
	cin >> t;
	cout << "Enter event name\n";
	cin.ignore();
	getline(cin, n);
	cout << "Enter event description\n";
	getline(cin, i);
	e.name = n;
	e.data = i;
	e.hour = h;
	e.min =t;
	a.obj.push_back(e);
	a.day = d;
	o.days.push_back(a);
	o.monthNum = m;
	r.months.push_back(o);
	r.yearNum = y;
	l.years.push_back(r);
	cout << "l " << l.years[0].months[0].days[0].obj[0].name<< endl;
	return l;
}
void QCheck (Calendar l) {
	int y = 0,m = 0,d = 0,h = 0,i = 0;
	cout << "Enter the year, month, and day of this event (as numbers) (yyyy mm dd)\n";
	cin >> y;
	cin >> m;
	cin >> d;
	cout << "Enter time of event (hour and minute (as numbers, no : )) (hh mm)\n";
	cin >> h;
	cin >> i;
	bool ch = 0;
	for (int j = 0; j < l.years.size(); j++) {
		for (int k = 0; k < l.years[j].months.size(); k++) {
			for (int q = 0; q < l.years[j].months[k].days.size(); q++) {
				for (int w = 0; w < l.years[j].months[k].days[q].obj.size(); w++) {
					if (l.years[j].yearNum == y && l.years[j].months[k].monthNum == m && l.years[j].months[k].days[q].day == d && l.years[j].months[k].days[q].obj[w].hour == h && l.years[j].months[k].days[q].obj[w].min == i) {
						ch = 1;
						cout << l.years[j].months[k].days[q].obj[w].name << "\n" << l.years[j].months[k].days[q].obj[w].data << endl;
					}
				}
			}
		}
	}
	if (ch == 0) cout << "Event not found\n";
}
void DCheck (Calendar l) {
	int y = 0,m = 0,d = 0;
	cout << "Enter the year, month, and day of this event (as numbers) (yyyy mm dd)\n";
	cin >> y;
	cin >> m;
	cin >> d;
	double ch = 0;
	for (int j = 0; j < l.years.size(); j+= 1) {
		for (int k = 0; k < l.years[j].months.size(); k+= 1) {
			for (int q = 0; q < l.years[j].months[k].days.size(); q+= 1) {
				for (int w = 0; w < l.years[j].months[k].days[q].obj.size(); w+= 1) {
					if (l.years[j].yearNum == y && l.years[j].months[k].monthNum == m && l.years[j].months[k].days[q].day == d) {
						ch = 1;
						cout << "Day:" << d << " " << l.years[j].months[k].days[q].obj[w].hour << ":" << l.years[j].months[k].days[q].obj[w].min << "  " <<l.years[j].months[k].days[q].obj[w].name << "\n" << l.years[j].months[k].days[q].obj[w].data << "\n\n";
					}
				}
			}
		}
	}
	if (ch == 0) cout << "Event not found\n";
}
void MCheck (Calendar l) {
	int y = 0,m = 0;
	cout << "Enter the year, month, and day of this event (as numbers) (yyyy mm dd)\n";
	cin >> y;
	cin >> m;
	double ch = 0;
	for (int j = 0; j < l.years.size(); j++) {
		for (int k = 0; k < l.years[j].months.size(); k++) {
			for (int q = 0; q < l.years[j].months[k].days.size(); q++) {
				for (int w = 0; w < l.years[j].months[k].days[q].obj.size(); w++) {
					if (l.years[j].yearNum == y && l.years[j].months[k].monthNum == m) {
						ch = 1;
						cout << "Month:" << m  << "  Day:" << l.years[j].months[k].days[q].day << l.years[j].months[k].days[q].obj[w].hour << ":" << l.years[j].months[k].days[q].obj[w].min << "  " <<l.years[j].months[k].days[q].obj[w].name << "\n" << l.years[j].months[k].days[q].obj[w].data << "\n\n";
					}
				}
			}
		}
	}
	if (ch == 0) cout << "Event not found\n";
}
void YCheck (Calendar l) {
	int y = 0;
	cout << "Enter the year, month, and day of this event (as numbers) (yyyy mm dd)\n";
	cin >> y;
	char ch = '1';
	for (int j = 0; j < l.years.size(); j++) {
		for (int k = 0; k < l.years[j].months.size(); k++) {
			for (int q = 0; q < l.years[j].months[k].days.size(); q++) {
				for (int w = 0; w < l.years[j].months[k].days[q].obj.size(); w++) {
					if (l.years[j].yearNum == y) {
						ch = '0';
						cout << "Year: " << y << " Month:" << l.years[j].months[k].monthNum << " Day:" << l.years[j].months[k].days[q].day << l.years[j].months[k].days[q].obj[w].hour << ":" << l.years[j].months[k].days[q].obj[w].min << "  " <<l.years[j].months[k].days[q].obj[w].name << "\n" << l.years[j].months[k].days[q].obj[w].data << "\n\n";
					}
				}
			}
		}
	}
	if (ch == '1') cout << "Event not found\n";
}

void SData(Calendar l){
	ofstream file("calendar.txt");
	for (int j = 0; j < l.years.size(); j++) {
		for (int k = 0; k < l.years[j].months.size(); k++) {
			for (int q = 0; q < l.years[j].months[k].days.size(); q++) {
				for (int w = 0; w < l.years[j].months[k].days[q].obj.size(); w++) {
					file << "Year: " << l.years[j].yearNum << " Month: " << l.years[j].months[k].monthNum <<  " Day:" << l.years[j].months[k].days[q].day << l.years[j].months[k].days[q].obj[w].hour << ":" << l.years[j].months[k].days[q].obj[w].min << "  " <<l.years[j].months[k].days[q].obj[w].name << "\n" << l.years[j].months[k].days[q].obj[w].data << "\n\n";
				}
			}
		}
	}
	file.close();
}
void FData(Calendar l){
	ofstream file;
	file.open("calendar.txt");
	string m;
	while (getline(file, m)) {
		cout << m << "\n";
	}
	file.close();

}
void RData(Calendar l){

}
const Calendar d;
void Menu () {
	while (true) {
		string user;
		int q = 0;
		cout << "Calendar Options:\n"
				"1. Create Event\n"
				"2. View Certain Event\n"
				"3. View All Events for a Day\n"
				"4. View All Events for a Month\n"
				"5. View All Events for a Year\n"
				"6. Send Calendar Data to Separate File\n"
				"7. View from File\n"
				"8. Retrieve Calendar Data from Previous Save\n"
				"9. End\n";
		getline(cin, user);
		if (user == "1") inputEvent(d, q);
		else if (user == "2") QCheck(d);
		else if (user == "3") DCheck(d);
		else if (user == "4") MCheck(d);
		else if (user == "5") YCheck(d);
		else if (user == "6") SData(d);
		else if (user == "7") FData(d);
		else if (user == "8") RData(d);
		else if (user == "9") break;
		else cout << "Error - Bad Input\n\n";
		user.clear();
	}
}
int main() {
	Menu();
	cout << "Bye\n";
	return 0;
}
