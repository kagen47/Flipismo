//
//  SetCardView.h
//  Flipismo
//
//  Created by User on 11/2/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SetCardView : UIView

@property (strong, nonatomic) NSString *shape;
@property (nonatomic) NSString *color;
@property (nonatomic) NSString *shading;
@property (nonatomic) NSInteger num;
@property (nonatomic) BOOL faceUp;

@end
