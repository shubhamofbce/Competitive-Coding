bool checkprime(int n){
     // Return false for Composite and true for prime numbers  
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){return false;}
    }
    return true;
}
