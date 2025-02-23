
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n =arr.size();
        int minvalue=arr[0];
        int maxvalue=arr[0];
        for (int i =1;  i<n;i++){
            if(arr[i]<minvalue)minvalue=arr[i];
            if(arr[i]>maxvalue)maxvalue=arr[i];
               
        }
        return{minvalue,maxvalue}; 
        
    }
};
