package com.buggysofts.jniexp;

public class Main {
    public static void main(String[] args) {
        System.out.println(new NoArgs().getResult());
        System.out.println(new TwoArgs().getResult(1, 2));

        ObjArgs objArgs = new ObjArgs();
        NativePassableObject ragib = objArgs.createObj("Ragib", 1000.50);
        System.out.println(objArgs.getObjStr(ragib));
    }
}