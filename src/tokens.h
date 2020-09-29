#ifndef TOKENS_H
#define TOKENS_H

#define IF              '('
#define ELSE            ':'
#define ENDIF           ')'
#define WHILE           '['
#define BREAK           'x'
#define CONTINUE        'c'
#define ENDWHILE        ']'
#define ARRAY           '{' // unused
#define ENDARRAY        '}' // unused

#define NOP             ' '
#define COND_MODIFIER   '?'
#define LEFT            '<'
#define RIGHT           '>'

#define STARTFUNCTION   '{'
#define ENDFUNCTION     '}'
#define RETURN          'r'
#define MALLOC          'm' // unused

#define START_STACK     '$'
#define PUSH            'p'
#define POP             'o'
#define STACK_HEIGHT    'h'

#define ZERO            'z'
#define SWITCH          '@'
#define STORE           '!'
#define LOAD            ';'
#define RUN             '#'
#define NEW_VAR         '^'

#define SUM             '+'
#define SUB             '-'
#define MULTI           '*'
#define DIV             '/'
#define MOD             '%'

#define C_EQ            '='
#define C_NEQ           '!'
#define C_LT            '<'
#define C_GT            '>'
#define C_LE            'l'
#define C_GE            'g'
#define C_NOT_NULL      '?'
#define C_ZERO          'z'

#define AND             '&'
#define OR              '|'
#define XOR             '^'
#define SHIFT_LEFT      '<'
#define SHIFT_RIGHT     '>'
#define INV             '~'

#define T_INT8          'b'
#define T_INT16         's'
#define T_INT32         'i'
#define T_FLOAT         'f'
#define STRING          '\"'
#define CHAR            '\'' // unused
#define SCAPE           '\\'


#define INT8    0
#define INT16   1
#define INT32   2
#define FLOAT   3

#endif
