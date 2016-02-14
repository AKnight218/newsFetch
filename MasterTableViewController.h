//
//  MasterTableViewController.h
//  RSS_Reader
//
//  Created by dev on 12/14/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterTableViewController : UITableViewController<NSXMLParserDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
