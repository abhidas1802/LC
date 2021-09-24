class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1,i=0,c=0;
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            for(i=2;i<=n;i++){
                c=a+b;
                a=b;
                b=c;
            }
        
            return c;
        }
    }
};
