/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_HKAuthorizationPresentationController>, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSXPCConnection, _HKHealthStoreProxy;

@interface HKHealthStore : NSObject <HKClientInterface, HKQueryDelegate> {
    id _authorizationDelegateTransactionErrorHandler;
    <_HKAuthorizationPresentationController> *_authorizationPresentationController;
    id _bluetoothStatusHandler;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_connection;
    _HKHealthStoreProxy *_connectionProxy;
    NSMutableDictionary *_discoveries;
    NSMutableSet *_discoveriesEnded;
    NSMutableSet *_queries;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *_sessions;
    NSMutableSet *_sessionsEnded;
}

@property(copy) id bluetoothStatusHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=_queries,readonly) NSSet * queries;
@property(readonly) Class superclass;

+ (BOOL)isHealthDataAvailable;

- (void).cxx_destruct;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)_deleteObjects:(id)arg1 completion:(id)arg2;
- (void)_fetchCharacteristicForDataTypeSynchronous:(id)arg1 withCompletion:(id)arg2;
- (id)_filteredSources:(id)arg1;
- (void)_handleInterruption;
- (id)_queries;
- (id)_remoteObjectProxyWithActionCompletion:(id)arg1;
- (id)_serverProxyForSelector:(SEL)arg1 sanitizedErrorHandler:(id)arg2;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(int)arg2 withCompletion:(id)arg3;
- (BOOL)_setBiologicalSex:(int)arg1 error:(id*)arg2;
- (BOOL)_setBloodType:(int)arg1 error:(id*)arg2;
- (BOOL)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3;
- (BOOL)_setDateOfBirth:(id)arg1 error:(id*)arg2;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(id)arg2;
- (void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg1 types:(id)arg2;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id)arg2;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id)arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(id)arg2;
- (void)allSourcesWithCompletion:(id)arg1;
- (int)authorizationStatusForType:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(id)arg2 errorHandler:(id)arg3;
- (id)biologicalSexWithError:(id*)arg1;
- (id)bloodTypeWithError:(id*)arg1;
- (id)bluetoothStatusHandler;
- (id)createMedicalIDData;
- (id)dateOfBirthWithError:(id*)arg1;
- (void)dealloc;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(id)arg3;
- (void)deleteMedicalIDData;
- (void)deleteMedicalIDDataWithCompletion:(id)arg1;
- (void)deleteObject:(id)arg1 withCompletion:(id)arg2;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)deliverBluetoothStatus:(int)arg1 withError:(id)arg2;
- (void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned int)arg3 withError:(id)arg4;
- (void)deliverSessionHealthServiceStatus:(int)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned int)arg2 withError:(id)arg3;
- (void)diagnosticsForKey:(id)arg1 completion:(id)arg2;
- (void)disableAllBackgroundDeliveryWithCompletion:(id)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(id)arg2;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(int)arg2 withCompletion:(id)arg3;
- (void)endAuthorizationDelegateTransactionWithError:(id)arg1;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg1 withCompletion:(id)arg2;
- (void)fetchMedicalIDDataWithCompletion:(id)arg1;
- (void)getDatabaseUsageInBytesWithCompletion:(id)arg1;
- (void)getDefaultValueForKey:(id)arg1 withHandler:(id)arg2;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(id)arg3;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)healthServicePairingsWithHandler:(id)arg1;
- (id)hk_sourcesForAuthorization;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(id)arg2;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(id)arg4;
- (void)performMigrationWithCompletion:(id)arg1;
- (void)presentAuthorizationWithSessionIdentifier:(id)arg1 completion:(id)arg2;
- (void)previousHealthServicePairingsWithHandler:(id)arg1;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id)arg4;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(id)arg2;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(id)arg4;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)saveObject:(id)arg1 withCompletion:(id)arg2;
- (void)saveObjects:(id)arg1 withCompletion:(id)arg2;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id)arg3;
- (void)setBluetoothStatusHandler:(id)arg1;
- (void)setDataCollectionOptionForType:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(id)arg4;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id)arg3;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(id)arg4;
- (void)startAllHealthServicesDiscoveryWithHandler:(id)arg1;
- (void)startBluetoothStatusUpdates:(id)arg1;
- (void)startFakingDataWithActivity:(int)arg1 speed:(id)arg2 completion:(id)arg3;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id)arg2;
- (void)startRecordingDataToFile:(id)arg1 completion:(id)arg2;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 completion:(id)arg3;
- (void)stopFakingDataWithCompletion:(id)arg1;
- (void)stopQuery:(id)arg1;
- (void)stopRecordingDataWithCompletion:(id)arg1;
- (void)stopReplayingDataWithCompletion:(id)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id)arg2;
- (void)updateMedicalIDData:(id)arg1 completion:(id)arg2;
- (void)updateMedicalIDData:(id)arg1;

@end