#ifndef PERSON_H_
#define PERSON_H_

typedef struct  person_t person_t;

person_t *person_create (const char *name, const char *address);
void person_set_name (person_t *person, const char *name);
void person_set_address (person_t *person, const char *address);
char *person_get_name (person_t *person);
char *person_get_address (person_t *person);

#endif /* PERSON_H_ */
