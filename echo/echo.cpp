#include "echo.h"
#include <stdlib.h>
#include <assert.h>

int main() {
    string argv1[] = {"./echo"};
    assert(echo(1, argv1).str()=="\n");

    string argv2[] = {"./echo", "foo"};
    assert(echo(2, argv2).str()=="foo\n");
    // cout<<echo(2, argv2).str();

    string argv3[] = {"./echo", "foo", "bar"};
    assert(echo(3, argv3).str()=="foo bar\n");
    // cout<<echo(3, argv3).str();

    string argv4[] = {"./echo", "foo", "bar", "foo    bar"};
    assert(echo(4, argv4).str()=="foo bar foo    bar\n");
    cout<<echo(4, argv4).str();
    return EXIT_SUCCESS;
}