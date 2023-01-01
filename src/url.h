#ifndef _URL_H_foxintango
#define _URL_H_foxintango

#include <libcpp/libcpp.h>

EXTERN_C_BEGIN
namespaceBegin(foxintango)

class foxintangoAPI URL {
public:
    /** 定位符类型
     *  
     * */
    typedef enum _URL_PROTOCOL {
        UP_PTR,
        UP_
    }URL_PROTOCOL;
    /** 资源类型
     * */
public:
    URL(const char* url);
    ~URL();
};

namespaceEnd
EXTERN_C_END
#endif
