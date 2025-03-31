int isPrime(int num){
    int m;
    if(num==1){
        return 0;
    }
    else{
        for(int i=0;i<num;i++){
            if(num%i==0){
                m++;
            }
        }
    if(m >=1){
            return 0;
        }
        else{
            return 1;
        }
    }
}  