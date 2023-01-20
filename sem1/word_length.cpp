#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string filename = "text.txt";

    fstream fs;
    fs.open(filename);
    
    string word, shortest, longest;
    float wordcount, wordlength;

    while (fs >> word)
    {
        wordcount++;
        wordlength += word.length();

        if (!shortest.empty())
        {
            if (word.length() < shortest.length())
            {
                shortest = word;
            }
        }
        else
        {
            shortest = word;
        }

        if (!longest.empty())
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
        }
        else
        {
            longest = word;
        }
        
    }
    cout << "There are " << wordcount << " words in the file.\n"
    << "The shortest word was \"" << shortest << "\" with " << shortest.length() << " charachter(s).\n"
    << "The longest word was \"" << longest << "\" with " << longest.length() << " charachter(s).\n"
    << "The average length was " << fixed << setprecision(2) << wordlength/wordcount  << " character(s)." << endl;
    fs.close();
    
}