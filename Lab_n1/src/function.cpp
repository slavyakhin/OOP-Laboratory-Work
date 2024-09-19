#include <string>

int function(std::string str) {

    int result = 0;
    
    for (auto c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++result;
        }
    }
/*
    const char vowels[] = "aeiou"; // y isn't considered a vowel
    for (auto i : str) {
        for (int j = 0; j < 5; ++j) {
            if (i == vowels[j]) {
                ++result;
                break;
            }
        }
    }
*/

    return result;
}