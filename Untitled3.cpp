/*
 * main.cpp
 * HealthProfileprogram . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ ngaji ikor-ishor samuel ]
 * Matric No:   [  13/095344063]
 * Department:  [ Computer science ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main() {
    // Variable declarations
stringfirstName;
stringlastName;
string gender;
int month;
int day;
int year;
int weight;
double height;
intcurrentDay;
intcurrentMonth;
intcurrentYear;

    // Prompt for patient information
cout<< "Welcome to our program to computerize healthcare records\n";
cout<< "please fill-in your information as requested. Thank you\n";
cout<< "\nKindly enter todays day, month and year using numeric representations only\n";
cout<< "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";

    // TODO: Put your code to receve input from user here
cout<< "First Name: ";
cin>>firstName;
cout<< "Last Name: ";
cin>>lastName;
cout<< "Gender: ";
cin>> gender;
cout<< "Month of Birth: ";
cin>> month;
cout<< "Day of Birth: ";
cin>> day;
cout<< "Year of Birth: ";
cin>> year;
cout<< "Weight(kg): ";
cin>> weight;
cout<< "Height(m): ";
cin>> height;
cout<< "Current Day: ";
cin>>currentDay;
cout<< "Current Month: ";
cin>>currentMonth;
cout<< "Current Year: ";
cin>>currentYear;

    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
HealthProfilehealth(firstName, lastName, gender, month, day, year, weight, height, currentDay, currentMonth, currentYear);

    // Print information from the object - by calling getInformation() function
health.getInformation();
}


/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 
 
 *Name:        [ ngaji ikor-ishor samuel ]
 * Matric No:   [  13/095344063]
 * Department:  [ Computer science ]
 *
 */

#ifndef HEALTHPROFILE_H
#define	HEALTHPROFILE_H

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition

classHealthProfile {
    // public interface
public:
HealthProfile(string firstName, string lastName, string gender, int month,
int day, int year, int weight, double height, intcurrentDay,
intcurrentMonth, intcurrentYear); // constructor that initializes patient information
intgetAge(); // function to get patients age in years
doublegetBMI(); // function to calculate and return BMI
intgetMaximumHeartRate(); // function to calculate and return maximum heart rate
doublegetTargetHeartRate(); // function to calculate and return minimum target heart rate
doublegetMinTargetHeartRate(); // function to calculate and return minimum target heart rate
doublegetMaxTargetHeartRate(); // function to calculate and return maximum target heart rate
voidgetInformation(); // function to print object information

    // TODO: Provide get and set function prototypes of each class attribute
voidsetFirstName(string firstName); // function to initialize firstName
voidsetLastName(string lastName); // function to initialize lastName
voidsetGender(string gender); // function to initialize gender
voidsetMonth(int month); // function to initialize month
voidsetDay(int day); // function to initialize day
voidsetYear(int year); // function to initialize year
voidsetWeight(int weight); // function to initialize weight
voidsetHeight(double height); // function to initialize height
voidsetAge(intcurrentDay, intcurrentMonth, intcurrentYear); // function to calculate age
stringgetFirstName(); // function to initialize firstName
stringgetLastName(); // function to initialize lastName
stringgetGender(); // function to initialize gender
intgetMonth(); // function to initialize month
intgetDay(); // function to initialize day
intgetYear(); // function to initialize year
intgetWeight(); // function to initialize weight
doublegetHeight(); // function to initialize height
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided


    // private interface
private:
stringfirstName; // variable to hold firstName
stringlastName; // variable to hold lastName
string gender; // variable to hold gender
int month; // variable to hold month
int day; // variable to hold day
int year; // variable to hold year
double height; // variable to hold height
int weight; // variable to hold weight
int age; // variable to hold age

}; // end class HealthProfile

#endif	/* HEALTHPROFILE_H */




/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ ngaji ikor-ishor samuel ]
 * Matric No:   [  13/095344063]
 * Department:  [ Computer science ]
 *
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information

