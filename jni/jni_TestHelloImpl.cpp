#include <jni.h>
#include "com_gozone_jni_TestHello.h"
#include <stdio.h>
JNIEXPORT void JNICALL Java_com_gozone_jni_TestHello_hello
  (JNIEnv* env, jobject obj, jstring str)
{
    const char* valueStr = env->GetStringUTFChars(str, NULL);
    printf("\n------------------------------------\n");
    printf("Called from Java.\n");
    printf("Print from Native CPP : %s \n", valueStr);
    printf("------------------------------------\n\n");
    return;
}