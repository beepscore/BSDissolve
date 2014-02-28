//
//  BSMasterViewController.h
//  BSDissolve
//
//  Created by Steve Baker on 2/27/14.
//  Copyright (c) 2014 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BSDetailViewController;

@interface BSMasterViewController : UITableViewController

@property (strong, nonatomic) BSDetailViewController *detailViewController;

@end
