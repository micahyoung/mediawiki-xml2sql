/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -gptoC -Nlu_elt keywords  */
/* Computed positions: -k'1,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "keywords"

enum element {
  el_mediawiki,
  el_siteinfo,
  el_sitename,
  el_base,
  el_generator,
  el_case,
  el_namespaces,
  el_namespace,
  el_page,
  el_redirect,
  el_title,
  el_id,
  el_restrictions,
  el_revision,
  el_timestamp,
  el_contributor,
  el_username,
  el_ip,
  el_minor,
  el_comment,
  el_text,
};
#line 26 "keywords"
struct eltmap { char *name; enum element t; };

#define TOTAL_KEYWORDS 21
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 12
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 34
/* maximum key range = 33, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35,  3,  5,
       0,  0, 35, 25, 35,  0, 35, 35, 35,  5,
      10, 15, 20, 35,  0,  5,  0, 15, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct eltmap *
lu_elt (str, len)
     register const char *str;
     register unsigned int len;
{
  static const struct eltmap wordlist[] =
    {
      {""}, {""},
#line 39 "keywords"
      {"id",           el_id},
      {""},
#line 48 "keywords"
      {"text",         el_text},
#line 38 "keywords"
      {"title",        el_title},
      {""},
#line 31 "keywords"
      {"base",         el_base},
#line 37 "keywords"
      {"redirect",     el_redirect},
#line 33 "keywords"
      {"case",         el_case},
#line 46 "keywords"
      {"minor",        el_minor},
      {""},
#line 47 "keywords"
      {"comment",      el_comment},
#line 30 "keywords"
      {"sitename",     el_sitename},
#line 28 "keywords"
      {"mediawiki",    el_mediawiki},
      {""},
#line 43 "keywords"
      {"contributor",  el_contributor},
#line 40 "keywords"
      {"restrictions", el_restrictions},
#line 41 "keywords"
      {"revision",     el_revision},
#line 35 "keywords"
      {"namespace",    el_namespace},
      {""}, {""},
#line 45 "keywords"
      {"ip",           el_ip},
#line 44 "keywords"
      {"username",     el_username},
#line 36 "keywords"
      {"page",         el_page},
#line 34 "keywords"
      {"namespaces",   el_namespaces},
      {""}, {""},
#line 29 "keywords"
      {"siteinfo",     el_siteinfo},
#line 42 "keywords"
      {"timestamp",    el_timestamp},
      {""}, {""}, {""}, {""},
#line 32 "keywords"
      {"generator",    el_generator}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
