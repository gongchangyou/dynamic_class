//
//  A.h
//  cocos2d_tests
//
//  Created by 龚畅优 on 15-11-12.
//
//

#ifndef __cocos2d_tests__A__
#define __cocos2d_tests__A__
using namespace std;
using namespace cocos2d;
typedef void * (*createClass)(void);
#include <stdio.h>
class CKClassFactory{
public:
    CKClassFactory();
    virtual ~CKClassFactory();
    void * getClassByName(string className);
    void registClass(string name, createClass method);
    static CKClassFactory* sharedClassFactory();
private:
    map<string, createClass> m_classMap;
};
#endif /* defined(__cocos2d_tests__A__) */
