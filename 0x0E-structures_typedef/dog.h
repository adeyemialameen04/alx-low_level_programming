#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct to represent the info of a dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* #ifndef _DOG_H_ */
