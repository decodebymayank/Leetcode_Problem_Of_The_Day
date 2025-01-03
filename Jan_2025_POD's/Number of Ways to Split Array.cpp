#include<bits/stdc++.h>
using namespace std;
int waysToSplitArray(vector<int>& nums) {
        int vecsize = nums.size() ;
    int leftcount = 0 ;
    int rightcount = 0 ;
    int finalans= 0;
    int checkrightfirst = 0 ;
    for(int i = 0 ; i < nums.size() ; i++)
    {       
        int leftfirst = i+1;
        for(int l = 0 ; l < leftfirst ; l++)
        {
            if(l==leftfirst)
            {   
                break;
            }
            
            leftcount+=nums[l] ;
        }

        int rightfirst = nums.size() - i - 1 ;
        for(int r = i+1 ; r < vecsize ; r++)
        {   ++checkrightfirst;
            if(checkrightfirst>rightfirst)
            {
                break;
            }
            rightcount+=nums[r] ;
        }
        
        if(leftcount>=rightcount && i <vecsize-1)
        {
            finalans++;
        }
        leftcount=0;
        rightcount=0;
        checkrightfirst=0;
    }

    return finalans;
}
int main()
{
    vector<int> vec{10,4,-8,7} ;
    int res = waysToSplitArray(vec);
    cout << res << endl;
}