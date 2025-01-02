#include<bits/stdc++.h>
using namespace std;
vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
          int start = 0 ;
    int end = 0 ;
    vector<int> vowelcount ;
    int foundvowel = 0 ;
    for(int i = 0 ; i < queries.size() ; i++)
    {
        for(int j = 0 ; j < queries[0].size() ; j++)
        {
            if(j!=1)
            {
                start = queries[i][j];
            }
            else
            {
                end = queries[i][j] ;
            }
        }


        for(int wordstart = start ; wordstart <=end ; wordstart++)
        {
            string st = words[wordstart] ;
            char chst = st[st.length()-1] ;
            char chendt = st[0] ;
            if((chst == 'a' || chst == 'e' ||chst == 'i' ||chst == 'o' ||chst == 'u') && (chendt == 'a' || chendt == 'e' ||chendt == 'i' ||chendt == 'o' ||chendt == 'u'))
            {
                foundvowel++;
            }
        }
        
        vowelcount.push_back(foundvowel);
        foundvowel = 0 ;
    }

    return vowelcount;
    }

int main()
{
    vector<string> words{"aba","bcb","ece","aa","e"} ;
    vector<vector<int>> queries{{0,2},{1,4},{1,1}} ;

    vector<int> result = vowelStrings(words , queries);
}