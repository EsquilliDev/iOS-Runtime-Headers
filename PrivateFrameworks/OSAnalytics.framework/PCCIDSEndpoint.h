/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCIDSEndpoint : PCCEndpoint <IDSServiceDelegate> {
    IDSService * _homeDeviceService;
    IDSService * _pairedWatchService;
    NSMutableDictionary * _serviceByDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceIds;
- (id)init;
- (bool)isDeviceNearby:(id)arg1;
- (void)runWithDelegate:(id)arg1;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id*)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (id)serviceByDeviceID:(id)arg1;
- (id)startService:(id)arg1;

@end