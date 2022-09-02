package com.buggysofts.jniexp;

public class NativePassableObject {
    public String name;
    public double balance;

    public String getInfo(){
        return "Name: "+name+", "+"Bal: "+balance;
    }
}
