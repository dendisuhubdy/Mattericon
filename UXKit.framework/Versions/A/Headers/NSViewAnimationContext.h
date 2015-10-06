//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    long long _animationCount;
    id _completionHandler;
}

@property(readonly, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (void)dealloc;
- (id)initWithCompletionHandler:(id)arg1;

@end
