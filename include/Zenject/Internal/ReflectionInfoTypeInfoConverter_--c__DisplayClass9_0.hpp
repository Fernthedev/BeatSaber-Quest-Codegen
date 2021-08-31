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
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.FieldInfo fieldInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::FieldInfo* fieldInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::FieldInfo*) == 0x8);
    // public System.Reflection.PropertyInfo propInfo
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::PropertyInfo* propInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::PropertyInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass9_0
    $$c__DisplayClass9_0(System::Reflection::FieldInfo* fieldInfo_ = {}, System::Reflection::PropertyInfo* propInfo_ = {}) noexcept : fieldInfo{fieldInfo_}, propInfo{propInfo_} {}
    // Get instance field: public System.Reflection.FieldInfo fieldInfo
    System::Reflection::FieldInfo* _get_fieldInfo();
    // Set instance field: public System.Reflection.FieldInfo fieldInfo
    void _set_fieldInfo(System::Reflection::FieldInfo* value);
    // Get instance field: public System.Reflection.PropertyInfo propInfo
    System::Reflection::PropertyInfo* _get_propInfo();
    // Set instance field: public System.Reflection.PropertyInfo propInfo
    void _set_propInfo(System::Reflection::PropertyInfo* value);
    // System.Void <GetSetter>b__0(System.Object injectable, System.Object value)
    // Offset: 0x166449C
    void $GetSetter$b__0(::Il2CppObject* injectable, ::Il2CppObject* value);
    // System.Void <GetSetter>b__1(System.Object injectable, System.Object value)
    // Offset: 0x16644B8
    void $GetSetter$b__1(::Il2CppObject* injectable, ::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x166418C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0), 24 + sizeof(System::Reflection::PropertyInfo*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__0
// Il2CppName: <GetSetter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__0)> {
  static const MethodInfo* get() {
    static auto* injectable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "<GetSetter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectable, value});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__1
// Il2CppName: <GetSetter>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__1)> {
  static const MethodInfo* get() {
    static auto* injectable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "<GetSetter>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectable, value});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
