#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    string name;
    float mathGrade, englishGrade, historyGrade;
public:
    void setName(string n);
    string getName();
    void setMathGrade(float grade);
    float getMathGrade();
    void setEnglishGrade(float grade);
    float getEnglishGrade();
    void setHistoryGrade(float grade);
    float getHistoryGrade();
    float getAverage();
};

#endif
