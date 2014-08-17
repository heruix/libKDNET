//Debuggee -> Windbg POKE
BYTE poke[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x01,
0x10, 0xd8, 0x50, 0x26, 0xd8, 0x01, 0x88, 0xb6, 0x70, 0x74, 0x1b, 0xa4, 0x79, 0x37, 0x8d, 0x0c,
0xea, 0x37, 0x6a, 0xc6, 0xf4, 0x27, 0xbd, 0x0f, 0x39, 0x91, 0xc2, 0x99, 0x95, 0xb3, 0x58, 0x40,
0x0c, 0x86, 0x83, 0x0e, 0x36, 0x6a, 0x33, 0xa8, 0x7e, 0x53, 0xe5, 0x73, 0x78, 0x21, 0x55, 0x9d,
0x27, 0x07, 0xe2, 0x89, 0x13, 0x09, 0xc2, 0xd3, 0x34, 0xf2, 0x52, 0xe1, 0xcc, 0x21, 0x48, 0xcd,
0x3a, 0x3d, 0x4c, 0x1a, 0x5f, 0xa6, 0xc4, 0xe2, 0xe4, 0xa4, 0x0b, 0x7a, 0x32, 0x47, 0x9d, 0x3d,
0xa3, 0x24, 0xc8, 0x87, 0x88, 0xde, 0xbd, 0xf4, 0xed, 0xe5, 0x57, 0x7e, 0x3e, 0x50, 0x45, 0x03,
0x64, 0xd1, 0x42, 0x80, 0xd3, 0x5b, 0x8f, 0xe9, 0xff, 0x44, 0x36, 0x83, 0x5e, 0x83, 0x19, 0x3b,
0xf1, 0xf7, 0x68, 0x77, 0x63, 0x4a, 0x4f, 0x80, 0x2b, 0x21, 0xf1, 0x6e, 0x4c, 0x32, 0x55, 0x87,
0xfc, 0x45, 0x65, 0x62, 0x55, 0x78, 0xf8, 0xa0, 0x39, 0xec, 0xad, 0x60, 0x6f, 0x18, 0xb5, 0x69,
0xe4, 0x30, 0x68, 0xa7, 0x94, 0x85, 0xc5, 0x11, 0x1e, 0x21, 0x4e, 0x57, 0x9e, 0xde, 0x1c, 0x18,
0xfc, 0x59, 0xe7, 0x89, 0xef, 0x37, 0x09, 0xa9, 0x9e, 0xe5, 0x1b, 0xab, 0x03, 0x69, 0xc4, 0xb8,
0xd4, 0x16, 0xa8, 0x8e, 0x6c, 0x90, 0x8c, 0x16, 0xef, 0xbb, 0x2d, 0x9d, 0xb3, 0x5d, 0xe4, 0xbe,
0xfd, 0x51, 0xa9, 0x6e, 0x60, 0x8a, 0x1a, 0x09, 0x10, 0x65, 0x93, 0x3f, 0x69, 0x15, 0x36, 0x6d,
0x70, 0x8b, 0x26, 0x4b, 0xb6, 0x75, 0xa7, 0xb4, 0x16, 0xd4, 0x02, 0x9a, 0x22, 0x95, 0xdd, 0x54,
0x3b, 0x34, 0x92, 0x9c, 0x92, 0x9f, 0x61, 0xda, 0xcc, 0x26, 0x57, 0x4a, 0xea, 0xea, 0x24, 0xe9,
0x8c, 0xd5, 0x55, 0x5f, 0x33, 0xce, 0x6c, 0x4a, 0xb0, 0x52, 0x3b, 0x84, 0x3f, 0x65, 0x58, 0x7c,
0x63, 0xdd, 0x21, 0x36, 0x18, 0xeb, 0x60, 0xda, 0x54, 0x46, 0x70, 0x70, 0xc0, 0x8c, 0x89, 0x83,
0x35, 0x2e, 0x78, 0x61, 0x16, 0x7d, 0x64, 0xb3, 0xf4, 0xb7, 0xab, 0x32, 0xb9, 0xc8, 0x82, 0x1b,
0x13, 0x31, 0x57, 0x71, 0x26, 0x32, 0xa8, 0xa9, 0x58, 0xdb, 0xd8, 0x4d, 0x12, 0x5d, 0xd9, 0x4c,
0x46, 0x49, 0x50, 0x22, 0x67, 0x2b, 0xba, 0xa8, 0x1d, 0x43, 0x1b, 0x23, 0x31, 0x66, 0x55, 0x90,
0xc9, 0xe3, 0xda, 0x5f, 0x83, 0x67, 0x6f, 0xd2, 0xac, 0x67, 0x1d, 0x25, 0xb8, 0x85, 0x51, 0x9b,
0xe1, 0xf7, 0x6d, 0x75, 0xa6, 0x24, 0xca, 0xc9, 0xa0, 0xad, 0x6f, 0x8e, 0x2e, 0x37, 0x80, 0x17,
0x6c, 0xff, 0xb1, 0x6a, 0xb7, 0xc3, 0x09, 0x59, 0xcd, 0xb3, 0xbe, 0x88, 0x62, 0xfa, 0x11, 0xb5
};

