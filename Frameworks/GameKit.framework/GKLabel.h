/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextStyle;

@interface GKLabel : UILabel {
    float _actualFontShrinkageFactor;
    GKTextStyle *_appliedStyle;
    GKTextStyle *_baseStyle;
    BOOL _shouldInhibitReplay;
    BOOL _usingAttributedText;
}

@property float actualFontShrinkageFactor;
@property(retain) GKTextStyle * appliedStyle;
@property(retain) GKTextStyle * baseStyle;
@property BOOL shouldInhibitReplay;
@property(readonly) BOOL usingAttributedText;

+ (void)initialize;

- (float)actualFontShrinkageFactor;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyle;
- (void)setActualFontShrinkageFactor:(float)arg1;
- (void)setAppliedStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setShouldInhibitReplay:(BOOL)arg1;
- (void)setText:(id)arg1;
- (BOOL)shouldInhibitReplay;
- (void)shrinkFontToFitWidth;
- (BOOL)usingAttributedText;

@end