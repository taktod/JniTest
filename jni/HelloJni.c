#include "com_ttProject_test_jni_HelloJni.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_com_ttProject_test_jni_HelloJni_test
  (JNIEnv *env, jobject thisj) {
	printf("Hello");
}

