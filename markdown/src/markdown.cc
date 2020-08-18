#include <markdown.hh>
#include <cmark.h>
#include <iterator>
#include <memory>
using namespace lzcoders::sestblog::markdown;

renderer::renderer()
{
}

renderer::~renderer()
{
}

template<class T>
struct default_free
{
    constexpr default_free() noexcept = default;
    void operator()(T *ptr) const
    {
        free(ptr);
    }

    template<class U>
    void operator()(U *ptr) const
    {
        free(ptr);
    }
};

std::string renderer::render(const std::string& document)
{
    std::unique_ptr<char, default_free<char>> rendered(cmark_markdown_to_html(document.c_str(), document.size(), CMARK_OPT_DEFAULT));

    return std::string(rendered.get());
}

#if 0
std::string renderer::render(const std::string_view& document)
{
    std::unique_ptr<char, default_free> rendered(cmark_markdown_to_html(document.data(), document.size(), CMARK_OPT_DEFAULT));

    return {*rendered};
}
#endif

std::string renderer::render(std::istream& stream)
{
    return render(std::string(std::istreambuf_iterator<char>{stream}, {}));
}
