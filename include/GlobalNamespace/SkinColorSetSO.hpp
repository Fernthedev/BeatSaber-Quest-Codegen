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
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SkinColorSetSO
  class SkinColorSetSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private SkinColorSO[] _colors
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::SkinColorSO*>* colors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SkinColorSO*>*) == 0x8);
    // Creating value type constructor for type: SkinColorSetSO
    SkinColorSetSO(::Array<GlobalNamespace::SkinColorSO*>* colors_ = {}) noexcept : colors{colors_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SkinColorSO[] get_colors()
    // Offset: 0x10E24B4
    ::Array<GlobalNamespace::SkinColorSO*>* get_colors();
    // public System.Void .ctor()
    // Offset: 0x10E24BC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinColorSetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SkinColorSetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinColorSetSO*, creationType>()));
    }
  }; // SkinColorSetSO
  #pragma pack(pop)
  static check_size<sizeof(SkinColorSetSO), 24 + sizeof(::Array<GlobalNamespace::SkinColorSO*>*)> __GlobalNamespace_SkinColorSetSOSizeCheck;
  static_assert(sizeof(SkinColorSetSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSetSO*, "", "SkinColorSetSO");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSetSO::get_colors
// Il2CppName: get_colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::SkinColorSO*>* (GlobalNamespace::SkinColorSetSO::*)()>(&GlobalNamespace::SkinColorSetSO::get_colors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSetSO*), "get_colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSetSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
