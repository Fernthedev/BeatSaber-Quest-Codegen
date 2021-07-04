// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PropertyNameUtils
  // [NativeHeaderAttribute] Offset: D8FD30
  class PropertyNameUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PropertyNameUtils
    PropertyNameUtils() noexcept {}
    // static public UnityEngine.PropertyName PropertyNameFromString(System.String name)
    // Offset: 0x1B25088
    static UnityEngine::PropertyName PropertyNameFromString(::Il2CppString* name);
    // static private System.Void PropertyNameFromString_Injected(System.String name, out UnityEngine.PropertyName ret)
    // Offset: 0x1B25214
    static void PropertyNameFromString_Injected(::Il2CppString* name, UnityEngine::PropertyName& ret);
  }; // UnityEngine.PropertyNameUtils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
// Writing includes for template specializations
#include "UnityEngine/PropertyName.hpp"
// Writing MetadataGetter for method: UnityEngine::PropertyNameUtils::PropertyNameFromString
// Il2CppName: PropertyNameFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::PropertyName (*)(::Il2CppString*)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyNameUtils*), "PropertyNameFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected
// Il2CppName: PropertyNameFromString_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::PropertyName&)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyNameUtils*), "PropertyNameFromString_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::PropertyName&>()});
  }
};
