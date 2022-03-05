#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char> count;
    count.insert('a');
    count.insert('e');
    count.insert('i');
    count.insert('o');
    count.insert('u');
    
    string a,b;
    getline(cin,a);
    
    int i = 0;
    while(i < a.length())
    {   
        b.push_back(a[i]);
        if(count.find(a[i]) != count.end())
        {
            i = i+3;
        }
        else
            i++;
    }
    
    cout<<b<<endl;
	return 0;
}
