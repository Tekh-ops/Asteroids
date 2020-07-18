#pragma once

#include <GL/glew.h>
#include <string>

class Shader
{
private:
  // store the shader object IDs
  GLuint m_ShaderProgram;
  GLuint m_VertexShader;
  GLuint m_FragShader;

public:
  Shader();
  ~Shader();

  // load vertex/ fragment shaders
  bool Load(const std::string& vertName, const std::string& fragName);
  void Unload();
  void SetActive();

private:
  // compile specified shader
  bool CompileShader(const std::string& fileName, GLenum shaderType, GLuint& outShader);
  // test if compiled successfully
  bool IsCompiled(GLuint shader);
  // tests whether vertex / fragment programs link
  bool IsValidProgram();
};
