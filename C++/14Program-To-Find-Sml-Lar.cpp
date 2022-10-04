// 14 // Program to find Smallest and Largest Word in a String.
#include<iostream>
using namespace std;
int main()
{
    string str, str2, Lstr, Sstr;
    str2 = '\0';
    cout << "\nEnter a string :  ";
    getline(cin, str);

    int count=0, Lsize=0, Ssize = 200000;
    for(int i=0; i<=str.size(); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str2 = str2 + str[i];
            count++;
            continue; 
        }
        else 
        {
            if(count > Lsize)
            {
                Lsize = count;
                Lstr = str2;
            }
            if(count < Ssize && count != 0)
            {
                Ssize = count;
                Sstr = str2;
            }
            count = 0;
            str2 = '\0';
        }
    }
    cout << "\nMinimum length word: " << Sstr;
    cout << "\nMaximum length word: " << Lstr << "\n\n";
}