#include <stdlib.h>

#include "String.h"

// Returns the length of |str|, not including the null character.
int StrLen(char *str) {
   int len = 0;

   while (*str++) {
      ++len;
   }

   return len;
}

// Copies |src| into |dst| or |len| - 1 chars from |src|
// into |dst|, whichever comes first.
// Always appends a null character at the end of |dst|.
// Returns an error if the length of |dst| is less than |len| - 1.
int StrCpy(char *dst, char *src, int len) {
   if (StrLen(dst) < len - 1) {
      return EXIT_FAILURE;
   }

   while (len-- && (*dst++ = *src++))
      ;

   *--dst = 0;

   return EXIT_SUCCESS;
}

// Appends |src| onto |dst| or |len| - 1 chars from |src| onto
// |dst|, whichever comes first.
// Always appends a null character at the end of |dst|.
int StrCat(char *dst, char *src, int len) {
   while (*dst){
      ++dst;
   }

   while (len-- && (*dst++ = *src++))
      ;

   *--dst = 0;

   return EXIT_SUCCESS;
}

// Returns a char pointer to the first occurence of |find| in |str|.
// Returns NULL if |find| doesn't exist in |str|.
char *StrFindChar(char *str, char find) {
   while (*str && *str != find) {
      ++str;
   }

   if (!*str) {
      return NULL;
   }

   return str;
}

// Returns 1, 0, -1 if |str1| is greater, equal, or less than |str2|.
int StrCmp(char *str1, char *str2) {
   while (*str1 == *str2) {
      if (*str1 == 0) {
         return 0;
      }

      ++str1;
      ++str2;
   }

   if (*str1 < *str2) {
      return -1;
   }

   return 1;
}
