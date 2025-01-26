/*
You are working on a word puzzle game where players must find whether two given words are anagrams of each other. An anagram is formed when two words have the same characters in the same frequency but in a different order. Your task is to write a program that reads set of words and group anagramic strings.
Input :{tar,rat,banana,art,nabana,baby}
Output :   
anagrams :{tar,rat,art} {banana,nabana}    
others   :{baby}
*/

#include <stdio.h>
#include <string.h>

int isAnagram(char *str1, char *str2) {
    int count[26] = {0};
    while (*str1) {
        count[*str1 - 'a']++;
        str1++;
    }
    while (*str2) {
        count[*str2 - 'a']--;
        str2++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n); 

    char words[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    int grouped[100] = {0}; 

    printf("anagrams:\n");

    for (int i = 0; i < n; i++) {
        if (grouped[i]) {
            continue;
        }

        int foundAnagram = 0; 

        for (int j = i + 1; j < n; j++) {
            if (!grouped[j] && isAnagram(words[i], words[j])) {
                if (!foundAnagram) {
                    printf("%s", words[i]);
                    grouped[i] = 1;
                    foundAnagram = 1;
                }
                printf(", %s", words[j]);
                grouped[j] = 1;
            }
        }

        if (foundAnagram) {
            printf("\n");
        }
    }

    printf("\nother: ");
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (!grouped[i]) {
            if (!first) {
                printf(",");
            }
            printf("%s", words[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
