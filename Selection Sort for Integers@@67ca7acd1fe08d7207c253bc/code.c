int selectionSort(int arr[], int n){
    int min_term;
    for(int i=0;i<n-1;i++){
        min_term=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min_term){
                min_term=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_term];
        arr[min_term]=temp;
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}