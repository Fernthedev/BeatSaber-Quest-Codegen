// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConfigSerializer
  class ConfigSerializer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConfigSerializer
    ConfigSerializer() noexcept {}
    // static public System.Void SaveConfig(System.Object config, System.String filePath)
    // Offset: 0x123FE98
    static void SaveConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // static public System.Boolean LoadConfig(System.Object config, System.String filePath)
    // Offset: 0x12402D0
    static bool LoadConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // public System.Void .ctor()
    // Offset: 0x1240898
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConfigSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigSerializer*, creationType>()));
    }
  }; // ConfigSerializer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::SaveConfig
// Il2CppName: SaveConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&GlobalNamespace::ConfigSerializer::SaveConfig)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "SaveConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::LoadConfig
// Il2CppName: LoadConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppString*)>(&GlobalNamespace::ConfigSerializer::LoadConfig)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "LoadConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
