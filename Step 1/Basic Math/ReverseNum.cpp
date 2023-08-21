class Solution {
public:
    int reverse(int x) {
        long long revnum = 0;
        // As revnum involves multiplication with 10 and n<2^31 so to avoid overflow 'long long' is used
        while (x != 0) {
            int ld = x % 10;
            revnum = (revnum * 10) + ld;
            x /= 10;
        }

        /* given in th question that if revnum goes beyond 2^31/ -2^31 return 0;
           As INT_MAX gives the maximum number that can be stored in 'int' data type (similarly for INT_MIN),
           hence we use both to check the edge conditions.

        */
        if (revnum > INT_MAX || revnum < INT_MIN)
            return 0;
        else
            return revnum;
    }
};