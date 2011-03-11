/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABSwellTextView, UIColor;

@interface ABUITextView : UITextView  {
    float _lastContentHeight;
    BOOL _isHighlighted;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_shadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    BOOL _disallowsSetContentOffset;
    BOOL _informParentOfContentSizeChange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _pinnedCursorPosition;
    ABSwellTextView *_parent;
}

@property struct CGSize { float width; float height; } shadowOffset;
@property(retain) UIColor * shadowColor;
@property BOOL disallowsSetContentOffset;
@property(retain) UIColor * highlightedTextColor;
@property(getter=isHighlighted) BOOL highlighted;
@property ABSwellTextView * parent;

+ (void)_initializeSafeCategory;

- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)shadowColor;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextColor:(id)arg1;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isHighlighted;
- (BOOL)becomeFirstResponder;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setShadowColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setDisallowsSetContentOffset:(BOOL)arg1;
- (void)_secretSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateStylesheet;
- (BOOL)disallowsSetContentOffset;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end