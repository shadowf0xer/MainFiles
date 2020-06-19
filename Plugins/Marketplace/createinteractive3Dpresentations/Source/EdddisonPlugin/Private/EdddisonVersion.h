/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#ifndef __EDDD_PROTO__EDDDISONVERSION_H__
#define __EDDD_PROTO__EDDDISONVERSION_H__


#include <string>
#include <vector>

/*
* This represents an edddison version. Handling for major, minor and patch number.
*/

class EdddisonVersion {


public:



	EdddisonVersion(std::string version) :
		_delimiter("."),
		_major(_missing_value_dummy),
		_minor(_missing_value_dummy),
		_patch(_missing_value_dummy)
		
	{

		std::vector<unsigned int> numbers = EdddisonVersion::splitString(version, ".");

		if (numbers.size() > 0) {
			_major = numbers.at(0);
		}

		if (numbers.size() > 1) {
			_minor = numbers.at(1);
		}

		if (numbers.size() > 2) {
			_patch = numbers.at(2);
		}

	}



	unsigned int getMajorNumber() {
		return _major;
	}



	unsigned int getMinorNumber() {
		return _minor;
	}



	unsigned int getPatchNumber() {
		return _patch;
	}



	bool isGreaterAs(std::string version) {
		if (this->compare(version) == 1) {
			return true;
		}
		return false;
	}



	bool isEqualTo(std::string version) {
		if (this->compare(version) == 0) {
			return true;
		}
		return false;
	}



	bool isLessThan(std::string version) {
		if (this->compare(version) == -1) {
			return true;
		}
		return false;
	}



	std::string toString() {

		return std::to_string(_major) + "." + std::to_string(_minor) + "." + std::to_string(_patch);
	}





private:

	static const unsigned int _missing_value_dummy = 0;

	const std::string _delimiter;

	unsigned int _major;
	unsigned int _minor;
	unsigned int _patch;






	/**
	* Compare the version in greater, equal or less.
	* @param version_str The version string to compare. E.g. 1.2.3. Incomplete versions are filled with _missing_value_dummy.
	* @return 1 if greater, 0 if equal, -1 if less.
	*/
	int compare(std::string version_str) {

		EdddisonVersion version{ version_str };


		if (this->getMajorNumber() > version.getMajorNumber()) {
			return 1;
		}


		if (this->getMajorNumber() == version.getMajorNumber()) {

			if (this->getMinorNumber() > version.getMinorNumber()) {
				return 1;
			}

			if (this->getMinorNumber() == version.getMinorNumber()) {

				if (this->getPatchNumber() > version.getPatchNumber()) {
					return 1;
				}

				if (this->getPatchNumber() == version.getPatchNumber()) {
					return 0;
				}
				else {
					return -1;
				}
			}
			else {
				return -1;
			}

		}
		else {
			return -1;
		}

	}



	/**
	* Split a string by '.' delimiter into unsigned int vector.
	*
	* @param str_to_split The string to split; may contain the delimiter string.
	* @param delimiter The delimiter string.
	* @return Vector of substrings split by the delimiter. Not into unsigned convertible strings are count as _missing_value_dummy.
	*/
	static std::vector<unsigned int> splitString(std::string str_to_split, const std::string delimiter) {

		size_t pos = 0;
		std::vector<unsigned int> tokens;

		while ((pos = str_to_split.find(delimiter)) != std::string::npos) {

			// no use of exceptions in unreal!!!0
			//try {
				tokens.push_back(std::stoul(str_to_split.substr(0, pos), nullptr, 10));
			//}
			//catch (const std::invalid_argument ia) {
			//	tokens.push_back(_missing_value_dummy);
			//}
			str_to_split.erase(0, pos + delimiter.length());
		}

		//try {
			tokens.push_back(std::stoul(str_to_split, nullptr, 10));
		//}
		//catch (const std::invalid_argument ia) {
		//	tokens.push_back(_missing_value_dummy);
		//}


		return tokens;

	}

};


#endif //__EDDD_PROTO__EDDDISONVERSION_H__