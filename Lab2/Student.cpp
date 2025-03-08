#include "Student.h"

void Student::setName(string n) { name = n; }
string Student::getName() { return name; }
void Student::setMathGrade(float grade) { mathGrade = grade; }
float Student::getMathGrade() { return mathGrade; }
void Student::setEnglishGrade(float grade) { englishGrade = grade; }
float Student::getEnglishGrade() { return englishGrade; }
void Student::setHistoryGrade(float grade) { historyGrade = grade; }
float Student::getHistoryGrade() { return historyGrade; }
float Student::getAverage() { return (mathGrade + englishGrade + historyGrade) / 3; }
