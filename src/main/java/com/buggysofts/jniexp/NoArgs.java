package com.buggysofts.jniexp;

public class NoArgs {
    public NoArgs() {
        System.load(
            "/home/ragib/IdeaProjects/JNIExp/build/libs/libcom_buggysofts_jniexp_NoArgs.so"
        );
    }

    public native int getResult();
}
