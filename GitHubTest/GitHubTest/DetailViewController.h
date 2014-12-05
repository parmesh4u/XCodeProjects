//
//  DetailViewController.h
//  GitHubTest
//
//  Created by Parmeshwar on 12/5/14.
//  Copyright (c) 2014 Parmeshwar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

