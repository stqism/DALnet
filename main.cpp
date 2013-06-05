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
#include <cstdlib>
#include <sanitize.h>
using namespace std;

int main() {
	char *file, *eval;
	file=(char*) malloc (1);
	eval=(char*) malloc (&file + 1);
	if (!cin.eof()) {cin >> file;
	} else { cout << 'Error, no data provided'; break}; //please work
	ifstream data(file);
	eval[0] = 0;
	for (int i = 0;!data.get();i++) {
		eval[i] = data.get(); count eval[i];
				}
	free (file);
	for(int i;!eval[i];i++){purge(eval[i],eval[i-1});
	}
	
	
