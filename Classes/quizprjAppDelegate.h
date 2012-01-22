//
//  quizprjAppDelegate.h
//  quizprj
//
//  Created by Chris on 1/22/12.
//  Copyright Webbites 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class quizprjViewController;

@interface quizprjAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    quizprjViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet quizprjViewController *viewController;

@end

