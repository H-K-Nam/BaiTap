#include <iostream>
#include <map>
#include <string>

using namespace std;

void printLargeWord(const string& word) {
    map<char, string> letters = {
        {'A', "  *  \n * * \n*****\n*   *\n*   *\n"},
        {'B', "**** \n*   *\n**** \n*   *\n**** \n"},
        {'C', " ****\n*    \n*    \n*    \n ****\n"},
        {'D', "***  \n*  * \n*   *\n*  * \n***  \n"},
        {'E', "*****\n*    \n**** \n*    \n*****\n"},
        {'F', "*****\n*    \n**** \n*    \n*    \n"},
        {'G', " ****\n*    \n*  **\n*   *\n ****\n"},
        {'H', "*   *\n*   *\n*****\n*   *\n*   *\n"},
        {'I', "*****\n  *  \n  *  \n  *  \n*****\n"},
        {'J', "  ***\n    *\n    *\n*   *\n *** \n"},
        {'K', "*  * \n* *  \n**   \n* *  \n*  * \n"},
        {'L', "*    \n*    \n*    \n*    \n*****\n"},
        {'M', "*   *\n** **\n* * *\n*   *\n*   *\n"},
        {'N', "*   *\n**  *\n* * *\n*  **\n*   *\n"},
        {'O', " *** \n*   *\n*   *\n*   *\n *** \n"},
        {'P', "**** \n*   *\n**** \n*    \n*    \n"},
        {'Q', " *** \n*   *\n*   *\n*  **\n ****\n"},
        {'R', "**** \n*   *\n**** \n* *  \n*  **\n"},
        {'S', " ****\n*    \n *** \n    *\n**** \n"},
        {'T', "*****\n  *  \n  *  \n  *  \n  *  \n"},
        {'U', "*   *\n*   *\n*   *\n*   *\n *** \n"},
        {'V', "*   *\n*   *\n*   *\n * * \n  *  \n"},
        {'W', "*   *\n*   *\n* * *\n** **\n*   *\n"},
        {'X', "*   *\n * * \n  *  \n * * \n*   *\n"},
        {'Y', "*   *\n * * \n  *  \n  *  \n  *  \n"},
        {'Z', "*****\n   * \n  *  \n *   \n*****\n"}
    };

    for (int i = 0; i < 5; ++i) {
        for (char letter : word) {
            if (isalpha(letter) && letters.find(toupper(letter)) != letters.end()) {
                cout << letters[toupper(letter)].substr(i * 6, 5) << "  ";
            } else {
                cout << "     ";
            }
        }
        cout << endl;
    }
}

int main() {
    string word;
    do
    {
        cin >> word;
    }
    while(word.length()>12);
    printLargeWord(word);
    return 0;
}
