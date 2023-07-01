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

URL::URL(const String& url) {
    if(url.length()){
        
    }
}

URL::~URL(){
}

URL& URL::operator = (const URL& url){

}

URL& URL::operator = (const String& url){

}

bool& URL::operator == (const URL& url){

}

bool& URL::operator == (const String& url){

}

URL::operator foxintango::String(){
    return String();
}