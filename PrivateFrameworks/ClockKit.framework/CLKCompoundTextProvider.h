/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKCompoundTextProvider : CLKTextProvider {
    NSMutableArray * _segments;
    NSString * _sessionCacheKey;
    NSMutableArray * _textProviders;
}

+ (id)compoundProviderWithLocalizedFormat:(id)arg1 localizedTextProviders:(id)arg2;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (void)_processFormat:(id)arg1 arguments:(void*)arg2;
- (id)_replacementForTextProvider:(id)arg1 index:(unsigned int)arg2 withStyle:(id)arg3;
- (id)_sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (int)_updateFrequency;
- (void)_validate;
- (void)addTextProvider:(id)arg1 andGetPlaceholderString:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(void*)arg2;
- (id)initWithSegments:(id)arg1 textProviders:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)timeTravelUpdateFrequency;

@end