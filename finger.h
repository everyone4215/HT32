typedef enum
{
					NotSet				= 0x00,		// Default value for enum. Scanner will return error if sent this.
					Open				= 0x01,		// Open Initialization
					Close				= 0x02,		// Close Termination
					UsbInternalCheck	= 0x03,		// UsbInternalCheck Check if the connected USB device is valid
					ChangeEBaudRate		= 0x04,		// ChangeBaudrate Change UART baud rate
					SetIAPMode			= 0x05,		// SetIAPMode Enter IAP Mode In this mode, FW Upgrade is available
					CmosLed				= 0x12,		// CmosLed Control CMOS LED
					GetEnrollCount		= 0x20,		// Get enrolled fingerprint count
					CheckEnrolled		= 0x21,		// Check whether the specified ID is already enrolled
					EnrollStart			= 0x22,		// Start an enrollment
					Enroll1				= 0x23,		// Make 1st template for an enrollment
					Enroll2				= 0x24,		// Make 2nd template for an enrollment
					Enroll3				= 0x25,		// Make 3rd template for an enrollment, merge three templates into one template, save merged template to the database
					IsPressFinger		= 0x26,		// Check if a finger is placed on the sensor
					DeleteID			= 0x40,		// Delete the fingerprint with the specified ID
					DeleteAll			= 0x41,		// Delete all fingerprints from the database
					Verify1_1			= 0x50,		// Verification of the capture fingerprint image with the specified ID
					Identify1_N			= 0x51,		// Identification of the capture fingerprint image with the database
					VerifyTemplate1_1	= 0x52,		// Verification of a fingerprint template with the specified ID
					IdentifyTemplate1_N	= 0x53,		// Identification of a fingerprint template with the database
					CaptureFinger		= 0x60,		// Capture a fingerprint image(256x256) from the sensor
					MakeTemplate		= 0x61,		// Make template for transmission
					GetImage			= 0x62,		// Download the captured fingerprint image(256x256)
					GetRawImage			= 0x63,		// Capture & Download raw fingerprint image(320x240)
					GetTemplate			= 0x70,		// Download the template of the specified ID
					SetTemplate			= 0x71,		// Upload the template of the specified ID
					GetDatabaseStart	= 0x72,		// Start database download, obsolete
					GetDatabaseEnd		= 0x73,		// End database download, obsolete
					UpgradeFirmware		= 0x80,		// Not supported
					UpgradeISOCDImage	= 0x81,		// Not supported
					Ack					= 0x30,		// Acknowledge.
					Nack				= 0x31		// Non-acknowledge
					
}Commands_Enum;



