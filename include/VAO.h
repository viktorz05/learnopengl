#pragma once
#include <glad/glad.h>
#include "VBO.h"

class VAO {
public:
	GLuint ID;
	VAO();
	void linkAttrib(VBO VBO, GLuint layout, GLuint nrComponents, GLenum type, GLsizeiptr stride, void* offset);
	void bind();
	void unbind();
	void deleteVAO();
};