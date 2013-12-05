#include <stdio.h>

void help () {

    printf( "cpans usage:\n\n"
            "  To init source list:\n\n"
            "     # with default mirror\n"
            "     cpans -f\n\n"
            "     # choose your favorite mirror\n"
            "     cpans -fhttp://cpan.nctu.edu.tw/\n"
            "     cpans --fetch=http://cpan.nctu.edu.tw/\n\n"

            "  To update source list:\n\n"
            "     cpans -u\n"
            "     cpans --update\n\n"

            "  To search:\n\n"
            "     cpans [pattern]\n\n"

            "  To search with ncurses:\n\n"
            "     cpans -n [pattern]\n\n" );

}
