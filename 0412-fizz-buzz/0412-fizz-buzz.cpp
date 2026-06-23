class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string>stupid;
    for(int i = 1;i<=n;i++) {
        if (i%3==0 && i%5==0){
            stupid.push_back("FizzBuzz");
        }else if(i%3==0){
            stupid.push_back("Fizz");
        }else if(i%5==0){
            stupid.push_back("Buzz");
        }else{
            stupid.push_back(to_string(i));
        }
        
        
    

    }
    return stupid;
    }
};