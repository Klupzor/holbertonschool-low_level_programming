#ifndef HEADER_DOG
#define HEADER_DOG
/**
 * struct dog - Dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Struct of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
