class Solution {
public:

int nums(char roman)
{
    if(roman=='I')
    return 1;

    else if(roman=='V')
    return 5;

     else if(roman=='X')
    return 10;

     else if(roman=='L')
    return 50;

     else if(roman=='C')
    return 100;

     else if(roman=='D')
    return 500;

     else 
    return 1000;

    }





    int romanToInt(string s) {
        int sum=0,index=0;
        while(index<(s.size()-1))
        {
            if(nums(s[index])<nums(s[index+1]))
            {
                sum-=nums(s[index]);
            }
            else
            {
                sum+=nums(s[index]);
            }

            index++;
        }
        
        sum+=nums(s[s.size()-1]);

        return sum;

        


    }
};