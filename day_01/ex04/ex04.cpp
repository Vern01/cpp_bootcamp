#include <iostream>

int     main(void)
{
    std::string comment = "HI THIS IS BRAIN";

    std::string* comment_ptr = &comment;
    std::string& comment_ref = comment;

    std::cout << "String ptr: " << *comment_ptr << std::endl
              << "String ref.: " << comment_ref << std::endl;
    return 0;
}