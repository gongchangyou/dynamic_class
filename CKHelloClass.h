//
//  B.h
//  cocos2d_tests
//
//  Created by 龚畅优 on 15-11-12.
//
//

#ifndef __cocos2d_tests__CKHelloClass__
#define __cocos2d_tests__CKHelloClass__
#include "CKBaseClass.h"
using namespace cocos2d;
#include <stdio.h>
class CKHelloClass:public CKBaseClass{
public:
    DECLARE_CLASS(CKHelloClass);
    SYNTHESIZE(CKHelloClass, int *, m_pValue)
    
    CKHelloClass(){}
    virtual ~CKHelloClass(){}
    
    static void * createInstance(){
        return new CKHelloClass();
    }
    
    virtual void registProperty(){
        m_propertyMap.insert(pair<string, setValue>("setm_pValue", setm_pValue));
    }
    virtual void display(){
        CCLog("CKHelloClass->display %d",(int)(*getm_pValue() ));
    }
    
protected:
    int * m_pValue;
};
IMPLEMENT_CLASS(CKHelloClass)
#endif /* defined(__cocos2d_t∂ests__B__) */
