using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using System;



public class AirScript {
	
	static private IntPtr	JavaClass;
	static private int		BtnMyAppWall;
	static private int		BtnMySmart;
        static private int		BtnBanner360;
	static private int		BtnBannerAd;
	static private int BtnMyIcon;
	static private int BtnMyPush;
	static IntPtr obj_Activity;
		
	public AirScript()
	{
				
	}
	
	public static void setGameObject (String gameObjectName) {
	//This function will be used to change the gameObjectName. 
	//In our sample project, Gameobject is "Main Camera" which has script "CallAirpush.cs" and it contain all callback listeners.
	//You need to set the name of game object which contains all callback listeners
		

		// again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
			
		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setUnityGameObject", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(gameObjectName));
		
	}
	
	
	public static void setPlacementId (String pid) {
	//This function will be used to change the gameObjectName. 
	//In our sample project, Gameobject is "Main Camera" which has script "CallAirpush.cs" and it contain all callback listeners.
	//You need to set the name of game object which contains all callback listeners
		

		// again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
			

		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setPlacementId", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(pid));
		
	}
	
	public static void setConfig (String appid,String apikey, String pid, String testmode,String caching) {
	//This function will be used to change the gameObjectName. 
	//In our sample project, Gameobject is "Main Camera" which has script "CallAirpush.cs" and it contain all callback listeners.
	//You need to set the name of game object which contains all callback listeners
		

		// again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
			

		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setAppId", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(appid));
		
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setApiKey", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(apikey));
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setPlacementId", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(pid));
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setSDKStatus", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(testmode));
		
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "setCaching", "(Ljava/lang/String;)V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF(caching));
		
	}
	
	
	
	 public static void stopAirBannerAdTop () {
	
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
		
		
		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "stopBannerTopAd", "()V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF("top"));
		
	}
	
	 public static void stopAirBannerAdBottom () {
	
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
		
		
		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "stopBannerBottomAd", "()V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF("top"));
		
	}
		
	 
	
	 public static void startAirBannerAdTop () {
	
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
		
		
		// create a global reference to the JavaClass object and fetch method id(s)..
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "airBannerAdTop", "()V");
	
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF("top"));
		
	}
	
	 public static void startAirBannerAdBottom () {
	
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
		
		
		// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		// create a JavaClass object...
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyAppWall	= JNI.GetMethodID(cls_JavaClass, "airBannerAdBottom", "()V");
		
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass, BtnMyAppWall,JNI.NewStringUTF("top"));
		
	}
	
		// Use this for initialization
	 public static void showCachedAirSmartWallAd () {
	// This method will be used to show the ad which has been cached by cacheAirSmartWallAd
	//This method will be used in conjunction with cacheAirSmartWallAd and should be called only after cacheAirSmartWallAd
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		
		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMySmart	= JNI.GetMethodID(cls_JavaClass, "airShowCachedAd", "()V");
		
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass, BtnMySmart,JNI.NewStringUTF("Cached"));
		
	}
	
	
		// Use this for initialization
	 public static void startAirSmartWallAd () {
	// This method can be directly called to show the smartwall ad directly without caching.
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);

		
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMySmart	= JNI.GetMethodID(cls_JavaClass, "airSmartWallAd", "()V");
		
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass, BtnMySmart,JNI.NewStringUTF("Caching"));
		
	}
	

	
		// Use this for initialization
	 public static void startAirBanner360Ad() {
	// This method can be directly called to show the smartwall ad directly without caching.
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
	
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnBanner360	= JNI.GetMethodID(cls_JavaClass, "start360Ad", "()V");
		 Debug.Log("parul4");
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass,BtnBanner360,JNI.NewStringUTF("Caching"));
		
	}
	
	
			// Use this for initialization
	 public static void stopAirBanner360Ad() {
	// This method can be directly called to show the smartwall ad directly without caching.
		 // again, make sure the thread is attached..
		JavaVM.AttachCurrentThread();
	
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnBanner360	= JNI.GetMethodID(cls_JavaClass, "stop360Ad", "()V");
		 Debug.Log("parul4");
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass,BtnBanner360,JNI.NewStringUTF("Caching"));
		
	}
         public static void startAirPushAd(){
	
	
		JavaVM.AttachCurrentThread();
	
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyPush	= JNI.GetMethodID(cls_JavaClass, "airpushAd", "()V");
		 Debug.Log("parul5");
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass,BtnMyPush,JNI.NewStringUTF("Caching"));
		
	}
	  public static void startAirIconAd() {

		JavaVM.AttachCurrentThread();
	
			// first we try to find our main activity..
		IntPtr cls_Activity	= JNI.FindClass("com/unity3d/player/UnityPlayer");
		int fid_Activity	= JNI.GetStaticFieldID(cls_Activity, "currentActivity", "Landroid/app/Activity;");
		obj_Activity	= JNI.GetStaticObjectField(cls_Activity, fid_Activity);
		
		
		IntPtr cls_JavaClass	= JNI.FindClass("com/airpush/unity/MainActivity");
		int mid_JavaClass		= JNI.GetMethodID(cls_JavaClass, "<init>", "(Landroid/app/Activity;)V");
		IntPtr obj_JavaClass	= JNI.NewObject(cls_JavaClass, mid_JavaClass, obj_Activity);
	
		JavaClass			= JNI.NewGlobalRef(obj_JavaClass);
		BtnMyIcon	= JNI.GetMethodID(cls_JavaClass, "airiconAd", "()V");
		 Debug.Log("parul6");
		// get the Java String object from the JavaClass object
		JNI.CallObjectMethod(JavaClass,BtnMyIcon,JNI.NewStringUTF("Caching"));
}
	
	
}
