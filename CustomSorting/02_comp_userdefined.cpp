// coparator for user defined data types

// the given function will sort the vector in decreasing order of marks in case
// the marks are same lower roll no will come first
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;

    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
bool user_defined_comp(student a, student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}

int main()
{
    vector<student> class12;
    student s1("abhi", 1, 30);
    student s2("vai", 40, 42);
    student s3("adi", 2, 40);
    student s4("raja", 24, 30);
    class12.push_back(s1);
    class12.push_back(s2);
    class12.push_back(s3);
    class12.push_back(s4);
    sort(class12.begin(), class12.end(), user_defined_comp);
    for (int i = 0; i < class12.size(); i++)
    {
        cout << class12[i].roll << " " << class12[i].name << " " << class12[i].marks << endl;
    }
    return 0;
}