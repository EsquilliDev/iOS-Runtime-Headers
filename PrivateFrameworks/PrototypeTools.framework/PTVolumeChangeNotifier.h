/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject {
    NSMutableSet *ringerSilentChangedHandlers;
    NSMutableSet *ringerVolumeChangedHandlers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addRingerSwitchChangedHandler:(id)arg1;
- (void)addVolumeChangedHandler:(id)arg1;
- (id)init;
- (void)ringerSilentChanged;
- (void)ringerVolumeChanged:(id)arg1;

@end