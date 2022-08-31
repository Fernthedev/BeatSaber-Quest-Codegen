// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivableWrapperClass`1
#include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Terrain
  class Test_Terrain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Terrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Terrain*, "HoudiniEngineUnity", "Test_Terrain");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Terrain
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_Terrain : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>*/ {
    public:
    public:
    // public UnityEngine.Terrain self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Terrain* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>*>(this);
    }
    // Creating interface conversion operator: i_Test_Terrain
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>* i_Test_Terrain() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Terrain*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Terrain*
    constexpr operator ::UnityEngine::Terrain*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.Terrain self
    [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn_self();
    // public System.Void .ctor(UnityEngine.Terrain self)
    // Offset: 0x2AC2094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Terrain* New_ctor(::UnityEngine::Terrain* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_Terrain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Terrain*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2AC20C0
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_Terrain other)
    // Offset: 0x2AC2130
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_Terrain* other);
  }; // HoudiniEngineUnity.Test_Terrain
  #pragma pack(pop)
  static check_size<sizeof(Test_Terrain), 16 + sizeof(::UnityEngine::Terrain*)> __HoudiniEngineUnity_Test_TerrainSizeCheck;
  static_assert(sizeof(Test_Terrain) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Terrain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Terrain::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Terrain::*)()>(&HoudiniEngineUnity::Test_Terrain::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Terrain*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Terrain::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Terrain::*)(::HoudiniEngineUnity::Test_Terrain*)>(&HoudiniEngineUnity::Test_Terrain::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Terrain*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
