/*
 * SerialCtrl.h
 *
 *  Created on: 05.05.2014
 *      Author: Hristo
 */

#ifndef SERIALCTRL_H_
#define SERIALCTRL_H_

// This class is for manipulation of SPI interface
class SerialCtrl {
private:
	int iSpeed;
public:
	SerialCtrl();
	virtual ~SerialCtrl();
	void Setup();
};

#endif /* SERIALCTRL_H_ */
