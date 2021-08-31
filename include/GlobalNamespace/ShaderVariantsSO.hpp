// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ShaderVariantsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderVariantsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::ShaderVariantsSO::ShaderVariant
    class ShaderVariant;
    // [ReorderableAttribute] Offset: 0xE1F4F8
    // private ShaderVariantsSO/ShaderVariant[] _shaderVariants
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* shaderVariants;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>*) == 0x8);
    // Creating value type constructor for type: ShaderVariantsSO
    ShaderVariantsSO(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* shaderVariants_ = {}) noexcept : shaderVariants{shaderVariants_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ShaderVariantsSO/ShaderVariant[] _shaderVariants
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>*& dyn__shaderVariants();
    // public ShaderVariantsSO/ShaderVariant[] get_shaderVariants()
    // Offset: 0x2394F7C
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* get_shaderVariants();
    // public System.Void Init(ShaderVariantsSO/ShaderVariant[] shaderVariants)
    // Offset: 0x2394F84
    void Init(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* shaderVariants);
    // public System.Void .ctor()
    // Offset: 0x2394F8C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderVariantsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderVariantsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderVariantsSO*, creationType>()));
    }
  }; // ShaderVariantsSO
  #pragma pack(pop)
  static check_size<sizeof(ShaderVariantsSO), 24 + sizeof(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>*)> __GlobalNamespace_ShaderVariantsSOSizeCheck;
  static_assert(sizeof(ShaderVariantsSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO*, "", "ShaderVariantsSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::get_shaderVariants
// Il2CppName: get_shaderVariants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* (GlobalNamespace::ShaderVariantsSO::*)()>(&GlobalNamespace::ShaderVariantsSO::get_shaderVariants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO*), "get_shaderVariants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderVariantsSO::*)(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>*)>(&GlobalNamespace::ShaderVariantsSO::Init)> {
  static const MethodInfo* get() {
    static auto* shaderVariants = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ShaderVariantsSO/ShaderVariant"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderVariants});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
