/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceListPool : NSObject {
    /* Warning: unhandled struct encoding: '{_MTLResourceListPoolPrivate="queue"{resourceListQueue="tqh_first"@"MTLResourceList""tqh_last"^@}"lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"count"i}' */ struct _MTLResourceListPoolPrivate { 
        struct resourceListQueue { 
            MTLResourceList *tqh_first; 
            id *tqh_last; 
            struct os_unfair_lock_s { 
                unsigned int _os_unfair_lock_opaque; 
            } lock; 
            int count; 
        } queue; 
    }  _priv;
    int  _resourceListCapacity;
}

- (int)availableCount;
- (void)dealloc;
- (id)initWithResourceListCapacity:(int)arg1;
- (void)purge;

@end
