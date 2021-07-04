// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass8_0
  // [CompilerGeneratedAttribute] Offset: DDE81C
  class ReflectionTypeAnalyzer::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(System::Type* type_ = {}) noexcept : type{type_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return type;
    }
    // Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo <GetConstructorInfo>b__0(System.Reflection.ParameterInfo x)
    // Offset: 0x16445F8
    Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* $GetConstructorInfo$b__0(System::Reflection::ParameterInfo* x);
    // public System.Void .ctor()
    // Offset: 0x1643410
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass8_0), 16 + sizeof(System::Type*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass8_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
// Writing includes for template specializations
#include "System/Reflection/ParameterInfo.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0::$GetConstructorInfo$b__0
// Il2CppName: <GetConstructorInfo>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0::*)(System::Reflection::ParameterInfo*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0::$GetConstructorInfo$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0*), "<GetConstructorInfo>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::ParameterInfo*>()});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
