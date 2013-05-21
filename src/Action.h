#ifndef ACTION_H_
#define ACTION_H_

struct Action
{
	virtual void exec() const = 0;
	virtual ~Action(){}
};


#endif /* ACTION_H_ */
