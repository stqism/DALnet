/* sqlite.cpp */

//Abstracts the db functions, for future postgrsql/mysql/etc support

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

#include <sqlite3.h>

sqlite3 *db;

int callback(); //placeholder

short db_connect(char svr[64]){
	int rtn;
	rtn = sqlite3_open(svr,&db);
	if (rtn){
		return -1;
		sqlite3_close(db);
	};
};
short db_exec(int rtn,char exec[1024],char **err){
/*	rtn = sqlite3_exec(db,exec,callback,0,err);
	if (!rtn)return -1;
*	Disabled due to link issues
*/
};

void db_close(){
	sqlite3_close(db);
};
