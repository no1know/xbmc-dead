/*
 *      Copyright (C) 2012 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#import <UIKit/UIKit.h>
#include "IOSKeyboard.h"

@interface KeyboardView : UIView <UIKeyInput>
{
    NSMutableString                    *_heading;
    NSMutableString                    *_text;
    bool                                _result;
    bool                                _hiddenInput;
    CIOSKeyboard                        *_iosKeyboard;
}

@property (nonatomic, retain, getter = GetText) NSMutableString *_text;
@property (copy, setter = SetHeading:) NSMutableString *_heading;
@property (getter = GetResult) bool _result;
@property (setter = SetHiddenInput:) bool _hiddenInput;
@property (assign, setter = RegisterKeyboard:) CIOSKeyboard *_iosKeyboard;

- (void) setText:(NSMutableString *)text;
- (void) activate;
- (void) deactivate;
@end
