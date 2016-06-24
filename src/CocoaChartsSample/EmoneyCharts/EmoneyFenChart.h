//
//  EmoneyFenChart.h
//  CocoaChartsSample
//
//  Created by ryan on 6/24/16.
//  Copyright © 2016 limc. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "CCSGridChart.h"

@class CCSMAColoredStickChart;
@class CCSBOLLMASlipCandleStickChart;
@class CCSMACDChart;
@class CCSSlipLineChart;
@class EmoneyFenChartDataSet;

@protocol CCSChartDelegate;

@class EmoneyFenChartDataSet;

@interface EmoneyFenChart : UIView

//@property(strong, nonatomic) UILabel *lblTitle;
//@property(strong, nonatomic) UILabel *lblOpen;
//@property(strong, nonatomic) UILabel *lblHigh;
//@property(strong, nonatomic) UILabel *lblLow;
//@property(strong, nonatomic) UILabel *lblClose;
//@property(strong, nonatomic) UILabel *lblVolume;
//@property(strong, nonatomic) UILabel *lblDate;
//@property(strong, nonatomic) UILabel *lblChange;
//@property(strong, nonatomic) UILabel *lblPreClose;
//@property(strong, nonatomic) UILabel *lblSubTitle1;
//@property(strong, nonatomic) UILabel *lblSubTitle2;
//@property(strong, nonatomic) UILabel *lblSubTitle3;
//@property(strong, nonatomic) UILabel *lblSubTitle4;
//@property(strong, nonatomic) UILabel *lblSubTitle5;
//@property(strong, nonatomic) UILabel *lblSubTitle6;
//@property(strong, nonatomic) UILabel *lblSubTitle7;
//@property(strong, nonatomic) UILabel *lblSubTitle8;
//@property(strong, nonatomic) UILabel *lblSubTitle9;
//@property(strong, nonatomic) UILabel *lblSubTitle10;
@property(strong, nonatomic) CCSMAColoredStickChart *stickChart;
@property(strong, nonatomic) CCSBOLLMASlipCandleStickChart *candleStickChart;
@property(strong, nonatomic) CCSMACDChart *macdChart;
@property(strong, nonatomic) CCSSlipLineChart *kdjChart;
@property(strong, nonatomic) CCSSlipLineChart *rsiChart;
@property(strong, nonatomic) CCSSlipLineChart *wrChart;
@property(strong, nonatomic) CCSSlipLineChart *cciChart;
@property(strong, nonatomic) CCSSlipLineChart *bollChart;
//@property(strong, nonatomic) UISegmentedControl *segBottomChartType;
//@property(strong, nonatomic) UIScrollView *scrollViewBottomChart;

//@property(assign, nonatomic) GroupChartViewType bottomChartType;
//@property(strong, nonatomic) CCSOHLCVDData *oHLCVDData;
@property(strong, nonatomic) NSMutableArray *chartData;

@property(strong, nonatomic) EmoneyFenChartDataSet *chartDataSet;

@property(weak, nonatomic) id<CCSChartDelegate> chartDelegate;

@end
