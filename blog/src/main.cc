#include <lzcmarkdownpp.hh>
#include <iostream>

int main() { 
    lzcoders::markdown::renderer renderer;

    std::cout << renderer.render(
R"(# hello
```c++
int main(void) {
   return 0;
}
```

That's all folks!
)") << std::endl;

    return 0; 
}
