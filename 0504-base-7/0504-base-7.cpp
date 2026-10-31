class Solution {
public:
    string convertToBase7(int num) {

        // Agar number 0 hai to directly "0" return kar do
        if (num == 0) return "0";

        // Check karo ki original number negative tha ya nahi
        bool isNegative = (num < 0);

        // Positive bana do taaki conversion easily ho sake
        num = abs(num);

        // Yahan final base-7 number store hoga
        string result;

        // Jab tak number 0 nahi ho jata
        while (num) {

            // Last base-7 digit nikaalo
            // Example: 100 % 7 = 2
            // '0' add karne se int digit character ban jata hai
            result.push_back((num % 7) + '0');

            // Last digit use ho gayi, ab aage ke digits ke liye divide karo
            // Example: 100 / 7 = 14
            num /= 7;
        }

        // Agar original number negative tha,
        // to '-' bhi add kar do
        // Abhi reverse nahi hua hai, isliye end me add kar rahe hain
        if (isNegative)
            result.push_back('-');

        // Digits reverse order me store hue the,
        // unhe sahi order me le aao
        reverse(result.begin(), result.end());

        // Final answer return karo
        return result;
    }
};