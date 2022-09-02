#include <jni.h>
#include "com_buggysofts_jniexp_ObjArgs.h"

JNIEXPORT jobject JNICALL Java_com_buggysofts_jniexp_ObjArgs_createObj (JNIEnv* env, jobject obj, jstring str, jdouble bal){
    jclass nativePassableObjectClass = env->FindClass("com/buggysofts/jniexp/NativePassableObject");
    jobject newNativePassableObject = env->AllocObject(
        nativePassableObjectClass
    );

    jfieldID nameField = env->GetFieldID(
        nativePassableObjectClass,
        "name",
        "Ljava/lang/String;"
    );
    jfieldID balField = env->GetFieldID(
        nativePassableObjectClass,
        "balance",
        "D"
    );

    env->SetObjectField(
        newNativePassableObject,
        nameField,
        str
    );
    env->SetDoubleField(
        newNativePassableObject,
        balField,
        bal
    );

    return newNativePassableObject;
}

JNIEXPORT jstring JNICALL Java_com_buggysofts_jniexp_ObjArgs_getObjStr(JNIEnv* env, jobject obj1, jobject obj2){
    return (jstring) env->CallObjectMethod(
        obj2,
        env->GetMethodID(
            env->GetObjectClass(obj2),
            "getInfo",
            "()Ljava/lang/String;"
        )
    );
}