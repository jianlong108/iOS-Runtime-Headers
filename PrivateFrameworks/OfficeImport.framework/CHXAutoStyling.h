/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>
{
}

+ (id)colorWithSchemeColorId:(NSInteger)arg1 transformType:(NSInteger)arg2 transformValue:(float)arg3;
+ (id)colorWithSchemeColorId:(NSInteger)arg1 tint:(float)arg2;
+ (id)colorWithSchemeColorId:(NSInteger)arg1 shade:(float)arg2;

- (NSInteger)styleRow;
- (NSInteger)styleColumn;
- (id)autoAxisColor;
- (id)autoMinorGridColor;
- (id)autoPlotAreaColor;
- (id)autoChartAreaColor;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1;
- (id)autoColorOfFirstColumnSeriesWithIndex:(NSInteger)arg1 seriesCount:(NSInteger)arg2;
- (id)autoColorOfSeriesWithIndex:(NSInteger)arg1;
- (id)autoStrokeForSeriesIndex:(NSInteger)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (id)autoAxisStroke;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(NSInteger)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(NSInteger)arg2 isLine:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3;
     /* Encoded args for previous method: v20@0:4@8i12B16 */

- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(NSInteger)arg2;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(NSInteger)arg2;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(NSInteger)arg3;

@end