// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: DEB114
  class InjectableInfo : public ::Il2CppObject {
    public:
    // public readonly System.Boolean Optional
    // Size: 0x1
    // Offset: 0x10
    bool Optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Optional and: Identifier
    char __padding0[0x7] = {};
    // public readonly System.Object Identifier
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly Zenject.InjectSources SourceType
    // Size: 0x4
    // Offset: 0x20
    Zenject::InjectSources SourceType;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // Padding between fields: SourceType and: MemberName
    char __padding2[0x4] = {};
    // public readonly System.String MemberName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* MemberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Type MemberType
    // Size: 0x8
    // Offset: 0x30
    System::Type* MemberType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly System.Object DefaultValue
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* DefaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: InjectableInfo
    InjectableInfo(bool Optional_ = {}, ::Il2CppObject* Identifier_ = {}, Zenject::InjectSources SourceType_ = {}, ::Il2CppString* MemberName_ = {}, System::Type* MemberType_ = {}, ::Il2CppObject* DefaultValue_ = {}) noexcept : Optional{Optional_}, Identifier{Identifier_}, SourceType{SourceType_}, MemberName{MemberName_}, MemberType{MemberType_}, DefaultValue{DefaultValue_} {}
    // Get instance field: public readonly System.Boolean Optional
    bool _get_Optional();
    // Set instance field: public readonly System.Boolean Optional
    void _set_Optional(bool value);
    // Get instance field: public readonly System.Object Identifier
    ::Il2CppObject* _get_Identifier();
    // Set instance field: public readonly System.Object Identifier
    void _set_Identifier(::Il2CppObject* value);
    // Get instance field: public readonly Zenject.InjectSources SourceType
    Zenject::InjectSources _get_SourceType();
    // Set instance field: public readonly Zenject.InjectSources SourceType
    void _set_SourceType(Zenject::InjectSources value);
    // Get instance field: public readonly System.String MemberName
    ::Il2CppString* _get_MemberName();
    // Set instance field: public readonly System.String MemberName
    void _set_MemberName(::Il2CppString* value);
    // Get instance field: public readonly System.Type MemberType
    System::Type* _get_MemberType();
    // Set instance field: public readonly System.Type MemberType
    void _set_MemberType(System::Type* value);
    // Get instance field: public readonly System.Object DefaultValue
    ::Il2CppObject* _get_DefaultValue();
    // Set instance field: public readonly System.Object DefaultValue
    void _set_DefaultValue(::Il2CppObject* value);
    // public System.Void .ctor(System.Boolean optional, System.Object identifier, System.String memberName, System.Type memberType, System.Object defaultValue, Zenject.InjectSources sourceType)
    // Offset: 0x2408E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectableInfo* New_ctor(bool optional, ::Il2CppObject* identifier, ::Il2CppString* memberName, System::Type* memberType, ::Il2CppObject* defaultValue, Zenject::InjectSources sourceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectableInfo*, creationType>(optional, identifier, memberName, memberType, defaultValue, sourceType)));
    }
  }; // Zenject.InjectableInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectableInfo), 56 + sizeof(::Il2CppObject*)> __Zenject_InjectableInfoSizeCheck;
  static_assert(sizeof(InjectableInfo) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectableInfo*, "Zenject", "InjectableInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
