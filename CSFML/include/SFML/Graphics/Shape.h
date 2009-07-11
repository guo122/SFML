////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2009 Laurent Gomila (laurent.gom@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_Shape_H
#define SFML_Shape_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Config.h>
#include <SFML/Graphics/BlendMode.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Types.h>


////////////////////////////////////////////////////////////
/// Create a new shape
///
/// \return A new sfShape object, or NULL if it failed
///
////////////////////////////////////////////////////////////
CSFML_API sfShape* sfShape_Create();

////////////////////////////////////////////////////////////
/// Create a new shape made of a single line
///
/// \param p1x, p1y :     Position of the first point
/// \param p2x, p2y :     Position second point
/// \param thickness :    Line thickness
/// \param color :        Color used to draw the line
/// \param outline :      Outline width
/// \param outlineColor : Color used to draw the outline
///
////////////////////////////////////////////////////////////
CSFML_API sfShape* sfShape_CreateLine(float p1x, float p1y, float p2x, float p2y, float thickness, sfColor color, float outline, sfColor outlineColor);

////////////////////////////////////////////////////////////
/// Create a new shape made of a single rectangle
///
/// \param p1x, p1y :     Position of the first point
/// \param p2x, p2y :     Position second point
/// \param color :        Color used to fill the rectangle
/// \param outline :      Outline width
/// \param outlineColor : Color used to draw the outline
///
////////////////////////////////////////////////////////////
CSFML_API sfShape* sfShape_CreateRectangle(float p1x, float p1y, float p2x, float p2y, sfColor color, float outline, sfColor outlineColor);

////////////////////////////////////////////////////////////
/// Create a new shape made of a single circle
///
/// \param x, y :         Position of the center
/// \param radius :       Radius
/// \param color :        Color used to fill the circle
/// \param outline :      Outline width
/// \param outlineColor : Color used to draw the outline
///
////////////////////////////////////////////////////////////
CSFML_API sfShape* sfShape_CreateCircle(float x, float y, float radius, sfColor color, float outline, sfColor outlineColor);

////////////////////////////////////////////////////////////
/// Destroy an existing Shape
///
/// \param Shape : Shape to delete
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_Destroy(sfShape* shape);

////////////////////////////////////////////////////////////
/// Set the X position of a shape
///
/// \param shape : Shape to modify
/// \param x :     New X coordinate
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetX(sfShape* shape, float x);

////////////////////////////////////////////////////////////
/// Set the Y position of a shape
///
/// \param shape : Shape to modify
/// \param y :     New Y coordinate
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetY(sfShape* shape, float y);

////////////////////////////////////////////////////////////
/// Set the position of a shape
///
/// \param shape : Shape to modify
/// \param x :     New X coordinate
/// \param y :     New Y coordinate
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetPosition(sfShape* shape, float x, float y);

////////////////////////////////////////////////////////////
/// Set the horizontal scale of a shape
///
/// \param shape : Shape to modify
/// \param scale : New scale (must be strictly positive)
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetScaleX(sfShape* shape, float scale);

////////////////////////////////////////////////////////////
/// Set the vertical scale of a shape
///
/// \param shape : Shape to modify
/// \param scale : New scale (must be strictly positive)
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetScaleY(sfShape* shape, float scale);

////////////////////////////////////////////////////////////
/// Set the scale of a shape
///
/// \param shape :  Shape to modify
/// \param scaleX : New horizontal scale (must be strictly positive)
/// \param scaleY : New vertical scale (must be strictly positive)
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetScale(sfShape* shape, float scaleX, float scaleY);

////////////////////////////////////////////////////////////
/// Set the orientation of a shape
///
/// \param shape :    Shape to modify
/// \param rotation : Angle of rotation, in degrees
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetRotation(sfShape* shape, float rotation);

////////////////////////////////////////////////////////////
/// Set the local origin of a shape, in coordinates relative to
/// its left-top corner
///
/// \param shape : Shape to modify
/// \param x :     X coordinate of the origin
/// \param y :     Y coordinate of the origin
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetOrigin(sfShape* shape, float x, float y);

////////////////////////////////////////////////////////////
/// Set the color of a shape
///
/// \param shape : Shape to modify
/// \param color : New color
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetColor(sfShape* shape, sfColor color);

////////////////////////////////////////////////////////////
/// Set the blending mode for a shape
///
/// \param shape : Shape to modify
/// \param mode :  New blending mode
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetBlendMode(sfShape* shape, sfBlendMode mode);

