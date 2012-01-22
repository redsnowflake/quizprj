//
//  quizQuestion.h
//  quizprj
//
//  Created by Chris on 1/22/12.
//  Copyright 2012 Webbites. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface quizQuestion : NSObject {
	// The text of the question
	NSString *questionText;
	// Answers, NSMutableArray < quizAnswer >
	NSMutableArray *answers;
	// Points for answering the question correctly
	NSInteger points;
}

@end
