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

        char current;
        vector<char> numbers = {};
        int lineval;

        map<string, string> replaceMap = {{"one", "on1e"}, {"two", "tw2o"}, {"three", "thr3e"}, {"four", "fo4ur"}, {"five", "fi5ve"}, {"six", "si6x"}, {"seven", "sev7en"}, {"eight", "ei8ght"}, {"nine", "ni9ne"}};

        for (uint i = 0; i <= myText.length(); i++)
        {
            string subText = myText.substr(0, i);
            for (auto j : replaceMap)
            {

                if (subText.find(j.first) != std::string::npos)
                {

                    size_t pos = subText.find(j.first);
                    if (pos != std::string::npos)
                    {
                        myText.replace(pos, j.first.length(), j.second);
                    }
                }
            }
        }

        for (uint i = 0; i < myText.length(); i++)
        {
            current = myText[i];
            if (isdigit(current))
            {
                numbers.push_back(current);
            }
        }

        lineval = (numbers.front() - '0') * 10 + (numbers.back() - '0');
        total += lineval;

        cout << myText << " " << lineval << endl;
    }
    cout << total << endl;

    InputFile.close();
}