/*
 * Copyright (C) 2004-2006 Apple Inc.  All rights reserved.
 * Copyright (C) 2006 Samuel Weinig <sam.weinig@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#import <WebKit/DOMAttr.h>
#import <WebKit/DOMCSS.h>
#import <WebKit/DOMCSSStyleDeclaration.h>
#import <WebKit/DOMDocument.h>
#import <WebKit/DOMElement.h>
#import <WebKit/DOMHTML.h>
#import <WebKit/DOMHTMLAnchorElement.h>
#import <WebKit/DOMHTMLAreaElement.h>
#import <WebKit/DOMHTMLDocument.h>
#import <WebKit/DOMHTMLElement.h>
#import <WebKit/DOMHTMLEmbedElement.h>
#import <WebKit/DOMHTMLImageElement.h>
#import <WebKit/DOMHTMLInputElement.h>
#import <WebKit/DOMHTMLLinkElement.h>
#import <WebKit/DOMHTMLObjectElement.h>
#import <WebKit/DOMNode.h>
#import <WebKit/DOMRGBColor.h>
#import <WebKit/DOMRange.h>

@class NSArray;
@class NSImage;
@class NSURL;


@interface DOMNode (DOMNodeExtensions)
- (NSRect)boundingBox NS_AVAILABLE_MAC(10_5);
- (NSArray *)lineBoxRects NS_AVAILABLE_MAC(10_5);

@end

@interface DOMElement (DOMElementAppKitExtensions)
- (NSImage *)image NS_AVAILABLE_MAC(10_5);
@end

@interface DOMHTMLDocument (DOMHTMLDocumentExtensions)
- (DOMDocumentFragment *)createDocumentFragmentWithMarkupString:(NSString *)markupString baseURL:(NSURL *)baseURL NS_AVAILABLE_MAC(10_5);
- (DOMDocumentFragment *)createDocumentFragmentWithText:(NSString *)text NS_AVAILABLE_MAC(10_5);
@end

