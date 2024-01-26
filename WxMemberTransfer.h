struct WxUserInfo {
	char card_type[64];
	char remain[64];
	char heap_can_use[64];
};

extern "C" {
	__declspec(dllexport) bool GetCardInfo(const char* card_id, const char* name, WxUserInfo* user);
};
