//
//  DetailViewController.h
//  RaidPlanner
//
//  Created by Ryan Tiltz on 6/4/14.
//  Copyright (c) 2014 Ryan Tiltz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (readonly) IBOutlet UIDatePicker *datePicker;
@property (strong,nonatomic) id detailItem;

@end
