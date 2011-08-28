/*
 * Copyright (c) 2010-2011 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef FRAMEWORK_GRAPHICS_DECLARATIONS_H
#define FRAMEWORK_GRAPHICS_DECLARATIONS_H

#include <framework/global.h>

class Texture;
class AnimatedTexture;
class Font;
class Image;
class BorderImage;
class FrameBuffer;

typedef std::weak_ptr<Texture> TextureWeakPtr;

typedef std::shared_ptr<Texture> TexturePtr;
typedef std::shared_ptr<AnimatedTexture> AnimatedTexturePtr;
typedef std::shared_ptr<Font> FontPtr;
typedef std::shared_ptr<Image> ImagePtr;
typedef std::shared_ptr<BorderImage> BorderImagePtr;
typedef std::shared_ptr<FrameBuffer> FrameBufferPtr;

#endif