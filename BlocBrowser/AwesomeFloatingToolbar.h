//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Jeffrey Isaray on 8/3/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didtryToPanWithOffset:(CGPoint)offset;
- (void)floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToZoomWithTransform:(CGAffineTransform)transform;

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end
