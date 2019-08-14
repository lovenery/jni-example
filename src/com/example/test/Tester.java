package com.example.test;

public class Tester {
    public static native int add(int a, int b);

    public static void main (String args[]) {
      String str = "Hello World!";
      System.out.println(str);
      System.out.println(add(1, 1));
    }

    static {
        System.loadLibrary("calc");
    }
}
