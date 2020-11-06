// Find the question here: https://www.linkedin.com/posts/mircead_codinginterview-leetcode-problemsolvingskills-activity-6730461314239537152-lnsz

//Solution 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int giveMeSunshine(vector<int> &sortedVector, int value )
{
     vector<int>::iterator lower, upper;
    // Lower and Upper Bound Indices
     auto index_lower = (lower_bound(sortedVector.begin(), sortedVector.end(), value))-sortedVector.begin();;
     auto index_upper = (upper_bound(sortedVector.begin(), sortedVector.end(), value))-sortedVector.begin();;
    
    // Data at Lower Bound Index
    auto data_lower = sortedVector[index_lower];
    
    // DATA validation Logic
    
    if(data_lower == value) //data existance check 
    {
        //returns the repetitions.
        return ( index_upper - index_lower ) ;       
    } 
    else{
        //Data doesnt exist. 0 repetitions.
        return 0;
    }
     
   cout<<index_lower<<index_upper;
     
     return 0; //0 exit code, I got sunshine.
}

int main()
{
   vector<int> sortedVector{1, 2, 3, 3, 3, 3, 4};
   int value = 3;
   cout<<giveMeSunshine(sortedVector, value);

return 0; 
}
