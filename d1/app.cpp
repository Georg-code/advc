#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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
        for (int i = 0; i < myText.length(); i++)
        {
            current = myText[i];
            if (isdigit(current))
            {
                numbers.push_back(current);
            }
        }

        lineval = (numbers.front() - '0') * 10 + (numbers.back() - '0');
        //   cout << lineval << endl;
        total += lineval;
    }
    cout << total << endl;

    InputFile.close();
}