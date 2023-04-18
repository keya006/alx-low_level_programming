#ifdef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef of struct dog
 */

typedef struct dog_t;

/**
 * struct dog - stores informatin about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: person responsible for dog
 *
 * Description: this is all about dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
