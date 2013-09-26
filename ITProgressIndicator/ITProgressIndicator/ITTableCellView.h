//
//  ITTableCellView.h
//  ITProgressIndicator
//
//  Created by Ilija Tovilo on 9/26/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class ITProgressIndicator;
@interface ITTableCellView : NSTableCellView

@property (assign) IBOutlet ITProgressIndicator *progressIndicator;

@end
