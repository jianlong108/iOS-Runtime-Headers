/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceSettings : PXSettings {
    double  _delayChanges;
    BOOL  _slowBackgroundFetch;
}

@property (nonatomic) double delayChanges;
@property (nonatomic) BOOL slowBackgroundFetch;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)delayChanges;
- (void)setDefaultValues;
- (void)setDelayChanges:(double)arg1;
- (void)setSlowBackgroundFetch:(BOOL)arg1;
- (BOOL)slowBackgroundFetch;

@end
