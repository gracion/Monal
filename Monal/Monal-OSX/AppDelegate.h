//
//  AppDelegate.h
//  Monal-OSX
//
//  Created by Anurodh Pokharel on 6/9/15.
//  Copyright (c) 2015 Monal.im. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic , weak) NSWindowController* mainWindowController;

-(IBAction)showPreferences:(id)sender;

@end

