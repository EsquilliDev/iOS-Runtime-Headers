/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAMicroblogSocialCredential;

@interface SAMicroblogSocialCredentialResult : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(retain) SAMicroblogSocialCredential * socialCredential;

+ (id)socialCredentialResult;
+ (id)socialCredentialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSocialCredential:(id)arg1;
- (id)socialCredential;

@end