//Windbg -> Debuggee POKE_RESPONSE
BYTE poke_resp[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x01,
0x7f, 0x55, 0x4a, 0x25, 0x20, 0x9e, 0xd0, 0xdc, 0x22, 0xdd, 0xbc, 0x12, 0xb0, 0x60, 0xe1, 0xe0,
0xf0, 0x65, 0xfa, 0x10, 0xdc, 0xb2, 0xca, 0x08, 0x51, 0x76, 0xd9, 0x0d, 0xd2, 0x13, 0xd9, 0x41,
0x90, 0x74, 0xe7, 0xa2, 0xde, 0xe0, 0x0c, 0xc6, 0x9a, 0x0e, 0x7d, 0x42, 0xda, 0xcf, 0xcb, 0x11,
0xe8, 0xf0, 0x65, 0xb6, 0x5c, 0x07, 0xcd, 0xa3, 0x84, 0xd0, 0x4d, 0x50, 0x16, 0xb9, 0x21, 0x92,
0x4f, 0xd8, 0x8d, 0x7e, 0xcb, 0xb0, 0xd3, 0x24, 0x20, 0x65, 0x4b, 0x5f, 0x52, 0xab, 0xb1, 0x31,
0x22, 0x09, 0xd8, 0x21, 0xf7, 0x57, 0x10, 0x54, 0x11, 0xbc, 0x14, 0xc5, 0x99, 0x9e, 0x41, 0xc2,
0xbe, 0x78, 0x9e, 0xb7, 0x59, 0x30, 0x78, 0x67, 0x2c, 0xdd, 0xff, 0x5d, 0xe1, 0xb1, 0xb8, 0xc4,
0xda, 0x66, 0x0c, 0x38, 0xce, 0xff, 0x18, 0x53, 0x28, 0x33, 0x57, 0xb0, 0xdf, 0x5c, 0xb5, 0x88,
0x43, 0xaa, 0x98, 0x92, 0x64, 0xfd, 0xe6, 0xe5, 0xc7, 0x0a, 0x4a, 0x69, 0x8b, 0xf5, 0x0a, 0x63,
0x1f, 0x8a, 0xe8, 0x94, 0x88, 0x16, 0xe7, 0x6c, 0x1b, 0xbe, 0xbf, 0x7e, 0xf9, 0x26, 0x0c, 0x53,
0x34, 0x2a, 0x2b, 0xa8, 0xff, 0xbb, 0x71, 0x90, 0x1e, 0xb9, 0x01, 0x19, 0x12, 0x62, 0x8c, 0x1e,
0x5d, 0x74, 0xe4, 0x54, 0xb7, 0x41, 0x99, 0xc1, 0xda, 0x62, 0xf7, 0x70, 0x84, 0x80, 0x71, 0x94,
0x9f, 0xad, 0xe9, 0x90, 0x36, 0xae, 0x47, 0xed, 0x7d, 0xe9, 0x1f, 0x26, 0xad, 0x10, 0x11, 0x90,
0x49, 0x8c, 0x0a, 0xbc, 0xb2, 0x4b, 0x57, 0x1d, 0xc9, 0xb8, 0x54, 0x08, 0xd6, 0x11, 0xe2, 0xca,
0x68, 0x10, 0xb5, 0x25, 0x4b, 0x05, 0x74, 0x98, 0xb1, 0x29, 0xf4, 0xd3, 0x41, 0xeb, 0x71, 0xc3,
0x28, 0x61, 0x3c, 0x0c, 0x59, 0x28, 0xb6, 0x66, 0xb7, 0x79, 0xc1, 0x56, 0x28, 0xcb, 0x86, 0x49,
0xd7, 0xbd, 0xaa, 0xa4, 0x93, 0x09, 0xc9, 0xc9, 0x56, 0x71, 0x16, 0x37, 0x99, 0x8c, 0x65, 0xe7,
0x90, 0x8e, 0x78, 0x2a, 0x13, 0x71, 0x0c, 0xf6, 0xc1, 0x9d, 0x3c, 0x68, 0x60, 0xc3, 0x6d, 0xaf,
0xf1, 0x87, 0xdc, 0x9b, 0x19, 0x5c, 0x95, 0xbd, 0xd3, 0xb0, 0x28, 0x4a, 0x71, 0x74, 0x6b, 0xc3,
0x57, 0xe8, 0xe1, 0x51, 0x16, 0x31, 0x77, 0xe0, 0x3c, 0x68, 0x7a, 0xb1, 0x94, 0x2b, 0x8c, 0x93,
0xc7, 0x8b, 0xb1, 0x78, 0x18, 0x1d, 0x33, 0x14, 0x60, 0x0c, 0x99, 0x83, 0x7f, 0xc8, 0x36, 0x1c,
0x6d, 0x94, 0xf5, 0x7f, 0xe4, 0x8f, 0xde, 0xbc, 0x0a, 0x00, 0x74, 0x1c, 0x55, 0x93, 0x89, 0x68
};

//Debuggee -> Windbg CONNCHECK
BYTE conncheck[] = {
	0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
	0x64, 0x08, 0x61, 0x46, 0xca, 0xfb, 0xc3, 0x87, 0xd7, 0xe2, 0x4e, 0x59, 0x16, 0xf0, 0x65, 0xfd,
	0xc5, 0xba, 0x9e, 0x86, 0xff, 0xab, 0x19, 0x97, 0xd2, 0xcc, 0x14, 0xc1, 0xaf, 0xc5, 0x2b, 0x94,
	0x03, 0x30, 0x5f, 0x86, 0x1f, 0x97, 0xf5, 0x63, 0x38, 0xf6, 0xe3, 0xcb, 0x78, 0x1e, 0xd0, 0x6d
};

//Windbg -> Debuggee CONNCHECK_RESPONSE
BYTE conncheck_resp[] = {
	0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
	0x99, 0x63, 0x84, 0x9c, 0x51, 0x38, 0x7a, 0x4b, 0xa2, 0xf7, 0xb5, 0x49, 0x0f, 0xb8, 0xa7, 0x58,
	0x0f, 0x2e, 0x56, 0x49, 0xcb, 0xc6, 0xe9, 0x4a, 0x28, 0x6f, 0x60, 0xf4, 0xc1, 0x6e, 0xac, 0x1a,
	0xf0, 0xc2, 0xe6, 0xb0, 0xa3, 0xbd, 0xec, 0x0a, 0x86, 0x48, 0x18, 0xb8, 0x0c, 0xa4, 0x94, 0xf8
};

//Windbg -> Debuggee BREAK (test I)
BYTE break_data[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x3d, 0x90, 0x53, 0x43, 0xa5, 0x07, 0xa8, 0x05, 0xcb, 0x06, 0xff, 0x69, 0x76, 0xef, 0x1f, 0x3c,
0x15, 0xd4, 0xc9, 0x04, 0xa9, 0x3f, 0xc1, 0xc2, 0x83, 0xe6, 0xb3, 0x64, 0xc8, 0x4d, 0x3d, 0x09
};

