#include <stdio.h>

int stringLength(char[]);
void stringCopy(char[], char[]);
void stringReverse(char[]);
void stringConcatenate(char[], char[]);
int stringCompare(char[], char[]);
int isPalindrome(char[]);
void changeCase(char[]);

int main()
{
    char str1[100], str2[100];
    int choice;

    do
    {
        printf("\nString Operations Menu\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Reverse\n");
        printf("4. String Concatenate\n");
        printf("5. String Compare\n");
        printf("6. Check Palindrome\n");
        printf("7. Change Case\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of the string: %d\n", stringLength(str1));
            break;

        case 2:
            printf("Enter the source string: ");
            scanf("%s", str1);
            stringCopy(str1, str2);
            printf("Copied string: %s\n", str2);
            break;

        case 3:
            printf("Enter a string: ");
            scanf("%s", str1);
            stringReverse(str1);
            printf("Reversed string: %s\n", str1);
            break;

        case 4:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            stringConcatenate(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 5:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            if (stringCompare(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 6:
            printf("Enter a string: ");
            scanf("%s", str1);
            if (isPalindrome(str1))
                printf("The string is a palindrome.\n");
            else
                printf("The string is not a palindrome.\n");
            break;

        case 7:
            printf("Enter a string: ");
            scanf("%s", str1);
            changeCase(str1);
            printf("String with changed case: %s\n", str1);
            break;

        case 8:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 8);

    return 0;
}

int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void stringCopy(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void stringReverse(char str[])
{
    int length = stringLength(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void stringConcatenate(char str1[], char str2[])
{
    int i, j;

    i = stringLength(str1);
    for (j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
}

int stringCompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
            return 0; 
        i++;
    }
    return str1[i] - str2[i];
}

int isPalindrome(char str[])
{
    int length = stringLength(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

void changeCase(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
}
