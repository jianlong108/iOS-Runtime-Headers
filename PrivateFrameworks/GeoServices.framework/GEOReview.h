/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReview : PBCodable <NSCopying> {
    struct { 
        unsigned int reviewTime : 1; 
        unsigned int score : 1; 
    }  _has;
    NSString * _languageCode;
    double  _reviewTime;
    GEOUser * _reviewer;
    double  _score;
    NSString * _snippet;
    NSString * _uid;
}

@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasReviewTime;
@property (nonatomic, readonly) BOOL hasReviewer;
@property (nonatomic) BOOL hasScore;
@property (nonatomic, readonly) BOOL hasSnippet;
@property (nonatomic, readonly) BOOL hasUid;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) double reviewTime;
@property (nonatomic, retain) GEOUser *reviewer;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *snippet;
@property (nonatomic, retain) NSString *uid;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLanguageCode;
- (BOOL)hasReviewTime;
- (BOOL)hasReviewer;
- (BOOL)hasScore;
- (BOOL)hasSnippet;
- (BOOL)hasUid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (double)reviewTime;
- (id)reviewer;
- (double)score;
- (void)setHasReviewTime:(BOOL)arg1;
- (void)setHasScore:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setReviewTime:(double)arg1;
- (void)setReviewer:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSnippet:(id)arg1;
- (void)setUid:(id)arg1;
- (id)snippet;
- (id)uid;
- (void)writeTo:(id)arg1;

@end
