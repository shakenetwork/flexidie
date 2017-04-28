/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSCoder.h"

@class NSData;

@interface FBMessagePackCoder : NSCoder
{
//    struct vector<FBMPCEncodingObjectContext *, std::__1::allocator<FBMPCEncodingObjectContext *>> _encodingContextStack;
//    struct vector<FBMPCDecodingObjectContext, std::__1::allocator<FBMPCDecodingObjectContext>> _decodingObjectStack;
//    struct MessagePackParseState _decodingParseState;
    id _rootObject;
//    struct FBMPCEncodingObjectContext _encodingRootContext;
    unsigned int _systemVersion;
    NSData *_data;
}

@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
//- (id).cxx_construct;
//- (void).cxx_destruct;
- (id)unpackObjectWithData:(id)arg1;
- (id)packedDataWithRootObject:(id)arg1;
- (int)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (void)_prepareForReuse;
- (void)finishEncoding;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)_decodeMsgpackObject:(struct msgpack_object *)arg1;
- (id)_decodeObjectForIntKey:(int)arg1;
- (id)decodeObjectForKey:(id)arg1;
//- (id)_decodeNewObject:(CDStruct_a8115600)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)_hijackDecodeForLinearSequence:(Class)arg1;
- (void)_hijackEncodeForLinearSequence:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)willEncodeNSubobjects:(unsigned int)arg1;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg1;
- (id)decodeDataObject;
- (BOOL)containsValueForKey:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)allowsKeyedCoding;

@end
