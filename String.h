#ifndef STRING_H
#define STRING_H

// Returns the length of |str|, not including the null character.
int StrLen(char *str);

// Copies |src| into |dst| or |len| - 1 chars from |src|
// into |dst|, whichever comes first.
// Always appends a null character at the end of |dst|.
// Returns EXIT_FAILURE if the length of |dst| is less than |len| - 1.
int StrCpy(char *dst, char *src, int len);

// Appends |src| onto |dst| or |len| - 1 chars from |src| onto
// |dst|, whichever comes first.
// Always appends a null character at the end of |dst|.
int StrCat(char *dst, char *src, int len);

// Returns a char pointer to the first occurence of |find| in |str|.
// Returns NULL if |find| doesn't exist in |str|.
char *StrFindChar(char *str, char find);

// Returns 1, 0, -1 if |str1| is greater, equal, or less than |str2|.
int StrCmp(char *str1, char *str2);

#endif
