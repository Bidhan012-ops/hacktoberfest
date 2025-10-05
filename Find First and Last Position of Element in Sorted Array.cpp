class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n=arr.size();
int low1=0,low2=0;
int high1=n-1,high2=n-1;
int first=-1;
while(low1<=high1){
    int mid=(low1+high1)/2;
    if(arr[mid]>x) high1=mid-1;
    else if (arr[mid]<x) low1=mid+1;
    else{
        first=mid;
        high1=mid-1;
    }
}
int last=-1;
while(low2<=high2){
    int mid=(low2+high2)/2;
    if(arr[mid]>x) high2=mid-1;
    else if (arr[mid]<x) low2=mid+1;
    else{
        last=mid;
        low2=mid+1;
    }
}
return {first,last};
    }
};
