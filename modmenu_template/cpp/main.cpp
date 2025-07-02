
#include <jni.h>
#include "Menu.h"
#include "Hook.h"

extern "C" JNIEXPORT void JNICALL
Java_com_example_modmenu_ModMenu_init(JNIEnv *env, jobject thiz) {
    // Start your thread or menu loop here
    startMenu();
}
