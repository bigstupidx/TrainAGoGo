#pragma warning disable 0168 // variable declared but not used.
#pragma warning disable 0219 // variable assigned but not used.
#pragma warning disable 0414 // private field assigned but not used.
#pragma warning disable 0618
/*! \mainpage AA - ASSET STORE - DOCUMENTATION
 * 
 * \section intro_sec Thanks for your purchase
 * 
 * 
 * \section intro_sec2 ADS INTEGRATION
 * 
 * Ads Documentation available here:
 * 
 * https://dl.dropboxusercontent.com/u/8289407/Color%20Swipe%20Asset%20Store/Documentation/_Ads_Integration_Documentation.pdf
 * 
 * \section intro_sec5 CLASS DESCRIPTIONS
 * 
 * All you need to know if in the section "Classes":
 * 
 * https://dl.dropboxusercontent.com/u/8289407/Color%20Swipe%20Asset%20Store/Documentation/html/annotated.html
 * 
 * \section intro_sec3 A QUESTION?
 * 
 * If you have any question: 
 * 
 * Forum: http://forum.unity3d.com/threads/color-swipe-complete-project-ready-to-use-ads-mediation-preview.378988/
 * 
 * By mail: contact@app-advisory.com
 * 
 * \section intro_sec4 TO HELP US
 * 
 * Please rate my file, I’d appreciate it: 
 * 
 * http://u3d.as/ntR
 *   
 * \section intro_sec7 FOLLOW US ON FACEBOOK:
 * 
 * Facebook: https://www.facebook.com/appadvisory/
 * 
 * \section intro_sec6 FOLLOW US ON TWITTER:
 * 
 * Twitter: https://twitter.com/AppAdvisory
 * 
 * \section intro_sec8 MORE ASSET FROM US:
 * 
 * https://www.assetstore.unity3d.com/en/#!/search/page=1/sortby=popularity/query=publisher:8911
 */
 
//UNITY_ADS;UNITY_IOS;GOOGLE_MOBILE_ADS;STAN_ASSET_GOOGLEMOBILEADS;STAN_ASSET_ANDROIDNATIVE;ADCOLONY

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Events;
using UnityEngine.EventSystems;

#if UNITY_ADS
using UnityEngine.Advertisements;
#endif

#if CHARTBOOST
using ChartboostSDK;
#endif

#if UNITY_IOS
using ADBannerView = UnityEngine.iOS.ADBannerView;
using ADInterstitialAd = UnityEngine.iOS.ADInterstitialAd;
#endif

#if GOOGLE_MOBILE_ADS
using GoogleMobileAds;
using GoogleMobileAds.Api;
#endif

/// <summary>
/// This is a static class that references a singleton object in order to provide a simple interface for easely configure Ads in the game
///
/// Class in charge to display ads in the game (banners, interstitials and rewarded videos) - please refere to the ADS_INTEGRATION_DOCUMENTATION.PDF
/// </summary>
public class AdsManager : MonoBehaviour 
{
	private static AdsManager _instance;

	public static AdsManager instance
	{
		get {
			if(_instance == null)
			{
				_instance = FindObjectOfType( typeof(AdsManager) ) as AdsManager;
			}
			return _instance;
		}
	} 


	/// <summary>
	/// If you want to always have a rewarded video ready in the simulator
	/// </summary>
	public bool rewardedVideoAlwaysReadyInSimulator = true;
	/// <summary>
	/// If you want to alwas succefully view a rewarded video in the simulator
	/// </summary>
	public bool rewardedVideoAlwaysSuccessInSimulator = true;
	/// <summary>
	/// True if you want to show interstitial based of time playing, and not on the number of play
	/// </summary>
	public bool basedTimeInterstitialAtGameOver = false;
	/// <summary>
	/// Number of win to show an interstitial 
	/// </summary>
	public int numberOfPlayToShowInterstitial = 5;
	/// <summary>
	/// Time in minutes to wait before showing interstitial at game over
	/// </summary>
	public float numberOfMinutesToShowAnInterstitialAtGameOver = 2;
	/// <summary>
	/// To store the time and know when we have to show an interstitial at game over if, and only if, basedTimeInterstitialAtGameOver = true
	/// </summary>
	float realTimeSinceStartup;
	/// <summary>
	/// If you want to show interstitial when the game start
	/// </summary>
	public bool ShowIntertitialAtStart = true;

