#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description of a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Who owns the dog
 *
 * Description: Details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

