//
//  CKDynamicClass.h
//  cocos2d_tests
//
//  Created by 龚畅优 on 15-11-12.
//
//

#ifndef __cocos2d_tests__CKDynamicClass__
#define __cocos2d_tests__CKDynamicClass__

#include <stdio.h>
#include "CKClassFactory.h"
class CKDynamicClass{
public:
    CKDynamicClass(string name, createClass method){
        CKClassFactory::sharedClassFactory()->registClass(name, method);
    }
};

#define DECLARE_CLASS(className)\
static CKDynamicClass * m_className##dc;

#define IMPLEMENT_CLASS(className)\
CKDynamicClass * className::m_className##dc = new CKDynamicClass(#className, className::createInstance);

#endif /* defined(__cocos2d_tests__CKDynamicClass__) */
