/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_CANAPIJNI */

#ifndef _Included_edu_wpi_first_hal_CANAPIJNI
#define _Included_edu_wpi_first_hal_CANAPIJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    initializeCAN
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_CANAPIJNI_initializeCAN
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    cleanCAN
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CANAPIJNI_cleanCAN
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    writeCANPacket
 * Signature: (I[BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CANAPIJNI_writeCANPacket
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    writeCANPacketRepeating
 * Signature: (I[BII)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CANAPIJNI_writeCANPacketRepeating
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    stopCANPacketRepeating
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CANAPIJNI_stopCANPacketRepeating
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    readCANPacketNew
 * Signature: (IILedu/wpi/first/hal/CANData;)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CANAPIJNI_readCANPacketNew
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    readCANPacketLatest
 * Signature: (IILedu/wpi/first/hal/CANData;)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CANAPIJNI_readCANPacketLatest
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    readCANPacketTimeout
 * Signature: (IIILedu/wpi/first/hal/CANData;)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CANAPIJNI_readCANPacketTimeout
  (JNIEnv *, jclass, jint, jint, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_CANAPIJNI
 * Method:    readCANPeriodicPacket
 * Signature: (IIIILedu/wpi/first/hal/CANData;)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CANAPIJNI_readCANPeriodicPacket
  (JNIEnv *, jclass, jint, jint, jint, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
