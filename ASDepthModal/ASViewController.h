//
//  ASViewController.h
//  ASDepthModal
//
//  Created by Philippe Converset on 03/10/12.
//  Copyright (c) 2012 AutreSphere. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UIView *popupView;
@property (weak, nonatomic) IBOutlet UITableView *colorTableView;
@property (weak, nonatomic) IBOutlet UITableView *styleTableView;

- (IBAction)showModalViewAction:(id)sender;
- (IBAction)closePopupAction:(id)sender;

@end
