int fastpow(int a,int b){
    if(b==0){
        return 1;
    }
    int smallans = fastpow(a,b/2);
    smallans*=smallans;
    if(b&1){
        smallans*=a;
    }
    return smallans;
}
