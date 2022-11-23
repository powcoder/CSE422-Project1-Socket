https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _BULLS_AND_COWS_
#define _BULLS_AND_COWS_

#include <string.h>

const int game_len = 4;

class Bulls_And_Cows
{
    public:
        Bulls_And_Cows(){};
        bool Guess(char *guess_input, int &bulls, int &cows);
        void Restart_Game();
        void get_secret_number(int &sn)
        {
            sn = 0;
            for(int i = 0; i < game_len; i++)
            {
                sn = sn * 10 + secret_number[i];
            }
        }
    private:
        int all_digits[10];
        int secret_number[game_len];
};

#endif
