//
//  testProjectAppDelegate.h
//  testProject
//
//  Created by macmini01 on 26/07/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testProjectViewController;

@interface testProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testProjectViewController *viewController;

@end
