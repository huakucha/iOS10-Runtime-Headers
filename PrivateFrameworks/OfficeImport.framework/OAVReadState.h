/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

@interface OAVReadState : OCXReadState  {
    Class mClient;
    OAXDrawingState *mOAXState;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}


- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (bool)isDualDrawable:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;
- (void)setOAXState:(id)arg1;
- (id)oaxState;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;
- (void)addDualDrawable:(id)arg1;
- (id)drawableForVmlShapeId:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (void)resetForNewDrawing;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (Class)client;
- (void)dealloc;

@end