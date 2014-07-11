#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl10.h>

#include <glbinding/FunctionObjects.h>


namespace gl10
{

using namespace gl;


inline void glAccum(gl10::GLenum op, GLfloat value)
{
   	return FunctionObjects::Accum(op, value);
}

inline void glAlphaFunc(gl10::GLenum func, GLfloat ref)
{
   	return FunctionObjects::AlphaFunc(func, ref);
}

inline void glBegin(gl10::GLenum mode)
{
   	return FunctionObjects::Begin(mode);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
   	return FunctionObjects::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendFunc(gl10::GLenum sfactor, gl10::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(sfactor, dfactor);
}

inline void glCallList(GLuint list)
{
   	return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, gl10::GLenum type, const void * lists)
{
   	return FunctionObjects::CallLists(n, type, lists);
}

inline void glClear(gl10::GLbitfield mask)
{
   	return FunctionObjects::Clear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearIndex(GLfloat c)
{
   	return FunctionObjects::ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline void glClipPlane(gl10::GLenum plane, const GLdouble * equation)
{
   	return FunctionObjects::ClipPlane(plane, equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
   	return FunctionObjects::Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
   	return FunctionObjects::Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
   	return FunctionObjects::Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
   	return FunctionObjects::Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
   	return FunctionObjects::Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
   	return FunctionObjects::Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
   	return FunctionObjects::Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
   	return FunctionObjects::Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
   	return FunctionObjects::Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
   	return FunctionObjects::Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
   	return FunctionObjects::Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
   	return FunctionObjects::Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
   	return FunctionObjects::Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
   	return FunctionObjects::Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
   	return FunctionObjects::Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
   	return FunctionObjects::Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
   	return FunctionObjects::Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
   	return FunctionObjects::Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
   	return FunctionObjects::Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
   	return FunctionObjects::Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
   	return FunctionObjects::Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
   	return FunctionObjects::Color4usv(v);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaterial(gl10::GLenum face, gl10::GLenum mode)
{
   	return FunctionObjects::ColorMaterial(face, mode);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl10::GLenum type)
{
   	return FunctionObjects::CopyPixels(x, y, width, height, type);
}

inline void glCullFace(gl10::GLenum mode)
{
   	return FunctionObjects::CullFace(mode);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
   	return FunctionObjects::DeleteLists(list, range);
}

inline void glDepthFunc(gl10::GLenum func)
{
   	return FunctionObjects::DepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDisable(gl10::GLenum cap)
{
   	return FunctionObjects::Disable(cap);
}

inline void glDrawBuffer(gl10::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(mode);
}

inline void glDrawPixels(GLsizei width, GLsizei height, gl10::GLenum format, gl10::GLenum type, const void * pixels)
{
   	return FunctionObjects::DrawPixels(width, height, format, type, pixels);
}

inline void glEdgeFlag(GLboolean flag)
{
   	return FunctionObjects::EdgeFlag(flag);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
   	return FunctionObjects::EdgeFlagv(flag);
}

inline void glEnable(gl10::GLenum cap)
{
   	return FunctionObjects::Enable(cap);
}

inline void glEnd()
{
   	return FunctionObjects::End();
}

inline void glEndList()
{
   	return FunctionObjects::EndList();
}

inline void glEvalCoord1d(GLdouble u)
{
   	return FunctionObjects::EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
   	return FunctionObjects::EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
   	return FunctionObjects::EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
   	return FunctionObjects::EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord2fv(u);
}

inline void glEvalMesh1(gl10::GLenum mode, GLint i1, GLint i2)
{
   	return FunctionObjects::EvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(gl10::GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
   	return FunctionObjects::EvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
   	return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
   	return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, gl10::GLenum type, GLfloat * buffer)
{
   	return FunctionObjects::FeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFogf(gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Fogf(pname, param);
}

inline void glFogfv(gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Fogfv(pname, params);
}

inline void glFogi(gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::Fogi(pname, param);
}

inline void glFogiv(gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Fogiv(pname, params);
}

inline void glFrontFace(gl10::GLenum mode)
{
   	return FunctionObjects::FrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Frustum(left, right, bottom, top, zNear, zFar);
}

inline GLuint glGenLists(GLsizei range)
{
   	return FunctionObjects::GenLists(range);
}

inline void glGetBooleanv(gl10::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(pname, data);
}

inline void glGetClipPlane(gl10::GLenum plane, GLdouble * equation)
{
   	return FunctionObjects::GetClipPlane(plane, equation);
}

inline void glGetDoublev(gl10::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(pname, data);
}

inline GLenum glGetError()
{
   	return FunctionObjects::GetError();
}

inline void glGetFloatv(gl10::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(pname, data);
}

inline void glGetIntegerv(gl10::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(pname, data);
}

inline void glGetLightfv(gl10::GLenum light, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetLightfv(light, pname, params);
}

inline void glGetLightiv(gl10::GLenum light, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetLightiv(light, pname, params);
}

inline void glGetMapdv(gl10::GLenum target, gl10::GLenum query, GLdouble * v)
{
   	return FunctionObjects::GetMapdv(target, query, v);
}

inline void glGetMapfv(gl10::GLenum target, gl10::GLenum query, GLfloat * v)
{
   	return FunctionObjects::GetMapfv(target, query, v);
}

inline void glGetMapiv(gl10::GLenum target, gl10::GLenum query, GLint * v)
{
   	return FunctionObjects::GetMapiv(target, query, v);
}

inline void glGetMaterialfv(gl10::GLenum face, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(gl10::GLenum face, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetMaterialiv(face, pname, params);
}

inline void glGetPixelMapfv(gl10::GLenum map, GLfloat * values)
{
   	return FunctionObjects::GetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(gl10::GLenum map, GLuint * values)
{
   	return FunctionObjects::GetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(gl10::GLenum map, GLushort * values)
{
   	return FunctionObjects::GetPixelMapusv(map, values);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
   	return FunctionObjects::GetPolygonStipple(mask);
}

inline const GLubyte * glGetString(gl10::GLenum name)
{
   	return FunctionObjects::GetString(name);
}

inline void glGetTexEnvfv(gl10::GLenum target, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(gl10::GLenum target, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexEnviv(target, pname, params);
}

inline void glGetTexGendv(gl10::GLenum coord, gl10::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(gl10::GLenum coord, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(gl10::GLenum coord, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(gl10::GLenum target, GLint level, gl10::GLenum format, gl10::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(gl10::GLenum target, GLint level, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(gl10::GLenum target, GLint level, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterfv(gl10::GLenum target, gl10::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(gl10::GLenum target, gl10::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(target, pname, params);
}

inline void glHint(gl10::GLenum target, gl10::GLenum mode)
{
   	return FunctionObjects::Hint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
   	return FunctionObjects::IndexMask(mask);
}

inline void glIndexd(GLdouble c)
{
   	return FunctionObjects::Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
   	return FunctionObjects::Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
   	return FunctionObjects::Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
   	return FunctionObjects::Indexfv(c);
}

inline void glIndexi(GLint c)
{
   	return FunctionObjects::Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
   	return FunctionObjects::Indexiv(c);
}

inline void glIndexs(GLshort c)
{
   	return FunctionObjects::Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
   	return FunctionObjects::Indexsv(c);
}

inline void glInitNames()
{
   	return FunctionObjects::InitNames();
}

inline GLboolean glIsEnabled(gl10::GLenum cap)
{
   	return FunctionObjects::IsEnabled(cap);
}

inline GLboolean glIsList(GLuint list)
{
   	return FunctionObjects::IsList(list);
}

inline void glLightModelf(gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::LightModelf(pname, param);
}

inline void glLightModelfv(gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::LightModelfv(pname, params);
}

inline void glLightModeli(gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::LightModeli(pname, param);
}

inline void glLightModeliv(gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::LightModeliv(pname, params);
}

inline void glLightf(gl10::GLenum light, gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Lightf(light, pname, param);
}

inline void glLightfv(gl10::GLenum light, gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Lightfv(light, pname, params);
}

inline void glLighti(gl10::GLenum light, gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::Lighti(light, pname, param);
}

inline void glLightiv(gl10::GLenum light, gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Lightiv(light, pname, params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
   	return FunctionObjects::LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glListBase(GLuint base)
{
   	return FunctionObjects::ListBase(base);
}

inline void glLoadIdentity()
{
   	return FunctionObjects::LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadMatrixf(m);
}

inline void glLoadName(GLuint name)
{
   	return FunctionObjects::LoadName(name);
}

inline void glLogicOp(gl10::GLenum opcode)
{
   	return FunctionObjects::LogicOp(opcode);
}

inline void glMap1d(gl10::GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
   	return FunctionObjects::Map1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(gl10::GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
   	return FunctionObjects::Map1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(gl10::GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
   	return FunctionObjects::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(gl10::GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
   	return FunctionObjects::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
   	return FunctionObjects::MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
   	return FunctionObjects::MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(gl10::GLenum face, gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Materialf(face, pname, param);
}

inline void glMaterialfv(gl10::GLenum face, gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Materialfv(face, pname, params);
}

inline void glMateriali(gl10::GLenum face, gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::Materiali(face, pname, param);
}

inline void glMaterialiv(gl10::GLenum face, gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Materialiv(face, pname, params);
}

inline void glMatrixMode(gl10::GLenum mode)
{
   	return FunctionObjects::MatrixMode(mode);
}

inline void glMultMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultMatrixf(m);
}

inline void glNewList(GLuint list, gl10::GLenum mode)
{
   	return FunctionObjects::NewList(list, mode);
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
   	return FunctionObjects::Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
   	return FunctionObjects::Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
   	return FunctionObjects::Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
   	return FunctionObjects::Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
   	return FunctionObjects::Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
   	return FunctionObjects::Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
   	return FunctionObjects::Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
   	return FunctionObjects::Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
   	return FunctionObjects::Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
   	return FunctionObjects::Normal3sv(v);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glPassThrough(GLfloat token)
{
   	return FunctionObjects::PassThrough(token);
}

inline void glPixelMapfv(gl10::GLenum map, GLsizei mapsize, const GLfloat * values)
{
   	return FunctionObjects::PixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(gl10::GLenum map, GLsizei mapsize, const GLuint * values)
{
   	return FunctionObjects::PixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(gl10::GLenum map, GLsizei mapsize, const GLushort * values)
{
   	return FunctionObjects::PixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(pname, param);
}

inline void glPixelStorei(gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(pname, param);
}

inline void glPixelTransferf(gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelTransferf(pname, param);
}

inline void glPixelTransferi(gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
   	return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPolygonMode(gl10::GLenum face, gl10::GLenum mode)
{
   	return FunctionObjects::PolygonMode(face, mode);
}

inline void glPolygonStipple(const GLubyte * mask)
{
   	return FunctionObjects::PolygonStipple(mask);
}

inline void glPopAttrib()
{
   	return FunctionObjects::PopAttrib();
}

inline void glPopMatrix()
{
   	return FunctionObjects::PopMatrix();
}

inline void glPopName()
{
   	return FunctionObjects::PopName();
}

inline void glPushAttrib(gl10::GLbitfield mask)
{
   	return FunctionObjects::PushAttrib(mask);
}

inline void glPushMatrix()
{
   	return FunctionObjects::PushMatrix();
}

inline void glPushName(GLuint name)
{
   	return FunctionObjects::PushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
   	return FunctionObjects::RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
   	return FunctionObjects::RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
   	return FunctionObjects::RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
   	return FunctionObjects::RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos4sv(v);
}

inline void glReadBuffer(gl10::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl10::GLenum format, gl10::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
   	return FunctionObjects::Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
   	return FunctionObjects::Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
   	return FunctionObjects::Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
   	return FunctionObjects::Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
   	return FunctionObjects::Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
   	return FunctionObjects::Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
   	return FunctionObjects::Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
   	return FunctionObjects::Rectsv(v1, v2);
}

inline GLint glRenderMode(gl10::GLenum mode)
{
   	return FunctionObjects::RenderMode(mode);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Rotatef(angle, x, y, z);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Scalef(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
   	return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(gl10::GLenum mode)
{
   	return FunctionObjects::ShadeModel(mode);
}

inline void glStencilFunc(gl10::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilOp(gl10::GLenum fail, gl10::GLenum zfail, gl10::GLenum zpass)
{
   	return FunctionObjects::StencilOp(fail, zfail, zpass);
}

inline void glTexCoord1d(GLdouble s)
{
   	return FunctionObjects::TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
   	return FunctionObjects::TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
   	return FunctionObjects::TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
   	return FunctionObjects::TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
   	return FunctionObjects::TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
   	return FunctionObjects::TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
   	return FunctionObjects::TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
   	return FunctionObjects::TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
   	return FunctionObjects::TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
   	return FunctionObjects::TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
   	return FunctionObjects::TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
   	return FunctionObjects::TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
   	return FunctionObjects::TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord4sv(v);
}

inline void glTexEnvf(gl10::GLenum target, gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexEnvf(target, pname, param);
}

inline void glTexEnvfv(gl10::GLenum target, gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexEnvfv(target, pname, params);
}

inline void glTexEnvi(gl10::GLenum target, gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::TexEnvi(target, pname, param);
}

inline void glTexEnviv(gl10::GLenum target, gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexEnviv(target, pname, params);
}

inline void glTexGend(gl10::GLenum coord, gl10::GLenum pname, GLdouble param)
{
   	return FunctionObjects::TexGend(coord, pname, param);
}

inline void glTexGendv(gl10::GLenum coord, gl10::GLenum pname, const GLdouble * params)
{
   	return FunctionObjects::TexGendv(coord, pname, params);
}

inline void glTexGenf(gl10::GLenum coord, gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexGenf(coord, pname, param);
}

inline void glTexGenfv(gl10::GLenum coord, gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexGenfv(coord, pname, params);
}

inline void glTexGeni(gl10::GLenum coord, gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::TexGeni(coord, pname, param);
}

inline void glTexGeniv(gl10::GLenum coord, gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexGeniv(coord, pname, params);
}

inline void glTexImage1D(gl10::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl10::GLenum format, gl10::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(gl10::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl10::GLenum format, gl10::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexParameterf(gl10::GLenum target, gl10::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(target, pname, param);
}

inline void glTexParameterfv(gl10::GLenum target, gl10::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(target, pname, params);
}

inline void glTexParameteri(gl10::GLenum target, gl10::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(target, pname, param);
}

inline void glTexParameteriv(gl10::GLenum target, gl10::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(target, pname, params);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Translatef(x, y, z);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
   	return FunctionObjects::Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
   	return FunctionObjects::Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
   	return FunctionObjects::Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
   	return FunctionObjects::Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
   	return FunctionObjects::Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
   	return FunctionObjects::Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
   	return FunctionObjects::Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
   	return FunctionObjects::Vertex4sv(v);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}


} // namespace gl10
