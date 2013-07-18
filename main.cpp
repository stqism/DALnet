/*
       Licensed to the DALnet project.  See the NOTICE file
       distributed with this work for additional information
       regarding copyright ownership.  The ASF licenses this file
       to you under the Apache License, Version 2.0 (the
       "License"); you may not use this file except in compliance
       with the License.  You may obtain a copy of the License at

         http://www.apache.org/licenses/LICENSE-2.0

       Unless required by applicable law or agreed to in writing,
       software distributed under the License is distributed on an
       "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
       KIND, either express or implied.  See the License for the
       specific language governing permissions and limitations
       under the License.
*/

#include <iostream>
#include <fstream>
#include <sstream>
//#include <cstdlib> //Part of depreciated code, marked for removal
#include <sanitize.h>
#include <string.h>
using namespace std;

int main() {
	char file[64];
	char user[64];
	stringstream buffer;
	char d[1];

	cout << "Enter a file name to read: ";
	cin >> user; //Helps with NSA tracking
	strcpy(file,user); //Helps save entered user data, for future use
	ifstream raw(file); //Read file
	buffer << raw.rdbuf(); //Pull out raw data
	string data(buffer.str()); //Make a string
	for (char& c : data) {
		purge(&c,&d[0]); //From sanitize, helps prevent malicious data
		d[0] = c; //Save previous character
			}
	}	
