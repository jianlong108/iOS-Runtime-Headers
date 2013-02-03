/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, UIResponder;

@interface SUComposeTextFieldListView : UIView {
    id _delegate;
    NSMutableArray *_fields;
    BOOL _isValid;
    int _style;
}

@property(readonly) int composeReviewStyle;
@property(readonly) float height;
@property(readonly) UIResponder * initialFirstResponder;

- (void)_updateValidity;
- (int)composeReviewStyle;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (void)dealloc;
- (float)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initialFirstResponder;
- (BOOL)isValid;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)textForFieldAtIndex:(unsigned int)arg1;

@end