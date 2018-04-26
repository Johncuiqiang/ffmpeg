
#include <jni.h>
#include <string>
#include "android/log.h"
extern "C"{
    #include <libavcodec/avcodec.h>
}
#define TAG "jni"
#define LOGD(fmt, args...) __android_log_print(ANDROID_LOG_DEBUG, TAG, fmt, ##args)
#define LOGE(fmt, args...) __android_log_print(ANDROID_LOG_ERROR, TAG, fmt, ##args)
extern "C"
JNIEXPORT jstring

JNICALL
Java_aplay_testffmpeg_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ ";
    hello += avcodec_configuration();
    LOGD("log");
    return env->NewStringUTF(hello.c_str());
}
