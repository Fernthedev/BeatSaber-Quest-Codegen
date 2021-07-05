// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenFactoryMethod
  class ZenFactoryMethod;
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
  // Forward declaring type: ZenMemberSetterMethod
  class ZenMemberSetterMethod;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter
  class ReflectionInfoTypeInfoConverter : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c
    class $$c;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1
    class $$c__DisplayClass8_1;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Creating value type constructor for type: ReflectionInfoTypeInfoConverter
    ReflectionInfoTypeInfoConverter() noexcept {}
    // static public Zenject.InjectTypeInfo/InjectMethodInfo ConvertMethod(Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo injectMethod)
    // Offset: 0x1641848
    static Zenject::InjectTypeInfo::InjectMethodInfo* ConvertMethod(Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo* injectMethod);
    // static public Zenject.InjectTypeInfo/InjectConstructorInfo ConvertConstructor(Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo injectConstructor, System.Type type)
    // Offset: 0x1641A10
    static Zenject::InjectTypeInfo::InjectConstructorInfo* ConvertConstructor(Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* injectConstructor, System::Type* type);
    // static public Zenject.InjectTypeInfo/InjectMemberInfo ConvertField(System.Type parentType, Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo injectField)
    // Offset: 0x1641CF4
    static Zenject::InjectTypeInfo::InjectMemberInfo* ConvertField(System::Type* parentType, Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo* injectField);
    // static public Zenject.InjectTypeInfo/InjectMemberInfo ConvertProperty(System.Type parentType, Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo injectProperty)
    // Offset: 0x1641F3C
    static Zenject::InjectTypeInfo::InjectMemberInfo* ConvertProperty(System::Type* parentType, Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo* injectProperty);
    // static private Zenject.ZenFactoryMethod TryCreateFactoryMethod(System.Type type, Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo reflectionInfo)
    // Offset: 0x1641B68
    static Zenject::ZenFactoryMethod* TryCreateFactoryMethod(System::Type* type, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* reflectionInfo);
    // static private Zenject.ZenFactoryMethod TryCreateFactoryMethodCompiledLambdaExpression(System.Type type, System.Reflection.ConstructorInfo constructor)
    // Offset: 0x1641FD8
    static Zenject::ZenFactoryMethod* TryCreateFactoryMethodCompiledLambdaExpression(System::Type* type, System::Reflection::ConstructorInfo* constructor);
    // static private Zenject.ZenInjectMethod TryCreateActionForMethod(System.Reflection.MethodInfo methodInfo)
    // Offset: 0x1641A08
    static Zenject::ZenInjectMethod* TryCreateActionForMethod(System::Reflection::MethodInfo* methodInfo);
    // static private System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> GetAllFields(System.Type t, System.Reflection.BindingFlags flags)
    // Offset: 0x1641FE0
    static System::Collections::Generic::IEnumerable_1<System::Reflection::FieldInfo*>* GetAllFields(System::Type* t, System::Reflection::BindingFlags flags);
    // static private Zenject.ZenMemberSetterMethod GetOnlyPropertySetter(System.Type parentType, System.String propertyName)
    // Offset: 0x1642160
    static Zenject::ZenMemberSetterMethod* GetOnlyPropertySetter(System::Type* parentType, ::Il2CppString* propertyName);
    // static private Zenject.ZenMemberSetterMethod GetSetter(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0x1641D88
    static Zenject::ZenMemberSetterMethod* GetSetter(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
    // static private Zenject.ZenMemberSetterMethod TryGetSetterAsCompiledExpression(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0x1642468
    static Zenject::ZenMemberSetterMethod* TryGetSetterAsCompiledExpression(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertMethod
// Il2CppName: ConvertMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo::InjectMethodInfo* (*)(Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertMethod)> {
  const MethodInfo* get() {
    static auto* injectMethod = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "ConvertMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectMethod});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertConstructor
// Il2CppName: ConvertConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo::InjectConstructorInfo* (*)(Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*, System::Type*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertConstructor)> {
  const MethodInfo* get() {
    static auto* injectConstructor = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "ConvertConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectConstructor, type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertField
// Il2CppName: ConvertField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo::InjectMemberInfo* (*)(System::Type*, Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertField)> {
  const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* injectField = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "ConvertField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, injectField});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertProperty
// Il2CppName: ConvertProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo::InjectMemberInfo* (*)(System::Type*, Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertProperty)> {
  const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* injectProperty = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "ConvertProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, injectProperty});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethod
// Il2CppName: TryCreateFactoryMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenFactoryMethod* (*)(System::Type*, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethod)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* reflectionInfo = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "TryCreateFactoryMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, reflectionInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethodCompiledLambdaExpression
// Il2CppName: TryCreateFactoryMethodCompiledLambdaExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenFactoryMethod* (*)(System::Type*, System::Reflection::ConstructorInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethodCompiledLambdaExpression)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* constructor = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "TryCreateFactoryMethodCompiledLambdaExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, constructor});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateActionForMethod
// Il2CppName: TryCreateActionForMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenInjectMethod* (*)(System::Reflection::MethodInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateActionForMethod)> {
  const MethodInfo* get() {
    static auto* methodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "TryCreateActionForMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::GetAllFields
// Il2CppName: GetAllFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Reflection::FieldInfo*>* (*)(System::Type*, System::Reflection::BindingFlags)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::GetAllFields)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "GetAllFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, flags});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::GetOnlyPropertySetter
// Il2CppName: GetOnlyPropertySetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenMemberSetterMethod* (*)(System::Type*, ::Il2CppString*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::GetOnlyPropertySetter)> {
  const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "GetOnlyPropertySetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, propertyName});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::GetSetter
// Il2CppName: GetSetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenMemberSetterMethod* (*)(System::Type*, System::Reflection::MemberInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::GetSetter)> {
  const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "GetSetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, memInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::TryGetSetterAsCompiledExpression
// Il2CppName: TryGetSetterAsCompiledExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenMemberSetterMethod* (*)(System::Type*, System::Reflection::MemberInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::TryGetSetterAsCompiledExpression)> {
  const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter*), "TryGetSetterAsCompiledExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, memInfo});
  }
};