	public bool NO_ADS = false;

	#if UNITY_IOS && (GOOGLE_MOBILE_ADS || STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE)
	/// <summary>
	/// True if you want to use admob instead of iAd on iOS
	/// </summary>
	public bool useAdmob;
	#endif

	#if GOOGLE_MOBILE_ADS
	BannerView bannerView;
	AdRequest requestBanner;
	InterstitialAd interstitial;
	AdRequest requestInterstitial;
	#endif

	#if UNITY_IOS
	private ADBannerView banner = null;
	private ADInterstitialAd fullscreenAd = null;
	#endif

	#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
	/// <summary>
	/// Replace with your id
	/// </summary>
	public string AdmobBannerIdIOS = "ca-app-pub-3176182856663051/2445416792";
	/// <summary>
	/// Replace with your id
	/// </summary>
	public string AdmobInterstitialIdIOS = "ca-app-pub-3176182856663051/3922149991";
	/// <summary>
	/// Replace with your id
	/// </summary>
	public string AdmobBannerIdANDROID = "ca-app-pub-3176182856663051/4497559599";
	/// <summary>
	/// Replace with your id
	/// </summary>
	public string AdmobInterstitialIdANDROID = "ca-app-pub-3176182856663051/5974292798";
	#endif

	#if STAN_ASSET_GOOGLEMOBILEADS
	private static Dictionary<string, GoogleMobileAdBanner> _registerdBanners = null;
	#endif

	#if STAN_ASSET_ANDROIDNATIVE
	private static Dictionary<string, GoogleMobileAdBanner> _registerdBanners = null;
	#endif

	#if UNITY_ADS
	public string rewardedVideoZoneUnityAds = "rewardedVideoZone";
	#endif

	#if ADCOLONY
	// Arbitrary version number
	public string version = "1.1";
	public string ADCOLONY_appId
	{
		get
		{
	#if UNITY_IOS
			return AdColonyAppID_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyAppID_ANDROID;
	#endif
		}
	}



	public string ADCOLONY_RewardedVideoZoneID
	{
		get
		{
	#if UNITY_IOS
			return AdColonyRewardedVideoZoneID_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyRewardedVideoZoneID_ANDROID;
	#endif
		}
	}

	public string ADCOLONY_RewardedVideoZoneKEY
	{
		get
		{
	#if UNITY_IOS
			return AdColonyRewardedVideoZoneKEY_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyRewardedVideoZoneKEY_ANDROID;
	#endif
		}
	}

	public string ADCOLONY_InterstitialVideoZone1KEY
	{
		get
		{
	#if UNITY_IOS
			return AdColonyInterstitialVideoZone1KEY_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyInterstitialVideoZone1KEY_ANDROID;
	#endif
		}
	}

	public string ADCOLONY_InterstitialVideoZone2KEY
	{
		get
		{
	#if UNITY_IOS
			return AdColonyInterstitialVideoZone2KEY_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyInterstitialVideoZone2KEY_ANDROID;
	#endif
		}
	}

	public string ADCOLONY_InterstitialVideoZone1ID
	{
		get
		{
	#if UNITY_IOS
			return AdColonyInterstitialVideoZone1ID_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyInterstitialVideoZone1ID_ANDROID;
	#endif
		}
	}

	public string ADCOLONY_InterstitialVideoZone2ID
	{
		get
		{
	#if UNITY_IOS
			return AdColonyInterstitialVideoZone2ID_iOS;
	#endif

	#if UNITY_ANDROID
	return AdColonyInterstitialVideoZone2ID_ANDROID;
	#endif
		}
	}

	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyAppID_iOS = "app4901e09bc6a84e2e90";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone1KEY_iOS = "VideoZone1";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone1ID_iOS = "vzd728fbab1a2948498e";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone2KEY_iOS = "VideoZone2";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone2ID_iOS = "vz0042762cf2c04f5ba6";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyRewardedVideoZoneKEY_iOS = "V4VCZone1";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyRewardedVideoZoneID_iOS = "vzbfea02bb641f4a6a95";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyAppID_ANDROID = "app4901e09bc6a84e2e90";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone1KEY_ANDROID = "VideoZone1";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone1ID_ANDROID = "vzaed6b7d9b27b4fc3b9";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone2KEY_ANDROID = "VideoZone2";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyInterstitialVideoZone2ID_ANDROID = "vz4337825b0684481da8";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyRewardedVideoZoneKEY_ANDROID = "V4VCZone1";
	/// <summary>
	/// Replace with your id
	/// </summary>
	[SerializeField] private string AdColonyRewardedVideoZoneID_ANDROID = "vza17248a990054b17ae";
	//	[SerializeField] private string AdColonyRewardedVideoSecretKey_ANDROID = "v4vc39381a8b790943c4bd";



