
#include "PatternNtOskrnl.hpp"


NTSTATUS DriverEntry(uint64_t baseNtoskrnl, IN PUNICODE_STRING pRegistryPath)
{


	Log("NtOskrln address by driver parameter ->\t %x\n", baseNtoskrnl);

	Log("NtOskrln address by pattern ->\t %x\n", FindPatter::GetNtoskrnlbase());

	return STATUS_SUCCESS;




}
