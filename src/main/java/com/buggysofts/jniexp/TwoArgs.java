package com.buggysofts.jniexp;

public class TwoArgs {
    public TwoArgs() {
        System.load(
            "/home/ragib/IdeaProjects/JNIExp/build/libs/libcom_buggysofts_jniexp_TwoArgs.so"
        );
    }

    public native int getResult(int a, int b);
}
