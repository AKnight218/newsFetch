//
//  ViewController.h
//  RSS_Reader
//
//  Created by dev on 12/14/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (copy, nonatomic) NSString *url;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end

