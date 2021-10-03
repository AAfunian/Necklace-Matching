// Necklace Matching.cpp
// Amir Afunian
// 10/02/2021

#include <iostream>
#include <string>
using namespace std;

// Function which compares whether two strings contain the same order of characters (necklace matching)
void match(string x, string y);

int main()
{
    string testStr = "nicole";
    string testStr2 = "lenico";
    match(testStr, testStr2);
}

void match(const string x, const string y) {
    for (int j = 0; j < y.size(); ++j) {
        string cpy;
        for (int i = 0; i < y.size(); ++i) {
            if (i + j < y.size()) {
                cpy.push_back(y[i + j]);
            }
            else {
                cpy.push_back(y[i + j - y.size()]);
            }
        }
        if (cpy == x) {
            cout << "Match!";
            return;
        }
    }
    cout << "Not a match!";
}