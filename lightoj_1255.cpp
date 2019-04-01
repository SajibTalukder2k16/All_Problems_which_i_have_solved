#include<bits/stdc++.h>
using namespace std;
vector<int> constructTempArray(string pattern) {
    vector<int> lps(pattern.length());
    int index = 0;
    for (int i = 1; i < (int) pattern.length(); ) {
        if (pattern[i] == pattern[index]) lps[i] = index + 1, ++index, ++i;
        else {
            if (index != 0) index = lps[index - 1];
            else lps[i] = index, ++i;
        }
    }
    return lps;
}

int KMPMultipleTimes (string text, string pattern) {

    int cnt=0;
    bool found = false;
    vector<int> lps = constructTempArray(pattern);
    int j = 0, i = 0;
    while (i < (int) text.length()) {
        if (text[i] == pattern[j]) ++i, ++j;
        else {
            if (j != 0) j = lps[j - 1];
            else ++i;
        }

        if (j == (int) pattern.length()) {
                cnt++;
            j = lps[j-1];
        }
    }
    return cnt;

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test_case;
    cin>>test_case;
    getchar();
    int cases;
    for(cases=1;cases<=test_case;cases++)
    {
        string text,pattern;
        getline(cin,text);
        getline(cin,pattern);
        int no_of_substr=KMPMultipleTimes(text,pattern);
        cout<<"Case "<<cases<<": "<<no_of_substr<<endl;
    }
}
