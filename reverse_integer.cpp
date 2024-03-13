using namespace std;
#include <string>
#include <stdlib.h>



class Solution {
public:
    int reverse(int x) {
        string string_number = to_string(x);
        int length = string_number.length();

        if(length > 9 && string_number[0] != '-'){

            char temp1 = string_number[0];
            char temp2 = string_number[1];
            char temp3 = string_number[2];
            char temp4 = string_number[3];
            char temp5 = string_number[4];
            char temp6 = string_number[5];
            char temp7 = string_number[6];
            char temp8 = string_number[7];
            char temp9 = string_number[8];
            char temp10 = string_number[9];

            int nums1 = temp1 - '0';
            int nums2 = temp2 - '0';
            int nums3 = temp3 - '0';
            int nums4 = temp4 - '0';
            int nums5 = temp5 - '0';
            int nums6 = temp6 - '0';
            int nums7 = temp7 - '0';
            int nums8 = temp8 - '0';
            int nums9 = temp9 - '0';
            int nums10 = temp10 - '0';

            //2,147,483,647

            if( nums10 > 2){
                return 0;
            }else if(nums10 == 2 && nums9 > 1){
                return 0;
            }else if(nums10 == 2 && nums9 == 1 && nums8 > 4){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 > 7){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 > 4){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && 8 == 4 && nums7 == 7 && nums6 == 4 && nums5 > 8){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 > 3){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 &&nums3 > 6){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 && nums3 == 6 && nums2 > 4){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 && nums3 == 6 && nums2 == 4 && nums1 > 7){
                return 0;

            }

        }else if (length > 9 && string_number[0] == '-'){





            char temp1 = string_number[1];
            char temp2 = string_number[2];
            char temp3 = string_number[3];
            char temp4 = string_number[4];
            char temp5 = string_number[5];
            char temp6 = string_number[6];
            char temp7 = string_number[7];
            char temp8 = string_number[8];
            char temp9 = string_number[9];
            char temp10 = string_number[10];

            int nums1 = temp1 - '0';
            int nums2 = temp2 - '0';
            int nums3 = temp3 - '0';
            int nums4 = temp4 - '0';
            int nums5 = temp5 - '0';
            int nums6 = temp6 - '0';
            int nums7 = temp7 - '0';
            int nums8 = temp8 - '0';
            int nums9 = temp9 - '0';
            int nums10 = temp10 - '0';

            //-2147483650

            if( nums10 > 2){
                return 0;
            }else if(nums10 == 2 && nums9 > 1){
                return 0;
            }else if(nums10 == 2 && nums9 == 1 && nums8 > 4){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 > 7){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 > 4){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && 8 == 4 && nums7 == 7 && nums6 == 4 && nums5 > 8){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 > 3){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 &&nums3 > 6){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 && nums3 == 6 && nums2 > 5){
                return 0;

            }else if(nums10 == 2 && nums9 == 1 && nums8 == 4 && nums7 == 7 && nums6 == 4 && nums5 == 8 && nums4 == 3 && nums3 == 6 && nums2 == 5 && nums1 > 0){
                return 0;

            }




        }







        if(string_number[0] == '-'){

            for(int i = 0; i < length/2; i++){
            swap(string_number[i], string_number[length - i - 1]);
        }

        int solution = stoi(string_number);
        return solution * -1;

        }else{

            for(int i = 0; i < length/2; i++){
            swap(string_number[i], string_number[length - i - 1]);
        }

        return stoi(string_number);

        }



    }
};
