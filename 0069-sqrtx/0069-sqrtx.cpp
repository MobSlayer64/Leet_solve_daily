class Solution {
public:
    int mySqrt(int x) {
     int a =  pow(x,0.5);
     a= floor(a);
     return a;
    }
};