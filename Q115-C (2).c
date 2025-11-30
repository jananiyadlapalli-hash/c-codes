#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; s[i]; i++) {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