//Debuggee -> Windbg BREAK_ACK (KD_STATE_CHANGE)
BYTE break_ack[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x91, 0x61, 0x96, 0x3c, 0xac, 0xe8, 0xb7, 0x82, 0x8c, 0xc2, 0x19, 0xc0, 0x22, 0x83, 0x10, 0xd9,
0x28, 0x0a, 0x73, 0x4b, 0x3e, 0xcc, 0xbe, 0xe6, 0xaf, 0x20, 0x4a, 0x6f, 0xf1, 0xa6, 0x12, 0xe3,
0x3d, 0x3a, 0x25, 0x29, 0x11, 0x80, 0xb0, 0xb4, 0x86, 0x9d, 0x0e, 0xcd, 0x14, 0xc6, 0x28, 0x54,
0x94, 0x85, 0x84, 0xce, 0xd5, 0x9e, 0x83, 0xa8, 0xa7, 0x25, 0x84, 0xf6, 0x90, 0x46, 0xd0, 0x81,
0xa9, 0x61, 0x9f, 0xa7, 0xae, 0x2d, 0x1d, 0xc2, 0xff, 0xe4, 0x24, 0x95, 0x43, 0x55, 0xf2, 0x77,
0xfc, 0x8f, 0x88, 0xa5, 0x5a, 0x20, 0x8b, 0x24, 0x07, 0x1c, 0x1d, 0x59, 0xdc, 0x83, 0xa1, 0x2c,
0x92, 0x6a, 0x00, 0x21, 0x8f, 0x24, 0x84, 0xb0, 0x28, 0x3b, 0xac, 0x8f, 0x5c, 0x7b, 0x3a, 0x26,
0x27, 0x76, 0x60, 0x13, 0x4d, 0x6c, 0xdc, 0x8c, 0x61, 0x6f, 0xe5, 0xe4, 0x39, 0xf2, 0x45, 0x6d,
0x2c, 0xf6, 0xde, 0xe1, 0x4f, 0x5b, 0xf5, 0x26, 0x06, 0x86, 0x77, 0x5f, 0x92, 0xc7, 0x42, 0x26,
0xce, 0xf0, 0x8e, 0x87, 0xb3, 0x78, 0x22, 0x9a, 0xa8, 0x71, 0x23, 0xe5, 0x03, 0x29, 0xfc, 0xdf,
0x38, 0xe6, 0x99, 0x4a, 0xad, 0xaf, 0x8c, 0x8f, 0xbf, 0xfb, 0xbf, 0x81, 0xf7, 0x57, 0xf3, 0x78,
0xcc, 0xa8, 0xa5, 0x95, 0xc0, 0xdf, 0xd2, 0xba, 0x4b, 0x91, 0x28, 0x14, 0xaf, 0x68, 0x4b, 0x6a,
0xab, 0xd6, 0x95, 0xfb, 0x95, 0x68, 0x14, 0x47, 0xbf, 0x16, 0x5d, 0x47, 0xb4, 0x28, 0x10, 0x34,
0x95, 0x5a, 0xf0, 0xd5, 0x76, 0x50, 0xb8, 0x4e, 0x5b, 0x47, 0xbd, 0xdd, 0xe5, 0x17, 0xc4, 0x0a,
0x80, 0x64, 0x5a, 0x26, 0x28, 0x89, 0x6d, 0x60, 0xa5, 0x78, 0xd8, 0x8f, 0x72, 0xe1, 0x9a, 0x50,
0xb8, 0xa7, 0x0e, 0x92, 0x02, 0x1f, 0x33, 0x81, 0x42, 0x22, 0x3c, 0xdb, 0xe2, 0x6f, 0xc9, 0x4f,
0x86, 0x38, 0xd6, 0x9f, 0xc5, 0xfa, 0x8b, 0xe0, 0x63, 0x68, 0xfd, 0xcc, 0x25, 0x81, 0x08, 0x13,
0x38, 0x1f, 0xeb, 0xd2, 0xf0, 0x55, 0x78, 0xcb, 0x3f, 0xd0, 0xdd, 0xea, 0x66, 0x45, 0x49, 0xf6
};

//Windbg -> Debuggee DbgKdGetVersionApi_REQ
BYTE get_version_api_req[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x6f, 0x61, 0x0d, 0x79, 0x8d, 0x6c, 0x9e, 0xb5, 0x72, 0xb5, 0xb1, 0x17, 0x95, 0xa2, 0xec, 0xcd,
0xb0, 0x4b, 0xc5, 0xe6, 0x10, 0xa2, 0xca, 0x4b, 0x73, 0x81, 0x29, 0x99, 0x18, 0x3c, 0x77, 0x13,
0x85, 0xd0, 0x8d, 0x88, 0x3c, 0xe2, 0x63, 0x78, 0x39, 0x0f, 0xc5, 0xa1, 0xe6, 0xe7, 0xdc, 0x0b,
0xf0, 0xeb, 0x0e, 0x76, 0xf6, 0x92, 0xd5, 0xf1, 0x49, 0x76, 0x2f, 0xf4, 0x23, 0x13, 0x46, 0x02,
0x3f, 0xf5, 0x37, 0xb3, 0x63, 0x2e, 0x1a, 0xde, 0x0e, 0xd1, 0xec, 0x1e, 0x47, 0xae, 0x09, 0x34,
0xdb, 0x73, 0x3b, 0xc3, 0x4a, 0xd5, 0xa9, 0xdf, 0xcd, 0x0d, 0x04, 0x41, 0x01, 0xbb, 0x6e, 0x71
};

//Debuggee -> Windbg DbgKdGetVersionApi_RESP
BYTE get_version_api_resp[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x5a, 0x5a, 0xdb, 0x27, 0xe2, 0x23, 0xec, 0xda, 0xe6, 0x2f, 0xb8, 0x9f, 0xd3, 0xbb, 0xc7, 0x6c,
0x0e, 0x68, 0xb2, 0xb2, 0x52, 0xf4, 0x91, 0x61, 0x2b, 0x75, 0x88, 0x30, 0xfc, 0x2c, 0xcd, 0x0a,
0xc2, 0x00, 0x1b, 0x77, 0x93, 0x36, 0x63, 0xc3, 0xe3, 0xd4, 0x92, 0x28, 0x7f, 0x20, 0x6b, 0x7a,
0x5b, 0x71, 0xde, 0xd7, 0xee, 0x65, 0x93, 0x16, 0x53, 0x67, 0x0b, 0x7f, 0x47, 0x4f, 0xd7, 0x21,
0x3c, 0xd8, 0xb2, 0x13, 0xaf, 0xa1, 0x4d, 0xc6, 0x5b, 0x43, 0xe8, 0x25, 0x42, 0x37, 0x1d, 0x0d,
0xb7, 0x6f, 0x58, 0xae, 0x62, 0x1b, 0xd8, 0xb4, 0x04, 0x56, 0x10, 0x90, 0xc9, 0x3e, 0x36, 0xa0
};

