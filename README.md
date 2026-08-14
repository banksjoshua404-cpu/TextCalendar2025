#C++ Calendar System

A small command-line calendar system written in C++. I built it as my final project for my first C++ course in college during Spring 2025.  The goal was to take the concepts I learned throughout the course and put them together in one program. I didn't want to make the project overly complicated, so I focused on building a simple calendar that could store events and let the user search for them by day, month, or year.  This was one of my first opportunities to work with several C++ concepts in the same program instead of using them separately in smaller assignments.

About the project
The calendar is organized into a hierarchy:
Calendar,
then Years,
then Months,
then Days,
and finally, Events.

Each event contains:
Event name,
Event description,
Hour,
Minute,
and Date information through its associated day, month, and year.

The program uses nested structs and vectors to represent this structure.

Features
The final class submission included a menu with options to:
Create an event,
View a specific event,
View all events for a day,
View all events for a month,
View all events for a year,
Save calendar data to a separate file,
View data from a file,
Retrieve previously saved calendar data,
and Exit the program.

I also separated the different operations into their own functions instead of putting all of the program logic inside main().

C++ concepts used
This project gave me practice with several of the concepts covered in my first C++ course:
struct for organizing related data,
vector for dynamic collections,
Functions and passing data between functions,
References,
Loops, including nested loops,
Conditional statements,
enum usage in the earlier version,
String input with getline(),
Basic file input/output with <fstream>,
Standard input/output with <iostream>,
Menu-driven program design,
and Searching through nested data structures.

One of the most useful parts of the project was seeing how these concepts worked together. In earlier assignments, I was usually working with one concept at a time. This project forced me to think about how they affected each other once the program became larger.

Project progression
This repository includes both an earlier version of the project and the version I submitted for the class. I kept both because they show how the project changed as I learned more during the course.
The first version was intentionally simple. I started by figuring out how to represent a calendar using nested structures and how to create and store a single event.  At this point, I was still getting comfortable with C++ syntax, data structures, and input handling.  The basic design was:
Calendar
- Year
- Month
- Day
- Event
I also experimented with using an enum for the months.

As I worked on the project, I added:
A menu system,
Event searches,
Day, month, and year views,
File output,
File reading functionality,
More input handling,
and Separate functions for different operations.

The final version reflects what I understood about C++ at the end of my first C++ course.

What I learned
 This project was useful because it was one of my first larger C++ programs. I had to think about how the data should be organized, how different functions should interact, and how to search through multiple levels of nested containers.  I also ran into problems that I would handle differently now. For example, working with both cin and getline() required me to pay more attention to input handling. The nested vectors also made the search functions more complicated than I expected when I first started the project.  Those problems were a normal part of learning, and they helped me understand why the way a program is structured matters more as the project grows.

Limitations
This is a college project, not a finished production application, so the submitted version has several limitations.  The current implementation has issues with persistent calendar state because events are passed and returned in ways that aren't used consistently by the menu system. The file-reading function is also incomplete, and the function for restoring saved calendar data was left unfinished.  There are also areas that could use stronger input validation, date validation, better formatting, and a cleaner data model.  I'm keeping these limitations documented because this repository represents an early point in my C++ development. It's meant to show where I was at the end of my first C++ course, not to present the project as production-ready software.

Possible improvements
If I were to continue working on this project, some of the things I'd change include:
Store and update the calendar through references instead of repeatedly copying it,
Properly implement saving and loading calendar data,
Validate dates and times before creating events,
Improve the output formatting,
Prevent duplicate events,
Make searching more efficient,
Separate the calendar logic from the user interface,
Move toward classes and encapsulation instead of using only structs,
Add the ability to edit and delete events,
and Add support for recurring events.

Why I included this project
I included this project in my portfolio because it shows an early stage of my programming development.  I didn't build this after already having years of experience with C++. It was my final project for my first C++ class, and it shows how I took what I learned in that course and applied it to a larger problem that I chose myself.  Looking back at the code now also gives me a good way to see how my approach to program structure, data management, and debugging has changed since Spring 2025.

This repository contains the version of the project that I submitted for the course, along with an earlier version that shows how the project developed over time.
