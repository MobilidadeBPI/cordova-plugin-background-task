#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>

@interface CDVBackgroundTaskData: NSObject

@property (nonatomic) UIBackgroundTaskIdentifier backgroundTaskId;
@property (nonatomic, strong) NSString *callbackId;

@end


@interface CDVBackgroundTask : CDVPlugin

@property (nonatomic, strong) NSMutableDictionary *backgroundTasks;

- (void)startInBackground:(CDVInvokedUrlCommand*)command;
- (void)stopInBackground:(CDVInvokedUrlCommand*)command;

@end
