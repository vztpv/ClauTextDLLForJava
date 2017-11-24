
#pragma once

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ClauText */

#ifndef _Included_ClauText
#define _Included_ClauText
#ifdef __cplusplus
extern "C" {
#endif
	/*
	* Class:     ClauText
	* Method:    Clear
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_ClauText_Clear
	(JNIEnv *, jobject);

	/*
	* Class:     ClauText
	* Method:    LoadDataFromFile
	* Signature: (Ljava/lang/String;)V
	*/
	JNIEXPORT void JNICALL Java_ClauText_LoadDataFromFile
	(JNIEnv *, jobject, jstring);

	/*
	* Class:     ClauText
	* Method:    LoadDataFromString
	* Signature: (Ljava/lang/String;)V
	*/
	JNIEXPORT void JNICALL Java_ClauText_LoadDataFromString
	(JNIEnv *, jobject, jstring);

	/*
	* Class:     ClauText
	* Method:    SaveData
	* Signature: (Ljava/lang/String;)V
	*/
	JNIEXPORT void JNICALL Java_ClauText_SaveData
	(JNIEnv *, jobject, jstring);

	/*
	* Class:     ClauText
	* Method:    RunEventString
	* Signature: (Ljava/lang/String;)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_ClauText_RunEventString
	(JNIEnv *, jobject, jstring);

	/*
	* Class:     ClauText
	* Method:    RunEventFile
	* Signature: (Ljava/lang/String;)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_ClauText_RunEventFile
	(JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif