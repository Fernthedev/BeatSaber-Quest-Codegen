// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.InternalUtility
#include "UnityEngine/ProBuilder/InternalUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.InternalUtility/UnityEngine.ProBuilder.<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InternalUtility::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.String valid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* valid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(::Il2CppString* valid_ = {}) noexcept : valid{valid_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return valid;
    }
    // Get instance field reference: public System.String valid
    ::Il2CppString*& dyn_valid();
    // System.Boolean <TryParseColor>b__0(System.Char c)
    // Offset: 0x1AF8AEC
    bool $TryParseColor$b__0(::Il2CppChar c);
    // public System.Void .ctor()
    // Offset: 0x1AF8804
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalUtility::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalUtility::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.InternalUtility/UnityEngine.ProBuilder.<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(InternalUtility::$$c__DisplayClass6_0), 16 + sizeof(::Il2CppString*)> __UnityEngine_ProBuilder_InternalUtility_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(InternalUtility::$$c__DisplayClass6_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0*, "UnityEngine.ProBuilder", "InternalUtility/<>c__DisplayClass6_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::$TryParseColor$b__0
// Il2CppName: <TryParseColor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::*)(::Il2CppChar)>(&UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::$TryParseColor$b__0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0*), "<TryParseColor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
