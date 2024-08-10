#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class railwaySystem
{
public:
    // Declare the data structures here.
    int id;
    string sti;
    int tame;
    vector<railwaySystem> system;

    void checkIn(int passID, string station, int time)
    {
        // Write your code here.
        railwaySystem entry;
        entry.id = passID;
        entry.sti = station;
        entry.tame = time;
        system.push_back(entry);
    }

    void checkOut(int passID, string station, int time)
    {
        // Write your code here.
        railwaySystem entry;
        entry.id = passID;
        entry.sti = station;
        entry.tame = time;
        system.push_back(entry);
    }

    double getAverage(string source, string dest)
    {
        // Write your code here.
        double count = 0;
        double total = 0;
        int size = system.size();
        for (int i = 0; i < size; i++)
        {

            int entry_time = 0;
            int out_time = 0;
            if (system[i].sti == source)
            {

                for (int j = i + 1; j < size; j++)
                {
                    if (system[i].id == system[j].id && system[j].sti == dest && j < size)
                    {
                        count++;
                        total += system[j].tame - system[i].tame;
                    }
                }
            }
        }
        if (count != 0)
        {
            return total / count;
        }
        else
        {
            return 0;
        }
    }
};