//
//  AppDelegate.m
//  ITProgressIndicator
//
//  Created by Ilija Tovilo on 9/25/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import "AppDelegate.h"
#import "ITProgressIndicator.h"
#import "ITTableCellView.h"

@implementation AppDelegate

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView {
    return 100;
}

- (NSView *)tableView:(NSTableView *)tableView viewForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row {
    ITTableCellView *cellView = [tableView makeViewWithIdentifier:@"default" owner:nil];
    cellView.textField.stringValue = [NSString stringWithFormat:@"Test %ld", row];
    
    cellView.progressIndicator.numberOfLines = 20;
    cellView.progressIndicator.innerMargin = 10;
    cellView.progressIndicator.isIndeterminate = YES;
    cellView.progressIndicator.progress = 0.0;
    
    [NSAnimationContext beginGrouping];
    [[NSAnimationContext currentContext] setDuration:4.0];
    {
        [cellView.progressIndicator.animator setProgress:1.0];
    }
    [NSAnimationContext endGrouping];
    
    return cellView;
}

@end
