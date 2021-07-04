// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSON
  class JSON : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: JSON
    JSON() noexcept {}
    // static public OVRSimpleJSON.JSONNode Parse(System.String aJSON)
    // Offset: 0x162B418
    static OVRSimpleJSON::JSONNode* Parse(::Il2CppString* aJSON);
  }; // OVRSimpleJSON.JSON
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSON*, "OVRSimpleJSON", "JSON");
// Writing includes for template specializations
// Writing MetadataGetter for method: OVRSimpleJSON::JSON::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (*)(::Il2CppString*)>(&OVRSimpleJSON::JSON::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSON*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
