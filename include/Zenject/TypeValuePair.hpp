// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Zenject.TypeValuePair
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  struct TypeValuePair/*, public System::ValueType*/ {
    public:
    // public System.Type Type
    // Size: 0x8
    // Offset: 0x0
    System::Type* Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Object Value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: TypeValuePair
    constexpr TypeValuePair(System::Type* Type_ = {}, ::Il2CppObject* Value_ = {}) noexcept : Type{Type_}, Value{Value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Type type, System.Object value)
    // Offset: 0xF22D28
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  TypeValuePair(System::Type* type, ::Il2CppObject* value)
  }; // Zenject.TypeValuePair
  #pragma pack(pop)
  static check_size<sizeof(TypeValuePair), 8 + sizeof(::Il2CppObject*)> __Zenject_TypeValuePairSizeCheck;
  static_assert(sizeof(TypeValuePair) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TypeValuePair, "Zenject", "TypeValuePair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TypeValuePair::TypeValuePair
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
