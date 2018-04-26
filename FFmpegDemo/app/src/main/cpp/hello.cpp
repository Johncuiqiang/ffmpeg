//
// Created by cuiqiang on 17-11-28.
//
#include "jni.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include "libavformat/avformat.h"
}
extern "C"

JNIEXPORT jstring JNICALL Java_cuiqiang_ling_ai_cmakedemo_MainActivity_getStr
        (JNIEnv *env, jobject jobject) {

    avcodec_register_all();

    avformat_network_init();

    AVFormatContext *avFormatContext = NULL;

    char path[] = "/sdcard/1080.mp4";

    int result = avformat_open_input(&avFormatContext, path, 0, 0);
    if (result == 0) {

    } else {

    }
    return env->NewStringUTF("open success");
}

