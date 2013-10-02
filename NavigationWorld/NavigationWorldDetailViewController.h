//
//  NavigationWorldDetailViewController.h
//  NavigationWorld
//
//  Created by John Figueiredo on 10/2/13.
//  Copyright (c) 2013 Byliner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavigationWorldDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
