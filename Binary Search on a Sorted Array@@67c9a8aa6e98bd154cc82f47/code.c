binarySearch(int arr[],int n,int target){
    int mid,high,low;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}