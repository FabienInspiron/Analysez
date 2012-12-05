/*
 * Afficheur.h
 *
 *  Created on: 22 nov. 2012
 *      Author: cyril
 */

#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

class Robot;

class Afficheur {
public:
	class AfficherNotSet{};

	virtual void afficher(Robot *) {
		throw new AfficherNotSet();
	}

	bool operator==(const Afficheur &a) const {
		return this==&a;
	}

	bool operator<(const Afficheur &a) const {
		return !(&a == this);
	}

	bool operator!=(const Afficheur &a) const {
		return !(&a == this);
	}

	Afficheur& operator=(const Afficheur &a) {
		return *this;
	}
};

#endif /* AFFICHEUR_H_ */
