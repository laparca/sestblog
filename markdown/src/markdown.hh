#ifndef LZCODERS_SESTBLOG_MARKDOWN_RENDERER
#define LZCODERS_SESTBLOG_MARKDOWN_RENDERER

#include <istream>

namespace lzcoders
{
    namespace sestblog
    {
        namespace markdown
        {
            class renderer
            {
                public:
                    renderer();
                    ~renderer();

                    std::string render(const std::string& document);
//                    std::string render(const std::string_view& document);
                    std::string render(std::istream& stream);

                    template<class Iterator>
                    std::string render(Iterator first, Iterator last)
                    {
                        return render(std::string(first, last));
                    }
            };
        }
    }
}

#endif
