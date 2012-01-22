//
//  quiz.h
//  quizprj
//
//  Created by Chris on 1/22/12.
//  Copyright 2012 Webbites. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface quiz : NSObject {
	// Number of rounds in the quiz
	NSInteger numberOfRounds;
	// Number of answers shown per question
	NSInteger numberOfAnswers;
	// Time limit
	Boolean hasTimeLimit;
	NSInteger timeLimitInSeconds;
	
	// Questions , NSArray < quizQuestion >
	NSArray *questions;
}

@end
