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
@property (nonatomic) UIEdgeInsets tableViewContentInset;

// UITableViewCell
@property (nonatomic, strong) UIColor *tableViewCellBackgroundColor;
@property (nonatomic, strong) UIView *tableViewCellSelectedBackgroundView;
@property (nonatomic, strong) UIColor *tableViewCellTextLabelColor;
@property (nonatomic, strong) UIColor *tableViewCellDetailTextLabelColor;
// UITableViewCell Accessory View
@property (nonatomic, strong) NSString *tableViewCellAccessoryViewChildPane;
@property (nonatomic, strong) NSString *tableViewCellAccessoryViewMultiValue;
@property (nonatomic, strong) NSString *tableViewCellAccessoryViewOpenURL;
@property (nonatomic, strong) NSString *tableViewCellAccessoryViewButton;
@property (nonatomic, strong) NSString *tableViewCellAccessoryCheckmark;

@end
