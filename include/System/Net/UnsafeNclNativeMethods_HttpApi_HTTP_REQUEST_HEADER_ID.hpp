// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.UnsafeNclNativeMethods/HttpApi
#include "System/Net/UnsafeNclNativeMethods_HttpApi.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID
  class UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HTTP_REQUEST_HEADER_ID
    HTTP_REQUEST_HEADER_ID() noexcept {}
    // Get static field: static private System.String[] m_Strings
    static ::Array<::Il2CppString*>* _get_m_Strings();
    // Set static field: static private System.String[] m_Strings
    static void _set_m_Strings(::Array<::Il2CppString*>* value);
    // static System.String ToString(System.Int32 position)
    // Offset: 0x15BB6A0
    static ::Il2CppString* ToString(int position);
    // static private System.Void .cctor()
    // Offset: 0x15BB734
    static void _cctor();
  }; // System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::ToString)> {
  const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
