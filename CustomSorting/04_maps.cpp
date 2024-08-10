#include<bits/stdc++.h>
using namespace std;
struct Person {
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
};

struct ComparePerson {
    bool operator()(const Person& a, const Person& b) const {
       // return a.age < b.age;  // Custom comparison logic: sort by age
       if(a.age > b.age)
           return false;
           else
               return true;
    }
};

int main() {
    // Create a map with Person as the key and int (salary) as the value
   map<Person, int, ComparePerson> people;

    // Insert some people into the map
    people[Person("Alice", 30)] = 50000;
    people[Person("Bob", 25)] = 60000;
    people[Person("Charlie", 35)] = 70000;

    // Iterate through the map and print the people
    for (const auto& entry : people) {
       cout << entry.first.name << " (" << entry.first.age << "): "
                  << entry.second << " USD" << endl;
    }

    return 0;
}
