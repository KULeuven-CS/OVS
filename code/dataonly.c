void run_command_with_argument( pairs* data, int offset, int value ) {
		// must have offset be a valid index into data
		char cmd[MAX_LEN];
		data[offset].argument = value;
		{
				char valuestring[MAX_LEN];
				itoa( value, valuestring, 10 );
				strcpy( cmd, getenv("SAFECOMMAND") );
				strcat( cmd, " " );
				strcat( cmd, valuestring );
		}
		data[offset].result = system( cmd );
}
