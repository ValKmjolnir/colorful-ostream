#include "../colorstream.h"

int main(){
    std::cout<<colorstream::bold<<"stdout:\n";
    std::cout<<colorstream::red<<" red\n"
             <<colorstream::cyan<<" cyan\n"
             <<colorstream::orange<<" orange\n"
             <<colorstream::white<<" white\n"
             <<colorstream::reset;
    std::cout<<colorstream::bold_red<<" bold red\n"
             <<colorstream::bold_cyan<<" bold cyan\n"
             <<colorstream::bold_orange<<" bold orange\n"
             <<colorstream::bold_white<<" bold white\n\n"
             <<colorstream::reset;
    std::cerr<<colorstream::bold<<"stderr:\n";
    std::cerr<<colorstream::red<<" red\n"
             <<colorstream::cyan<<" cyan\n"
             <<colorstream::orange<<" orange\n"
             <<colorstream::white<<" white\n"
             <<colorstream::reset;
    std::cerr<<colorstream::bold_red<<" bold red\n"
             <<colorstream::bold_cyan<<" bold cyan\n"
             <<colorstream::bold_orange<<" bold orange\n"
             <<colorstream::bold_white<<" bold white\n\n"
             <<colorstream::reset;
    return 0;
}