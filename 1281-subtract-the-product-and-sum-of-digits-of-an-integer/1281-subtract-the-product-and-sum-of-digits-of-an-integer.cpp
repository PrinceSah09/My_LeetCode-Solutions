class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd=1,sum=0;
        while(n){
            prd *= n%10;
            sum += n%10;
            
            n /= 10;
        }
        return prd-sum;
    }
};


/*

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        while(n!=0)
		{  
			//parsing the number digit by digit
            sum+=n%10;               // adding digit to sum variable
            product*=n%10;          // adding digit to product variable
            n/=10;
        }
        return product-sum;       // returning the difference of product and sum 
        
    }
};


*/