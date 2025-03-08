#include "NumberList.h"
#include "Student.h"
#include "GlobalFunctions.h"
#include <iostream>
using namespace std;

int main() {
    NumberList nl;
    nl.Init();
    nl.Add(5);
    nl.Add(3);
    nl.Add(8);
    nl.Sort();
    nl.Print();

    Student s1, s2;
    s1.setName("John");
    s1.setMathGrade(9);
    s1.setEnglishGrade(8);
    s1.setHistoryGrade(7);

    s2.setName("Alice");
    s2.setMathGrade(6);
    s2.setEnglishGrade(9);
    s2.setHistoryGrade(8);

    cout << "Comparing by name: " << compareByName(s1, s2) << endl;
    cout << "Comparing by average: " << compareByAverage(s1, s2) << endl;
    return 0;
}