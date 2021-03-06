/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKTripleCondition : NSObject {
    void negated;
    void sql.storage;
    void type;
}

@property (nonatomic) BOOL negated;
@property (nonatomic, copy) NSString *sql;

- (id /* block */).cxx_destruct;
- (id)and:(id)arg1;
- (BOOL)evaluateOn:(id)arg1;
- (id)init;
- (id)init:(int)arg1 value:(id)arg2 negated:(BOOL)arg3;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3;
- (id)initWithValue:(BOOL)arg1;
- (BOOL)negated;
- (id)or:(id)arg1;
- (void)setNegated:(BOOL)arg1;
- (void)setSql:(id)arg1;
- (id)sql;

@end
