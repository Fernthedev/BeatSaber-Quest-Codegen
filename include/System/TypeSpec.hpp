// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeIdentifier
  class TypeIdentifier;
  // Forward declaring type: ModifierSpec
  class ModifierSpec;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeSpec
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeSpec : public ::Il2CppObject {
    public:
    // Nested type: System::TypeSpec::DisplayNameFormat
    struct DisplayNameFormat;
    // private System.TypeIdentifier name
    // Size: 0x8
    // Offset: 0x10
    System::TypeIdentifier* name;
    // Field size check
    static_assert(sizeof(System::TypeIdentifier*) == 0x8);
    // private System.String assembly_name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assembly_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.TypeIdentifier> nested
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::TypeIdentifier*>* nested;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::TypeIdentifier*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.TypeSpec> generic_params
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<System::TypeSpec*>* generic_params;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::TypeSpec*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.ModifierSpec> modifier_spec
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<System::ModifierSpec*>* modifier_spec;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::ModifierSpec*>*) == 0x8);
    // private System.Boolean is_byref
    // Size: 0x1
    // Offset: 0x38
    bool is_byref;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_byref and: display_fullname
    char __padding5[0x7] = {};
    // private System.String display_fullname
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* display_fullname;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeSpec
    TypeSpec(System::TypeIdentifier* name_ = {}, ::Il2CppString* assembly_name_ = {}, System::Collections::Generic::List_1<System::TypeIdentifier*>* nested_ = {}, System::Collections::Generic::List_1<System::TypeSpec*>* generic_params_ = {}, System::Collections::Generic::List_1<System::ModifierSpec*>* modifier_spec_ = {}, bool is_byref_ = {}, ::Il2CppString* display_fullname_ = {}) noexcept : name{name_}, assembly_name{assembly_name_}, nested{nested_}, generic_params{generic_params_}, modifier_spec{modifier_spec_}, is_byref{is_byref_}, display_fullname{display_fullname_} {}
    // Get instance field: private System.TypeIdentifier name
    System::TypeIdentifier* _get_name();
    // Set instance field: private System.TypeIdentifier name
    void _set_name(System::TypeIdentifier* value);
    // Get instance field: private System.String assembly_name
    ::Il2CppString* _get_assembly_name();
    // Set instance field: private System.String assembly_name
    void _set_assembly_name(::Il2CppString* value);
    // Get instance field: private System.Collections.Generic.List`1<System.TypeIdentifier> nested
    System::Collections::Generic::List_1<System::TypeIdentifier*>* _get_nested();
    // Set instance field: private System.Collections.Generic.List`1<System.TypeIdentifier> nested
    void _set_nested(System::Collections::Generic::List_1<System::TypeIdentifier*>* value);
    // Get instance field: private System.Collections.Generic.List`1<System.TypeSpec> generic_params
    System::Collections::Generic::List_1<System::TypeSpec*>* _get_generic_params();
    // Set instance field: private System.Collections.Generic.List`1<System.TypeSpec> generic_params
    void _set_generic_params(System::Collections::Generic::List_1<System::TypeSpec*>* value);
    // Get instance field: private System.Collections.Generic.List`1<System.ModifierSpec> modifier_spec
    System::Collections::Generic::List_1<System::ModifierSpec*>* _get_modifier_spec();
    // Set instance field: private System.Collections.Generic.List`1<System.ModifierSpec> modifier_spec
    void _set_modifier_spec(System::Collections::Generic::List_1<System::ModifierSpec*>* value);
    // Get instance field: private System.Boolean is_byref
    bool _get_is_byref();
    // Set instance field: private System.Boolean is_byref
    void _set_is_byref(bool value);
    // Get instance field: private System.String display_fullname
    ::Il2CppString* _get_display_fullname();
    // Set instance field: private System.String display_fullname
    void _set_display_fullname(::Il2CppString* value);
    // System.Boolean get_HasModifiers()
    // Offset: 0x232BD60
    bool get_HasModifiers();
    // System.String get_DisplayFullName()
    // Offset: 0x232C194
    ::Il2CppString* get_DisplayFullName();
    // private System.String GetDisplayFullName(System.TypeSpec/System.DisplayNameFormat flags)
    // Offset: 0x232BD70
    ::Il2CppString* GetDisplayFullName(System::TypeSpec::DisplayNameFormat flags);
    // private System.Text.StringBuilder GetModifierString(System.Text.StringBuilder sb)
    // Offset: 0x232C1C8
    System::Text::StringBuilder* GetModifierString(System::Text::StringBuilder* sb);
    // static System.TypeSpec Parse(System.String typeName)
    // Offset: 0x232B354
    static System::TypeSpec* Parse(::Il2CppString* typeName);
    // static System.String UnescapeInternalName(System.String displayName)
    // Offset: 0x232AA3C
    static ::Il2CppString* UnescapeInternalName(::Il2CppString* displayName);
    // System.Type Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x232B43C
    System::Type* Resolve(System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase);
    // private System.Void AddName(System.String type_name)
    // Offset: 0x232CE5C
    void AddName(::Il2CppString* type_name);
    // private System.Void AddModifier(System.ModifierSpec md)
    // Offset: 0x232CF30
    void AddModifier(System::ModifierSpec* md);
    // static private System.Void SkipSpace(System.String name, ref System.Int32 pos)
    // Offset: 0x232CFC8
    static void SkipSpace(::Il2CppString* name, ByRef<int> pos);
    // static private System.Void BoundCheck(System.Int32 idx, System.String s)
    // Offset: 0x232D090
    static void BoundCheck(int idx, ::Il2CppString* s);
    // static private System.TypeIdentifier ParsedTypeIdentifier(System.String displayName)
    // Offset: 0x232CF2C
    static System::TypeIdentifier* ParsedTypeIdentifier(::Il2CppString* displayName);
    // static private System.TypeSpec Parse(System.String name, ref System.Int32 p, System.Boolean is_recurse, System.Boolean allow_aqn)
    // Offset: 0x232C35C
    static System::TypeSpec* Parse(::Il2CppString* name, ByRef<int> p, bool is_recurse, bool allow_aqn);
    // public System.Void .ctor()
    // Offset: 0x232D138
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeSpec* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeSpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeSpec*, creationType>()));
    }
  }; // System.TypeSpec
  #pragma pack(pop)
  static check_size<sizeof(TypeSpec), 64 + sizeof(::Il2CppString*)> __System_TypeSpecSizeCheck;
  static_assert(sizeof(TypeSpec) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec*, "System", "TypeSpec");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeSpec::get_HasModifiers
