#include <iostream>
#include <vector>
using namespace std;

void powerSet(vector<string> str , vector<string> active ={" "}, int index = -1)
{
   int n = str.size();
   if(str.empty())
   {
    
    return ;
   }
   else
   {
    for(int i = 0 ; i < active.size(); i++)
    {
        cout << active.at(i);
    }

    for (int i = index + 1; i < n; i++) 
    {
       active.push_back(str[i]);
       powerSet(str, active ,i);
       active.pop_back();
    }
   }
}

int main()
{
    vector<string> str;
    string value;
    int num;
    cout << "Enter number of strings\n";
    cin >> num;
    for(int i = 0 ; i < num ; i++)
    {
        cin >> value;
        str.push_back(value);
    }
    powerSet(str);
}