//Debuggee -> Windbg DbgKdReadVirtualMemoryApi_RESP
BYTE read_virtual_memory_api_resp[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x1c, 0xbe, 0xdb, 0x71, 0x90, 0x79, 0xe6, 0x8f, 0x6d, 0x73, 0xd3, 0x0e, 0x63, 0xd4, 0xa6, 0x43,
0xeb, 0xce, 0x17, 0x15, 0x63, 0x69, 0xb6, 0xd2, 0xb5, 0x19, 0xf6, 0x84, 0xaf, 0xe1, 0x2c, 0x73,
0x88, 0x88, 0xab, 0xe1, 0xae, 0x72, 0x04, 0x92, 0xaf, 0x83, 0x7e, 0xa1, 0x9c, 0xcc, 0x14, 0x37,
0xce, 0x01, 0xb6, 0x92, 0x1f, 0x2e, 0x3e, 0x68, 0x5b, 0x39, 0x37, 0xa3, 0x63, 0xcc, 0x55, 0x9f,
0xe3, 0x1f, 0xea, 0x3b, 0x7a, 0x16, 0x3a, 0x6b, 0x95, 0xdc, 0xc4, 0x01, 0x21, 0x12, 0x9f, 0x24,
0x47, 0x99, 0x87, 0xf5, 0x09, 0xa5, 0xd3, 0x6c, 0x92, 0xfa, 0xc9, 0x0a, 0xc3, 0xae, 0x04, 0x5f,
0x08, 0x67, 0xa6, 0x74, 0x47, 0xe5, 0xf7, 0xcc, 0xad, 0x9f, 0x69, 0xd2, 0x46, 0xca, 0xaf, 0x97,
0x99, 0xaf, 0xdf, 0x7e, 0xe0, 0x81, 0x0b, 0x23, 0xc9, 0xe6, 0x81, 0x02, 0xa2, 0xf7, 0x8c, 0xc2,
0x38, 0x22, 0xc7, 0x00, 0x92, 0x9f, 0x09, 0x8f, 0xa3, 0x91, 0x3b, 0xc4, 0xaa, 0x84, 0xb8, 0x1b,
0xc1, 0xc5, 0x31, 0x4c, 0xc8, 0x09, 0xb9, 0x73, 0x2e, 0xc9, 0x10, 0x98, 0xaf, 0xb1, 0xe4, 0x0d,
0x94, 0xaf, 0xa4, 0xf3, 0x6c, 0x59, 0x7f, 0xa5, 0x4f, 0xa7, 0x34, 0x50, 0xf0, 0xf9, 0x12, 0x66,
0xc8, 0xb9, 0x3a, 0xc0, 0x24, 0xa4, 0x83, 0x88, 0x89, 0x45, 0xb3, 0xaf, 0x2f, 0x85, 0xb1, 0x2b,
0x26, 0x45, 0xb8, 0xb6, 0x45, 0x8c, 0x88, 0x16, 0x2e, 0x5a, 0x5a, 0xa9, 0x66, 0x96, 0x4b, 0x8f,
0x82, 0xfa, 0x92, 0xf2, 0xb1, 0x0d, 0x65, 0xe9, 0xbe, 0xa2, 0xd3, 0x17, 0x36, 0xb4, 0xa9, 0x61,
0x85, 0x7b, 0x22, 0x2b, 0xd1, 0x92, 0xc3, 0x3d, 0x2b, 0x1d, 0xf9, 0x46, 0x6f, 0xbf, 0x37, 0x9e,
0x9f, 0x56, 0x27, 0xef, 0x6d, 0x6a, 0x7e, 0x53, 0xc6, 0x85, 0x14, 0xac, 0x5f, 0xe5, 0x9e, 0x56,
0x34, 0x47, 0x46, 0xf8, 0x53, 0x46, 0xdb, 0xd5, 0x9f, 0xe1, 0xbb, 0x6a, 0xdf, 0xa9, 0xde, 0x62,
0x50, 0xa8, 0x1b, 0xc4, 0xbe, 0x78, 0x18, 0xa0, 0xc0, 0xd6, 0xa0, 0xc1, 0x23, 0x53, 0x9c, 0xa5,
0xfd, 0xe8, 0x67, 0x88, 0x6c, 0x73, 0xc6, 0xec, 0x22, 0x81, 0x6d, 0x71, 0x34, 0xb5, 0x90, 0xa2,
0x4d, 0xc9, 0xcb, 0x4c, 0xed, 0x45, 0xcb, 0x1a, 0x21, 0x5e, 0xe2, 0x09, 0x2f, 0xbe, 0x8b, 0xeb,
0xee, 0xa8, 0x73, 0xaa, 0xaa, 0x7a, 0x90, 0xd2, 0x0e, 0x1d, 0xb7, 0x0f, 0xf0, 0xd1, 0x95, 0x27,
0xca, 0xbc, 0xee, 0x23, 0xf0, 0x2c, 0xc2, 0xb7, 0xc1, 0xab, 0xa8, 0x03, 0xc2, 0x81, 0x17, 0x36,
0x9e, 0x50, 0x5d, 0x2c, 0xbe, 0xa0, 0x3f, 0x87, 0xef, 0x24, 0xcd, 0xfa, 0xd5, 0xe4, 0xe4, 0xf6,
0xa8, 0x20, 0x40, 0x54, 0x19, 0x7d, 0x24, 0x2a, 0x1b, 0xaa, 0x7b, 0xd9, 0xf2, 0xec, 0x09, 0x57,
0x38, 0x37, 0xb8, 0x20, 0xed, 0xa1, 0x96, 0xf0, 0x96, 0x05, 0x58, 0xd0, 0xb8, 0x2c, 0x25, 0xca,
0x2d, 0xc8, 0x6c, 0xd4, 0x3e, 0xf7, 0x2a, 0x00, 0xb7, 0xcf, 0x61, 0xf5, 0xc6, 0x76, 0x02, 0x4a,
0xb1, 0xf6, 0xca, 0xd6, 0x4c, 0xce, 0x4d, 0x0c, 0x1b, 0x0f, 0x9f, 0xfa, 0x82, 0xd7, 0x7f, 0xff,
0x84, 0xda, 0x01, 0xf9, 0x98, 0x9a, 0xdf, 0x16, 0xdf, 0x93, 0xaf, 0x71, 0x87, 0xfb, 0x96, 0x32,
0xac, 0xb6, 0xe2, 0xeb, 0x51, 0x97, 0x4f, 0x3e, 0xb0, 0x95, 0x40, 0x75, 0xb4, 0xf8, 0x06, 0x8e,
0x5e, 0xc3, 0x08, 0xd1, 0x36, 0x7a, 0xe8, 0xb8, 0xc6, 0x40, 0x9f, 0xa1, 0xa7, 0x28, 0xab, 0xce,
0x1b, 0x4b, 0x5a, 0x69, 0xff, 0xb1, 0x60, 0x21, 0x5f, 0x58, 0x64, 0xdd, 0x5e, 0xd5, 0x52, 0x75,
0x6d, 0x0a, 0xbf, 0x7b, 0x11, 0xcc, 0xb7, 0xaf, 0x93, 0xca, 0x5c, 0x30, 0xb5, 0x5e, 0xf4, 0x14,
0xaf, 0x95, 0x99, 0x1d, 0x20, 0xde, 0x59, 0xad, 0x1b, 0x6f, 0x51, 0x36, 0xca, 0xc4, 0x43, 0x63,
0xdf, 0x59, 0xe7, 0xf7, 0x98, 0x65, 0x78, 0x49, 0xe1, 0x58, 0xd8, 0x94, 0xe3, 0xf0, 0xfd, 0x8a,
0xe0, 0xfe, 0xec, 0x03, 0x18, 0xcc, 0x20, 0x21, 0x8e, 0xa8, 0xa6, 0x13, 0x27, 0xb2, 0x46, 0x1d,
0xbd, 0x53, 0x28, 0xd0, 0x85, 0x37, 0x69, 0x7d, 0xbe, 0x59, 0x2d, 0x0a, 0x48, 0xea, 0x98, 0x18,
0x66, 0x80, 0x7b, 0xc0, 0x08, 0xf4, 0xd8, 0x69, 0xf7, 0xa3, 0x15, 0x83, 0x71, 0x52, 0x8f, 0x45,
0xc3, 0xce, 0xaa, 0x50, 0x6a, 0x77, 0x49, 0x6a, 0xd7, 0x68, 0xf5, 0x5f, 0x0a, 0x69, 0x61, 0x3a,
0x1d, 0xf9, 0x4c, 0xf8, 0x04, 0x7e, 0xc3, 0x64, 0x0e, 0x64, 0x3d, 0x04, 0x0a, 0xe3, 0x03, 0x92,
0x21, 0x8a, 0xe0, 0xf0, 0x2e, 0xac, 0x0e, 0x31, 0xa8, 0xd1, 0x0d, 0x03, 0xa4, 0x23, 0x38, 0x33,
0x2b, 0x9d, 0x23, 0xd8, 0x37, 0x51, 0x6a, 0x33, 0x1f, 0xe3, 0x6e, 0x26, 0x7c, 0x80, 0x8e, 0x9f,
0xdd, 0x2a, 0x3c, 0x9d, 0x55, 0xa4, 0x03, 0xba, 0x15, 0x95, 0xc3, 0x01, 0xb7, 0xfa, 0xe2, 0x4a,
0xf2, 0xdb, 0x1a, 0x78, 0x2e, 0xc2, 0x4d, 0x8b, 0xf2, 0x88, 0x58, 0x0c, 0x1e, 0x87, 0x8a, 0x17,
0x15, 0x23, 0x64, 0xc1, 0x30, 0x86, 0x55, 0x7f, 0x99, 0x17, 0x0b, 0x4f, 0x9f, 0xdb, 0x9c, 0xa9,
0x81, 0xdf, 0xd6, 0x74, 0x3d, 0x73, 0x8e, 0xb4, 0x01, 0xaa, 0x1c, 0x6c, 0x23, 0xe8, 0x5f, 0xf9,
0xf8, 0xef, 0x6e, 0x39, 0x49, 0xe3, 0x59, 0xc8, 0x1b, 0x6e, 0x32, 0x50, 0xc3, 0x53, 0x7c, 0xcb,
0x58, 0xd0, 0xfa, 0xca, 0x72, 0x20, 0xc3, 0xd1, 0xcf, 0x3e, 0xf2, 0x56, 0xaf, 0x5a, 0x98, 0x60,
0x17, 0xff, 0x31, 0xf4, 0x89, 0x5d, 0xe1, 0x7f, 0xa6, 0x2a, 0x95, 0x29, 0x25, 0x57, 0x20, 0xac,
0x29, 0x00, 0x03, 0x14, 0xbc, 0xeb, 0x27, 0x93, 0x17, 0xfb, 0x2f, 0xe3, 0xaf, 0x4a, 0xa4, 0xbd,
0x4d, 0x6d, 0x4a, 0x33, 0x8b, 0xed, 0xd4, 0x96, 0xe9, 0x61, 0xde, 0x91, 0xdd, 0xb5, 0xd5, 0xa2,
0x96, 0xad, 0x1b, 0xeb, 0x8f, 0x27, 0xbf, 0x4a, 0xea, 0x72, 0xbf, 0xce, 0x70, 0x30, 0x7b, 0x3c,
0x65, 0x73, 0xfa, 0x7e, 0x22, 0xea, 0xda, 0xfb, 0xbb, 0xd4, 0x4d, 0xbb, 0x35, 0x8d, 0x1e, 0xe2,
0xd3, 0x36, 0xcf, 0x9a, 0xed, 0xb4, 0x72, 0x5a, 0x99, 0x24, 0xfa, 0xa8, 0xa7, 0xa1, 0x89, 0x43,
0xc0, 0xa6, 0x14, 0xc8, 0x42, 0x4b, 0x5c, 0x9f, 0x3f, 0x48, 0xf1, 0xe0, 0xeb, 0x69, 0xfa, 0xc7,
0x3b, 0x42, 0x74, 0xa3, 0x7f, 0x4e, 0x0a, 0x6e, 0xea, 0xe3, 0xe2, 0x7d, 0xf8, 0x1b, 0xa8, 0x8a,
0xa0, 0xa7, 0xa0, 0xf9, 0x82, 0x45, 0x08, 0x7f, 0xcc, 0x28, 0xe9, 0xd9, 0xd8, 0xe9, 0x68, 0x28,
0xd0, 0x65, 0xbb, 0x1a, 0x9a, 0xb5, 0x17, 0xb5, 0x6a, 0x79, 0xb5, 0x21, 0xd8, 0x95, 0xbe, 0x18,
0x57, 0x82, 0x07, 0x09, 0x77, 0xd0, 0x6a, 0x9d, 0x31, 0x4f, 0x31, 0xe8, 0x4d, 0x41, 0xbe, 0xfb,
0x7e, 0xb6, 0x83, 0x94, 0x3e, 0x4b, 0x81, 0xe9, 0xbf, 0x7b, 0x94, 0x38, 0xc1, 0x0b, 0x11, 0xf2
};

