//
//  QMChatAttachmentCell.h
//  sample-chat-swift
//
//  Created by Injoit on 7/2/15.
//  Copyright (c) 2015 quickblox. All rights reserved.
//

@protocol QMChatAttachmentCell <NSObject>

- (void)setAttachmentImage:(UIImage *)attachmentImage;
- (void)updateLoadingProgress:(CGFloat)progress;

@end