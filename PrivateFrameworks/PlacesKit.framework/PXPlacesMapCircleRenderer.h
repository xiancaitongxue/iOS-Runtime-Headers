/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapCircleRenderer : NSObject <PXPlacesMapAnnotationRenderer> {
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } minimumEdgeInsets;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (int)annotationType;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })minimumEdgeInsets;
- (id)pipelineComponentProvider;
- (void)reset;
- (void)setPipelineComponentProvider:(id)arg1;
- (BOOL)supportsMoveAnimations;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;

@end