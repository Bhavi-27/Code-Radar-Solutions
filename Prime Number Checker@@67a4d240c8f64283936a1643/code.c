int isPrime(num){
    if(num==1){
        return 0;
    }
    else{
        for(int i=0;i<num;i++){
            int num=0;
            if(num%i==0){
                num++;
            }
        }
        if(num>0){
            return 0;
        }
        else{
            return 1;
        }
    }
}  