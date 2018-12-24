#include "io.h"

void test1()
{
    fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(2, 'B', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(4, 'C', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(6, 'D', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(8, 'E', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1910, 'E', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1912, 'F', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1914, 'G', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1916, 'H', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1918, 'I', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1920, 'J', FB_GREEN, FB_DARK_GREY);

    fb_write_cell(1996, 'E', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(1998, 'F', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(2000, 'G', FB_GREEN, FB_DARK_GREY);

    fb_write_cell(3996, 'E', FB_GREEN, FB_DARK_GREY);
    fb_write_cell(3998, 'F', FB_GREEN, FB_DARK_GREY);

    /* this one would be ignored */
    fb_write_cell(4000, 'G', FB_GREEN, FB_DARK_GREY);
}

void test_write()
{
    char s[2001] = {'\0'};
    unsigned int i;

    for(i = 0; i < sizeof(s) - 1; ++i) {
        s[i] = 'A';
    }

    write(s, sizeof(s));
}

/* The C function */
int main()
{
    test_write();
    return 0;
}