	#endif

	void Awake()
	{
		if(!Application.isEditor)
		{
			rewardedVideoAlwaysReadyInSimulator = false;
			rewardedVideoAlwaysSuccessInSimulator = false;
		}

		Set ();

		DontDestroyOnLoad(this.gameObject);
	}

	IEnumerator Start()
	{
		yield return 0;

		GC.Collect ();

		Resources.UnloadUnusedAssets ();

		Application.targetFrameRate = 60;

		if(!NO_ADS)
		{
			#if UNITY_IOS && (STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS)
			if(!useAdmob)
			{
			#endif
				#if UNITY_IOS

				fullscreenAd = new ADInterstitialAd();
				ADInterstitialAd.onInterstitialWasLoaded  += OnFullscreenLoaded;
				#if !UNITY_4_6 && !UNITY_5_0 && !UNITY_5_1
				ADInterstitialAd.onInterstitialWasViewed  += OnFullscreenViewed;

				#endif
				#endif

				#if UNITY_IOS && (STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS)
			}
				#endif

			#if STAN_ASSET_GOOGLEMOBILEADS
			if(!GoogleMobileAd.IsInited) {
				GoogleMobileAd.Init();
			}
			#endif

			#if STAN_ASSET_ANDROIDNATIVE
			if(!AndroidAdMobController.Instance.IsInited) {
				Set();
			}
			#endif

			#if CHARTBOOST
			Chartboost.setAutoCacheAds(true);

			Chartboost.cacheInterstitial (CBLocation.Default);

			Chartboost.cacheRewardedVideo(CBLocation.Default);
			#endif

			yield return new WaitForSeconds(1);

			ShowBanner ();

			yield return new WaitForSeconds(1);

			if(ShowIntertitialAtStart)
			{
				_ShowInterstitial();
			}
		}

	}

	#if GOOGLE_MOBILE_ADS
	void RequestInterstitial()
	{
		if (Application.isMobilePlatform) 
		{
			requestInterstitial = new AdRequest.Builder ().Build ();
			interstitial.LoadAd (requestInterstitial);
		}
	}
	#endif

	/// <summary>
	/// Set the Admob Ads Id
	/// </summary>
	public void Set()
	{

		realTimeSinceStartup = Time.realtimeSinceStartup;

	#if GOOGLE_MOBILE_ADS

	Debug.Log("GOOGLE_MOBILE_ADS");
		if (Application.platform == RuntimePlatform.IPhonePlayer)
			bannerView = new BannerView(AdmobBannerIdIOS, AdSize.SmartBanner, AdPosition.Bottom);
		else if (Application.platform == RuntimePlatform.Android)
			bannerView = new BannerView(AdmobBannerIdANDROID, AdSize.SmartBanner, AdPosition.Bottom);

		requestBanner = new AdRequest.Builder().Build();

		if (Application.platform == RuntimePlatform.IPhonePlayer)
			interstitial = new InterstitialAd(AdmobInterstitialIdIOS);
		else if (Application.platform == RuntimePlatform.Android)
			interstitial = new InterstitialAd(AdmobInterstitialIdANDROID);


		RequestInterstitial();


		#endif


		#if STAN_ASSET_GOOGLEMOBILEADS

			GoogleMobileAdSettings.Instance.IOS_BannersUnitId = AdmobBannerIdIOS;
			GoogleMobileAdSettings.Instance.IOS_InterstisialsUnitId = AdmobInterstitialIdIOS;

			GoogleMobileAdSettings.Instance.Android_BannersUnitId = AdmobBannerIdANDROID;
			GoogleMobileAdSettings.Instance.Android_InterstisialsUnitId = AdmobInterstitialIdANDROID;

		#endif

		#if STAN_ASSET_ANDROIDNATIVE

		if(!string.IsNullOrEmpty(AdmobBannerIdANDROID))
			AndroidAdMobController.Instance.SetBannersUnitID(AdmobBannerIdANDROID);

		if(!string.IsNullOrEmpty(AdmobInterstitialIdANDROID))
			AndroidAdMobController.Instance.SetInterstisialsUnitID(AdmobInterstitialIdANDROID);

		if(!string.IsNullOrEmpty(AdmobBannerIdANDROID) && !string.IsNullOrEmpty(AdmobInterstitialIdANDROID))
			AndroidAdMobController.Instance.Init (AdmobBannerIdANDROID,AdmobInterstitialIdANDROID);
		else if(!string.IsNullOrEmpty(AdmobBannerIdANDROID))
			AndroidAdMobController.Instance.Init (AdmobBannerIdANDROID);
		#endif

		#if CHARTBOOST
		var c = FindObjectOfType<Chartboost>();
		if(c == null)
		{
		gameObject.AddComponent<Chartboost>();
		}
		#endif
	}

