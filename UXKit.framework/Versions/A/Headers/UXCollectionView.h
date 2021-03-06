//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class CALayer, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, UXCollectionDocumentView, UXCollectionViewData, UXCollectionViewIndexPathsSet, UXCollectionViewLayout, UXCollectionViewMutableIndexPathsSet, UXCollectionViewUpdate, _UXCollectionViewRearrangingCoordinator;
@protocol UXCollectionViewAccessibilityDelegate, UXCollectionViewDataSource, UXCollectionViewDelegate;

@interface UXCollectionView : NSScrollView
{
    UXCollectionDocumentView *_collectionDocumentView;
    NSObject<UXCollectionViewDataSource> *_dataSource;
    NSObject<UXCollectionViewDelegate> *_delegate;
    NSObject<UXCollectionViewAccessibilityDelegate> *_accessibilityDelegate;
    UXCollectionViewLayout *_layout;
    UXCollectionViewMutableIndexPathsSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    NSMutableDictionary *_allVisibleViewsDict;
    NSMutableDictionary *_clonedViewsDict;
    NSIndexPath *_lastSelectionAnchorIndexPath;
    NSIndexPath *_pendingSelectionIndexPath;
    UXCollectionViewMutableIndexPathsSet *_pendingDeselectionIndexPaths;
    UXCollectionViewData *_collectionViewData;
    UXCollectionViewUpdate *_currentUpdate;
    struct CGRect _visibleBounds;
    struct CGRect _previousBounds;
    struct CGPoint _resizeBoundsOffset;
    long long _resizeAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    id _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableSet *_supplementaryElementKinds;
    BOOL _allowsSelection;
    BOOL _allowsMultipleSelection;
    BOOL _allowsEmptySelection;
    BOOL _allowsContinuousSelection;
    BOOL _allowsPaintingSelection;
    BOOL _allowsLassoSelection;
    BOOL _rightMouseSimulated;
    struct CGSize _minReusedViewSize;
    BOOL _doneFirstLayout;
    struct CGPoint _lastContentOffset;
    struct CGSize _contentSize;
    long long _layoutTransitionAnimationCount;
    BOOL _scrolling;
    BOOL _liveScrolling;
    BOOL _involvesScrollWheel;
    BOOL _decelerating;
    BOOL _canDetectDeceleration;
    struct CGPoint _lastScrollingDistance;
    float _scrollingVelocity;
    double _lastScrollingTime;
    struct CGRect _lastPreparedOverdrawContentRect;
    struct CGPoint _normalizedSavedScrollViewPosition;
    BOOL _isPaintingSelectionRunning;
    BOOL _paintingSelectionType;
    CALayer *_lassoSelectionLayer;
    struct CGPoint _lassoSelectionStartPoint;
    UXCollectionViewIndexPathsSet *_lassoInitiallySelectedItems;
    BOOL _lassoInvertsSelection;
    UXCollectionViewIndexPathsSet *_keyboardRangeSelectionPreviouslySelectedItems;
    NSIndexPath *_keyboardRangeSelectionFirstSelectedItem;
    NSIndexPath *_keyboardRangeSelectionLastSelectedItem;
    NSMutableDictionary *_doubleClickContext;
    _UXCollectionViewRearrangingCoordinator *_rearrangingCoordinator;
    long long _suspendClipViewBoundsDidChange;
    struct {
        unsigned int delegateWillBeginScrolling:1;
        unsigned int delegateDidScroll:1;
        unsigned int delegateDidEndScrolling:1;
        unsigned int delegateWillBeginDeceleratingTargetContentOffset:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSelectionWillAddAndRemove:1;
        unsigned int delegateSelectionDidAddAndRemove:1;
        unsigned int delegateMouseDownWithEvent:1;
        unsigned int delegateItemWasDoubleClickedAtIndexPathWithEvent:1;
        unsigned int delegateItemWasRightClickedAtIndexPathWithEvent:1;
        unsigned int delegateDidEndDisplayingCellForItemAtIndexPath:1;
        unsigned int delegateDidEndDisplayingSupplementaryViewForElementOfKindAtIndexPath:1;
        unsigned int delegateDidPrepareForOverdraw:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int delegateTargetContentOffsetOnResizeForProposedContentOffset:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int skipCellsUpdateDuringResizing:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
        unsigned int accessibilityDelegateShouldPrepareAccessibilitySection:1;
        unsigned int accessibilityDelegateAXRoleDescription:1;
        unsigned int viewIsPrepared:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (void)initialize;
+ (Class)documentClass;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating; // @synthesize decelerating=_decelerating;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) BOOL allowsPaintingSelection; // @synthesize allowsPaintingSelection=_allowsPaintingSelection;
@property(nonatomic) BOOL allowsLassoSelection; // @synthesize allowsLassoSelection=_allowsLassoSelection;
@property(nonatomic) BOOL allowsContinuousSelection; // @synthesize allowsContinuousSelection=_allowsContinuousSelection;
@property(retain, nonatomic) UXCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (BOOL)lassoInvertsSelection;
- (void)setLassoInvertsSelection:(BOOL)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityPerformPressWithItemAtIndexPath:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityContentSiblingCellFromIndexPath:(id)arg1 direction:(id)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)_performScrollingForKey:(unsigned short)arg1;
- (void)_scrollPage:(BOOL)arg1;
- (void)_scrollToEnd:(BOOL)arg1;
- (BOOL)_performItemSelectionForKey:(unsigned short)arg1 withModifiers:(unsigned long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)accessibilitySelectItemsAtIndexPaths:(id)arg1;
- (void)accessibilitySelected:(BOOL)arg1 itemAtIndexPath:(id)arg2;
- (id)_retrieveAccessibiltyRoleDescriptionFromAXDelegate;
- (void)_notifyAccessibilityDelegateToPrepareSection:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)_indexPathForSupplementaryElementOfKind:(id)arg1 hitByEvent:(id)arg2;
- (id)_indexPathOfSelectableItemHitByEvent:(id)arg1;
- (void)_respondToDoubleClick;
- (void)_performItemSelectionForMouseEvent:(id)arg1 onCell:(id)arg2 atIndexPath:(id)arg3;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)performBatchUpdates:(id)arg1 completion:(id)arg2;
- (void)_endUpdates;
- (void)_beginUpdates;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (void)_endItemAnimations;
- (void)_setupCellAnimations;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(long long)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_updateSections:(id)arg1 updateAction:(long long)arg2;
- (id)_arrayForUpdateAction:(long long)arg1;
- (id)_currentUpdate;
- (void)scrollRect:(struct CGRect)arg1 toScrollPosition:(unsigned long long)arg2 withInsets:(struct NSEdgeInsets)arg3 animated:(BOOL)arg4;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_scrollRect:(struct CGRect)arg1 toScrollPosition:(unsigned long long)arg2 withInsets:(struct NSEdgeInsets)arg3 animated:(BOOL)arg4;
- (struct CGPoint)_scrollAmountForMovingRect:(struct CGRect)arg1 toScrollPosition:(unsigned long long)arg2 inDestinationRect:(struct CGRect)arg3;
- (id)nextIndexPath:(id)arg1;
- (id)previousIndexPath:(id)arg1;
- (id)contentSupplementaryViews;
- (id)visibleSupplementaryViews;
- (id)_supplementaryViewsIncludingOverdrawArea:(BOOL)arg1;
- (id)indexPathsForContentItemsInSections:(id)arg1;
- (id)indexPathsForContentItems;
- (id)indexPathsForVisibleItemsInSections:(id)arg1;
- (id)indexPathsForVisibleItems;
- (id)_indexPathsForItemsInSections:(id)arg1 includingOverdrawArea:(BOOL)arg2;
- (id)contentCells;
- (id)visibleCells;
- (id)_cellsIncludingOverdrawArea:(BOOL)arg1;
- (id)_dictionaryOfIndexPathsAndContentCells;
- (unsigned long long)numberOfContentCells;
- (unsigned long long)numberOfVisibleCells;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2;
- (id)indexPathForSupplementaryElementOfKind:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)indexPathForSupplementaryElementOfKind:(id)arg1 hitByEvent:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathForItemHitByEvent:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)_prepareCellsForOverdraw:(struct CGRect)arg1;
- (void)resetScrollingOverdraw;
- (struct CGRect)documentContentRect;
- (void)_addControlled:(BOOL)arg1 subview:(id)arg2 atZIndex:(long long)arg3;
- (void)updateLayout;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(id)arg4;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseCell:(id)arg1;
- (long long)_maxNumberOfReusedViews;
- (long long)_numberOfReusedViewsForIdentifier:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (Class)registeredClassForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (Class)registeredClassForCellWithReuseIdentifier:(id)arg1;
- (BOOL)_visible;
- (void)layoutSubviews;
- (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)scrollViewDidEndLiveScrollNotification:(id)arg1;
- (void)scrollViewWillStartLiveScrollNotification:(id)arg1;
- (void)_didEndScrolling:(id)arg1;
- (void)_willStartScrolling:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
@property(nonatomic) struct CGSize contentSize; // @dynamic contentSize;
- (void)setDocumentBounds:(struct CGRect)arg1;
- (struct CGRect)documentBounds;
- (struct CGSize)documentSize;
- (struct CGPoint)contentOffset;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_viewPrepare;
- (void)_viewCleanup;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id)arg6 animationCompletion:(id)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (void)_updateCellsInRect:(struct CGRect)arg1 createIfNecessary:(BOOL)arg2;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (struct CGPoint)layoutPointForCollectionViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)collectionViewPointForLayoutPoint:(struct CGPoint)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)_setVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)_visibleBounds;
- (void)setContentInsets:(struct NSEdgeInsets)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (BOOL)isBusy;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateLayoutIfNecessary;
- (void)reloadData;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_resumeReloads;
- (void)_suspendReloads;
- (void)setNeedsLayout;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
- (void)deselectAllItems:(BOOL)arg1;
- (void)selectAllItems:(BOOL)arg1;
- (void)deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_toggleSelectionStateOfItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (BOOL)_deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)selectItemsAtIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3 scrollItemAtIndex:(id)arg4 toPosition:(unsigned long long)arg5;
- (void)selectItemsAtIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)_deselectAllAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (BOOL)_selectRangeOfItemsFromIndexPath:(id)arg1 toIndexPath:(id)arg2 byExtendingSelection:(BOOL)arg3 animated:(BOOL)arg4 scroll:(BOOL)arg5 toPosition:(unsigned long long)arg6 notifyDelegate:(BOOL)arg7 candidateLastSelectedItemIndexPath:(id *)arg8;
- (BOOL)_selectItemsInIndexPathsSet:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3 scrollingKeyItem:(id)arg4 toPosition:(unsigned long long)arg5 notifyDelegate:(BOOL)arg6;
- (id)_firstSelectableItemIndexPath;
- (BOOL)selectedItemAtIndexPath:(id)arg1;
- (BOOL)selectableItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfSelectedItems;
- (id)_keyItemIndexPathForItemIndexPathsSet:(id)arg1;
- (id)_keyItemIndexPathForItemIndexPaths:(id)arg1;
- (id)_visibleViewsDict;
- (id)_collectionViewData;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)indexPathsForSelectedItems;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (void)_reloadDataIfNeeded;
@property(nonatomic) __weak NSObject<UXCollectionViewAccessibilityDelegate> *accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) __weak NSObject<UXCollectionViewDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak NSObject<UXCollectionViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_dragImage:(id *)arg1 at:(struct CGPoint *)arg2 event:(id)arg3;
- (void)rearrangingCoordinatorReloadLayout_;
@property(readonly, nonatomic) BOOL isRearranging_;
@property(nonatomic) double rearrangingPreviewDelay_;
@property(nonatomic) BOOL rearrangingContinuouslyUpdateInsideCells_;
@property(nonatomic) long long rearrangingInitiationMode_;
@property(nonatomic) BOOL rearrangingExternalDropEnabled_;
@property(nonatomic) BOOL rearrangingAllowAutoscroll_;
@property(nonatomic) BOOL rearrangingEnabled_;
- (id)_rearrangingCoordinator;
- (void)setContentInset:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)contentInset;

@end

