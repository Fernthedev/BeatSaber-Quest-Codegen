// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.UnsafeNclNativeMethods/System.Net.HttpApi
#include "System/Net/UnsafeNclNativeMethods_HttpApi.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/System.Net.HttpApi/System.Net.HTTP_REQUEST_HEADER_ID
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID : public ::Il2CppObject {
    public:
    // Get static field: static private System.String[] m_Strings
    static ::ArrayW<::StringW> _get_m_Strings();
    // Set static field: static private System.String[] m_Strings
    static void _set_m_Strings(::ArrayW<::StringW> value);
    // static private System.Void .cctor()
    // Offset: 0x1B5978C
    static void _cctor();
    // static System.String ToString(System.Int32 position)
    // Offset: 0x1B596F8
    static ::StringW ToString(int position);
  }; // System.Net.UnsafeNclNativeMethods/System.Net.HttpApi/System.Net.HTTP_REQUEST_HEADER_ID
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID::ToString)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
