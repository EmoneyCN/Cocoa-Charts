//
//  EmoneyFenChartDataSet.h
//  CocoaChartsSample
//
//  Created by ryan on 6/24/16.
//  Copyright © 2016 limc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EmoneyFenChartDataSet : NSObject

@property(strong, nonatomic) NSArray *ohlcvdDatas;

/** CandleStickChartData */
@property(strong, nonatomic) NSArray *candleStickData;
@property(strong, nonatomic) NSArray *candleStickLinesData;
@property(strong, nonatomic) NSArray *candleStickBollingerBandData;

/** StickChart */
@property(strong, nonatomic) NSArray *stickData;
@property(strong, nonatomic) NSArray *stickMAData;

/** MacdChart */
@property(strong, nonatomic) NSArray *macdStickData;

/** KDJChart */
@property(strong, nonatomic) NSArray *kdjLinesData;

/** RSIChart */
@property(strong, nonatomic) NSArray *rsiLinesData;

/** WRChart */
@property(strong, nonatomic) NSArray *wrLinesData;

/** CCIChart */
@property(strong, nonatomic) NSArray *cciLinesData;

/** BOLLChart */
@property(strong, nonatomic) NSArray *bollLinesData;

- (id)initWithCCSOHLCVDDatas:(NSArray *)ohlcvdDatas;

- (void)updateMACDStickData:(NSInteger)macdS l:(NSInteger)macdL m:(NSInteger)macdM;
- (void)updateCandleStickLinesData:(NSInteger)ma1 ma2:(NSInteger)ma2 ma3:(NSInteger)ma3;
- (void)updateCandleStickBollingerBandData:(NSInteger)bollN;
- (void)updateKDJData:(NSInteger)macdN;
- (void)updateRSIData:(NSInteger)n1 n2:(NSInteger)n2;
- (void)updateWRData:(NSInteger)wrN;
- (void)updateCCIData:(NSInteger)cciN;
- (void)updateBOLLData:(NSInteger)bollN;

@end
