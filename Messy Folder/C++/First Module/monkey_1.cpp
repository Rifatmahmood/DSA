#include <iostream>
#include <cstring>
#include <algorithm> // for std::sort

using namespace std;

int main() {
    char s[10001];

    while (cin.getline(s, 10001)) {
        int len = strlen(s);
        char result[len];

        int j = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ') {
                result[j++] = s[i];
            }
        }

        // Null-terminate the result string
        result[len] = '\0';

        // Sort the result array
        sort(result, result + len);

        // Print the sorted characters
        cout << result << endl;
    }

    return 0;
}
