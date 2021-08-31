// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ExposedReference`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DAD69C
  template<typename T>
  struct ExposedReference_1/*, public System::ValueType*/ {
    public:
    // [SerializeField] Offset: 0xDB22F4
    // public UnityEngine.PropertyName exposedName
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::PropertyName exposedName;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    // [SerializeField] Offset: 0xDB2304
    // public UnityEngine.Object defaultValue
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Object* defaultValue;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // Creating value type constructor for type: ExposedReference_1
    constexpr ExposedReference_1(UnityEngine::PropertyName exposedName_ = {}, UnityEngine::Object* defaultValue_ = {}) noexcept : exposedName{exposedName_}, defaultValue{defaultValue_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.PropertyName exposedName
    UnityEngine::PropertyName _get_exposedName() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExposedReference_1::_get_exposedName");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "exposedName"))->offset;
      return *reinterpret_cast<UnityEngine::PropertyName*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public UnityEngine.PropertyName exposedName
    void _set_exposedName(UnityEngine::PropertyName value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExposedReference_1::_set_exposedName");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "exposedName"))->offset;
      *reinterpret_cast<UnityEngine::PropertyName*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.Object defaultValue
    UnityEngine::Object* _get_defaultValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExposedReference_1::_get_defaultValue");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "defaultValue"))->offset;
      return *reinterpret_cast<UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public UnityEngine.Object defaultValue
    void _set_defaultValue(UnityEngine::Object* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExposedReference_1::_set_defaultValue");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "defaultValue"))->offset;
      *reinterpret_cast<UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public T Resolve(UnityEngine.IExposedPropertyTable resolver)
    // Offset: 0xFFFFFFFF
    T Resolve(UnityEngine::IExposedPropertyTable* resolver) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExposedReference_1::Resolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Resolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resolver)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, resolver);
    }
  }; // UnityEngine.ExposedReference`1
  // Could not write size check! Type: UnityEngine.ExposedReference`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
