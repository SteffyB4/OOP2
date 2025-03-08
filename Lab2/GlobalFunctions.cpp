#include "GlobalFunctions.h"
int compareByName(Student s1, Student s2) { return s1.getName().compare(s2.getName()); }
int compareByMathGrade(Student s1, Student s2) { return (s1.getMathGrade() > s2.getMathGrade()) - (s1.getMathGrade() < s2.getMathGrade()); }
int compareByEnglishGrade(Student s1, Student s2) { return (s1.getEnglishGrade() > s2.getEnglishGrade()) - (s1.getEnglishGrade() < s2.getEnglishGrade()); }
int compareByHistoryGrade(Student s1, Student s2) { return (s1.getHistoryGrade() > s2.getHistoryGrade()) - (s1.getHistoryGrade() < s2.getHistoryGrade()); }
int compareByAverage(Student s1, Student s2) { return (s1.getAverage() > s2.getAverage()) - (s1.getAverage() < s2.getAverage()); }
