class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> findDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        
        if(n == 0 || n==1)
            return arr;
            
        int j = 0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] != arr[i+1])
                arr[j++] = arr[i];
        }
        
        arr[j++] = arr[n-1];
        arr.resize(j);
        return arr;
    }
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        return findDuplicates(arr);
    }
};