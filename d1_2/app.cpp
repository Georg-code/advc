#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{

    ifstream InputFile("input.txt");
    string myText;

    int total = 0;
    while (getline(InputFile, myText))
    {
        string line;
        char current;
        vector<char> numbers = {};
        int lineval;

        map<string, int> replaceMap = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"eight", 8}, {"nine", 9}};

        for (int i = 0; i <= myText.length() - 1; i++)
        {

            string subText = myText.substr(0, myText.length());

            for (auto j : replaceMap)
            {

                if (subText.find(j.first) != std::string::npos)
                {
                }
            }
        }

        for (int i = 0; i < myText.length(); i++)
        {
            current = myText[i];
            if (isdigit(current))
            {
                numbers.push_back(current);
            }
        }

        lineval = (numbers.front() - '0') * 10 + (numbers.back() - '0');
        total += lineval;
    }
    cout << total << endl;

    InputFile.close();
}