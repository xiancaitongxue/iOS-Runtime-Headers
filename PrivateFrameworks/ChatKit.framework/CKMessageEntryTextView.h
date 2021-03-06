/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryTextView : EMKTextView {
    NSString * _autocorrectionContext;
    BOOL  _hideCaret;
    float  _placeHolderWidth;
    UIColor * _placeholderColor;
    UILabel * _placeholderLabel;
    BOOL  _preventingResignFirstResponder;
    NSString * _responseContext;
    UIKeyboardInputMode * _savedKeyboardInputMode;
    BOOL  _sendCurrentLocationFromKeyboardEnabled;
    BOOL  _showingDictationPlaceholder;
    BOOL  _updatesFontOnTextChange;
}

@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic, copy) NSAttributedString *compositionText;
@property (nonatomic) BOOL hideCaret;
@property (nonatomic) float placeHolderWidth;
@property (nonatomic, copy) UIColor *placeholderColor;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *placeholderText;
@property (getter=isPreventingResignFirstResponder, nonatomic) BOOL preventingResignFirstResponder;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic, retain) UIKeyboardInputMode *savedKeyboardInputMode;
@property (nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;
@property (getter=isShowingDictationPlaceholder, nonatomic) BOOL showingDictationPlaceholder;
@property (getter=isSingleLine, nonatomic, readonly) BOOL singleLine;
@property (nonatomic) BOOL updatesFontOnTextChange;

- (void).cxx_destruct;
- (SEL)_sendCurrentLocationAction;
- (id)autocorrectionContext;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)compositionText;
- (void)dealloc;
- (BOOL)hideCaret;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (BOOL)isPreventingResignFirstResponder;
- (BOOL)isShowingDictationPlaceholder;
- (BOOL)isSingleLine;
- (void)layoutSubviews;
- (float)placeHolderWidth;
- (id)placeholderColor;
- (id)placeholderLabel;
- (id)placeholderText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (BOOL)resignFirstResponder;
- (id)responseContext;
- (void)restoreKeyboardInputMode;
- (void)saveKeyboardInputMode;
- (id)savedKeyboardInputMode;
- (BOOL)sendCurrentLocationFromKeyboardEnabled;
- (void)setAttributedText:(id)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHideCaret:(BOOL)arg1;
- (void)setPlaceHolderWidth:(float)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setPreventingResignFirstResponder:(BOOL)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setSavedKeyboardInputMode:(id)arg1;
- (void)setSendCurrentLocationFromKeyboardEnabled:(BOOL)arg1;
- (void)setShowingDictationPlaceholder:(BOOL)arg1;
- (void)setUpdatesFontOnTextChange:(BOOL)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateFontIfNeeded;
- (void)updateTextView;
- (BOOL)updatesFontOnTextChange;

@end
