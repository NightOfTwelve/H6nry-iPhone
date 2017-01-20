/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/Foundation.h>

@class NSURL, NSAttributedString, NSString;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {
@private
	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	NSString *_text;
	NSAttributedString *_attributedText;
	NSString *_languageCode;
	NSString *_voiceName;
	int _footprint;
	int _gender;
	NSURL *_outputPath;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	id _stopHandler;
	id _pauseHandler;
	double _rate;
	double _pitch;
	double _volume;
}
@property(copy, nonatomic) NSAttributedString *attributedText;	// @synthesize=_attributedText
@property(assign, nonatomic) unsigned audioQueueFlags;	// @synthesize=_audioQueueFlags
@property(assign, nonatomic) unsigned audioSessionID;	// @synthesize=_audioSessionID
@property(assign, nonatomic) BOOL audioSessionIDIsValid;	// @synthesize=_audioSessionIDIsValid
@property(assign, nonatomic) int footprint;	// @synthesize=_footprint
@property(assign, nonatomic) int gender;	// @synthesize=_gender
@property(copy, nonatomic) NSString *languageCode;	// @synthesize=_languageCode
@property(assign, nonatomic) BOOL maintainsInput;	// @synthesize=_maintainsInput
@property(copy, nonatomic) NSURL *outputPath;	// @synthesize=_outputPath
@property(copy, nonatomic) id pauseHandler;	// @synthesize=_pauseHandler
@property(assign, nonatomic) double pitch;	// @synthesize=_pitch
@property(assign, nonatomic) double rate;	// @synthesize=_rate
@property(copy, nonatomic) id stopHandler;	// @synthesize=_stopHandler
@property(copy, nonatomic) NSString *text;	// @synthesize=_text
@property(assign, nonatomic) BOOL useCustomVoice;	// @synthesize=_useCustomVoice
@property(copy, nonatomic) NSString *voiceName;	// @synthesize=_voiceName
@property(assign, nonatomic) double volume;	// @synthesize=_volume
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)coder;
//-(void).cxx_destruct;
// declared property getter: -(id)attributedText;
// declared property getter: -(unsigned)audioQueueFlags;
// declared property getter: -(unsigned)audioSessionID;
// declared property getter: -(BOOL)audioSessionIDIsValid;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(int)footprint;
// declared property getter: -(int)gender;
// declared property getter: -(id)languageCode;
// declared property getter: -(BOOL)maintainsInput;
// declared property getter: -(id)outputPath;
// declared property getter: -(id)pauseHandler;
// declared property getter: -(double)pitch;
// declared property getter: -(double)rate;
// declared property setter: -(void)setAttributedText:(id)text;
// declared property setter: -(void)setAudioQueueFlags:(unsigned)flags;
// declared property setter: -(void)setAudioSessionID:(unsigned)anId;
// declared property setter: -(void)setAudioSessionIDIsValid:(BOOL)valid;
// declared property setter: -(void)setFootprint:(int)footprint;
// declared property setter: -(void)setGender:(int)gender;
// declared property setter: -(void)setLanguageCode:(id)code;
// declared property setter: -(void)setMaintainsInput:(BOOL)input;
// declared property setter: -(void)setOutputPath:(id)path;
// declared property setter: -(void)setPauseHandler:(id)handler;
// declared property setter: -(void)setPitch:(double)pitch;
// declared property setter: -(void)setRate:(double)rate;
// declared property setter: -(void)setStopHandler:(id)handler;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setUseCustomVoice:(BOOL)voice;
// declared property setter: -(void)setVoiceName:(id)name;
// declared property setter: -(void)setVolume:(double)volume;
// declared property getter: -(id)stopHandler;
// declared property getter: -(id)text;
// declared property getter: -(BOOL)useCustomVoice;
// declared property getter: -(id)voiceName;
// declared property getter: -(double)volume;
@end