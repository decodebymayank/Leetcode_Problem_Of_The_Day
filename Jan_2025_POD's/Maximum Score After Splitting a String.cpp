#include<bits/stdc++.h>
using namespace std;
int maxScore(string s) {
    vector<int> vec;
    string left="";
    int zerocount = 0 ;
    int onecount = 0 ;
    string right="";
    for(int i = 0 ; i < s.size() ; i++)
    {
        left +=s[i] ;
        if(i+1<s.size())
        {
                for(int j =i+1 ; j < s.size() ; j++)
        {
            right+=s[j] ;
        }
        
        //count 0
        for(int i = 0 ; i < left.size() ; i++)
        {
            char ss = left[i] ;
            if(left[i] == '0')
            {
                zerocount++;
            }
        }
        
        
        //count 1
        for(int j = 0 ; j < right.size() ; j++)
        {
            if(right[j] == '1')
            {
                onecount++;
            }
        }
        
        int vecval = zerocount + onecount ; 
        vec.push_back(vecval) ;
        
        zerocount = 0 ;
        onecount = 0 ;
        right="";
     
        }
           
        
    }
        
    int res = *max_element(vec.begin() , vec.end());
    
    return res;    
    
    }
int main()
{
    string s = "00011011";
    int result = maxScore(s);
    cout << result << endl;
}