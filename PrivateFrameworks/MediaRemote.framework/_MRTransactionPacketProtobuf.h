/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    NSData * _data;
    struct { 
        unsigned int totalLength : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _key;
    unsigned long long  _totalLength;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasTotalLength;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long totalLength;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (bool)hasIdentifier;
- (bool)hasKey;
- (bool)hasTotalLength;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setHasTotalLength:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setTotalLength:(unsigned long long)arg1;
- (unsigned long long)totalLength;
- (void)writeTo:(id)arg1;

@end