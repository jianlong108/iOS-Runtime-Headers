/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {
    UIColor * _accentColor;
    UIImageView * _backgroundPlatter;
    NTKFaceColorScheme * _colorScheme;
    CLKComplicationTemplate * _complicationTemplate;
    BOOL  _editing;
    CLKFont * _font;
    float  _foregroundAlpha;
    UIColor * _foregroundColor;
    float  _foregroundImageAlpha;
    UIView * _highlightView;
    BOOL  _highlighted;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxSize;
    float  _minimumWidth;
    UIColor * _overrideColor;
    unsigned int  _placement;
    UIColor * _shadowColor;
    BOOL  _shouldUseBackgroundPlatter;
    BOOL  _suppressesInternalColorOverrides;
    NSDate * _timeTravelDate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _touchEdgeInsets;
    BOOL  _useRoundedFontDesign;
    BOOL  _usesLegibility;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (nonatomic, readonly) BOOL editing;
@property (nonatomic, retain) CLKFont *font;
@property (nonatomic) float foregroundAlpha;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) float foregroundImageAlpha;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } maxSize;
@property (nonatomic) float minimumWidth;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) unsigned int placement;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) BOOL shouldUseBackgroundPlatter;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesInternalColorOverrides;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } touchEdgeInsets;
@property (nonatomic) BOOL useRoundedFontDesign;
@property (nonatomic) BOOL usesLegibility;

+ (id)_alarmImageProviderActive:(BOOL)arg1;
+ (id)_preferredAdditionalFontSettings;
+ (id)_stopwatchImageProvider;
+ (id)_timerImageProvider;
+ (id)_worldClockImageProvider;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned int)arg1 narrow:(BOOL)arg2;
+ (id)smallComplicationViewForType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_applyColorScheme:(id)arg1;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned int)arg1;
- (id)_newImageViewSubview;
- (id)_newImageViewSubviewWithAlpha:(float)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newStandardLabelSubview;
- (id)_smallCapsFont;
- (id)_standardFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_touchEdgeInsetsForPlacement:(unsigned int)arg1;
- (void)_updateContentForEditingChange;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewAlpha:(id)arg1;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (float)_widthThatFits;
- (id)accentColor;
- (void)applyFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
- (id)colorScheme;
- (id)complicationTemplate;
- (id)displayObserver;
- (BOOL)editing;
- (id)font;
- (float)foregroundAlpha;
- (id)foregroundColor;
- (float)foregroundImageAlpha;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutLabelVertically:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })maxSize;
- (float)minimumWidth;
- (id)overrideColor;
- (unsigned int)placement;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAccentColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComplicationTemplate:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setForegroundAlpha:(float)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundImageAlpha:(float)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinimumWidth:(float)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setPlacement:(unsigned int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShouldUseBackgroundPlatter:(BOOL)arg1;
- (void)setSuppressesInternalColorOverrides:(BOOL)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setUseRoundedFontDesign:(BOOL)arg1;
- (void)setUsesLegibility:(BOOL)arg1;
- (id)shadowColor;
- (BOOL)shouldUseBackgroundPlatter;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)suppressesInternalColorOverrides;
- (id)timeTravelDate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })touchEdgeInsets;
- (BOOL)useRoundedFontDesign;
- (BOOL)usesLegibility;

@end
