//============================================================================
//problem link:http://codeforces.com/contest/118/problem/A
// Name        :  118 A . String Task.cpp
// Author      : MD NIHAD
//status :Accepted
//============================================================================

#include<bits/stdc++.h>

using namespace std;

int main  () {

string s,s2;
cin>>s;

for(int i = 0; i<s.size(); i++) {

    if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='Y'||s[i]=='y') {
        continue;
    }


else {
    s2+=".";
    s2+=tolower(s[i]);
}

}

cout<<s2<<endl;


return 0;
}
