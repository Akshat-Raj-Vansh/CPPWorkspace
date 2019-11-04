#include <iostream>
#include <string>
using namespace std;

bool match(string s, int sl, string n, int nl){
if(sl!= nl)
return false;
else
{
    for(int i=0; i<sl;i++)
    {
        if(s[i]!=n[i])
        return false;
    }
}
return true;
}
int Length(string s){
    int l=0;
    int i=0;
    while(s[i]!='\0'){
        l++;
        i++;
    }
    return l;
}

int main()
{
    cout<<"Enter the number of people"<<endl;
    int n;
    cin>>n;
    string names[n];
     cin.ignore();
    for(int i=0; i<n; i++){
        cout<<"Enter name"<<endl;
        getline(cin, names[i]);
    }
    string search;
    cout<<"Enter the name to search"<<endl;
    getline(cin, search);
    for(int i=0; i<n; i++)
    {
        if(match(search, Length(search), names[i], Length(names[i])))
        {
            cout<<"Match found at position "<<i+1<<endl;
            break;
        }
    }
    return 0;
}