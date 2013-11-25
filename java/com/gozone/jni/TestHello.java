package com.gozone.jni;

public class TestHello {

    static {
        System.loadLibrary("TestHello");
    }

    public native void hello(String msg);

    public static void main(String[] args) {
        new TestHello().hello("Hello,GoZone!");
    }

}