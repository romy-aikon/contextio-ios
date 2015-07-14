//
//  CIOAuthViewController.h
//  Context.IO iOS Example App
//
//  Created by Kevin Lord on 1/16/13.
//  Copyright (c) 2013 Context.IO. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CIOAPIClient/CIOAFNetworking1Client.h>

@protocol CIOAuthViewController <NSObject>
- (void)userCompletedLogin;
- (void)userCancelledLogin;
@end

@interface CIOAuthViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, assign) NSObject<CIOAuthViewController> *delegate;

- (id)initWithAPIClient:(CIOAFNetworking1Client *)APIClient allowCancel:(BOOL)allowCancel;

@end
