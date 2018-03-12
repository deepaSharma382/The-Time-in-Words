#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    string hr;
    string min;
    string result;
    if(m>30)
        h = h+1;
    switch(h)
    {
        case 1:
            hr = "one ";
            break;
        case 2:
            hr = "two ";
            break;
        case 3:
            hr = "three ";
            break;
        case 4:
            hr = "four ";
            break;
        case 5:
            hr = "five ";
            break;
        case 6:
            hr = "six ";
            break;
        case 7:
            hr = "seven ";
            break;
        case 8:
            hr = "eight ";
            break;
        case 9:
            hr = "nine ";
            break;
        case 10:
            hr = "ten ";
            break;
        case 11:
            hr = "eleven ";
            break;
        case 12:
            hr = "twelve ";
            break;
    }
    switch(m)
    {
        case 0:
            min = "o' clock ";
            break;
        case 1:
            min = "one minute past ";
            break;
        case 2:
            min = "two minutes past ";
            break;
        case 3:
            min = "three minutes past ";
            break;
        case 4:
            min = "four minutes past ";
            break;
        case 5:
            min = "five minutes past ";
            break;
        case 6:
            min = "six minutes past ";
            break;
        case 7:
            min = "seven minutes past ";
            break;
        case 8:
            min = "eight minutes past ";
            break;
        case 9:
            min = "nine minutes past ";
            break;
        case 10:
            min = "ten minutes past ";
            break;
        case 11:
            min = "eleven minutes past ";
            break;
        case 12:
            min = "twelve minutes past ";
            break;
        case 13:
            min = "thirteen minutes past ";
            break;
        case 14:
            min = "fourteen minutes past ";
            break;
        case 15:
            min = "quarter past ";
            break;
        case 16:
            min = "sixteen minutes past ";
            break;
        case 17:
            min = "seventeen minutes past ";
            break;
        case 18:
            min = "eighteen minutes past ";
            break;
        case 19:
            min = "nineteen minutes past ";
            break;
        case 20:
            min = "twenty minutes past ";
            break;
        case 21:
            min = "twenty one minutes past ";
            break;
        case 22:
            min = "twenty two minutes past ";
            break;
        case 23:
            min = "twenty three minutes past ";
            break;
        case 24:
            min = "twenty four minutes past ";
            break;
        case 25:
            min = "twenty five minutes past ";
            break;
        case 26:
            min = "twenty six minutes past ";
            break;
        case 27:
            min = "twenty seven minutes past ";
            break;
        case 28:
            min = "twenty eight minutes past ";
            break;
        case 29:
            min = "twenty nine minutes past ";
            break;
        case 30:
            min = "half past ";
            break;
        case 31:
            min = "twenty nine minutes to ";
            break;
        case 32:
            min = "twenty eight minutes to ";
            break;
        case 33:
            min = "twenty seven minutes to ";
            break;
        case 34:
            min = "twenty six minutes to ";
            break;
        case 35:
            min = "twenty five minutes to ";
            break;
        case 36:
            min = "twenty four minutes to ";
            break;
        case 37:
            min = "twenty three minutes to ";
            break;
        case 38:
            min = "twenty two minutes to ";
            break;
        case 39:
            min = "twenty one minutes to ";
            break;
        case 40:
            min = "twenty minutes to ";
            break;
        case 41:
            min = "nineteen minutes to ";
            break;
        case 42:
            min = "eighteen minutes to ";
            break;
        case 43:
            min = "seventeen minutes to ";
            break;
        case 44:
            min = "sixteen minutes to ";
            break;
        case 45:
            min = "quarter to ";
            break;
        case 46:
            min = "fourteen minutes to ";
            break;
        case 47:
            min = "thirteen minutes to ";
            break;
        case 48:
            min = "twelve minutes to ";
            break;
        case 49:
            min = "eleven minutes to ";
            break;
        case 50:
            min = "ten minutes to ";
            break;
        case 51:
            min = "nine minutes to ";
            break;
        case 52:
            min = "eight minutes to ";
            break;
        case 53:
            min = "seven minutes to ";
            break;
        case 54:
            min = "six minutes to ";
            break;
        case 55:
            min = "five minutes to ";
            break;
        case 56:
            min = "four minutes to ";
            break;
        case 57:
            min = "three minutes to ";
            break;
        case 58:
            min = "two minutes to ";
            break;
        case 59:
            min = "one minute to ";
            break;
    }
    if(m==0)
        result = hr + min;
    else
    result = min + hr;
   return(result);
}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h, m);
    if((h>=1||h<12)&&(m>=0||m<60))
    cout << result << endl;
    return 0;
}
