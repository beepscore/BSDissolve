//
//  BSDetailViewController.h
//  BSDissolve
//
//  Created by Steve Baker on 2/27/14.
//  Copyright (c) 2014 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
