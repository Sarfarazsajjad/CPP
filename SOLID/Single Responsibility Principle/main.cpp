#include <iostream>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost;

struct Journal{
    string title;
    vector<string> entries;

    Journal(const string &title) : title(title) {} //member initialization

    void add_entry(const string& entry)
    {
        static int count = 1;
        entries.push_back(lexical_cast<string>(count++) + ": " + entry);
    }
};
int main() {
    Journal journal{"Dear Diary"};
    journal.add_entry("I ate a bug");
    journal.add_entry("I cried today");

    return 0;
}