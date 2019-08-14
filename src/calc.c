#include <stdio.h>

int add(int, int);

#ifdef JNI_ENABLED
#include "com_example_test_Tester.h"
JNIEXPORT jint JNICALL Java_com_example_test_Tester_add(JNIEnv *env, jobject obj, jint a, jint b) {
    printf("%s\n", __func__);
    return add(a, b);
}
#endif

int add(int a, int b) {
    return a+b;
}

int main() {
    printf("%d\n", add(1, 1));
    return 0;
}
