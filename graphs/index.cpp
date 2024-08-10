#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    // by using map
    unordered_map<int, list<int>> m;

    void makeconnection(int from, int to, bool type)
    {
        // 0 means directed graph
        // 1 means undirected graph
        m[from].push_back(to);

        if (type == 1)
        {
            m[to].push_back(from);
        }
    }

    void printgraph()
    {
        for (auto i : m)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    // number of edges = number of connections
    g.makeconnection(1, 2, 0);
    g.makeconnection(1, 7, 0);
    g.makeconnection(2, 5, 0);
    g.makeconnection(7, 2, 0);
    g.makeconnection(5, 8, 0);
    g.makeconnection(8, 7, 0);
    g.printgraph();
    return 0;
}