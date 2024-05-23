#pragma once

#import <UIKit/UIKit.h>

@protocol PPSSPPViewController<NSObject>
@optional

- (void)hideKeyboard;
- (void)showKeyboard;
- (void)shareText:(NSString *)text;
- (void)shutdown;
- (void)bindDefaultFBO;
- (UIView *)getView;
- (void)startLocation;
- (void)stopLocation;
- (void)startVideo:(int)width height:(int)height;
- (void)stopVideo;

@end