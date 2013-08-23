/*----------------------------------------*- C++ -*------------------------------------------------------------------*\
| O pen         | OpenSea: The Open Source Seakeeping Suite                                                           |
| S eakeeping	| Web:     www.opensea.dmsonline.us                                                                   |
| E valuation   |                                                                                                     |
| A nalysis     |                                                                                                     |
\*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*\
 *Revision History
 *---------------------------------------------------------------------------------------------------------------------
 *Date              Author				Description
 *---------------------------------------------------------------------------------------------------------------------
 *May 15 2013       Shane Honanie       Initially created
 *
\*-------------------------------------------------------------------------------------------------------------------*/

//License
/*-------------------------------------------------------------------------------------------------------------------*\
 *Copyright Datawave Marine Solutions, 2013.
 *This file is part of OpenSEA.

 *OpenSEA is free software: you can redistribute it and/or modify
 *it under the terms of the GNU General Public License as published by
 *the Free Software Foundation, either version 3 of the License, or
 *(at your option) any later version.

 *OpenSEA is distributed in the hope that it will be useful,
 *but WITHOUT ANY WARRANTY; without even the implied warranty of
 *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *GNU General Public License for more details.

 *You should have received a copy of the GNU General Public License
 *along with OpenSEA.  If not, see <http://www.gnu.org/licenses/>.
\*-------------------------------------------------------------------------------------------------------------------*/



//######################################### Class Separator ###########################################################
#ifndef WAVEDIRECTIONS_H
#define WAVEDIRECTIONS_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//######################################### Class Separator ###########################################################
/**
 * This class holds data for the wave directions.
 */

class WaveDirections
{
//==========================================Section Separator =========================================================
public:
    //------------------------------------------Function Separator ----------------------------------------------------
	WaveDirections(); /**< The default constructor. */

    //------------------------------------------Function Separator ----------------------------------------------------
	~WaveDirections(); /**< The default destructor, nothing happens here. */

    //------------------------------------------Function Separator ----------------------------------------------------
	void testPrint(); /**< Test print to console the values of all data members. */

    //------------------------------------------Function Separator ----------------------------------------------------
	//void addDirection(int);

    //------------------------------------------Function Separator ----------------------------------------------------
	/**
	 * Sets the list of wave directions.
	 * @param theListIn The list of wave directions.
	 */
	void setDirections(vector<double>);

    //------------------------------------------Function Separator ----------------------------------------------------
	/**
	 * Sets the spread model.
	 * @param spreadModelIn The name of the spread model.
	 */
	void setSpreadModel(string);

    //------------------------------------------Function Separator ----------------------------------------------------
	/**
	 * Retrieve the list of wave directions.
	 * @return The list of wave directions.
	 */
	vector<double> getWaveDirections();

    //------------------------------------------Function Separator ----------------------------------------------------
    /**
     * @brief Provides direct access to the list of wave directions.
     * @return Returns a pointer to the list of wave directions.  Variable passed by reference.
     */
    vector<double> &refWaveDirections();

//==========================================Section Separator =========================================================
protected:

//==========================================Section Separator =========================================================
private:
    //------------------------------------------Function Separator ----------------------------------------------------
	vector<double> directions; /**< The list of wave directions. */

    //------------------------------------------Function Separator ----------------------------------------------------
	string spreadModel; /**< The spread model. */
};
#endif
