class Solution {
public:
  //  string fractionAddition(string expression) {
        string fractionAddition(string s) {
        stringstream ss(s);
        int n=0,d=1,a,b;
        char c;
        while(ss>>a>>c>>b){
            n=n*b+a*d;
            d*=b;
            int g=gcd(abs(n),d);
            n/=g;
            d/=g;
        }
        return to_string(n)+"/"+to_string(d);
    }
};