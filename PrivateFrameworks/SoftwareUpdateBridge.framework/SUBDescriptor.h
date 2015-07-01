/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBDescriptor : NSObject <NSSecureCoding> {
    NSError *_denialReasons;
    SUBDocumentation *_documentation;
    NSString *_documentationID;
    long long _downloadSize;
    long long _installationSize;
    BOOL _isAwaitingAdmissionControlForInstallation;
    NSString *_marketingVersion;
    long _msuHandle;
    long long _msuPrepareSize;
    NSString *_productBuildVersion;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_publisher;
    long long _totalRequiredFreeSpace;
    long long _unarchivedSize;
    BOOL _userDidAcceptTermsAndConditions;
    BOOL _willProceedWithInstallation;
}

@property (nonatomic, retain) NSError *denialReasons;
@property (nonatomic, retain) SUBDocumentation *documentation;
@property (nonatomic, retain) NSString *documentationID;
@property (nonatomic) long long downloadSize;
@property (nonatomic, readonly, retain) NSString *humanReadableUpdateName;
@property (nonatomic) long long installationSize;
@property (nonatomic) BOOL isAwaitingAdmissionControlForInstallation;
@property (nonatomic, retain) NSString *marketingVersion;
@property (nonatomic) long msuHandle;
@property (nonatomic) long long msuPrepareSize;
@property (nonatomic, readonly) long long preparationSize;
@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productSystemName;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *publisher;
@property (nonatomic) long long totalRequiredFreeSpace;
@property (nonatomic) long long unarchivedSize;
@property (nonatomic) BOOL userDidAcceptTermsAndConditions;
@property (nonatomic) BOOL willProceedWithInstallation;

+ (BOOL)supportsSecureCoding;

- (int)compare:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)denialReasons;
- (id)description;
- (id)documentation;
- (id)documentationID;
- (long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (long long)installationSize;
- (BOOL)isAwaitingAdmissionControlForInstallation;
- (BOOL)isEqual:(id)arg1;
- (id)marketingVersion;
- (long)msuHandle;
- (long long)msuPrepareSize;
- (long long)preparationSize;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (void)setDenialReasons:(id)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setDownloadSize:(long long)arg1;
- (void)setInstallationSize:(long long)arg1;
- (void)setIsAwaitingAdmissionControlForInstallation:(BOOL)arg1;
- (void)setMarketingVersion:(id)arg1;
- (void)setMsuHandle:(long)arg1;
- (void)setMsuPrepareSize:(long long)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setTotalRequiredFreeSpace:(long long)arg1;
- (void)setUnarchivedSize:(long long)arg1;
- (void)setUserDidAcceptTermsAndConditions:(BOOL)arg1;
- (void)setWillProceedWithInstallation:(BOOL)arg1;
- (long long)totalRequiredFreeSpace;
- (long long)unarchivedSize;
- (BOOL)userDidAcceptTermsAndConditions;
- (BOOL)willProceedWithInstallation;

@end