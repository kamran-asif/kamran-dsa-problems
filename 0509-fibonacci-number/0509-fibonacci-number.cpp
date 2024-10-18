class Solution {
public:
  int recsolve(int n){
    if(n==1||n==0){
      return n;
    }
    int ans=recsolve(n-1)+recsolve(n-2);
    return ans;
  }
    int fib(int n) {
      int ans=recsolve(n);
      return ans;
    }
};