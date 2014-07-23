/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {
    NSString *_bundleName;
    int _lQM;
    unsigned int _rxBytes;
    unsigned int _stateDuration;
    unsigned int _txBytes;
    struct { 
        unsigned int lQM : 1; 
        unsigned int rxBytes : 1; 
        unsigned int stateDuration : 1; 
        unsigned int txBytes : 1; 
    } _has;
}

@property(readonly) bool hasBundleName;
@property(retain) NSString * bundleName;
@property bool hasLQM;
@property int lQM;
@property bool hasTxBytes;
@property unsigned int txBytes;
@property bool hasRxBytes;
@property unsigned int rxBytes;
@property bool hasStateDuration;
@property unsigned int stateDuration;


- (unsigned int)stateDuration;
- (unsigned int)rxBytes;
- (unsigned int)txBytes;
- (int)lQM;
- (bool)hasStateDuration;
- (void)setHasStateDuration:(bool)arg1;
- (void)setStateDuration:(unsigned int)arg1;
- (bool)hasRxBytes;
- (void)setHasRxBytes:(bool)arg1;
- (void)setRxBytes:(unsigned int)arg1;
- (bool)hasTxBytes;
- (void)setHasTxBytes:(bool)arg1;
- (void)setTxBytes:(unsigned int)arg1;
- (bool)hasLQM;
- (void)setHasLQM:(bool)arg1;
- (void)setLQM:(int)arg1;
- (bool)hasBundleName;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)bundleName;
- (void)setBundleName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end