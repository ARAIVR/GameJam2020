#include "Material.h"

Material::Material()
{
	specularIntensity = 0.0f;
	shininess = 0.0f;

}

Material::Material(GLfloat sIntensity, GLfloat shine)
{
	specularIntensity = sIntensity;
	shininess = shine;
}


void Material::UseMaterial(GLuint speculartIntensityLocation, GLuint shininessLocation)
{

	glUniform1f(speculartIntensityLocation, specularIntensity);
	glUniform1f(shininessLocation, shininess);

}
Material::~Material()
{
}
