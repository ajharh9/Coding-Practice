class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lNum = digits.back();
        int carry = lNum%10;

        if(lNum != 9){
            digits.back() += 1;
        }else{
            int i = digits.size()-1;
            while(i >= 0 && digits[i] == 9 ){
                digits[i] = 0;
                i--;
            }
            if(i < 0){
                digits.insert(digits.begin(),1);
            }else{
                digits[i] += 1;
            }
        }
        return digits;
    }
};