////////////////////////////////////////////////////////////
/// Get the X position of a shape
///
/// \param shape : Shape to read
///
/// \return Current X position
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetX(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the Y position of a shape
///
/// \param shape : Shape to read
///
/// \return Current Y position
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetY(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the horizontal scale of a shape
///
/// \param shape : Shape to read
///
/// \return Current X scale factor (always positive)
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetScaleX(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the vertical scale of a shape
///
/// \param shape : Shape to read
///
/// \return Current Y scale factor (always positive)
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetScaleY(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the orientation of a shape
///
/// \param shape : Shape to read
///
/// \return Current rotation, in degrees
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetRotation(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the X position of the origin a shape
///
/// \param shape : Shape to read
///
/// \return Current X origin
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetOriginX(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the Y position of the origin a shape
///
/// \param shape : Shape to read
///
/// \return Current Y origin
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetOriginY(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the color of a shape
///
/// \param shape : Shape to read
///
/// \return Current color
///
////////////////////////////////////////////////////////////
CSFML_API sfColor sfShape_GetColor(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the current blending mode of a shape
///
/// \param shape : Shape to read
///
/// \return Current blending mode
///
////////////////////////////////////////////////////////////
CSFML_API sfBlendMode sfShape_GetBlendMode(sfShape* shape);

////////////////////////////////////////////////////////////
/// Move a shape
///
/// \param shape :   Shape to modify
/// \param offsetX : Offset on the X axis
/// \param offsetY : Offset on the Y axis
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_Move(sfShape* shape, float offsetX, float offsetY);

////////////////////////////////////////////////////////////
/// Scale a shape
///
/// \param shape :   Shape to modify
/// \param factorX : Horizontal scaling factor (must be strictly positive)
/// \param factorY : Vertical scaling factor (must be strictly positive)
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_Scale(sfShape* shape, float factorX, float factorY);

////////////////////////////////////////////////////////////
/// Rotate a shape
///
/// \param shape : Shape to modify
/// \param angle : Angle of rotation, in degrees
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_Rotate(sfShape* shape, float angle);

////////////////////////////////////////////////////////////
/// Transform a point from global coordinates into the shape's local coordinates
/// (ie it applies the inverse of object's origin, translation, rotation and scale to the point)
///
/// \param shape :  Shape object
/// \param pointX : X coordinate of the point to transform
/// \param pointY : Y coordinate of the point to transform
/// \param x :      Value to fill with the X coordinate of the converted point
/// \param y :      Value to fill with the y coordinate of the converted point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_TransformToLocal(sfShape* shape, float pointX, float pointY, float* x, float* y);

////////////////////////////////////////////////////////////
/// Transform a point from the shape's local coordinates into global coordinates
/// (ie it applies the object's origin, translation, rotation and scale to the point)
///
/// \param shape :  Shape object
/// \param pointX : X coordinate of the point to transform
/// \param pointY : Y coordinate of the point to transform
/// \param x :      Value to fill with the X coordinate of the converted point
/// \param y :      Value to fill with the y coordinate of the converted point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_TransformToGlobal(sfShape* shape, float pointX, float pointY, float* x, float* y);

////////////////////////////////////////////////////////////
/// Add a point to a shape
///
/// \param shape :        Shape to modify
/// \param x, y :         Position of the point
/// \param color :        Color of the point
/// \param outlineColor : Outline color of the point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_AddPoint(sfShape* shape, float x, float y, sfColor color, sfColor outlineColor);

////////////////////////////////////////////////////////////
/// Enable or disable filling a shape.
/// Fill is enabled by default
///
/// \param shape :  Shape to modify
/// \param enable : True to enable, false to disable
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_EnableFill(sfShape* shape, sfBool enable);

////////////////////////////////////////////////////////////
/// Enable or disable drawing a shape outline.
/// Outline is enabled by default
///
/// \param shape :  Shape to modify
/// \param enable : True to enable, false to disable
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_EnableOutline(sfShape* shape, sfBool enable);

////////////////////////////////////////////////////////////
/// Change the width of a shape outline
///
/// \param shape : Shape to modify
/// \param width : New width
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetOutlineWidth(sfShape* shape, float width);

////////////////////////////////////////////////////////////
/// Get the width of a shape outline
///
/// \param shape : Shape to read
///
/// \param return Current outline width
///
////////////////////////////////////////////////////////////
CSFML_API float sfShape_GetOutlineWidth(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get the number of points composing a shape
///
/// \param shape : Shape to read
///
/// \return Total number of points
///
////////////////////////////////////////////////////////////
CSFML_API unsigned int sfShape_GetNbPoints(sfShape* shape);

////////////////////////////////////////////////////////////
/// Get a the position of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
/// \param x :     Variable to fill with the X coordinate of the point
/// \param y :     Variable to fill with the Y coordinate of the point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_GetPointPosition(sfShape* shape, unsigned int index, float* x, float* y);

////////////////////////////////////////////////////////////
/// Get a the color of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
///
/// \return Color of the point
///
////////////////////////////////////////////////////////////
CSFML_API sfColor sfShape_GetPointColor(sfShape* shape, unsigned int index);

////////////////////////////////////////////////////////////
/// Get a the outline color of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
///
/// \return Outline color of the point
///
////////////////////////////////////////////////////////////
CSFML_API sfColor sfShape_GetPointOutlineColor(sfShape* shape, unsigned int index);

////////////////////////////////////////////////////////////
/// Set a the position of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
/// \param x :     X coordinate of the point
/// \param y :     Y coordinate of the point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetPointPosition(sfShape* shape, unsigned int index, float x, float y);

////////////////////////////////////////////////////////////
/// Set a the color of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
/// \param color : Color of the point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetPointColor(sfShape* shape, unsigned int index, sfColor color);

////////////////////////////////////////////////////////////
/// Set a the outline color of a shape's point
///
/// \param shape : Shape to read
/// \param index : Index of the point to get
/// \param color : Outline color of the point
///
////////////////////////////////////////////////////////////
CSFML_API void sfShape_SetPointOutlineColor(sfShape* shape, unsigned int index, sfColor color);


#endif // SFML_Shape_H
