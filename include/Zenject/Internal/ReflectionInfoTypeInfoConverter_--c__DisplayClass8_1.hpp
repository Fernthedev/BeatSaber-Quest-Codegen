// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass8_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1 : public ::Il2CppObject {
    public:
    // public System.Object injectable
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* injectable;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_1
    $$c__DisplayClass8_1(::Il2CppObject* injectable_ = {}, ::Il2CppObject* value_ = {}) noexcept : injectable{injectable_}, value{value_} {}
    // Get instance field reference: public System.Object injectable
    ::Il2CppObject*& dyn_injectable();
    // Get instance field reference: public System.Object value
    ::Il2CppObject*& dyn_value();
    // System.Void <GetOnlyPropertySetter>b__3(System.Reflection.FieldInfo f)
    // Offset: 0x166BCAC
    void $GetOnlyPropertySetter$b__3(System::Reflection::FieldInfo* f);
    // public System.Void .ctor()
    // Offset: 0x166BCA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass8_1
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1), 24 + sizeof(::Il2CppObject*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass8_1SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::$GetOnlyPropertySetter$b__3
// Il2CppName: <GetOnlyPropertySetter>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::*)(System::Reflection::FieldInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::$GetOnlyPropertySetter$b__3)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*), "<GetOnlyPropertySetter>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
