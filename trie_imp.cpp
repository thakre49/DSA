/// implementation of trie
#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *child[26];
    bool isterminal;
    // Constructor for the node
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        isterminal = false;
    }
};
class Trie_data_structure
{
public:
    TrieNode *firstroot;
    // Constructor for data structure
    Trie_data_structure()
    {
        firstroot = new TrieNode('\0');
    }

    void insert(string word)
    {
        actual_insert(word, firstroot);
    }
    // recurrsive function for inserting a node
    void actual_insert(string word, TrieNode *root)
    {
        // base case
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'a';
        if (root->child[index] == NULL)
        {
            root->child[index] = new TrieNode(word[0]);
        }
        word.erase(0, 1);
        actual_insert(word, root->child[index]);
    }
    void remove(string word)
    {
        bool temp = true;
        actual_delete(word, firstroot, temp);
    }
    // recurrsive function to remove a word
    void actual_delete(string word, TrieNode *root, bool &ans)
    {
        // base case
        if (word.length() == 0)
        {
            root->isterminal = false;
            for (int i = 0; i < 26; i++)
            {
                if (root->child[i] != NULL)
                {
                    ans = false;
                }
            }
            if (ans)
            {
                delete (root);
            }
            return;
        }
        int index = word[0] - 'a';
        word.erase(0, 1);
        actual_delete(word, root->child[index], ans);
        if (ans && root != firstroot)
        {
            delete (root);
        }
    }
    bool search(string word)
    {
        return actual_search(word, firstroot);
    }
    // recurrsive function to seach a word
    bool actual_search(string word, TrieNode *root)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isterminal;
        }
        int index = word[0] - 'a';
        if (root->child[index] == NULL)
        {
            return false;
        }
        else
        {
            word.erase(0, 1);
            return actual_search(word, root->child[index]);
        }
    }
};
int main()
{
    Trie_data_structure *t = new Trie_data_structure();
    t->insert("first");
    t->insert("fir");
    if (t->search("first"))
    {
        cout << "given string is present" << endl;
    }
    else
    {
        cout << "given string is not present" << endl;
    }
    t->remove("first");
    if (t->search("fir"))
    {
        cout << "given string is present" << endl;
    }
    else
    {
        cout << "given string is not present" << endl;
    }
    return 0;
}