	#if GOOGLE_MOBILE_ADS
	// Called when an ad request has successfully loaded.
	void HandleAdLoaded(object sender, EventArgs e)
	{

	}
	// Called when an ad request failed to load.
	void HandleAdFailedToLoad(object sender, EventArgs e)
	{
		Invoke ("ShowBanner", 10);
	}
	// Called when an ad is clicked.
	void HandleAdOpened(object sender, EventArgs e)
	{

	}

	// Called when the user returned from the app after an ad click.
	void HandleAdClosed(object sender, EventArgs e)
	{

	}
	// Called when the ad click caused the user to leave the application.
	void HandleAdLeftApplication(object sender, EventArgs e)
	{

	}

	public void Show_Banner()
	{
		if(bannerView!=null)
			bannerView.Show();
	}

	public void Hide_Banner()
	{
		if(bannerView!=null)
			bannerView.Hide();
	}
	#endif

	/// <summary>
	/// Show admob banner on android (if define, please refere to ADS_INTEGRATION_DOCUMENTATION.PDF), and iAd banner on iOS
	/// </summary>
	public void ShowBanner() 
	{
		if(NO_ADS)
			return;

		#if UNITY_IOS

		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		if(!useAdmob)
		{
		#endif
			ShowIAdBanner();
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		}
		#endif
		#endif

		#if UNITY_IOS
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		if(useAdmob)
		{
		#endif
		#endif
			#if GOOGLE_MOBILE_ADS

//			if(Application.isMobilePlatform)
			{
				bannerView.LoadAd(requestBanner);
				bannerView.Show();


				bannerView.OnAdLoaded -= HandleAdLoaded;
				bannerView.OnAdFailedToLoad -= HandleAdFailedToLoad;
				bannerView.OnAdOpening -= HandleAdOpened;
				bannerView.OnAdClosed -= HandleAdClosed;
				bannerView.OnAdLeavingApplication -= HandleAdLeftApplication;




				// Called when an ad request has successfully loaded.
				bannerView.OnAdLoaded += HandleAdLoaded;
				// Called when an ad request failed to load.
				bannerView.OnAdFailedToLoad += HandleAdFailedToLoad;
				// Called when an ad is clicked.
				bannerView.OnAdOpening += HandleAdOpened;
				// Called when the user returned from the app after an ad click.
				bannerView.OnAdClosed += HandleAdClosed;
				// Called when the ad click caused the user to leave the application.
				bannerView.OnAdLeavingApplication += HandleAdLeftApplication;
//			}
			#endif


			#if UNITY_IOS
			#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		}
			#endif
			#endif

		#if STAN_ASSET_GOOGLEMOBILEADS
		if (!GoogleMobileAd.IsInited)
		{
			GoogleMobileAd.Init ();
		}  
		else 
		{
			GoogleMobileAdBanner banner;

			if (registerdBanners.ContainsKey (sceneBannerId))
			{
				banner = registerdBanners [sceneBannerId];
			}  
			else 
			{
				banner = GoogleMobileAd.CreateAdBanner (TextAnchor.LowerCenter, GADBannerSize.SMART_BANNER);

				registerdBanners.Add (sceneBannerId, banner);
			}

			if (banner.IsLoaded && !banner.IsOnScreen) 
			{
				banner.Show ();
			}
		}
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		if (!AndroidAdMobController.Instance.IsInited)
		{
			//			AndroidAdMobController.Init ();
			Set();
		}  
		else 
		{
			GoogleMobileAdBanner banner;

			if (registerdBanners.ContainsKey (sceneBannerId))
			{
				banner = registerdBanners [sceneBannerId];
			}  
			else 
			{
				banner = AndroidAdMobController.Instance.CreateAdBanner (TextAnchor.LowerCenter, GADBannerSize.SMART_BANNER);

				registerdBanners.Add (sceneBannerId, banner);
			}

			if (banner.IsLoaded && !banner.IsOnScreen) 
			{
				banner.Show ();
			}
		}
		#endif
	}

	void ShowIAdBanner()
	{
		if(NO_ADS)
			return;

		#if UNITY_IOS
		CancelInvoke("ShowIAdBanner");
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		if(!useAdmob)
		{
		#endif
			if(banner == null)
			{
				banner = new ADBannerView(ADBannerView.Type.Banner, ADBannerView.Layout.BottomCenter);
				banner.visible = true;
				ADBannerView.onBannerWasClicked -= OnBannerClicked;
				ADBannerView.onBannerWasLoaded -= OnBannerLoaded;

				ADBannerView.onBannerWasClicked += OnBannerClicked;
				ADBannerView.onBannerWasLoaded += OnBannerLoaded;

		#if !UNITY_4_6 && !UNITY_5_0 && !UNITY_5_1
				ADBannerView.onBannerFailedToLoad -= OnBannerFailedToLoad;
				ADBannerView.onBannerFailedToLoad += OnBannerFailedToLoad;
		#endif
			}
			else
			{
				banner.visible = true;
			}
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		}
		#endif

		#endif
	}

	/// <summary>
	/// To hide banner (if displayed)
	/// </summary>
	public void HideBanner() 
	{
		#if STAN_ASSET_GOOGLEMOBILEADS
		if(registerdBanners.ContainsKey(sceneBannerId)) 
		{
			GoogleMobileAdBanner banner = registerdBanners[sceneBannerId];
			if(banner.IsLoaded) 
			{
				if(banner.IsOnScreen) 
				{
					banner.Hide();
				}
			}  
			else
			{
				banner.ShowOnLoad = false;
			}
		}
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		if(registerdBanners.ContainsKey(sceneBannerId)) 
		{
			GoogleMobileAdBanner banner = registerdBanners[sceneBannerId];
			if(banner.IsLoaded) 
			{
				if(banner.IsOnScreen) 
				{
					banner.Hide();
				}
			}  
			else
			{
				banner.ShowOnLoad = false;
			}
		}
		#endif
	}

	#if STAN_ASSET_GOOGLEMOBILEADS
	public static Dictionary<string, GoogleMobileAdBanner> registerdBanners 
	{
		get
		{
			if(_registerdBanners == null) 
			{
				_registerdBanners = new Dictionary<string, GoogleMobileAdBanner>();
			}

			return _registerdBanners;
		}
	}
	#endif

	#if STAN_ASSET_ANDROIDNATIVE
	public static Dictionary<string, GoogleMobileAdBanner> registerdBanners 
	{
		get
		{
			if(_registerdBanners == null) 
			{
				_registerdBanners = new Dictionary<string, GoogleMobileAdBanner>();
			}

			return _registerdBanners;
		}
	}
	#endif


	public string sceneBannerId 
	{
		get 
		{
			return Application.loadedLevelName + "_" + this.gameObject.name;
		}
	}

	#if UNITY_IOS
	void OnBannerClicked()
	{
		Debug.Log("OnBannerClicked!\n");
	}

	void OnBannerLoaded()
	{
		Debug.Log("OnBannerLoaded!\n");
		banner.visible = true;
	}

	void OnBannerFailedToLoad()
	{
		Debug.Log("OnBannerFailedToLoad!\n");
		banner.visible = false;

		Invoke("ShowIAdBanner",5);
	}

	void OnFullscreenLoaded()
	{
		// you can show ad right here, or, for example, you can start preparing your UI
		Debug.Log("AD Loaded\n");
	}
	void OnFullscreenViewed()
	{
		// If we reach this stage, it means the user viewed the Ad past the initial screen.
		// This could be a good point to reward the user (eg. give an in-game bonus item).
		// You can also start reloading the Ad here if you are not using built-in auto reloading.
		Debug.Log("AD Viewed\n");
		fullscreenAd.ReloadAd();
	}
	void WantToShowAD()
	{  
	#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		if(useAdmob)
			return;
	#endif

		print("WantToShowAD");
		if(fullscreenAd == null)
		{
			print("iOS fullscreenAd is null, creating...");
			fullscreenAd = new ADInterstitialAd();
		}
		else
		{
			if(fullscreenAd.loaded)
			{
				print("iOS fullscreenAd.loaded = true, showing...");
				fullscreenAd.Show();
			}
			else
			{
				print("iOS fullscreenAd.loaded = false, reloading...");
				fullscreenAd.ReloadAd();
			}
		}
	}
	#endif

	/// <summary>
	/// Show interstitial if conditions(num of lose > count or numofWin > count) is true
	/// </summary>
	public void ShowAdsGameOver()
	{
		if(NO_ADS)
			return;

		bool showAds = false;

		if(basedTimeInterstitialAtGameOver)
		{
			float t = Time.realtimeSinceStartup;

			float ourTIme = numberOfMinutesToShowAnInterstitialAtGameOver * 60;

			if( (realTimeSinceStartup - t) > ourTIme)
			{
				_ShowInterstitial();
				realTimeSinceStartup = t;
			}
		}
		else
		{
			int countPlay = PlayerPrefs.GetInt ("numberOfPlayToShowInterstitial", 0);

			countPlay++;

			showAds = countPlay >= numberOfPlayToShowInterstitial;

			if (showAds) 
			{
				PlayerPrefs.SetInt ("numberOfPlayToShowInterstitial", 0);
				PlayerPrefs.Save ();
				_ShowInterstitial();
			}
			else 
			{
				PlayerPrefs.SetInt ("numberOfPlayToShowInterstitial", countPlay);
				PlayerPrefs.Save ();
			}

		}
	}

	/// <summary> 
	/// Show interstitial
	/// </summary>
	private void _ShowInterstitial()
	{
		if(NO_ADS)
			return;

		#if CHARTBOOST
		int rand = UnityEngine.Random.Range (0, 2);
		switch (rand)
		{
		case 0:
		ShowAdmobInterstitialGameOver();
		break;
		case 1:
		if(Chartboost.hasInterstitial(CBLocation.Default))
		{
		ShowChartboostInterstitialGameOver ();
		}
		else
		{
		ShowAdmobInterstitialGameOver();
		}
		break;
		default:
		ShowAdmobInterstitialGameOver();
		break;
		}
		#endif

		#if !CHARTBOOST

		ShowAdmobInterstitialGameOver ();

		#endif
	}

	/// <summary>
	/// Return true if a rewarded video is available (Chartboost and / or Unity Ads if integrated, please refere to the ADS_INTEGRATION_DOCUMENTATION.PDF)
	/// </summary>
	public bool RewardedVideoIsInitialized()
	{
		print("RewardedVideoIsInitialized method check");
		bool adsReady = false;


		#if CHARTBOOST

		adsReady = adsReady || Chartboost.hasRewardedVideo(CBLocation.Default);
		if (!Chartboost.hasRewardedVideo (CBLocation.Default)) 
		{
		Chartboost.cacheRewardedVideo (CBLocation.Default);
		}
		#endif

		#if ADCOLONY
		adsReady = adsReady || AdColony.IsVideoAvailable(ADCOLONY_RewardedVideoZoneID);
		#endif

		#if UNITY_ADS
		adsReady = adsReady || Advertisement.IsReady (rewardedVideoZoneUnityAds);
		#endif

		if (Application.isEditor)
			adsReady = rewardedVideoAlwaysReadyInSimulator;

		print("RewardedVideoIsInitialized method check finished, adsReady = " + adsReady);

		return  adsReady;
	}


	/// <summary>
	/// Show a rewarded video to the player and after the player can continue to play (Chartboost and / or Unity Ads if integrated, please refere to the ADS_INTEGRATION_DOCUMENTATION.PDF)
	/// </summary>
	public void ShowRewardedVideoGameOver(Action<bool> success)
	{
		print("ShowRewardedVideoGameOver");

		if (Application.isEditor)
		{
			if (success != null)
				success (rewardedVideoAlwaysSuccessInSimulator);

			return;
		}

		bool showRewardedOK = false;

		#if ADCOLONY
		showRewardedOK = ShowRewardedVideoGameOverADCOLONY(success);

		if(showRewardedOK)
			return;
		#endif

		#if CHARTBOOST
		showRewardedOK = ShowRewardedVideoGameOverCHARTBOOST(success);

		if(showRewardedOK)
		return;
		#endif

		#if UNITY_ADS
		showRewardedOK = ShowRewardedVideoGameOverUNITYADS(success);

		if(showRewardedOK)
			return;
		#endif

		if (success != null)
			success (showRewardedOK);
	}
	#if ADCOLONY
	private bool ShowRewardedVideoGameOverADCOLONY(Action<bool> success)
	{
		print("check if adcolony have a video");
		if(AdColony.IsVideoAvailable(ADCOLONY_RewardedVideoZoneID))
		{

			print("adcolony have a video");
			AdColony.OfferV4VC(true, ADCOLONY_RewardedVideoZoneID);
			AdColony.OnV4VCResult += delegate(bool successRewarded, string name, int amount) {
				if(success != null)
					success(successRewarded);
			} ;
			return true;
		}

		return false;
	}
	#endif

	#if CHARTBOOST
	private bool ShowRewardedVideoGameOverCHARTBOOST(Action<bool> success)
	{
	if (Chartboost.hasRewardedVideo (CBLocation.Default)) 
	{
	Chartboost.showRewardedVideo (CBLocation.Default);

	Chartboost.didCompleteRewardedVideo += delegate(CBLocation arg1, int arg2) {
	Debug.Log("!!!!!! Chartboost didCompleteRewardedVideo at location : " + arg1.ToString());

	if (success != null)
	success (true);
	} ;

	Chartboost.didFailToLoadRewardedVideo += delegate(CBLocation arg1, CBImpressionError arg2) {
	Debug.Log("!!!!!! Chartboost didFailToLoadRewardedVideo at location : " + arg1.ToString());

	if (success != null)
	success (false);
	} ;

	return true;
	}

	Chartboost.cacheRewardedVideo (CBLocation.Default);

	return false;

	}
	#endif

	#if UNITY_ADS
	public bool ShowRewardedVideoGameOverUNITYADS(Action<bool> success)
	{
		if(Advertisement.IsReady (rewardedVideoZoneUnityAds))
		{
			Advertisement.Show (rewardedVideoZoneUnityAds, new ShowOptions 
				{
					resultCallback = result => {
						if (result == ShowResult.Finished)
						{
							Debug.Log ("user finished unity ads ===> offer 1 coin");

							if (success != null)
								success (true);

						}
						else if (result == ShowResult.Failed)
						{
							Debug.Log ("unity ads failed : " + result.ToString ());

							if (success != null)
								success (false);

						}
						else if (result == ShowResult.Skipped)
						{
							Debug.Log ("unity ads Skipped: " + result.ToString ());

							if (success != null)
								success (false);
						}
					}
				} );

			return true;
		}

		return false;
	}
	#endif

	/// <summary>
	/// Show admob or iAd (if iOS) interstitial
	/// </summary>
	public void ShowAdmobInterstitialGameOver()
	{

		#if UNITY_IOS
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		if(!useAdmob)
		{
		#endif
			WantToShowAD();
		#if STAN_ASSET_GOOGLEMOBILEADS || STAN_ASSET_ANDROIDNATIVE || GOOGLE_MOBILE_ADS
		}
		#endif
		#endif


		#if GOOGLE_MOBILE_ADS
		#if UNITY_IOS
		if(useAdmob)
		{
		#endif
			if (Application.isMobilePlatform && interstitial.IsLoaded()) 
			{
				interstitial.Show();
			}
			else
			{
				RequestInterstitial();	
			}
		#if UNITY_IOS
		}
		#endif
		#endif

		#if STAN_ASSET_GOOGLEMOBILEADS
		#if UNITY_IOS
		if(useAdmob)
		{
		#endif
			GoogleMobileAd.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOver;

			GoogleMobileAd.OnInterstitialFailedLoading -= HandleOnInterstitialFailedLoadingGameOver;

			GoogleMobileAd.OnInterstitialLoaded += HandleOnInterstitialLoadedGameOver;

			GoogleMobileAd.OnInterstitialFailedLoading += HandleOnInterstitialFailedLoadingGameOver;

			GoogleMobileAd.LoadInterstitialAd ();
		#if UNITY_IOS
		}
		#endif
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		#if UNITY_IOS
		if(useAdmob)
		{
		#endif
			AndroidAdMobController.Instance.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOver;

			AndroidAdMobController.Instance.OnInterstitialFailedLoading -= HandleOnInterstitialFailedLoadingGameOver;

			AndroidAdMobController.Instance.OnInterstitialLoaded += HandleOnInterstitialLoadedGameOver;

			AndroidAdMobController.Instance.OnInterstitialFailedLoading += HandleOnInterstitialFailedLoadingGameOver;

			AndroidAdMobController.Instance.LoadInterstitialAd ();
		#if UNITY_IOS
		}
		#endif
		#endif
	}

	void HandleOnInterstitialLoadedGameOver () 
	{
		#if STAN_ASSET_GOOGLEMOBILEADS
		GoogleMobileAd.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOver;
		//ad loaded, strting ad
		GoogleMobileAd.ShowInterstitialAd ();
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		AndroidAdMobController.Instance.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOver;
		//ad loaded, strting ad
		AndroidAdMobController.Instance.ShowInterstitialAd ();
		#endif
	}

	void HandleOnInterstitialFailedLoadingGameOver()
	{
		#if STAN_ASSET_GOOGLEMOBILEADS
		GoogleMobileAd.OnInterstitialFailedLoading -= HandleOnInterstitialFailedLoadingGameOver;
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		AndroidAdMobController.Instance.OnInterstitialFailedLoading -= HandleOnInterstitialFailedLoadingGameOver;
		#endif

		#if CHARTBOOST
		Chartboost.showInterstitial (CBLocation.Default);
		#endif
	}


	void ShowAdmobBackup()
	{
		#if STAN_ASSET_GOOGLEMOBILEADS
		GoogleMobileAd.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOverBackUp;

		GoogleMobileAd.LoadInterstitialAd ();
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		AndroidAdMobController.Instance.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOverBackUp;

		AndroidAdMobController.Instance.LoadInterstitialAd ();
		#endif
	}

	void HandleOnInterstitialLoadedGameOverBackUp ()
	{
		#if STAN_ASSET_GOOGLEMOBILEADS
		GoogleMobileAd.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOverBackUp;
		GoogleMobileAd.ShowInterstitialAd ();
		#endif

		#if STAN_ASSET_ANDROIDNATIVE
		AndroidAdMobController.Instance.OnInterstitialLoaded -= HandleOnInterstitialLoadedGameOverBackUp;
		AndroidAdMobController.Instance.ShowInterstitialAd ();
		#endif
	}


	#if CHARTBOOST

	void ShowChartboostInterstitialGameOver()
	{
	Chartboost.didFailToLoadInterstitial -= didFailedToLoaChartboostGameOver;
	Chartboost.didFailToLoadInterstitial += didFailedToLoaChartboostGameOver;

	Chartboost.showInterstitial (CBLocation.Default);
	}

	void didFailedToLoaChartboostGameOver(CBLocation location, CBImpressionError error)
	{
	Chartboost.didFailToLoadInterstitial -= didFailedToLoaChartboostGameOver;

	if (location != CBLocation.Startup) {
	Debug.Log(string.Format("--------- didFailedToLoaChartboostGameOver didFailToLoadInterstitial: {0} at location {1}", error, location));
	}  else {
	Debug.Log(string.Format("---------!!!! ERROR !!!!  didFailedToLoaChartboostGameOver didFailToLoadInterstitial: {0} at location {1}", error, location));
	}
	}

	void didFailToLoadInterstitialGameOver(CBLocation location, CBImpressionError error) {
	Debug.Log(string.Format("CHARTBOOST ----- didFailToLoadInterstitial: {0} at location {1}", error, location));

	if (location == CBLocation.Startup) {
	Debug.Log("it's startup ==> on base");
	}  else {
	Debug.Log("it's NOT startup ==> on tente une autre ad");

	ShowAdmobBackup ();

	}

	}
	#endif

	void OnDestroy() 
	{
		HideBanner();
	}

}


