//
//  xViewController.h
//  倒数计时2.0
//
//  Created by Dee on 14-12-9.
//  Copyright (c) 2014年 zjsruxxxy7. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol xAppDelegate <NSObject>


@optional
-(void)SetController;
@end

@interface xViewController : UIViewController
{
    
    NSInteger hour;
    NSInteger min;
    NSInteger sec;
}

@property (weak, nonatomic) IBOutlet UIDatePicker *DatePicker;
@property (weak, nonatomic) IBOutlet UIView *arcBgView;
@property (nonatomic,assign)id<xAppDelegate> delegate;
- (IBAction)start:(id)sender;
- (IBAction)pause:(id)sender;
- (IBAction)cancle:(id)sender;
-(void)reStart;
-(void)creatNotification:(NSInteger )totalT;
-(void)cancleNote;
-(void) drawRound;

@property (weak, nonatomic) IBOutlet UILabel *timerLable;
@property(nonatomic,strong) UILocalNotification * notification;
@property (nonatomic ,assign)NSInteger totlaTime;
@property (nonatomic,assign) NSInteger pickerCount;
@property (nonatomic,retain) NSTimer *timer;
@property (nonatomic,retain)  CAShapeLayer *arcLayer;





@end
