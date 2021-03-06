/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "FSCoreAppDelegate.h"
//#import "MFMailComposeViewControllerDelegate.h"
//#import "UIActionSheetDelegate.h"
//#import "UIAlertViewDelegate.h"
//#import "Foursquare-Structs.h"
//#import "UIApplicationDelegate.h"

@class AppWindow, NSDate, FSNConnection, NSURL, NSString, FSAppRootHelper, NSDictionary, FSViewController;

@interface foursquareAppDelegate : NSObject { //FSCoreAppDelegate <UIApplicationDelegate, UIAlertViewDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {
	BOOL _backgrounded;
	BOOL _keyboardVisible;
	BOOL _neededToFetchCurrentUser;
	BOOL _rebuildTheApp;
	BOOL _alreadySeenRadarSplashInThisSession;
	//AppWindow* _window;
	FSAppRootHelper* _appRootHelper;
	NSDate* _enterBackgroundDate;
	NSDate* _enterForegroundDate;
	int _unreadNotificationCount;
	int _memoryWarningCount;
	NSString* _deferredOAuthClientId;
	NSString* _deferredOAuthCallbackUrl;
	NSDictionary* _launchOptions;
	NSURL* _deferredURL;
	NSString* _deferredReferralId;
	FSViewController* _prefetchedViewController;
	FSNConnection* _registerDeviceConnection;
	CGSize _keyboardSize;
}
@property(retain, nonatomic) FSNConnection* registerDeviceConnection;
@property(retain, nonatomic) FSViewController* prefetchedViewController;
@property(assign, nonatomic) BOOL alreadySeenRadarSplashInThisSession;
@property(assign, nonatomic) BOOL rebuildTheApp;
@property(retain, nonatomic) NSString* deferredReferralId;
@property(retain, nonatomic) NSURL* deferredURL;
@property(assign, nonatomic) BOOL neededToFetchCurrentUser;
@property(retain, nonatomic) NSDictionary* launchOptions;
@property(retain, nonatomic) NSString* deferredOAuthCallbackUrl;
@property(retain, nonatomic) NSString* deferredOAuthClientId;
@property(assign, nonatomic) CGSize keyboardSize;
@property(assign, nonatomic) BOOL keyboardVisible;
@property(assign, nonatomic) int memoryWarningCount;
@property(assign, nonatomic) int unreadNotificationCount;
@property(assign, nonatomic) BOOL backgrounded;
@property(retain, nonatomic) NSDate* enterForegroundDate;
@property(retain, nonatomic) NSDate* enterBackgroundDate;
@property(retain, nonatomic) FSAppRootHelper* appRootHelper;
@property(retain, nonatomic) AppWindow* window;
//-(void).cxx_destruct;
-(void)localizeTheseStrings;
-(void)keyboardWillHideNotification:(id)keyboard;
-(void)keyboardWillShowNotification:(id)keyboard;
-(void)apiResultContainedNotifications:(id)notifications;
-(void)updateUnreadNotificationCount:(unsigned)count;
-(void)handleActiveStateNotification:(id)notification;
-(void)handleDeferredUrl;
-(void)handleOrDeferNotification:(id)notification applicationState:(int)state;
-(void)handleOrDeferURL:(id)url;
-(void)logout;
-(void)deauthorize;
-(void)dismissSignupModal;
-(void)completeSignin;
-(void)completeAuthentication:(BOOL)authentication;
-(void)setUpdateLocationCallback;
-(void)registerForRemoteNotifications;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)restoreCoreData;
-(void)killCoreData;
-(void)restoreUI;
-(void)killUI;
-(void)application:(id)application performFetchWithCompletionHandler:(id)completionHandler;
-(void)application:(id)application didReceiveLocalNotification:(id)notification;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)confirmToken;
-(void)showPrimaryDevicePromptWithYesBlock:(id)yesBlock noBlock:(id)block;
-(void)_registerDeviceWithToken:(id)token;
-(BOOL)shouldShowRadarOptInSplashScreen;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidReceiveMemoryWarning:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(void)applicationDidBecomeActive:(id)application;
-(void)refreshCurrentUser;
-(void)setupApplication:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(id)hockeyBetaIdentifier;
-(id)hockeyLiveIdentifier;
-(void)dealloc;
-(BOOL)handleFacebookCallbackURL:(id)url;
-(void)showUrlInWebview:(id)webview;
-(void)presentOAuthAuthorizationScreenForClientId:(id)clientId callbackUrlString:(id)string;
-(BOOL)handleOAuthURL:(id)url;
-(BOOL)validateDateString:(id)string;
-(BOOL)handleURL:(id)url;
@end

