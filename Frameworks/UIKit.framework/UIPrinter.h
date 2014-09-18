/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSURL;

@interface UIPrinter : NSObject {
    NSURL *URL;
    id _printerInfo;
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * displayLocation;
@property(copy,readonly) NSString * displayName;
@property(copy,readonly) NSString * makeAndModel;
@property(readonly) long long supportedJobTypes;
@property(readonly) bool supportsColor;
@property(readonly) bool supportsDuplex;

+ (id)printerWithURL:(id)arg1;

- (id)URL;
- (id)_initWithPrinter:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_internalPrinter;
- (void)contactPrinter:(id)arg1;
- (id)displayLocation;
- (id)displayName;
- (id)init;
- (id)makeAndModel;
- (long long)supportedJobTypes;
- (bool)supportsColor;
- (bool)supportsDuplex;

@end