// Il2CppName: get_HasModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeSpec::*)()>(&System::TypeSpec::get_HasModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "get_HasModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::get_DisplayFullName
// Il2CppName: get_DisplayFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeSpec::*)()>(&System::TypeSpec::get_DisplayFullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "get_DisplayFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::GetDisplayFullName
// Il2CppName: GetDisplayFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeSpec::*)(System::TypeSpec::DisplayNameFormat)>(&System::TypeSpec::GetDisplayFullName)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "TypeSpec/DisplayNameFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "GetDisplayFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::GetModifierString
// Il2CppName: GetModifierString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder* (System::TypeSpec::*)(System::Text::StringBuilder*)>(&System::TypeSpec::GetModifierString)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "GetModifierString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeSpec* (*)(::Il2CppString*)>(&System::TypeSpec::Parse)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::UnescapeInternalName
// Il2CppName: UnescapeInternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::TypeSpec::UnescapeInternalName)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "UnescapeInternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::TypeSpec::*)(System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>*, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>*, bool, bool)>(&System::TypeSpec::Resolve)> {
  static const MethodInfo* get() {
    static auto* assemblyResolver = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "AssemblyName"), ::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")})->byval_arg;
    static auto* typeResolver = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`4"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), ::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyResolver, typeResolver, throwOnError, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::AddName
// Il2CppName: AddName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeSpec::*)(::Il2CppString*)>(&System::TypeSpec::AddName)> {
  static const MethodInfo* get() {
    static auto* type_name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "AddName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type_name});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::AddModifier
// Il2CppName: AddModifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeSpec::*)(System::ModifierSpec*)>(&System::TypeSpec::AddModifier)> {
  static const MethodInfo* get() {
    static auto* md = &::il2cpp_utils::GetClassFromName("System", "ModifierSpec")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "AddModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{md});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::SkipSpace
// Il2CppName: SkipSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ByRef<int>)>(&System::TypeSpec::SkipSpace)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "SkipSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pos});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::BoundCheck
// Il2CppName: BoundCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppString*)>(&System::TypeSpec::BoundCheck)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "BoundCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, s});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::ParsedTypeIdentifier
// Il2CppName: ParsedTypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeIdentifier* (*)(::Il2CppString*)>(&System::TypeSpec::ParsedTypeIdentifier)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "ParsedTypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeSpec* (*)(::Il2CppString*, ByRef<int>, bool, bool)>(&System::TypeSpec::Parse)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* is_recurse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allow_aqn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeSpec*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, p, is_recurse, allow_aqn});
  }
};
// Writing MetadataGetter for method: System::TypeSpec::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
