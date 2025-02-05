//
//  JapaneseRecognizer.h
//  OCRJapanese
//
//  Created by Jenith Raja A, Mohamed on 12/11/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JapaneseRecognizer : NSObject

-(id)getTextRecognizer;
-(NSString *)getProcessImageResult:(UIImage*)image;

@end

/*
@interface JapaneseRecognizer : MLKTextRecognizer

+(JapaneseRecognizer *)getJapaneseTextRecognizer;
@end
*/

NS_ASSUME_NONNULL_END
