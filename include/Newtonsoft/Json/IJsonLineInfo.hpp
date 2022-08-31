// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: IJsonLineInfo
  class IJsonLineInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::IJsonLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::IJsonLineInfo*, "Newtonsoft.Json", "IJsonLineInfo");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.IJsonLineInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C0BE4
  class IJsonLineInfo {
    public:
    // public System.Int32 get_LineNumber()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LineNumber();
    // public System.Int32 get_LinePosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LinePosition();
    // public System.Boolean HasLineInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool HasLineInfo();
  }; // Newtonsoft.Json.IJsonLineInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::IJsonLineInfo::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::IJsonLineInfo::*)()>(&Newtonsoft::Json::IJsonLineInfo::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::IJsonLineInfo*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::IJsonLineInfo::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::IJsonLineInfo::*)()>(&Newtonsoft::Json::IJsonLineInfo::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::IJsonLineInfo*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::IJsonLineInfo::HasLineInfo
// Il2CppName: HasLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::IJsonLineInfo::*)()>(&Newtonsoft::Json::IJsonLineInfo::HasLineInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::IJsonLineInfo*), "HasLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
