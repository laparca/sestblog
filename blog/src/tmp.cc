#ifndef LZCODERS_SESTBLOG_XXX_HH
#define LZCODERS_SESTBLOG_XXX_HH

namespace lzcoders
{
    namespace setsblog
    {
        enum link_type
        {
            post,
            page,
            asset,
            other
        };

        class page
        {
            public:
                link_to(std::string resource_name, link_type type = asset);
        };
    }
}

#endif
