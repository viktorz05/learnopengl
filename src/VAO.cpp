#include "../include/VAO.h"

VAO::VAO() {
	glGenVertexArrays(1, &ID);
}

void VAO::bind() {
	glBindVertexArray(ID);
}

void VAO::unbind() {
	glBindVertexArray(0);
}

void VAO::deleteVAO() {
	glDeleteVertexArrays(1, &ID);
}

void VAO::linkAttrib(VBO VBO, GLuint layout, GLuint nrComponents, GLenum type, GLsizeiptr stride, void* offset) {
	VBO.bind();
	glVertexAttribPointer(layout, nrComponents, type, GL_FALSE, stride, offset);
	glEnableVertexAttribArray(layout);
	VBO.unbind();
}