#include "mpc.h"

mpc_parser_t* Number    = mpc_new("number");
mpc_parser_t* Operator  = mpc_new("operator");
mpc_parser_t* Expr      = mpc_new("expr");
mpc_parser_t* Clisp     = mpc_new("clisp");


mpca_lang(MPCA_LANG_DEFAULT,
    "                                                       \
        number  :   /-?[0-9]+/  ;                           \
        operator:   '+' | '-' | '*' | '/' ;                 \
        expr    :   <number> | '(' <operator> <expr>+ ')' ; \
        clisp   :   /^/ <operator> <expr>+ /&/ ;            \
    ",
    Number, Operator, Expr, Clisp);

