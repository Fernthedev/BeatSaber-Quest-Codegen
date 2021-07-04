// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriComponents
  struct UriComponents;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IriHelper
  class IriHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IriHelper
    IriHelper() noexcept {}
    // static System.Boolean CheckIriUnicodeRange(System.Char unicode, System.Boolean isQuery)
    // Offset: 0x18782F4
    static bool CheckIriUnicodeRange(::Il2CppChar unicode, bool isQuery);
    // static System.Boolean CheckIriUnicodeRange(System.Char highSurr, System.Char lowSurr, ref System.Boolean surrogatePair, System.Boolean isQuery)
    // Offset: 0x187834C
    static bool CheckIriUnicodeRange(::Il2CppChar highSurr, ::Il2CppChar lowSurr, bool& surrogatePair, bool isQuery);
    // static System.Boolean CheckIsReserved(System.Char ch, System.UriComponents component)
    // Offset: 0x1878808
    static bool CheckIsReserved(::Il2CppChar ch, System::UriComponents component);
    // static System.String EscapeUnescapeIri(System.Char* pInput, System.Int32 start, System.Int32 end, System.UriComponents component)
    // Offset: 0x187896C
    static ::Il2CppString* EscapeUnescapeIri(::Il2CppChar* pInput, int start, int end, System::UriComponents component);
  }; // System.IriHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IriHelper*, "System", "IriHelper");
// Writing includes for template specializations
#include "System/UriComponents.hpp"
// Writing MetadataGetter for method: System::IriHelper::CheckIriUnicodeRange
// Il2CppName: CheckIriUnicodeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, bool)>(&System::IriHelper::CheckIriUnicodeRange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIriUnicodeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::IriHelper::CheckIriUnicodeRange
// Il2CppName: CheckIriUnicodeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, ::Il2CppChar, bool&, bool)>(&System::IriHelper::CheckIriUnicodeRange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIriUnicodeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<bool&>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::IriHelper::CheckIsReserved
// Il2CppName: CheckIsReserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, System::UriComponents)>(&System::IriHelper::CheckIsReserved)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIsReserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<System::UriComponents>()});
  }
};
// Writing MetadataGetter for method: System::IriHelper::EscapeUnescapeIri
// Il2CppName: EscapeUnescapeIri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar*, int, int, System::UriComponents)>(&System::IriHelper::EscapeUnescapeIri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "EscapeUnescapeIri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::UriComponents>()});
  }
};
