/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKCanvasView : UIView <PKInternalDrawingViewDelegate, PKSelectionDelegate, UIDropInteractionDelegate> {
    bool  __maintainsTransformsOnLayout;
    UIImage * _backgroundImage;
    <PKCanvasViewDelegate> * _delegate;
    PKInternalDrawingView * _drawingView;
    double  _fixedDrawingScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedPixelSize;
    bool  _layerFixedPixelSize;
    PKInkPicker * _managedInkPicker;
    PKRecognitionOverlayView * _overlayView;
    PKSelectionController * _selectionController;
    <PKSelectionDelegate> * _selectionViewDelegate;
    bool  _visualizationsEnabled;
    bool  _wantsThickerInks;
}

@property (nonatomic, readonly) PKController *_drawingController;
@property (nonatomic, readonly) double _fixedDrawingScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _fixedPixelSize;
@property (nonatomic, readonly) bool _layerFixedPixelSize;
@property (nonatomic) bool _maintainsTransformsOnLayout;
@property (nonatomic, readonly) CHVisualizationManager *_recognitionVisualizationManager;
@property (nonatomic, readonly) PKRendererController *_rendererController;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCanvasViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableWideGamut;
@property (nonatomic, copy) PKDrawing *drawing;
@property (getter=_drawingGestureRecognizer, nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingTransform;
@property (nonatomic) SEL drawingUndoSelector;
@property (nonatomic) id drawingUndoTarget;
@property (nonatomic, retain) PKInternalDrawingView *drawingView;
@property (nonatomic, readonly) bool hasCurrentSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PKInk *ink;
@property (nonatomic, readonly) bool isDrawing;
@property (nonatomic, readonly) bool isRendering;
@property (nonatomic, retain) PKInkPicker *managedInkPicker;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic, retain) PKRecognitionOverlayView *overlayView;
@property (getter=_pinchGestureRecognizer, nonatomic, readonly) UIGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) PKSelectionController *selectionController;
@property (nonatomic, readonly) UIView *selectionView;
@property (nonatomic) <PKSelectionDelegate> *selectionViewDelegate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) bool visualizationsEnabled;
@property (nonatomic) bool wantsThickerInks;

- (void).cxx_destruct;
- (id)_drawingController;
- (void)_drawingDisplay;
- (id)_drawingGestureRecognizer;
- (struct CGSize { double x1; double x2; })_drawingSize;
- (double)_fixedDrawingScale;
- (struct CGSize { double x1; double x2; })_fixedPixelSize;
- (bool)_layerFixedPixelSize;
- (bool)_maintainsTransformsOnLayout;
- (id)_pinchGestureRecognizer;
- (id)_recognitionVisualizationManager;
- (id)_rendererController;
- (void)_setDrawing:(id)arg1 alreadyRenderedDrawing:(id)arg2 imageForAlreadyRenderedDrawing:(id)arg3 fullyRenderedCompletionBlock:(id /* block */)arg4;
- (void)_setFixedPixelSize:(struct CGSize { double x1; double x2; })arg1 drawingScale:(double)arg2;
- (void)_setFixedPointSize:(struct CGSize { double x1; double x2; })arg1 drawingScale:(double)arg2;
- (void)_setNeedsDrawingDisplay;
- (void)_setup;
- (void)_updateVisualizationSupport;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (id)backgroundImage;
- (bool)canBecomeFirstResponder;
- (bool)canBeginDrawingWithTouch:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGPoint { double x1; double x2; })closestPointForPastedSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDrawing:(id*)arg2;
- (void)commitSelectionIfNecessaryWithCompletion:(id /* block */)arg1;
- (bool)containsDrawingUUID:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (void)didBeginDraggingSelection;
- (void)didFinishRenderingStroke:(id)arg1 inDrawing:(id)arg2;
- (bool)disableWideGamut;
- (void)drawStrokeWithPath:(struct CGPath { }*)arg1;
- (id)drawing;
- (void)drawingCancelled;
- (void)drawingDidChange:(id)arg1;
- (id)drawingForLiveAttachment;
- (id)drawingForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)drawingForUUID:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (id)drawingView;
- (void)duplicate:(id)arg1;
- (void)eraseAll;
- (bool)hasCurrentSelection;
- (struct CGImage { }*)image;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageTransform;
- (void)imageWithCompletionBlock:(id /* block */)arg1;
- (void)initDrawingView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fixedPixelSize:(struct CGSize { double x1; double x2; })arg2 drawingScale:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fixedPixelSize:(struct CGSize { double x1; double x2; })arg2 drawingScale:(double)arg3 layerFixedPixelSize:(bool)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionController:(id)arg2;
- (id)ink;
- (bool)isDrawing;
- (bool)isRendering;
- (bool)isValidDropPointForStrokes:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyCommands;
- (double)layerContentScale;
- (void)layoutSubviews;
- (bool)liveDrawingIsAtEndOfDocument;
- (id)managedInkPicker;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
- (id)overlayView;
- (void)paste:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)pickInk;
- (struct CGPoint { double x1; double x2; })pointInStrokeSpace:(struct CGPoint { double x1; double x2; })arg1 inDrawing:(id)arg2;
- (void)renderingDidFinish;
- (void)resetSelectedStrokeStateForRenderer;
- (void)scrollContent:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionController;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionDrawingTransform;
- (struct CGPoint { double x1; double x2; })selectionOffsetForDrawing:(id)arg1;
- (void)selectionRefreshWithChangeToDrawings:(id)arg1;
- (id)selectionTopView;
- (id)selectionView;
- (id)selectionViewDelegate;
- (void)setBackgroundImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableWideGamut:(bool)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDrawingUndoSelector:(SEL)arg1;
- (void)setDrawingUndoTarget:(id)arg1;
- (void)setDrawingView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInk:(id)arg1;
- (void)setIsDrawing:(bool)arg1;
- (void)setManagedInkPicker:(id)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setSelectionController:(id)arg1;
- (void)setSelectionViewDelegate:(id)arg1;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVisualizationsEnabled:(bool)arg1;
- (void)setWantsThickerInks:(bool)arg1;
- (void)set_maintainsTransformsOnLayout:(bool)arg1;
- (void)simulateHIDPoints:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)toggleSelectedStrokes:(id)arg1 hide:(bool)arg2 inDrawing:(id)arg3;
- (bool)visualizationsEnabled;
- (bool)wantsThickerInks;
- (void)willBeginDrawingWithTouch:(id)arg1;
- (void)windowDidResize:(id)arg1;

@end