HealthProfile::HealthProfile(string firstName, string lastName, string gender, int month,
int day, int year, int weight, double height, intcurrentDay,
intcurrentMonth, intcurrentYear) {
setFirstName(firstName); // call set function to initialize firstName
setLastName(lastName); // call set function to initialize lastName
setGender(gender); // call set function to initialize gender
setMonth(month); // call set function to initialize month
setDay(day); // call set function to initialize day
setYear(year); // call set function to initialize year
setWeight(weight); // call set function to initialize weight
setHeight(height); // call set function to initialize height
setAge(currentDay, currentMonth, currentYear); // call set function to calculate age
}

// function to print object information

voidHealthProfile::getInformation() {
cout<< "\n\nHEALTH PROFILE FOR - " <<getFirstName() << " " <<getLastName() <<endl;
cout<< "First Name: " <<setw(17) <<getFirstName() <<endl;
cout<< "Last Name: " <<setw(19) <<getLastName() <<endl;
cout<< "Gender: " <<setw(19) <<getGender() <<endl;
cout<< "Date of Birth: " <<setw(9) <<getDay() << "/" <<getMonth() << "/" <<getYear() <<endl;
cout<< "Weight (in kilograms): " <<setw(2) <<getWeight() <<endl;
cout<< "Height (in meters): " <<setw(7) <<getHeight() <<endl;
cout<< "Age: " <<setw(20) <<getAge() << " year(s)" <<endl;
cout<< "Body Mass Index (BMI): " <<setw(7) <<getBMI() <<endl;
cout<< "Maximum Heart Rate: " <<setw(6) <<getMaximumHeartRate() <<endl;
cout<< "Target Heart Rate: " <<setw(8) <<getTargetHeartRate() <<endl;
cout<< "\nBMI VALUES CHART" <<endl;
cout<< "Underweight:   less than 18.5" <<endl;
cout<< "Normal:        between 18.5 and 24.9" <<endl;
    ;
cout<< "Overweight:    between 25 and 29.9" <<endl;
cout<< "Obese:         30 or greater" <<endl;
}

// TODO: Provide implementation details for functions in HealthProfileStub.h

voidHealthProfile::setFirstName(string firstName) {
HealthProfile::firstName = firstName;
}

voidHealthProfile::setLastName(string lastName) {
HealthProfile::lastName = lastName;
}

voidHealthProfile::setGender(string gender) {
HealthProfile::gender = gender;
}

voidHealthProfile::setDay(int day) {
HealthProfile::day = day;
}

voidHealthProfile::setMonth(int month) {
HealthProfile::month = month;
}

voidHealthProfile::setYear(int year) {
HealthProfile::year = year;
}

voidHealthProfile::setWeight(int weight) {
HealthProfile::weight = weight;
}

voidHealthProfile::setHeight(double height) {
HealthProfile::height = height;
}

voidHealthProfile::setAge(intcurrentDay, intcurrentMonth, intcurrentYear) {
if (currentYear>HealthProfile::height) {
if (currentMonth>HealthProfile::month) {
if (currentDay>HealthProfile::day) {
HealthProfile::age = currentYear - HealthProfile::year;
            } else {
HealthProfile::age = currentYear - HealthProfile::year - 1;
            }
        } else {
HealthProfile::age = currentYear - HealthProfile::year - 1;
        }
    } else {
HealthProfile::age = 0;
    }
}

stringHealthProfile::getFirstName() {
returnfirstName;
}

stringHealthProfile::getLastName() {
returnlastName;
}

stringHealthProfile::getGender() {
return gender;
}

intHealthProfile::getDay() {
return day;
}

intHealthProfile::getMonth() {
return month;
}

intHealthProfile::getYear() {
return year;
}

intHealthProfile::getWeight() {
return weight;
}

doubleHealthProfile::getHeight() {
return height;
}

intHealthProfile::getAge() {
return age;
}

doubleHealthProfile::getBMI() {
return weight / (pow(height, 2));
}

intHealthProfile::getMaximumHeartRate() {
return 220 - age;
}

doubleHealthProfile::getTargetHeartRate() {
return 0.5 * HealthProfile::getMaximumHeartRate();
}

doubleHealthProfile::getMinTargetHeartRate() {
return 0.5 * HealthProfile::getMaximumHeartRate();
}
doubleHealthProfile::getMaxTargetHeartRate() {
return 0.85 * HealthProfile::getMaximumHeartRate();
}

// Implementation for the constructor and getInformation function has already been provided

