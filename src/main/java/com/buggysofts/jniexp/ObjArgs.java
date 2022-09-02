package com.buggysofts.jniexp;

public class ObjArgs {
    public ObjArgs() {
        System.load(
            "/home/ragib/IdeaProjects/JNIExp/build/libs/libcom_buggysofts_jniexp_ObjArgs.so"
        );
    }

    public native NativePassableObject createObj(String name, double bal);
    public native String getObjStr(NativePassableObject object);
}
