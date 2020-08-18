set(CMARK_LIBRARY_NAME "cmark")

find_path(CMARK_INCLUDE_DIR
    NAMES cmark.h
)
mark_as_advanced(CMARK_INCLUDE_DIR)

find_library(CMARK_LIBRARY
    NAMES ${CMARK_LIBRARY_NAME}
)
mark_as_advanced(CMARK_LIBRARY)

find_package(PkgConfig QUIET)
if(PKG_CONFIG_FOUND)
    pkg_check_modules(CMARK QUIET lib${CMARK_LIBRARY_NAME})
    set(CMARK_CFLAGS ${CMARK_CFLAGS_OTHER})
endif()


include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(CMark DEFAULT_MSG
    CMARK_LIBRARY CMARK_INCLUDE_DIR)
