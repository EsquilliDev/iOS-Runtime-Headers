/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLogger : NSObject {
    NSDictionary * _logChannels;
}

@property (nonatomic, retain) NSDictionary *logChannels;

+ (id)logFacilities;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)logChannelForFacility:(id)arg1;
- (id)logChannels;
- (void)setLogChannels:(id)arg1;

@end