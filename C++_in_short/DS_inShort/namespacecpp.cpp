//Header.h
#include <string>

namespace Test
{
    namespace old_ns
    {
        std::string Func() { return std::string("Hello from old"); }
    }

    inline namespace new_ns
    {
        std::string Func() { return std::string("Hello from new"); }
    }
}

#include <header.h>
#include <string>
#include <iostream>

int main()
{
    using namespace Test;
    using namespace std;

    string s = Func();
    std::cout << s << std::endl; // "Hello from new"
    return 0;

//     The Service Request Number for this session is 1-72995261. In case the chat gets disconnected, you can expect a call at 8437389759
// from 1-866-622-3911. If our team is unable to reach you, you can get back to us through service.mcafee.com, using the same Service Request Number.
}