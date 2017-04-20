/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPresentationContext : NSObject {
    NSArray * _additionalPassUniqueIdentifiers;
    BOOL  _animated;
    BOOL  _persistentCardEmulation;
    BOOL  _postPayment;
    <NSCopying> * _userInfo;
    BOOL  _wasAutomaticallySelected;
}

@property (nonatomic, copy) NSArray *additionalPassUniqueIdentifiers;
@property (nonatomic) BOOL animated;
@property (getter=wantsPersistentCardEmulation, nonatomic) BOOL persistentCardEmulation;
@property (getter=isPostPayment, nonatomic) BOOL postPayment;
@property (nonatomic, copy) <NSCopying> *userInfo;
@property (nonatomic) BOOL wasAutomaticallySelected;

+ (id)contextWithAnimation:(BOOL)arg1;
+ (id)contextWithAnimation:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4;

- (void).cxx_destruct;
- (id)additionalPassUniqueIdentifiers;
- (BOOL)animated;
- (id)description;
- (BOOL)isPostPayment;
- (void)setAdditionalPassUniqueIdentifiers:(id)arg1;
- (void)setAnimated:(BOOL)arg1;
- (void)setPersistentCardEmulation:(BOOL)arg1;
- (void)setPostPayment:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWasAutomaticallySelected:(BOOL)arg1;
- (id)userInfo;
- (BOOL)wantsPersistentCardEmulation;
- (BOOL)wasAutomaticallySelected;

@end