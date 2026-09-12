class Solution {
public:
    string intToRoman(int num) {
        

        string s = "";
        while(num>0){
            // 1000-900
            if(num >= 1000){
                int k = num/1000;
                while(k>0){
                    s += 'M';
                    k--;
                }

                num %= 1000;
            }
            else if(num >= 900){
                s += "CM";
                num %= 900;
            }
            // 500-400
            else if(num >= 500){
                int k = num/500;
                while(k>0){
                    s += 'D';
                    k--;
                }

                num %= 500;
            }
            else if(num >= 400){
                s += "CD";
                num %= 400;
            }
            //100-90
            else if(num >= 100){
                int k = num/100;
                while(k>0){
                    s += 'C';
                    k--;
                }

                num %= 100;
            }
            else if(num >= 90){
                s += "XC";
                num %= 90;
            }
            // 50-40
            else if(num >= 50){
                int k = num/50;
                while(k>0){
                    s += 'L';
                    k--;
                }

                num %= 50;
            }
            else if(num >= 40){
                s += "XL";
                num %= 40;
            }
            // 10-9
            else if(num >= 10){
                int k = num/10;
                while(k>0){
                    s += 'X';
                    k--;
                }

                num %= 10;
            }
            else if(num >= 9){
                s += "IX";
                num %= 9;
            }
            // 5-4
            else if(num >= 5){
                int k = num/5;
                while(k>0){
                    s += 'V';
                    k--;
                }

                num %= 5;
            }
            else if(num >= 4){
                s += "IV";
                num %= 4;
            }

            else{
                s += 'I';
                num --;
            }
        }

        return s;
    }
};