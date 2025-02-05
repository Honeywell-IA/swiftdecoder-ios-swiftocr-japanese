//
//  JapaneseRecognizer.h
//  OCRJapanese
//
//  Created by Jenith Raja A, Mohamed on 12/11/24.
//

#import <Foundation/Foundation.h>
#import <MLKitTextRecognitionJapanese/MLKitTextRecognitionJapanese.h>
#import <MLKitTextRecognitionCommon/MLKTextRecognizer.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JapaneseRecognizer : NSObject

-(MLKTextRecognizer *)getTextRecognizer;
-(NSString *)getProcessImageResult:(UIImage*)image;

@end

/*
@interface JapaneseRecognizer : MLKTextRecognizer

+(JapaneseRecognizer *)getJapaneseTextRecognizer;
@end
*/

NS_ASSUME_NONNULL_END
