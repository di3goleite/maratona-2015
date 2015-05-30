#include <iostream>
#include <string>
using namespace std;
int main () {
    int n;
    string odd ("ODD ");
    string even ("EVEN ");
    string pos ("POSITIVE");
    string neg ("NEGATIVE");
    cin>>n;
    int x;
    while (n--) {
        string resp("");
        cin>>x;
        if (x==0)
            resp += "NULL";
        else {
            if (x%2==1)
                resp+= odd+pos;
            if (x%2==-1)
                resp+= odd+neg;
            if (x%2==0 && x >0)
                resp+= even+pos;
            if (x%2==0 && x <0)
                resp+= even+neg;
        }
        cout<<resp<<endl;
    }
 
} 
