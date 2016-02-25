//
//  MortgageVC.h
//  CanadaGuatantee
//
//  Created by root1 on 23/10/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MortgageVC :UIViewController <UIWebViewDelegate> {


	IBOutlet UILabel *lblTitle;

	IBOutlet UIButton *btnBack;
	IBOutlet UIWebView *webView;


	
}

-(IBAction)backAction;
-(IBAction)settingAction;



@end
