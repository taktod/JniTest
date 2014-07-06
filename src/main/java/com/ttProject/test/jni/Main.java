package com.ttProject.test.jni;

public class Main {
	public static void main(String[] args) {
		System.out.println("start");
		System.load("full path nameをいれる");
		new HelloJni().test();
	}
}