//Debuggee -> Windbg DbgKdGetRegister_RESP
BYTE get_register_resp[] = {
0x4d, 0x44, 0x42, 0x47, 0x02, 0x00,
0x65, 0x3d, 0xe0, 0xb5, 0x57, 0x7c, 0x3b, 0x49, 0x28, 0x96, 0xf1, 0x33, 0x24, 0xe2, 0xe2, 0xd8,
0x05, 0x7f, 0x27, 0x4f, 0x2d, 0x06, 0xb0, 0x30, 0xb8, 0x58, 0x49, 0xd4, 0xa5, 0xc2, 0x0f, 0xe3,
0x6e, 0x00, 0x4e, 0x82, 0xfd, 0xd3, 0x5f, 0xc6, 0x05, 0xa6, 0xca, 0xc5, 0x39, 0xc7, 0xae, 0xbf,
0xbe, 0xc0, 0x68, 0x0a, 0x25, 0x73, 0xb9, 0x70, 0xbd, 0xb9, 0xfb, 0xa1, 0xb5, 0x24, 0x36, 0xc4,
0xf7, 0x5d, 0xad, 0x83, 0xe3, 0x68, 0x9b, 0xfa, 0x09, 0xab, 0x24, 0xe3, 0xf6, 0xf7, 0x35, 0x58,
0x5d, 0x33, 0x2a, 0xab, 0x9c, 0xa6, 0x73, 0xed, 0xd8, 0xa7, 0xc1, 0xf9, 0xb2, 0x64, 0x1c, 0xda,
0x8f, 0x84, 0xcc, 0x29, 0xfe, 0x5e, 0xad, 0x5d, 0x56, 0x65, 0x71, 0x97, 0x59, 0xf7, 0x2d, 0x82,
0xf4, 0x6e, 0x46, 0x6d, 0xe4, 0x16, 0x11, 0xca, 0x3e, 0xa8, 0xa2, 0x4c, 0xdf, 0xdf, 0x10, 0x17,
0x0e, 0xc7, 0x6f, 0xca, 0x8f, 0x1c, 0x6e, 0xd2, 0x2b, 0x13, 0xba, 0xb2, 0x23, 0xea, 0x90, 0xee,
0xa9, 0x60, 0x4e, 0x36, 0x85, 0x82, 0x9e, 0x54, 0xd6, 0x77, 0x76, 0x5d, 0x18, 0xad, 0x43, 0xce,
0x17, 0x16, 0xc9, 0x80, 0x0c, 0x7f, 0x3c, 0xc9, 0x5b, 0x85, 0x67, 0x1b, 0xcf, 0xf0, 0x18, 0x7c,
0x4a, 0xcb, 0xd7, 0x68, 0x98, 0xf8, 0xb3, 0x0e, 0x9c, 0xb2, 0x47, 0xab, 0x7e, 0x6b, 0xac, 0xe5,
0x05, 0xf0, 0x31, 0x9d, 0x3f, 0xba, 0x7a, 0x4e, 0xbf, 0xc1, 0x6f, 0xc2, 0x5c, 0xac, 0xfa, 0x59,
0x27, 0x18, 0x64, 0x07, 0xaf, 0x6d, 0x25, 0xd0, 0x8b, 0x00, 0x07, 0x20, 0xa3, 0xfb, 0xf1, 0x8e,
0xa3, 0x37, 0xf0, 0xb5, 0x3b, 0x8f, 0x23, 0x1e, 0xfe, 0x9e, 0xf5, 0x06, 0xeb, 0x61, 0x30, 0x25,
0x58, 0xf6, 0x1a, 0xa0, 0xe3, 0x8b, 0x74, 0x91, 0xa5, 0xd7, 0xf5, 0xb7, 0x0e, 0xc6, 0x88, 0x96,
0x62, 0x55, 0x08, 0xff, 0x81, 0xae, 0xf6, 0x06, 0x67, 0x99, 0xd2, 0x8f, 0x71, 0xe2, 0xed, 0x86,
0x4d, 0x90, 0x62, 0x35, 0xdb, 0x0d, 0xfe, 0x58, 0x45, 0x82, 0x56, 0xab, 0x52, 0x6e, 0xe0, 0x40,
0xdc, 0x30, 0x67, 0xa5, 0xdc, 0x75, 0x15, 0x85, 0x79, 0xe9, 0xb2, 0x2a, 0x47, 0xc7, 0x12, 0xd8,
0x27, 0xa4, 0xe9, 0xee, 0x52, 0x56, 0x1e, 0x9b, 0x18, 0xba, 0xc3, 0x58, 0x03, 0x71, 0xd3, 0x6f,
0x81, 0xc2, 0xea, 0xa9, 0xec, 0x34, 0x5d, 0xad, 0x6a, 0x7c, 0x2a, 0x70, 0x44, 0x9e, 0x57, 0xdb,
0x85, 0x3a, 0x70, 0x51, 0x54, 0x29, 0x89, 0x93, 0x9f, 0xae, 0x4a, 0xfa, 0x2b, 0xf2, 0x23, 0x07,
0xa2, 0x47, 0x56, 0xe2, 0x29, 0xc3, 0x78, 0xe6, 0xa9, 0x59, 0x1a, 0x48, 0x97, 0xb6, 0x88, 0x13,
0x25, 0x41, 0xae, 0xd5, 0x15, 0x50, 0x83, 0x83, 0x12, 0x54, 0x96, 0x47, 0x46, 0x60, 0x1a, 0xd3,
0x69, 0x50, 0x41, 0x94, 0x7f, 0x81, 0x7f, 0x4d, 0xa8, 0x30, 0xa9, 0xf0, 0xac, 0x0e, 0xdf, 0xbc,
0x4e, 0x81, 0x1e, 0x71, 0x1a, 0x69, 0xc6, 0x95, 0xe1, 0x58, 0xef, 0x33, 0x49, 0x3b, 0x8a, 0x00,
0x34, 0x78, 0xab, 0x2e, 0x77, 0x25, 0xb3, 0xb9, 0x8a, 0xae, 0x18, 0xa3, 0xc5, 0xf0, 0x3f, 0xb5,
0xcd, 0xeb, 0x42, 0x60, 0xa9, 0x31, 0x9b, 0xba, 0xe4, 0xa5, 0x83, 0xe9, 0x5f, 0xf6, 0xf1, 0xf3,
0x01, 0x5d, 0x83, 0x01, 0x22, 0xd4, 0xe3, 0x4b, 0x3e, 0x5b, 0x1d, 0xb3, 0x4e, 0x41, 0x84, 0x0a, 
0xb4, 0x90, 0x26, 0xad, 0x71, 0x08, 0x74, 0x01, 0x58, 0x07, 0x53, 0x4d, 0x75, 0x32, 0x16, 0x7e, 
0xa3, 0x37, 0x7d, 0xa5, 0xcc, 0x63, 0x68, 0x40, 0x26, 0x31, 0x24, 0x74, 0x6f, 0xc2, 0x4d, 0xf3, 
0x47, 0x90, 0x17, 0x5c, 0x22, 0x1c, 0x67, 0x2d, 0x4a, 0xa8, 0x5c, 0xe1, 0x91, 0x1b, 0xb5, 0x9a, 
0x42, 0x1f, 0x3e, 0x34, 0x2c, 0xbb, 0x23, 0x64, 0xce, 0x64, 0x59, 0xb9, 0x11, 0xb9, 0xce, 0x3a, 
0xae, 0x1f, 0x27, 0xa8, 0x0e, 0x01, 0xa2, 0xa3, 0xd6, 0x72, 0x95, 0x3d, 0x51, 0x49, 0xa7, 0x6c, 
0x8a, 0x62, 0x43, 0x47, 0x7d, 0x4e, 0xe2, 0xf3, 0x65, 0xbc, 0xd0, 0x0b, 0x37, 0xcf, 0xfd, 0x4a, 
0xf2, 0x52, 0x40, 0x5a, 0xe7, 0xe7, 0xb9, 0xbd, 0xfe, 0x6e, 0xf8, 0xe6, 0x51, 0x8c, 0x3f, 0xf3,
0xcb, 0xdb, 0x75, 0xf6, 0xc7, 0xd6, 0xc8, 0x07, 0xb8, 0x01, 0x02, 0x1c, 0xf4, 0xee, 0x0b, 0xb9, 
0x67, 0x35, 0x17, 0x21, 0xac, 0x51, 0xb9, 0xec, 0xcc, 0x42, 0xb1, 0x3a, 0x0b, 0x08, 0xa0, 0xc2, 
0x0c, 0xdf, 0x13, 0x43, 0xe4, 0xa9, 0x94, 0xe9, 0xdf, 0x2c, 0xd4, 0x26, 0x67, 0xf6, 0x56, 0xdd, 
0xf1, 0xde, 0x7e, 0x2f, 0x46, 0x8d, 0x43, 0x53, 0xc2, 0xb3, 0x80, 0x48, 0xaf, 0xf8, 0x64, 0x46, 
0xd8, 0x92, 0x9a, 0xde, 0x68, 0xdf, 0x65, 0xb9, 0x30, 0x5c, 0x31, 0xd6, 0x2c, 0xc5, 0x72, 0xb8, 
0xa0, 0xe3, 0x9f, 0x32, 0xe2, 0x20, 0x83, 0x1c, 0x19, 0x5f, 0x11, 0x25, 0xce, 0x19, 0xe9, 0xd5, 
0xde, 0x79, 0xf5, 0x74, 0xb8, 0xe6, 0xce, 0xc8, 0xd1, 0x9d, 0xfe, 0x9b, 0xcc, 0x07, 0x87, 0x68, 
0xf9, 0x11, 0x7b, 0xf1, 0x41, 0x76, 0xca, 0xc1, 0x9c, 0x07, 0x43, 0xe9, 0x75, 0x67, 0x93, 0xbe, 
0x14, 0x17, 0x49, 0x06, 0x6a, 0xf2, 0x85, 0xf9, 0xbc, 0xe3, 0x47, 0x97, 0x19, 0x09, 0x7a, 0xb0, 
0xcc, 0x1a, 0x39, 0xe6, 0xf5, 0xfe, 0x7e, 0x7a, 0x27, 0x58, 0x8a, 0xdc, 0xc4, 0x1e, 0xbb, 0x86, 
0x63, 0x92, 0xe6, 0x60, 0x1a, 0x3e, 0x37, 0x18, 0x00, 0x6f, 0x69, 0x5b, 0xfb, 0x05, 0x96, 0x9d, 
0xf8, 0x93, 0x4c, 0xdb, 0x00, 0x11, 0x01, 0x02, 0xe4, 0x63, 0xd7, 0x52, 0x9b, 0x91, 0x25, 0x27, 
0xd0, 0x6c, 0x3d, 0xea, 0x0f, 0x87, 0xf0, 0x13, 0x17, 0xba, 0xa5, 0x4a, 0x2d, 0x9e, 0x1e, 0x6e, 
0x4c, 0xbd, 0x18, 0xa1, 0x25, 0xc3, 0x3e, 0xfe, 0x77, 0x24, 0xd9, 0x6b, 0x55, 0x0a, 0x06, 0xde, 
0x0e, 0x77, 0xe0, 0xc3, 0xc5, 0xd9, 0xd2, 0x21, 0x6f, 0x9d, 0x23, 0x9c, 0xad, 0xeb, 0x2d, 0x28, 
0xc2, 0x19, 0x52, 0x4f, 0x9e, 0x37, 0x0a, 0xf9, 0x5f, 0xc6, 0xe8, 0x8d, 0x28, 0xc1, 0xd7, 0x05, 
0x4f, 0x20, 0x3f, 0xf5, 0x9a, 0x1f, 0x91, 0x09, 0xf4, 0xb5, 0x19, 0xa7, 0x0a, 0xc2, 0x16, 0xd5, 
0x4f, 0x54, 0x99, 0x71, 0x1c, 0x44, 0xe1, 0x6e, 0x8b, 0x3e, 0x7d, 0x60, 0xd9, 0x3c, 0xd7, 0x9f, 
0xfd, 0x67, 0x49, 0xba, 0xff, 0xff, 0x45, 0xb7, 0xee, 0x0d, 0x26, 0x52, 0x16, 0xce, 0xd4, 0xa2, 
0x17, 0x1f, 0xf4, 0xf3, 0x46, 0xe1, 0xbb, 0x66, 0xbf, 0x57, 0x88, 0xd4, 0x64, 0xfd, 0x43, 0xf9, 
0x5c, 0xb1, 0xea, 0x02, 0x5f, 0xaf, 0x54, 0xb7, 0xeb, 0x0d, 0x0d, 0x59, 0x97, 0x9f, 0x21, 0x2e, 
0xdf, 0x3f, 0x96, 0xae, 0xab, 0x69, 0xcf, 0xd9, 0x0c, 0x41, 0xa4, 0xc4, 0x18, 0x63, 0xb2, 0x06, 
0x5c, 0x68, 0x03, 0x2d, 0x34, 0xf4, 0x27, 0xfa, 0x22, 0x51, 0x85, 0xbd, 0x94, 0xc5, 0xc9, 0xd6, 
0xa0, 0x7f, 0x3f, 0xf4, 0x33, 0xde, 0x64, 0x02, 0x7c, 0xa6, 0xca, 0x1d, 0x78, 0x52, 0x63, 0xd2, 
0x16, 0x2e, 0xdc, 0x19, 0xcc, 0xa2, 0xb9, 0x99, 0x4a, 0x55, 0x14, 0x54, 0x24, 0x81, 0xac, 0xa4, 
0x5b, 0x5d, 0x2a, 0x77, 0x10, 0xc0, 0xa1, 0x34, 0x31, 0x2c, 0xf4, 0xc0, 0xc9, 0xad, 0x35, 0x51, 
0xf2, 0xbd, 0x2f, 0xa4, 0xea, 0xb9, 0x6a, 0x0e, 0xa6, 0xf2, 0xf1, 0x85, 0xb7, 0xe5, 0xfb, 0x77, 
0x7f, 0xa4, 0xa8, 0x07, 0x8f, 0xa8, 0x2a, 0x75, 0x07, 0x20, 0x12, 0x72, 0xd9, 0xdf, 0x78, 0x3a, 
0x6a, 0x48, 0xef, 0xcc, 0x56, 0xbb, 0x0d, 0xfb, 0xca, 0x98, 0x4a, 0xfe, 0xe6, 0x79, 0x05, 0xa6, 
0x76, 0x84, 0x91, 0xb6, 0xfb, 0x2b, 0xc2, 0x6f, 0x9b, 0xa8, 0xc9, 0x98, 0xc2, 0xa9, 0x3b, 0xc1, 
0xd9, 0x98, 0xa5, 0x27, 0x46, 0xe5, 0x83, 0xac, 0xe3, 0x09, 0x6e, 0x2f, 0xf9, 0xcc, 0xaf, 0x58, 
0x34, 0xbd, 0x3f, 0xbd, 0x13, 0xee, 0x54, 0x3a, 0x39, 0x28, 0x45, 0xd7, 0xd7, 0xac, 0x4f, 0xfd, 
0x95, 0x8e, 0x08, 0xb8, 0x11, 0x89, 0x3c, 0x49, 0x58, 0x64, 0xc4, 0x63, 0xe5, 0xf8, 0x87, 0xf5, 
0x28, 0x48, 0x99, 0x42, 0xaf, 0xea, 0xa7, 0xfe, 0x3c, 0xc1, 0x43, 0xd5, 0x09, 0x1e, 0x0a, 0x5f, 
0xb2, 0xd8, 0x39, 0xe6, 0xf9, 0xb4, 0x6a, 0xa3, 0xfd, 0x68, 0x73, 0x9a, 0x09, 0xc6, 0x64, 0x87, 
0x44, 0xf3, 0x7d, 0xe5, 0x0f, 0xc1, 0x65, 0xf8, 0x17, 0xd6, 0x63, 0x7e, 0x04, 0xca, 0x02, 0x5a, 
0xc1, 0x41, 0x39, 0x96, 0x0b, 0x77, 0x72, 0x86, 0xab, 0x9d, 0x47, 0x26, 0x34, 0x41, 0x50, 0x74, 
0x7b, 0xe0, 0xf9, 0x90, 0xd0, 0x7a, 0x0e, 0x49, 0x94, 0x4d, 0x5f, 0x50, 0x96, 0xd7, 0x4b, 0xd5, 
0x65, 0xc1, 0xdd, 0x57, 0xba, 0x59, 0x70, 0xcc, 0xf9, 0xb3, 0xec, 0xd5, 0x5f, 0xba, 0x84, 0x81, 
0x58, 0x20, 0x79, 0x48, 0xfc, 0xe1, 0x6d, 0x7c, 0x33, 0x58, 0xee, 0xf6, 0x00, 0xc6, 0xea, 0x4f, 
0x80, 0xfc, 0x23, 0x88, 0x88, 0xdd, 0x0c, 0xb9, 0x98, 0xec, 0x50, 0x5b, 0xf7, 0xf2, 0xe8, 0x29, 
0x35, 0xa5, 0x70, 0x97, 0x4b, 0xaf, 0xd1, 0x33, 0x82, 0xdf, 0x98, 0xf8, 0x0d, 0x0f, 0xb4, 0x64, 
0x4b, 0x5a, 0x2f, 0x06, 0x3b, 0x81, 0x3a, 0xcb, 0x92, 0x54, 0x1e, 0xa9, 0x0d, 0xb4, 0x36, 0xb7, 
0x50, 0x41, 0x0c, 0x00, 0xa3, 0xe0, 0x41, 0x2a, 0xce, 0x98, 0x41, 0x13, 0x7f, 0xca, 0xa8, 0x71, 
0xd0, 0x12, 0x71, 0x6c, 0xd3, 0x48, 0xe2, 0xfa, 0xb4, 0xe1, 0x96, 0xac, 0xd6, 0xcc, 0x10, 0xb4, 
0x2b, 0x62, 0x00, 0x2f, 0xc2, 0xfe, 0x12, 0xd9, 0x54, 0x9c, 0xfc, 0x77, 0x90, 0x48, 0x92, 0x24, 
0x10, 0x6c, 0xa5, 0x8f, 0xf5, 0xab, 0x17, 0xc0, 0x7b, 0x07, 0xfa, 0x43, 0x52, 0x77, 0xc1, 0x2f
};





