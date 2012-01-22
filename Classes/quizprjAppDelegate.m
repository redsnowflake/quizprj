//
//  quizprjAppDelegate.m
//  quizprj
//
//  Created by Chris on 1/22/12.
//  Copyright Webbites 2012. All rights reserved.
//

#import "quizprjAppDelegate.h"
#import "quizprjViewController.h"

@implementation quizprjAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
