//
//  A.cpp
//  cocos2d_tests
//
//  Created by 龚畅优 on 15-11-12.
//
//

#include "CKClassFactory.h"
void * CKClassFactory::getClassByName(string className){
    map<string, createClass>::const_iterator iter;
    iter = m_classMap.find(className);
    if (iter == m_classMap.end()) {
        return NULL;
    }else{
        return iter->second();
    }
}
CKClassFactory::CKClassFactory(){}
CKClassFactory::~CKClassFactory(){}
void CKClassFactory::registClass(string name, createClass method){
    m_classMap.insert(pair<string, createClass>(name, method));
}

CKClassFactory* CKClassFactory::sharedClassFactory(){
    static CKClassFactory * _sharedClassFactory;
    if (!_sharedClassFactory) {
        _sharedClassFactory = new CKClassFactory();
    }
    return _sharedClassFactory;
}