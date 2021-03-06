/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagKeyInfo : NSObject {
    NSString * _bagKey;
    <NSObject> * _defaultValue;
    unsigned long long  _valueType;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) <NSObject> *defaultValue;
@property (nonatomic, readonly) unsigned long long valueType;

- (void).cxx_destruct;
- (id)bagKey;
- (id)defaultValue;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)valueType;

@end
