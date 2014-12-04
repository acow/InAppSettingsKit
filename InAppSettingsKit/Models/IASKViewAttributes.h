//
//  IASKViewAttributes.h
//  
//
//  Created by acow li on 2014/12/4.
//
//

#import <Foundation/Foundation.h>

@interface IASKViewAttributes : NSObject

@property (nonatomic) float rowHeight;
// UITableView
@property (nonatomic, strong) UIColor *separatorColor;
@property (nonatomic, strong) UIColor *tableViewBackgroundColor;

// UITableViewCell
@property (nonatomic, strong) UIColor *tableViewCellBackgroundColor;
@property (nonatomic, strong) UIView *tableViewCellSelectedBackgroundView;
@property (nonatomic, strong) UIColor *tableViewCellTextLabelColor;
@property (nonatomic, strong) UIColor *tableViewCellDetailTextLabelColor;

@end
