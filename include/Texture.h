#pragma once
#include "glad/glad.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Texture {
public:
	GLuint ID;
	Texture(GLenum target, GLenum axis, GLint wrapping);
	void loadTexture(uint32_t width, uint32_t height, uint32_t nrChannels, unsigned char* data);
	void bind();
};