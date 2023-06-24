#include "url.h"
using namespace foxintango;

URLAuthority::URLAuthority(){}
URLAuthority::~URLAuthority(){}
URLAuthority::operator foxintango::String(){
    return String();
}

URLPath::URLPath(){}
URLPath::URLPath(const String& path){}
URLPath::~URLPath(){}
URLPath::operator foxintango::String(){
    return String();
}

URLParams::URLParams(){}
URLParams::~URLParams(){}
URLParams::operator foxintango::String(){
    return String();
}



URL::URL(){
}

URL::URL(const String& url) {
}

URL::~URL(){
}

URL::operator foxintango::String(){
    return String();
}