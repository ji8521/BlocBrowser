//
//  ViewController.h
//  BlocBrowser
//
//  Created by Jeffrey Isaray on 7/27/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

//Replaces the web view with a fresh one, erasing all history.  Also updates the URL field and toolbar buttons appropriately.
- (void) resetWebView;

@end

