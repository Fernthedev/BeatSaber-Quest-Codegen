// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Skipping declaration: BindingFlags because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.EnumBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumBuilder : public System::Reflection::TypeInfo {
    public:
    // Creating value type constructor for type: EnumBuilder
    EnumBuilder() noexcept {}
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1D189B8
    // Implemented from: System.Type
    // Base method: System.Reflection.Assembly Type::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_AssemblyQualifiedName()
    // Offset: 0x1D18A14
    // Implemented from: System.Type
    // Base method: System.String Type::get_AssemblyQualifiedName()
    ::Il2CppString* get_AssemblyQualifiedName();
    // public override System.Type get_BaseType()
    // Offset: 0x1D18A70
    // Implemented from: System.Type
    // Base method: System.Type Type::get_BaseType()
    System::Type* get_BaseType();
    // public override System.String get_FullName()
    // Offset: 0x1D18ACC
    // Implemented from: System.Type
    // Base method: System.String Type::get_FullName()
    ::Il2CppString* get_FullName();
    // public override System.Guid get_GUID()
    // Offset: 0x1D18B28
    // Implemented from: System.Type
    // Base method: System.Guid Type::get_GUID()
    System::Guid get_GUID();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1D18B84
    // Implemented from: System.Type
    // Base method: System.Reflection.Module Type::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String get_Name()
    // Offset: 0x1D18BE0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x1D18C3C
    // Implemented from: System.Type
    // Base method: System.String Type::get_Namespace()
    ::Il2CppString* get_Namespace();
    // public override System.Type get_UnderlyingSystemType()
    // Offset: 0x1D18CF4
    // Implemented from: System.Type
    // Base method: System.Type Type::get_UnderlyingSystemType()
    System::Type* get_UnderlyingSystemType();
    // public override System.Type GetElementType()
    // Offset: 0x1D18C98
    // Implemented from: System.Type
    // Base method: System.Type Type::GetElementType()
    System::Type* GetElementType();
    // protected override System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0x1D18D34
    // Implemented from: System.Type
    // Base method: System.Reflection.TypeAttributes Type::GetAttributeFlagsImpl()
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected override System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1D18D74
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo Type::GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18DB4
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo[] Type::GetConstructors(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1D18DF4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1D18E34
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18E74
    // Implemented from: System.Type
    // Base method: System.Reflection.EventInfo Type::GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18EB4
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo Type::GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18EF4
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo[] Type::GetFields(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type[] GetInterfaces()
    // Offset: 0x1D18F34
    // Implemented from: System.Type
    // Base method: System.Type[] Type::GetInterfaces()
    ::Array<System::Type*>* GetInterfaces();
    // protected override System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1D18F74
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo Type::GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18FB4
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo[] Type::GetMethods(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D18FF4
    // Implemented from: System.Type
    // Base method: System.Type Type::GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1D19034
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo[] Type::GetProperties(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // protected override System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1D19074
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo Type::GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x1D190B4
    // Implemented from: System.Type
    // Base method: System.Boolean Type::HasElementTypeImpl()
    bool HasElementTypeImpl();
    // public override System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0x1D190F4
    // Implemented from: System.Type
    // Base method: System.Object Type::InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x1D19134
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsArrayImpl()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x1D19174
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsByRefImpl()
    bool IsByRefImpl();
    // protected override System.Boolean IsCOMObjectImpl()
    // Offset: 0x1D191B4
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsCOMObjectImpl()
    bool IsCOMObjectImpl();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1D191F4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x1D19234
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPointerImpl()
    bool IsPointerImpl();
    // protected override System.Boolean IsPrimitiveImpl()
    // Offset: 0x1D19274
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPrimitiveImpl()
    bool IsPrimitiveImpl();
  }; // System.Reflection.Emit.EnumBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::EnumBuilder*, "System.Reflection.Emit", "EnumBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_AssemblyQualifiedName
// Il2CppName: get_AssemblyQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_AssemblyQualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_AssemblyQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_GUID
// Il2CppName: get_GUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_GUID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_GUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::get_UnderlyingSystemType
// Il2CppName: get_UnderlyingSystemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::get_UnderlyingSystemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "get_UnderlyingSystemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetElementType
// Il2CppName: GetElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::GetElementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetAttributeFlagsImpl
// Il2CppName: GetAttributeFlagsImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::TypeAttributes (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::GetAttributeFlagsImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetAttributeFlagsImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetConstructorImpl
// Il2CppName: GetConstructorImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo* (System::Reflection::Emit::EnumBuilder::*)(System::Reflection::BindingFlags, System::Reflection::Binder*, System::Reflection::CallingConventions, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::Reflection::Emit::EnumBuilder::GetConstructorImpl)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* callConvention = &::il2cpp_utils::GetClassFromName("System.Reflection", "CallingConventions")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetConstructorImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, binder, callConvention, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetConstructors
// Il2CppName: GetConstructors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::ConstructorInfo*>* (System::Reflection::Emit::EnumBuilder::*)(System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetConstructors)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetConstructors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::EnumBuilder::*)(bool)>(&System::Reflection::Emit::EnumBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::EnumBuilder::*)(System::Type*, bool)>(&System::Reflection::Emit::EnumBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetEvent
// Il2CppName: GetEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetEvent)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetField
// Il2CppName: GetField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetField)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetFields
// Il2CppName: GetFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::FieldInfo*>* (System::Reflection::Emit::EnumBuilder::*)(System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetFields)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetInterfaces
// Il2CppName: GetInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::GetInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetMethodImpl
// Il2CppName: GetMethodImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Reflection::CallingConventions, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::Reflection::Emit::EnumBuilder::GetMethodImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* callConvention = &::il2cpp_utils::GetClassFromName("System.Reflection", "CallingConventions")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetMethodImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr, binder, callConvention, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetMethods
// Il2CppName: GetMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (System::Reflection::Emit::EnumBuilder::*)(System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetMethods)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetNestedType
// Il2CppName: GetNestedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetNestedType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetNestedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::PropertyInfo*>* (System::Reflection::Emit::EnumBuilder::*)(System::Reflection::BindingFlags)>(&System::Reflection::Emit::EnumBuilder::GetProperties)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::GetPropertyImpl
// Il2CppName: GetPropertyImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Type*, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::Reflection::Emit::EnumBuilder::GetPropertyImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "GetPropertyImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr, binder, returnType, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::HasElementTypeImpl
// Il2CppName: HasElementTypeImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::HasElementTypeImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "HasElementTypeImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::InvokeMember
// Il2CppName: InvokeMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Emit::EnumBuilder::*)(::Il2CppString*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Il2CppObject*, ::Array<::Il2CppObject*>*, ::Array<System::Reflection::ParameterModifier>*, System::Globalization::CultureInfo*, ::Array<::Il2CppString*>*)>(&System::Reflection::Emit::EnumBuilder::InvokeMember)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* namedParameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "InvokeMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, invokeAttr, binder, target, args, modifiers, culture, namedParameters});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsArrayImpl
// Il2CppName: IsArrayImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::IsArrayImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsArrayImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsByRefImpl
// Il2CppName: IsByRefImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::IsByRefImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsByRefImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsCOMObjectImpl
// Il2CppName: IsCOMObjectImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::IsCOMObjectImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsCOMObjectImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)(System::Type*, bool)>(&System::Reflection::Emit::EnumBuilder::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsPointerImpl
// Il2CppName: IsPointerImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::IsPointerImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsPointerImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::EnumBuilder::IsPrimitiveImpl
// Il2CppName: IsPrimitiveImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::EnumBuilder::*)()>(&System::Reflection::Emit::EnumBuilder::IsPrimitiveImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::EnumBuilder*), "IsPrimitiveImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