BYTE test_cbc_key[] = {
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

BYTE test_cbc_data[] = {
	0x10, 0xd8, 0x50, 0x26, 0xd8, 0x01, 0x88, 0xb6, 0x70, 0x74, 0x1b, 0xa4, 0x79, 0x37, 0x8d, 0x0c,
	0xea, 0x37, 0x6a, 0xc6, 0xf4, 0x27, 0xbd, 0x0f, 0x39, 0x91, 0xc2, 0x99, 0x95, 0xb3, 0x58, 0x40,
	0x0c, 0x86, 0x83, 0x0e, 0x36, 0x6a, 0x33, 0xa8, 0x7e, 0x53, 0xe5, 0x73, 0x78, 0x21, 0x55, 0x9d,
	0x27, 0x07, 0xe2, 0x89, 0x13, 0x09, 0xc2, 0xd3, 0x34, 0xf2, 0x52, 0xe1, 0xcc, 0x21, 0x48, 0xcd,
	0x3a, 0x3d, 0x4c, 0x1a, 0x5f, 0xa6, 0xc4, 0xe2, 0xe4, 0xa4, 0x0b, 0x7a, 0x32, 0x47, 0x9d, 0x3d,
	0xa3, 0x24, 0xc8, 0x87, 0x88, 0xde, 0xbd, 0xf4, 0xed, 0xe5, 0x57, 0x7e, 0x3e, 0x50, 0x45, 0x03,
	0x64, 0xd1, 0x42, 0x80, 0xd3, 0x5b, 0x8f, 0xe9, 0xff, 0x44, 0x36, 0x83, 0x5e, 0x83, 0x19, 0x3b,
	0xf1, 0xf7, 0x68, 0x77, 0x63, 0x4a, 0x4f, 0x80, 0x2b, 0x21, 0xf1, 0x6e, 0x4c, 0x32, 0x55, 0x87,
	0xfc, 0x45, 0x65, 0x62, 0x55, 0x78, 0xf8, 0xa0, 0x39, 0xec, 0xad, 0x60, 0x6f, 0x18, 0xb5, 0x69,
	0xe4, 0x30, 0x68, 0xa7, 0x94, 0x85, 0xc5, 0x11, 0x1e, 0x21, 0x4e, 0x57, 0x9e, 0xde, 0x1c, 0x18,
	0xfc, 0x59, 0xe7, 0x89, 0xef, 0x37, 0x09, 0xa9, 0x9e, 0xe5, 0x1b, 0xab, 0x03, 0x69, 0xc4, 0xb8,
	0xd4, 0x16, 0xa8, 0x8e, 0x6c, 0x90, 0x8c, 0x16, 0xef, 0xbb, 0x2d, 0x9d, 0xb3, 0x5d, 0xe4, 0xbe,
	0xfd, 0x51, 0xa9, 0x6e, 0x60, 0x8a, 0x1a, 0x09, 0x10, 0x65, 0x93, 0x3f, 0x69, 0x15, 0x36, 0x6d,
	0x70, 0x8b, 0x26, 0x4b, 0xb6, 0x75, 0xa7, 0xb4, 0x16, 0xd4, 0x02, 0x9a, 0x22, 0x95, 0xdd, 0x54,
	0x3b, 0x34, 0x92, 0x9c, 0x92, 0x9f, 0x61, 0xda, 0xcc, 0x26, 0x57, 0x4a, 0xea, 0xea, 0x24, 0xe9,
	0x8c, 0xd5, 0x55, 0x5f, 0x33, 0xce, 0x6c, 0x4a, 0xb0, 0x52, 0x3b, 0x84, 0x3f, 0x65, 0x58, 0x7c,
	0x63, 0xdd, 0x21, 0x36, 0x18, 0xeb, 0x60, 0xda, 0x54, 0x46, 0x70, 0x70, 0xc0, 0x8c, 0x89, 0x83,
	0x35, 0x2e, 0x78, 0x61, 0x16, 0x7d, 0x64, 0xb3, 0xf4, 0xb7, 0xab, 0x32, 0xb9, 0xc8, 0x82, 0x1b,
	0x13, 0x31, 0x57, 0x71, 0x26, 0x32, 0xa8, 0xa9, 0x58, 0xdb, 0xd8, 0x4d, 0x12, 0x5d, 0xd9, 0x4c,
	0x46, 0x49, 0x50, 0x22, 0x67, 0x2b, 0xba, 0xa8, 0x1d, 0x43, 0x1b, 0x23, 0x31, 0x66, 0x55, 0x90,
	0xc9, 0xe3, 0xda, 0x5f, 0x83, 0x67, 0x6f, 0xd2, 0xac, 0x67, 0x1d, 0x25, 0xb8, 0x85, 0x51, 0x9b,
	0xe1, 0xf7, 0x6d, 0x75, 0xa6, 0x24, 0xca, 0xc9, 0xa0, 0xad, 0x6f, 0x8e, 0x2e, 0x37, 0x80, 0x17
};
BYTE test_cbc_iv[] = {
	0x6c, 0xff, 0xb1, 0x6a, 0xb7, 0xc3, 0x09, 0x59, 0xcd, 0xb3, 0xbe, 0x88, 0x62, 0xfa, 0x11, 0xb5
};
