// Problem Statement

// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

// Input Format

// First line will contain N, the size of the array
// Second line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// 0 <= A[i] <= 10^9; here 0 <= i < N
// Output Format

// Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3.
// Sample Input 0

// 5
// 1 4 2 5 3
// Sample Output 0

// 2 1
// Sample Input 1

// 4
// 6 9 12 15
// Sample Output 1

// 2 2

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int count2 = 0, count3 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             count2++;
//         }
//         else if (a[i] % 3 == 0)
//         {
//             count3++;
//         }
//     }
//     printf("%d %d", count2, count3);
//     return 0;
// }

// Problem Statement

// You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

// Note: Vowels are a,e,i,o and u. The rest are called consonants.

// Input Format

// Input will contain a string S.
// Constraints

// 1 <= |S| <= 100000 ; Here |S| means the length of string S.
// Output Format

// Output the number of consonants.
// Sample Input 0

// thefoxisgone
// Sample Output 0

// 7
// Sample Input 1

// sjxapw
// Sample Output 1

// 5

// #include <stdio.h>
// int main()
// {
//     char s[100001];
//     scanf("%s", &s);
//     int count = 0;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
//         {
//             count++;
//         }
//     }

//     printf("%d", count);
//     return 0;
// }

// Problem Statement

// You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

// Input Format

// First line will contain T, the number of test cases.
// Each test case will contain only S.
// Constraints

// 1 <= T <= 1000
// 1 <= |S| <= 10000; Here |S| means the length of S.
// Output Format

// Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
// Sample Input 0

// 2
// theFox25IsBrave
// ILoveYou100TimesAndSay2Also
// Sample Output 0

// 3 10 2
// 7 16 4

// for loop
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         char s[10001];
//         scanf("%s", &s);
//         int countCapital = 0, countSmall = 0, countDigits = 0;
//         for (int j = 0; s[j] != '\0'; j++)
//         {
//             if (s[j] >= 'A' && s[j] <= 'Z')
//             {
//                 countCapital++;
//             }
//             else if (s[j] >= 'a' && s[j] <= 'z')
//             {
//                 countSmall++;
//             }
//             else if (s[j] >= '0' && s[j] <= '9')
//             {
//                 countDigits++;
//             }
//         }

//         printf("%d %d %d\n", countCapital, countSmall, countDigits);
//     }
//     return 0;
// }

// Problem Statement

// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.

// Input Format

// Input will contain only S.
// Constraints

// 1 <= |S| <= 10000; Here |S| means the length of S.
// Output Format

// Ouput in the format show in the sample output.
// Sample Input 0

// thefoxisbrave
// Sample Output 0

// a - 1
// b - 1
// e - 2
// f - 1
// h - 1
// i - 1
// o - 1
// r - 1
// s - 1
// t - 1
// v - 1
// x - 1
// Sample Input 1

// dotheyloveme
// Sample Output 1

// d - 1
// e - 3
// h - 1
// l - 1
// m - 1
// o - 2
// t - 1
// v - 1
// y - 1

// #include <stdio.h>
// int main()
// {
//     char s[10001];
//     scanf("%s", &s);
//     int count[26] = {0};
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         int idx = s[i] - 'a';
//         count[idx]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] > 0)
//         {
//             printf("%c - %d\n", 'a' + i, count[i]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char s[10001];
//     scanf("%s", &s);

//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         int count = 0;

//         for (int i = 0; s[i] != '\0'; i++)
//         {
//             if (s[i] == ch)
//             {
//                 count++;
//             }
//         }

//         if (count > 0)
//         {
//             printf("%c - %d\n", ch, count);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int count = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ch)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("%c - %d\n", ch, count);
        }
    }
    return 0;
}

// Problem Statement

// Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

// Note: If the answer is a floating value, take the integer part of the answer.

// Input Format

// First line will contain T, the number of test cases.
// For each test case, input will contain three positive integers M1, M2 and D.
// Constraints

// 1 <= T <= 1000
// 1 <= M1 <= 1000
// 0 <= M2 <= 1000
// 1 <= D <= 100
// Output Format

// Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.
// Sample Input 0

// 4
// 10 5 15
// 4 0 5
// 4 1 5
// 7 1000 1
// Sample Output 0

// 5
// 0
// 1
// 1
// Explanation 0

// For the first test case - If 10 people can complete the work in 15 days, then 15 people can complete that work in 10 days which is 5 days less than the previous time. So the answer is 5.

// For the last test case - 7 people can complete the work in 1 day. Then 1007 people can complete this in 0.006 day, as we will take the integer part. That means they can complete the task in 0 day which is 1 day less then the original time, so the answer is 1.

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         int M1, M2, D;
//         scanf("%d %d %d", &M1, &M2, &D);
//         int totalFarmers = M1 + M2;
//         int newDays = (M1 * D);
//         newDays = newDays / totalFarmers;
//         int fewerDays = D - newDays;
//         printf("%d\n", fewerDays);
//     }

//     return 0;
// }