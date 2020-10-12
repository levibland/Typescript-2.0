#include "include/tst.h"
#include "include/lexer.h"
#include "include/io.h"
#include <stdlib.h>

void tst_compile(char* src)
{
    lexer_t* lexer = init_lexer(src);
    token_t* tok = 0;

    while ((tok = lexer_next_token(lexer))->type != TOKEN_EOF) {
        printf("TOK(%s) (%d)\n", tok->value, tok->type);
    }
}

void tst_compile_file(const char* filename)
{
    char* src = tst_read_file(filename);
    tst_compile(src);
    free(src);
}
