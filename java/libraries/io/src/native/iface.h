/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class roombaide_io_NativeInterface */

#ifndef _Included_roombaide_io_NativeInterface
#define _Included_roombaide_io_NativeInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     roombaide_io_NativeInterface
 * Method:    openDevice
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_openDevice
  (JNIEnv *, jclass, jstring);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    getError
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_roombaide_io_NativeInterface_getError
  (JNIEnv *, jclass, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    closeDevice
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_closeDevice
  (JNIEnv *, jclass, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    readFile
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_readFile
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    writeFile
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_writeFile
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    pollDevice
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_pollDevice
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    transferI2c
 * Signature: (II[B[B)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_transferI2c
  (JNIEnv *, jclass, jint, jint, jbyteArray, jbyteArray);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    servoStartThread
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_roombaide_io_NativeInterface_servoStartThread
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    servoUpdateThread
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_servoUpdateThread
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    servoStopThread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_servoStopThread
  (JNIEnv *, jclass, jlong);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    setSpiSettings
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_setSpiSettings
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     roombaide_io_NativeInterface
 * Method:    transferSpi
 * Signature: (I[B[B)I
 */
JNIEXPORT jint JNICALL Java_roombaide_io_NativeInterface_transferSpi
  (JNIEnv *, jclass, jint, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
