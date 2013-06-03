//
//  FailedBanksListViewController.h
//  FailedBanks
//
//  Created by Ray Wenderlich on 4/5/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FailedBanksDetailViewController;

@interface FailedBanksListViewController : UITableViewController {
    NSArray *_failedBankInfos;
    FailedBanksDetailViewController *_details;
}

@property (nonatomic, retain) NSArray *failedBankInfos;
@property (nonatomic, retain) FailedBanksDetailViewController *details;

@end
