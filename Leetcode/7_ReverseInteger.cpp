class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x < 0){
            flag = 1;
        }
        int num = abs(x);
        long int NewNum = 0;
        
        while(num > 0){
            int rem = num % 10;
            if(NewNum*10 > INT_MAX){
                return 0;
            }          
            NewNum = NewNum*10 + rem;
            num = num/10;
            
            
        }
        
        if( flag==0){
            return NewNum;
        }
            
            else
                return NewNum*(-1);
        
            
        
        
        
    }
};