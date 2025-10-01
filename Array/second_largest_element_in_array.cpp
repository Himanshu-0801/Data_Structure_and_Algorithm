// second largest  at gfg 

int getSecondLargest(int *arr, int n) {
    int largest = -1 , s_largest = -1;
    for (int i= 0;i<n;i++){
        if(arr[i]>largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i]>s_largest && arr[i]!= largest){
            s_largest= arr[i];
        }
        
        
        
    }return  s_largest;
     
}
