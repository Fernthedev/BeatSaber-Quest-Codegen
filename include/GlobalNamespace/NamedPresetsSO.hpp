// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NamedPresetsSO
  class NamedPresetsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: NamedPresetsSO
    NamedPresetsSO() noexcept {}
    // public NamedPreset[] get_namedPresets()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // protected System.Void .ctor()
    // Offset: 0x10157D4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedPresetsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedPresetsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedPresetsSO*, creationType>()));
    }
  }; // NamedPresetsSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPresetsSO*, "", "NamedPresetsSO");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::NamedPresetsSO::get_namedPresets
// Il2CppName: get_namedPresets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::NamedPreset*>* (GlobalNamespace::NamedPresetsSO::*)()>(&GlobalNamespace::NamedPresetsSO::get_namedPresets)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedPresetsSO*), "get_namedPresets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedPresetsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
