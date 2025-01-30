class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
       /*
       we take to two pointers from left and right, in every iteration we check the condition if left element is less than k and right element is greater than k,
       if the conditions are true , we'll increment left and decrement right.
       if both the conditions are false, we'll swap the elements
       */ 
        int i=0, j=arr.size()-1,result=0;
        
        while(i<j)
        {
            if(arr[i]<=k)
            i++;
            else if(arr[j]>k)
            j--;
            else
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
                result++;
            }
        }
        return result;
    }
};
