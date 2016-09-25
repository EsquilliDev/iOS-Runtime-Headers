/* Generated by RuntimeBrowser.
 */

@protocol PVFaceComparer <NSObject>

@required

- (float)clusterRepresentativenessOfFace:(PVFace *)arg1;
- (BOOL)faceIsGoodRepresentativeOfItsCluster:(PVFace *)arg1;
- (BOOL)getDistance:(float*)arg1 fromFaceObservation:(CVMLFaceObservation *)arg2 toFaceObservation:(CVMLFaceObservation *)arg3 error:(id*)arg4;

@end