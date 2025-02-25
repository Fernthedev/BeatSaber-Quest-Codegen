// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass5_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionTypeAnalyzer::$$c__DisplayClass5_1 : public ::Il2CppObject {
    public:
    // public System.Reflection.PropertyInfo x
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::PropertyInfo* x;
    // Field size check
    static_assert(sizeof(System::Reflection::PropertyInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_1
    $$c__DisplayClass5_1(System::Reflection::PropertyInfo* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator System::Reflection::PropertyInfo*
    constexpr operator System::Reflection::PropertyInfo*() const noexcept {
      return x;
    }
    // Get instance field reference: public System.Reflection.PropertyInfo x
    System::Reflection::PropertyInfo*& dyn_x();
    // System.Boolean <GetPropertyInfos>b__2(System.Type a)
    // Offset: 0x166D7D8
    bool $GetPropertyInfos$b__2(System::Type* a);
    // public System.Void .ctor()
    // Offset: 0x166D2D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass5_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass5_1*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass5_1
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass5_1), 16 + sizeof(System::Reflection::PropertyInfo*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass5_1SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass5_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1::$GetPropertyInfos$b__2
// Il2CppName: <GetPropertyInfos>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1::*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1::$GetPropertyInfos$b__2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1*), "<GetPropertyInfos>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
