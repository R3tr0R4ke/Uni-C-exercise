#include <stdio.h>
#include <ctype.h>

void main()
{
    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
            isdigit('8') ? "8 is a " : "8 is not a ", "digit",
            isdigit("q") ? "# is a " : "# is not a ", "digit");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalpha: ",
            isalpha('A')  ? "A is a " : "A is not a ", "letter",
            isalpha('b')  ? "b is a " : "b is not a ", "letter",
            isalpha('&')  ? "& is a " : "& is not a ", "letter",
            isalpha('4')  ? "4 is a " : "4 is not a ", "letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "Accordin to isalnum: ",
            isalnum('A') ? "A is a " : "A is not a ", "digit or letter",
            isalnum('8') ? "8 is a " : "8 is not a ", "digit or letter",
            isalnum('#') ? "# is a " : "# is not a ", "digit or letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%S%s\n\n", "Accorfing to isxdigit: ",
            isxdigit('F') ? "F is a " : "F is not a ", "hexadecimal digit",
            isxdigit('J') ? "J is a " : "J is not a ", "hexadecimal digit",
            isxdigit('7') ? "7 is a " : "7 is not a ", "hexadecimal digit",
            isxdigit('$') ? "$ is a " : "$ is not a ", "hexadecimal digit",
            isxdigit('f') ? "f is a " : "f is not a ", "hexadecimal digit");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower: ",
            islower('p') ? "p is a " : "p is not a ", "lowercase letter",
            islower('P') ? "P is a " : "P is not a ", "lowercase letter",
            islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
            islower('!') ? "! is a " : "! is not a ", "lowercase letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper: ",
            isupper('D') ? "D is an " : "D is not an ", "uppercase letter",
            isupper('d') ? "d is an " : "d is not an ", "uppercase letter",
            isupper('8') ? "8 is an " : "8 is not an ", "uppercase letter",
            isupper('$') ? "$ is an " : "$ is not an ", "uppercase letter");

    printf("%s%c\n%s%c\n%s%c\n%s%c\n\n",
            "u converted to uppercase is ", toupper('u'),
            "7 converted to uppercase is ", toupper('7'),
            "$ converted to uppercase is ", toupper('$'),
            "L converted to uppercase is ", toupper('L'));

    printf("%s%c\n%s%c\n%s%c\n%s%c\n\n",
            "u converted to lowercase is ", tolower('u'),
            "7 converted to lowercase is ", tolower('7'),
            "$ converted to lowercase is ", tolower('$'),
            "L converted to lowercase is ", tolower('L'));

    printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n", "According to isspace: ",
            "Newline ", isspace('\n') ? "is a " : "is not a ", "whitespace character", 
            "Horizontal tab ", isspace('\t') ? "is a " : "is not a ", "whitespace character",
            isspace('\%') ? "is a " : "is not a ", "whitespace character");

    printf("%s\n%s%s%s\n%s%s\n\n", "According to iscntrl: ",
            "Newline ", iscntrl('\n') ? "is a " : "is not a ",
            "control character ", iscntrl('$') ? "$ is a " : "$ is not a ", "control character");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to ispunct: ",
            ispunct(';') ? "; is a " : "; is not a ", "punctuation character",
            ispunct('Y') ? "Y is a " : "Y is not a ", "punctuation character",
            ispunct('#') ? "# is a " : "# is not a ", "punctuation character");

    printf("%s\n%s%s\n%s%s%s\n\n", "According to isgraph: ",
            isgraph('Q') ? "Q is a " : "Q is not a ", "printing character other than a space",
            "Space", isgraph(' ') ? "  is a " : "  is not a ", "printing character other than a space");
}