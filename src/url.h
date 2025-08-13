#ifndef _URL_H_foxintango
#define _URL_H_foxintango

#include <libstring/libstring.h>
#include <libcpp/libcpp.h>
#include <map>
#include <vector>

EXTERN_C_BEGIN
namespaceBegin(foxintango)
/** https://developer.mozilla.org/zh-CN/docs/Learn/Common_questions/Web_mechanics/What_is_a_URL
 */
class foxintangoAPI URLAuthority{
public:
    String domain;
    String port;
public:
    URLAuthority();
    ~URLAuthority();
public:
    operator String();
};

class foxintangoAPI URLPath{
public:
    std::vector<String> nodes;
public:
    URLPath();
    URLPath(const String& path);
    ~URLPath();
public:
    operator String();
};

class foxintangoAPI URLParams{
public:
    std::map<String,String> params;
public:
    URLParams();
    ~URLParams();
public:
    operator String();
};

class foxintangoAPI URL {
protected:
    String scheme;
    URLAuthority authority;
    URLPath path;
public:
    /** 定位符类型
     *  
     * */
    enum URL_PROTOCOL {
        FS,
        IP,
        HTTP,
        HTTPS,
        WS,
        WSS
    };
    /** 资源类型
     * */
public:
    URL(const String& url);
    ~URL();
public:
    URL& operator = (const URL& url);
    URL& operator = (const String& url);
public:
    bool& operator == (const URL& url);
    bool& operator == (const String& url);
public:
    operator String();
};

namespaceEnd
EXTERN_C_END
#endif
