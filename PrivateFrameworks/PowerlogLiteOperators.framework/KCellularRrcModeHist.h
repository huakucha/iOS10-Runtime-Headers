/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularRrcModeHist : PBCodable <NSCopying> {
    unsigned int  _connDurBin0;
    unsigned int  _connDurBin1;
    unsigned int  _connDurBin10;
    unsigned int  _connDurBin11;
    unsigned int  _connDurBin12;
    unsigned int  _connDurBin2;
    unsigned int  _connDurBin3;
    unsigned int  _connDurBin4;
    unsigned int  _connDurBin5;
    unsigned int  _connDurBin6;
    unsigned int  _connDurBin7;
    unsigned int  _connDurBin8;
    unsigned int  _connDurBin9;
    unsigned int  _durationMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connDurBin0 : 1; 
        unsigned int connDurBin1 : 1; 
        unsigned int connDurBin10 : 1; 
        unsigned int connDurBin11 : 1; 
        unsigned int connDurBin12 : 1; 
        unsigned int connDurBin2 : 1; 
        unsigned int connDurBin3 : 1; 
        unsigned int connDurBin4 : 1; 
        unsigned int connDurBin5 : 1; 
        unsigned int connDurBin6 : 1; 
        unsigned int connDurBin7 : 1; 
        unsigned int connDurBin8 : 1; 
        unsigned int connDurBin9 : 1; 
        unsigned int durationMs : 1; 
        unsigned int idleDurBin0 : 1; 
        unsigned int idleDurBin1 : 1; 
        unsigned int idleDurBin10 : 1; 
        unsigned int idleDurBin11 : 1; 
        unsigned int idleDurBin12 : 1; 
        unsigned int idleDurBin2 : 1; 
        unsigned int idleDurBin3 : 1; 
        unsigned int idleDurBin4 : 1; 
        unsigned int idleDurBin5 : 1; 
        unsigned int idleDurBin6 : 1; 
        unsigned int idleDurBin7 : 1; 
        unsigned int idleDurBin8 : 1; 
        unsigned int idleDurBin9 : 1; 
    }  _has;
    unsigned int  _idleDurBin0;
    unsigned int  _idleDurBin1;
    unsigned int  _idleDurBin10;
    unsigned int  _idleDurBin11;
    unsigned int  _idleDurBin12;
    unsigned int  _idleDurBin2;
    unsigned int  _idleDurBin3;
    unsigned int  _idleDurBin4;
    unsigned int  _idleDurBin5;
    unsigned int  _idleDurBin6;
    unsigned int  _idleDurBin7;
    unsigned int  _idleDurBin8;
    unsigned int  _idleDurBin9;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connDurBin0;
