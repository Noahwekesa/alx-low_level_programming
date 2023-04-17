#ifndef DOG
#define DOG

/**
 * struct dog - struct for each dog info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * dog_typedef - typedef for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_typedef;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_typedef *new_dog(char *name, float age, char *owner);

void free_dog(dog_typedef *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
