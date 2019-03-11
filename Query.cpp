struct Users
{
	std::string DistName();
	std::string Name();
	std::string GUID();

	SYSTEMTIME stPwdLastSet; //The date and time that the password for this account was last changed.
	SYSTEMTIME stAccExpirationDate; //Account Expiration is an Account Restriction to indicate that a Digital Identity is no longer able to be used beyond a given date.
	SYSTEMTIME stAccLastLogon; //Each time an account successfully authenticates to a domain controller while on the network the event is logged in Active Directory in an attribute named stAccLastLogon.
	SYSTEMTIME stAccLastLogoff; //Information about user's last logon date in Active Directory
	SYSTEMTIME stlockoutTime; //Account lockout is often a component of most Directory Servers Password Policy or Account Expiration policies that may be used to lock user accounts after too many failed bind or login attempts.
	SYSTEMTIME stbadPasswordTime; //The last time and date that an attempt to log on to this account was made with a password that is not valid.

};

struct Groups
{
	std::string DistName();
	std::string Name();
	std::string GUID();

	std::vector<std::string> MembersbyGUID; //List of members’ GUIDs

};

struct Computers
{
	std::string DistName();
	std::string Name();
	std::string GUID();
	std::string OperatingSystem();
	std::string IPAddress(); //Gets the IP address of this computer.
	SYSTEMTIME stCompLastLogon; //Each time a computer successfully authenticates the event is logged in Active Directory in an attribute named stCompLastLogon.
	
	int numberComputers() //Gets number of computers deployed in Active Directory
	{	
		return numberComputers;
	}
};

struct OU
{
	std::string DistName();
	std::string Name();
	std::string GUID();
};

