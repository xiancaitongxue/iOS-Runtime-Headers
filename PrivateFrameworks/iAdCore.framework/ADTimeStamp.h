/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADTimeStamp : PBCodable {
    BOOL _hasTimestampEvent;
    BOOL _hasTimestampReport;
    unsigned long long _timestampEvent;
    unsigned long long _timestampReport;
}

@property(readonly) BOOL hasTimestampEvent;
@property(readonly) BOOL hasTimestampReport;
@property unsigned long long timestampEvent;
@property unsigned long long timestampReport;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestampEvent;
- (BOOL)hasTimestampReport;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setTimestampEvent:(unsigned long long)arg1;
- (void)setTimestampReport:(unsigned long long)arg1;
- (unsigned long long)timestampEvent;
- (unsigned long long)timestampReport;
- (void)writeTo:(id)arg1;

@end