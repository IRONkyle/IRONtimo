/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import <UIKit/UIKit.h>
#import "TitaniumContentViewController.h"

@interface TitaniumScrollableViewController : TitaniumContentViewController<UIScrollViewDelegate> {
	UIScrollView * pagedView;
	UIPageControl * pageControl;
	NSMutableArray * pagedViewControllers;	//Should be a subset of contentViewControllers
}

@end