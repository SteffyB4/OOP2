#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList {
private:
    int numbers[10];
    int count;
public:
    void Init();
    bool Add(int x);
    void Sort();
    void Print();
};

#endif