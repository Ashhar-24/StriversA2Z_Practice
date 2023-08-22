int calcGCD(int n, int m) {

    // O(log(min(m,n))) => O(log(n))
    // while(n>0 && m>0){
    //     if(n>m){
    //         n=n%m;
    //     }
    //     else{
    //         m%=n;
    //     }
    // }

    // if(n==0) return m;
    // else return n;


    // Brute force O(min(m,n)) => O(n)
    int gcd = 1;
    for (int i = 1; i <= min(m, n); i++) {
        if (n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}