@property (nonatomic) unsigned int connDurBin1;
@property (nonatomic) unsigned int connDurBin10;
@property (nonatomic) unsigned int connDurBin11;
@property (nonatomic) unsigned int connDurBin12;
@property (nonatomic) unsigned int connDurBin2;
@property (nonatomic) unsigned int connDurBin3;
@property (nonatomic) unsigned int connDurBin4;
@property (nonatomic) unsigned int connDurBin5;
@property (nonatomic) unsigned int connDurBin6;
@property (nonatomic) unsigned int connDurBin7;
@property (nonatomic) unsigned int connDurBin8;
@property (nonatomic) unsigned int connDurBin9;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) bool hasConnDurBin0;
@property (nonatomic) bool hasConnDurBin1;
@property (nonatomic) bool hasConnDurBin10;
@property (nonatomic) bool hasConnDurBin11;
@property (nonatomic) bool hasConnDurBin12;
@property (nonatomic) bool hasConnDurBin2;
@property (nonatomic) bool hasConnDurBin3;
@property (nonatomic) bool hasConnDurBin4;
@property (nonatomic) bool hasConnDurBin5;
@property (nonatomic) bool hasConnDurBin6;
@property (nonatomic) bool hasConnDurBin7;
@property (nonatomic) bool hasConnDurBin8;
@property (nonatomic) bool hasConnDurBin9;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasIdleDurBin0;
@property (nonatomic) bool hasIdleDurBin1;
@property (nonatomic) bool hasIdleDurBin10;
@property (nonatomic) bool hasIdleDurBin11;
@property (nonatomic) bool hasIdleDurBin12;
@property (nonatomic) bool hasIdleDurBin2;
@property (nonatomic) bool hasIdleDurBin3;
@property (nonatomic) bool hasIdleDurBin4;
@property (nonatomic) bool hasIdleDurBin5;
@property (nonatomic) bool hasIdleDurBin6;
@property (nonatomic) bool hasIdleDurBin7;
@property (nonatomic) bool hasIdleDurBin8;
@property (nonatomic) bool hasIdleDurBin9;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int idleDurBin0;
@property (nonatomic) unsigned int idleDurBin1;
@property (nonatomic) unsigned int idleDurBin10;
@property (nonatomic) unsigned int idleDurBin11;
@property (nonatomic) unsigned int idleDurBin12;
@property (nonatomic) unsigned int idleDurBin2;
@property (nonatomic) unsigned int idleDurBin3;
@property (nonatomic) unsigned int idleDurBin4;
@property (nonatomic) unsigned int idleDurBin5;
@property (nonatomic) unsigned int idleDurBin6;
@property (nonatomic) unsigned int idleDurBin7;
@property (nonatomic) unsigned int idleDurBin8;
@property (nonatomic) unsigned int idleDurBin9;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connDurBin0;
- (unsigned int)connDurBin1;
- (unsigned int)connDurBin10;
- (unsigned int)connDurBin11;
- (unsigned int)connDurBin12;
- (unsigned int)connDurBin2;
- (unsigned int)connDurBin3;
- (unsigned int)connDurBin4;
- (unsigned int)connDurBin5;
- (unsigned int)connDurBin6;
- (unsigned int)connDurBin7;
- (unsigned int)connDurBin8;
- (unsigned int)connDurBin9;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationMs;
- (bool)hasConnDurBin0;
- (bool)hasConnDurBin1;
- (bool)hasConnDurBin10;
- (bool)hasConnDurBin11;
- (bool)hasConnDurBin12;
- (bool)hasConnDurBin2;
- (bool)hasConnDurBin3;
- (bool)hasConnDurBin4;
- (bool)hasConnDurBin5;
- (bool)hasConnDurBin6;
- (bool)hasConnDurBin7;
- (bool)hasConnDurBin8;
- (bool)hasConnDurBin9;
- (bool)hasDurationMs;
- (bool)hasIdleDurBin0;
- (bool)hasIdleDurBin1;
- (bool)hasIdleDurBin10;
- (bool)hasIdleDurBin11;
- (bool)hasIdleDurBin12;
- (bool)hasIdleDurBin2;
- (bool)hasIdleDurBin3;
- (bool)hasIdleDurBin4;
- (bool)hasIdleDurBin5;
- (bool)hasIdleDurBin6;
- (bool)hasIdleDurBin7;
- (bool)hasIdleDurBin8;
- (bool)hasIdleDurBin9;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)idleDurBin0;
- (unsigned int)idleDurBin1;
- (unsigned int)idleDurBin10;
- (unsigned int)idleDurBin11;
- (unsigned int)idleDurBin12;
- (unsigned int)idleDurBin2;
- (unsigned int)idleDurBin3;
- (unsigned int)idleDurBin4;
- (unsigned int)idleDurBin5;
- (unsigned int)idleDurBin6;
- (unsigned int)idleDurBin7;
- (unsigned int)idleDurBin8;
- (unsigned int)idleDurBin9;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnDurBin0:(unsigned int)arg1;
- (void)setConnDurBin10:(unsigned int)arg1;
- (void)setConnDurBin11:(unsigned int)arg1;
- (void)setConnDurBin12:(unsigned int)arg1;
- (void)setConnDurBin1:(unsigned int)arg1;
- (void)setConnDurBin2:(unsigned int)arg1;
- (void)setConnDurBin3:(unsigned int)arg1;
- (void)setConnDurBin4:(unsigned int)arg1;
- (void)setConnDurBin5:(unsigned int)arg1;
- (void)setConnDurBin6:(unsigned int)arg1;
- (void)setConnDurBin7:(unsigned int)arg1;
- (void)setConnDurBin8:(unsigned int)arg1;
- (void)setConnDurBin9:(unsigned int)arg1;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setHasConnDurBin0:(bool)arg1;
- (void)setHasConnDurBin10:(bool)arg1;
- (void)setHasConnDurBin11:(bool)arg1;
- (void)setHasConnDurBin12:(bool)arg1;
- (void)setHasConnDurBin1:(bool)arg1;
- (void)setHasConnDurBin2:(bool)arg1;
- (void)setHasConnDurBin3:(bool)arg1;
- (void)setHasConnDurBin4:(bool)arg1;
- (void)setHasConnDurBin5:(bool)arg1;
- (void)setHasConnDurBin6:(bool)arg1;
- (void)setHasConnDurBin7:(bool)arg1;
- (void)setHasConnDurBin8:(bool)arg1;
- (void)setHasConnDurBin9:(bool)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasIdleDurBin0:(bool)arg1;
- (void)setHasIdleDurBin10:(bool)arg1;
- (void)setHasIdleDurBin11:(bool)arg1;
- (void)setHasIdleDurBin12:(bool)arg1;
- (void)setHasIdleDurBin1:(bool)arg1;
- (void)setHasIdleDurBin2:(bool)arg1;
- (void)setHasIdleDurBin3:(bool)arg1;
- (void)setHasIdleDurBin4:(bool)arg1;
- (void)setHasIdleDurBin5:(bool)arg1;
- (void)setHasIdleDurBin6:(bool)arg1;
- (void)setHasIdleDurBin7:(bool)arg1;
- (void)setHasIdleDurBin8:(bool)arg1;
- (void)setHasIdleDurBin9:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIdleDurBin0:(unsigned int)arg1;
- (void)setIdleDurBin10:(unsigned int)arg1;
- (void)setIdleDurBin11:(unsigned int)arg1;
- (void)setIdleDurBin12:(unsigned int)arg1;
- (void)setIdleDurBin1:(unsigned int)arg1;
- (void)setIdleDurBin2:(unsigned int)arg1;
- (void)setIdleDurBin3:(unsigned int)arg1;
- (void)setIdleDurBin4:(unsigned int)arg1;
- (void)setIdleDurBin5:(unsigned int)arg1;
- (void)setIdleDurBin6:(unsigned int)arg1;
- (void)setIdleDurBin7:(unsigned int)arg1;
- (void)setIdleDurBin8:(unsigned int)arg1;
- (void)setIdleDurBin9:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end