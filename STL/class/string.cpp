#include <iostream>
#include <string.h>
using namespace std;

class String {

    public:
        String(const char* str = NULL);
        String(const String & copyStr);
        ~String();
        String operator=(const String &other);
    private:
        char* m_strData;
};

String::String(const char* str) {
    if (str!=NULL) {
        m_strData = new char[strlen(str)+1];
        strcpy(m_strData, str);
    } else {
        m_strData = new char[1];
        *m_strData = '\0';
    }
}

String::String(const String &copyStr) {
   int length = strlen(copyStr.m_strData);
   m_strData = new char [length+1];
   strcpy(m_strData, copyStr.m_strData);
}

String String::operator=(const String& other) {
    if (this == &other) {
        return *this;
    } else {
        delete []m_strData;
        int length = strlen(other.m_strData);
        m_strData = new char[length + 1];
        strcpy(m_strData, other.m_strData);
        return *this;
    }
}

String::~String() {
    delete m_strData;
}

int main(void) {
    String s1="abc";
}
