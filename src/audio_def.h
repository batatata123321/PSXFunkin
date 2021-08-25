static CdlFILE xa_files[XA_Max];

#define XA_LENGTH(x) (((u64)(x) * 75) / 100 * IO_SECT_SIZE) //Centiseconds to sectors in bytes (w)

typedef struct
{
	XA_File file;
	u32 length;
} XA_TrackDef;

static const XA_TrackDef xa_tracks[] = {
	//MENU.XA
	{XA_Menu, XA_LENGTH(11295)}, //XA_GettinFreaky
	{XA_Menu, XA_LENGTH(3840)},  //XA_GameOver
	//WEEK1A.XA
	{XA_Week1A, XA_LENGTH(7685)}, //XA_Bopeebo
	{XA_Week1A, XA_LENGTH(8000)}, //XA_Fresh
	//WEEK1B.XA
	{XA_Week1B, XA_LENGTH(8667)}, //XA_Dadbattle
	{XA_Week1B, XA_LENGTH(6800)}, //XA_Tutorial
	//WEEK2A.XA
	{XA_Week2A, XA_LENGTH(9923)}, //XA_Spookeez
	{XA_Week2A, XA_LENGTH(8880)}, //XA_South
	//WEEK2B.XA
	{XA_Week2B, XA_LENGTH(17778)}, //XA_Monster
	//WEEK3A.XA
	{XA_Week3A, XA_LENGTH(8400)},  //XA_Pico
	{XA_Week3A, XA_LENGTH(10000)}, //XA_Philly
	//WEEK3B.XA
	{XA_Week3B, XA_LENGTH(10700)}, //XA_Blammed
	//WEEK4A.XA
	{XA_Week4A, XA_LENGTH(9300)},  //XA_SatinPanties
	{XA_Week4A, XA_LENGTH(10300)}, //XA_High
	//WEEK4B.XA
	{XA_Week4B, XA_LENGTH(12300)}, //XA_MILF
	{XA_Week4B, XA_LENGTH(10300)}, //XA_Test
	//WEEK5A.XA
	{XA_Week5A, XA_LENGTH(11520)}, //XA_Cocoa
	{XA_Week5A, XA_LENGTH(9401)}, //XA_Eggnog
	//WEEK5B.XA
	{XA_Week5B, XA_LENGTH(13223)}, //XA_WinterHorrorland
	//WEEK6A.XA
	{XA_Week6A, XA_LENGTH(9800)}, //XA_Senpai
	{XA_Week6A, XA_LENGTH(8928)}, //XA_Roses
	//WEEK6B.XA
	{XA_Week6B, XA_LENGTH(10298)}, //XA_Thorns
	//WEEK7A.XA
	{XA_Week7A, XA_LENGTH(8493)},  //XA_Ugh
	{XA_Week7A, XA_LENGTH(13866)}, //XA_Guns
	//WEEK7B.XA
	{XA_Week7B, XA_LENGTH(12200)}, //XA_Stress
	//KAPIA.XA
	{XA_KapiA, XA_LENGTH(12138)}, //XA_Wocky
	{XA_KapiA, XA_LENGTH(12000)}, //XA_Beathoven
	//KAPIB.XA
	{XA_KapiB, XA_LENGTH(17159)}, //XA_Hairball
	{XA_KapiB, XA_LENGTH(15157)}, //XA_Nyaw
	//CLWNA.XA
	{XA_ClwnA, XA_LENGTH(10740)}, //XA_ImprobableOutset
	{XA_ClwnA, XA_LENGTH(15169)}, //XA_Madness
	//CLWNB.XA
	{XA_ClwnB, XA_LENGTH(21886)}, //XA_Hellclown
	{XA_ClwnB, XA_LENGTH(19607)}, //XA_Expurgation
};

static const char *xa_paths[] = {
	"\\MUSIC\\MENU.XA;1",   //XA_Menu
	"\\MUSIC\\WEEK1A.XA;1", //XA_Week1A
	"\\MUSIC\\WEEK1B.XA;1", //XA_Week1B
	"\\MUSIC\\WEEK2A.XA;1", //XA_Week2A
	"\\MUSIC\\WEEK2B.XA;1", //XA_Week2B
	"\\MUSIC\\WEEK3A.XA;1", //XA_Week3A
	"\\MUSIC\\WEEK3B.XA;1", //XA_Week3B
	"\\MUSIC\\WEEK4A.XA;1", //XA_Week4A
	"\\MUSIC\\WEEK4B.XA;1", //XA_Week4B
	"\\MUSIC\\WEEK5A.XA;1", //XA_Week5A
	"\\MUSIC\\WEEK5B.XA;1", //XA_Week5B
	"\\MUSIC\\WEEK6A.XA;1", //XA_Week6A
	"\\MUSIC\\WEEK6B.XA;1", //XA_Week6B
	/*
	"\\MUSIC\\WEEK7A.XA;1", //XA_Week7A
	"\\MUSIC\\WEEK7B.XA;1", //XA_Week7B
	"\\MUSIC\\KAPIA.XA;1",  //XA_KapiA
	"\\MUSIC\\KAPIB.XA;1",  //XA_KapiB
	"\\MUSIC\\CLWNA.XA;1",  //XA_ClwnA
	"\\MUSIC\\CLWNB.XA;1",  //XA_ClwnB
	*/
	NULL,
};