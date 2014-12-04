//
//  IASKViewAttributes.m
//  
//
//  Created by acow li on 2014/12/4.
//
//

#import "IASKViewAttributes.h"

@implementation IASKViewAttributes

- (id)init
{
    self = [super init];
    if (self) {
        self.rowHeight = 44;
        self.separatorColor = [UITableView appearance].separatorColor;
        self.tableViewBackgroundColor = [UIColor groupTableViewBackgroundColor];
        self.tableViewCellBackgroundColor = [UITableViewCell appearance].backgroundColor;
        self.tableViewCellSelectedBackgroundView = [UITableViewCell appearance].selectedBackgroundView;
        self.tableViewCellTextLabelColor = [UIColor darkTextColor];
        self.tableViewCellDetailTextLabelColor = [UIColor grayColor];
    }
    return self;
}

@end
