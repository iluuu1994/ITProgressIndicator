//
//  ITProgressIndicatorView.h
//  ITProgressIndicator
//
//  Created by Ilija Tovilo on 9/25/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

//
// !!!IMPORTANT!!! - Embedd ITProgressIndicator in a layer-backed view to avoid side-effects!
//

/**
 *  @class ITProgressIndicator
 *
 *  A replacement for `NSProgressIndicator`.
 *  It's a highly customizable control, driven by Core Animation, which makes it much more performant.
 *
 *  So basically, it's awesome.
 *
 */

IB_DESIGNABLE
@interface ITProgressIndicator : NSView

#pragma mark - Methods

/**
 *  Override this method to achieve a custom animation
 *
 *  @return CAKeyframeAnimation - animation which will be put on the progress indicator layer
 */
- (CAKeyframeAnimation *)keyFrameAnimationForCurrentPreferences;

#pragma mark - Properties


/// @property isIndeterminate - Indicates if the view will show the progress, or just spin
@property (nonatomic, setter = setIndeterminate:) BOOL isIndeterminate;


/// @property progress - The amount that should be shown when `isIndeterminate` is set to `YES`
@property (nonatomic) IBInspectable CGFloat progress;


/// @property animates - Indicates if the view is animating
@property (nonatomic) IBInspectable BOOL animates;


/// @property hideWhenStopped - Indicates if the view will be hidden if it's stopped
@property (nonatomic) IBInspectable BOOL hideWhenStopped;


/// @property lengthOfLine - The length of a single line
@property (nonatomic) IBInspectable CGFloat lengthOfLine;


/// @property widthOfLine - The width of a single line
@property (nonatomic) IBInspectable CGFloat widthOfLine;


/// @property numberOfLines - The number of lines of the indicator
@property (nonatomic) IBInspectable NSUInteger numberOfLines;


/// @property innerMargin - The distance of the lines from the middle
@property (nonatomic) IBInspectable CGFloat innerMargin;


/// @property animationDuration - Duration of a single rotation
@property (nonatomic) IBInspectable CGFloat animationDuration;

/// @property gradualAnimation - Defines if the animation is smooth or gradual
@property (nonatomic) IBInspectable BOOL steppedAnimation;

/// @property color - The color of the progress indicator
@property (nonatomic, strong) IBInspectable NSColor *color;

@end
