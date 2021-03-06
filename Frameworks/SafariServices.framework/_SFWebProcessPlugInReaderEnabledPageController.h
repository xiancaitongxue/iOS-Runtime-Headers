/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol> {
    _WKRemoteObjectInterface * _availabilityControllerInterface;
    int  _cachedReaderTopScrollOffset;
    NSMutableSet * _domainsNeedingDesktopUserAgent;
    SFWebProcessPlugInPageExtensionController * _extensionController;
    NSDictionary * _initalArticleScrollPositionAsDictionary;
    NSDictionary * _initialReaderConfiguration;
    NSDictionary * _initialScrollPositionAsDictionary;
    <SFReaderEventsListener> * _readerActivityListenerProxy;
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController> > { 
        struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::__1::default_delete<SafariServices::ReaderAvailabilityController> > { 
            struct ReaderAvailabilityController {} *__first_; 
        } __ptr_; 
    }  _readerAvailabilityController;
    _SFReaderWebProcessPlugInPageController * _readerPageController;
    <RequestDesktopSiteUIProcessListener> * _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface * _requestDesktopSiteWebProcessPlugInListenerInterface;
    _SFWebProcessPlugInPageSafeBrowsingController * _safeBrowsingController;
    BOOL  _viewingReadingListArchive;
}

@property (nonatomic) int cachedReaderTopScrollOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *domainsNeedingDesktopUserAgent;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDictionary *initalArticleScrollPositionAsDictionary;
@property (nonatomic, readonly) NSDictionary *initialReaderConfiguration;
@property (nonatomic, retain) _SFReaderWebProcessPlugInPageController *readerPageController;
@property (readonly) Class superclass;
@property (getter=isViewingReadingListArchive, nonatomic, readonly) BOOL viewingReadingListArchive;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearReaderControllerInterface;
- (void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_setUpReaderActivityListenerProxy;
- (void)_setUpReaderControllerInterface;
- (int)cachedReaderTopScrollOffset;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)decreaseReaderTextSize;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)didDetermineReaderAvailability:(BOOL)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (id)domainsNeedingDesktopUserAgent;
- (void)increaseReaderTextSize;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)initalArticleScrollPositionAsDictionary;
- (id)initialReaderConfiguration;
- (BOOL)isViewingReadingListArchive;
- (void)loadNewReaderArticle;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (struct OpaqueJSValue { }*)originalArticleFinder;
- (void)prepareReaderContentForPrinting;
- (void)prepareToTransitionToReader;
- (void)readerContentIsReadyForDisplay:(id)arg1;
- (id)readerPageController;
- (void)setCachedReaderTopScrollOffset:(int)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(int)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
- (void)setReaderPageController:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(int)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned int)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
