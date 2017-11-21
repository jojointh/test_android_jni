#include <com_nongmah_testndk_NativeClass.h>

JNIEXPORT jstring JNICALL Java_com_nongmah_testndk_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env->NewStringUTF("This is message from JNI");
  }
