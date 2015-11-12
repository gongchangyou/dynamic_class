//
//  CKDynamicClass.cpp
//  cocos2d_tests
//
//  Created by 龚畅优 on 15-11-12.
//
//
#ifndef __cocos2d_tests__CKBaseClass__
#define __cocos2d_tests__CKBaseClass__

#include "CKDynamicClass.h"
class CKBaseClass;
typedef void (*setValue) (CKBaseClass *t, void *c);
class CKBaseClass{
private:
    DECLARE_CLASS(CKBaseClass);
public:
    CKBaseClass(){}
    virtual ~CKBaseClass(){}
    static void * createInstance(){return new CKBaseClass();}
    virtual void registProperty(){}
    virtual void display(){}
    map<string, setValue> m_propertyMap;
};

#define SYNTHESIZE(classType, varType, varName) \
public:\
inline static void set##varName(CKBaseClass * cp, void * value){\
    classType * tp = (classType *)cp;\
    tp->varName = (varType)value;\
}\
inline varType get##varName(void) const {\
    return varName;\
}
IMPLEMENT_CLASS(CKBaseClass)
#endif