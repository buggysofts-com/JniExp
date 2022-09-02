#include <jni.h>
#include "com_buggysofts_jniexp_NoArgs.h"

JNIEXPORT jint JNICALL Java_com_buggysofts_jniexp_NoArgs_getResult (JNIEnv *, jobject) {
    return 101;
}