int isPrime(int num){
    if(num==1){
        return 0;
    }
    else{
        for(int i=0;i<num;i++){
            int sum=0;
            if(num%i==0){
                sum++;
            }
        }
    if(sum>0){
            return 0;
        }
        else{
            return 1;
        }
    }
}  