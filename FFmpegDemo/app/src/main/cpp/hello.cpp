//
// Created by cuiqiang on 17-11-28.
//
#include "jni.h"
extern  "C"

JNIEXPORT jstring JNICALL Java_cuiqiang_ling_ai_cmakedemo_MainActivity_getStr
        (JNIEnv *env,jobject jobject){

    return env->NewStringUTF("hello world from cpp");
}

