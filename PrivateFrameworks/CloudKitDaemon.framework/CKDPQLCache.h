/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQLCache : NSObject {
    CKDClientContext * _context;
    NSObject<OS_dispatch_queue> * _dbQueue;
    unsigned int  _openHandles;
    PQLConnection * _pdb;
}

@property (nonatomic, readonly) CKDClientContext *context;
@property (nonatomic, readonly) NSArray *createInitialTablesSQL;
@property (nonatomic, readonly) PQLConnection *database;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic, readonly) BOOL isOpen;
@property (nonatomic) unsigned int openHandles;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (BOOL)_closeWithError:(id*)arg1 force:(BOOL)arg2;
- (BOOL)_lockedOpenDatabase:(id*)arg1;
- (id)_newConnection:(id)arg1;
- (BOOL)_setupCacheWithError:(id*)arg1;
- (BOOL)_setupConnectionWithError:(id*)arg1;
- (BOOL)_truncateAndReconnectToDatabaseWithError:(id*)arg1;
- (BOOL)closeWithError:(id*)arg1;
- (id)context;
- (id)createInitialTablesSQL;
- (id)database;
- (id)dbQueue;
- (BOOL)forceCloseWithError:(id*)arg1;
- (id)initWithClientContext:(id)arg1;
- (BOOL)isOpen;
- (unsigned int)openHandles;
- (BOOL)openWithError:(id*)arg1;
- (id)path;
- (void)performOnDBQueue:(id /* block */)arg1;
- (BOOL)removeCorruptDatabaseWithError:(id*)arg1;
- (BOOL)removeDatabaseFilesWithError:(id*)arg1;
- (BOOL)resetWithError:(id*)arg1;
- (void)setDbQueue:(id)arg1;
- (void)setOpenHandles:(unsigned int)arg1;
- (id)upgradeInfoForVersion:(unsigned int)arg1;

@end
