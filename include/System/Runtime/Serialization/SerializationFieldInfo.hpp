// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeFieldInfo
  class RuntimeFieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationFieldInfo
  class SerializationFieldInfo : public System::Reflection::FieldInfo {
    public:
    // private System.Reflection.RuntimeFieldInfo m_field
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::RuntimeFieldInfo* m_field;
    // Field size check
    static_assert(sizeof(System::Reflection::RuntimeFieldInfo*) == 0x8);
    // private System.String m_serializationName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_serializationName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SerializationFieldInfo
    SerializationFieldInfo(System::Reflection::RuntimeFieldInfo* m_field_ = {}, ::Il2CppString* m_serializationName_ = {}) noexcept : m_field{m_field_}, m_serializationName{m_serializationName_} {}
    // System.Void .ctor(System.Reflection.RuntimeFieldInfo field, System.String namePrefix)
    // Offset: 0x169A414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationFieldInfo* New_ctor(System::Reflection::RuntimeFieldInfo* field, ::Il2CppString* namePrefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationFieldInfo*, creationType>(field, namePrefix)));
    }
    // System.Object InternalGetValue(System.Object obj)
    // Offset: 0x169A5A8
    ::Il2CppObject* InternalGetValue(::Il2CppObject* obj);
    // System.Void InternalSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x169A6BC
    void InternalSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // System.Reflection.RuntimeFieldInfo get_FieldInfo()
    // Offset: 0x169A7F4
    System::Reflection::RuntimeFieldInfo* get_FieldInfo();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x169A3CC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.Int32 get_MetadataToken()
    // Offset: 0x169A3F0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::get_MetadataToken()
    int get_MetadataToken();
    // public override System.String get_Name()
    // Offset: 0x169A4AC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Type get_DeclaringType()
    // Offset: 0x169A4B4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x169A4D4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x169A4F4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x169A518
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x169A53C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Type get_FieldType()
    // Offset: 0x169A560
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    System::Type* get_FieldType();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x169A584
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x169A698
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x169A7FC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x169A820
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    System::Reflection::FieldAttributes get_Attributes();
  }; // System.Runtime.Serialization.SerializationFieldInfo
  #pragma pack(pop)
  static check_size<sizeof(SerializationFieldInfo), 24 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_SerializationFieldInfoSizeCheck;
  static_assert(sizeof(SerializationFieldInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationFieldInfo*, "System.Runtime.Serialization", "SerializationFieldInfo");
// Writing includes for template specializations
#include "System/Reflection/RuntimeFieldInfo.hpp"
#include "System/Reflection/BindingFlags.hpp"
#include "System/Reflection/Binder.hpp"
#include "System/Globalization/CultureInfo.hpp"
#include "System/Type.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::InternalGetValue
// Il2CppName: InternalGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationFieldInfo::*)(::Il2CppObject*)>(&System::Runtime::Serialization::SerializationFieldInfo::InternalGetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "InternalGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::InternalSetValue
// Il2CppName: InternalSetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationFieldInfo::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Globalization::CultureInfo*)>(&System::Runtime::Serialization::SerializationFieldInfo::InternalSetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "InternalSetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::Binder*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::CultureInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_FieldInfo
// Il2CppName: get_FieldInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeFieldInfo* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_FieldInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_FieldInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_Module)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_MetadataToken
// Il2CppName: get_MetadataToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_MetadataToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_MetadataToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_DeclaringType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_ReflectedType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Serialization::SerializationFieldInfo::*)(bool)>(&System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Serialization::SerializationFieldInfo::*)(System::Type*, bool)>(&System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SerializationFieldInfo::*)(System::Type*, bool)>(&System::Runtime::Serialization::SerializationFieldInfo::IsDefined)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_FieldType
// Il2CppName: get_FieldType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_FieldType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_FieldType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationFieldInfo::*)(::Il2CppObject*)>(&System::Runtime::Serialization::SerializationFieldInfo::GetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationFieldInfo::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Globalization::CultureInfo*)>(&System::Runtime::Serialization::SerializationFieldInfo::SetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::Binder*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::CultureInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_FieldHandle
// Il2CppName: get_FieldHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeFieldHandle (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_FieldHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_FieldHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationFieldInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldAttributes (System::Runtime::Serialization::SerializationFieldInfo::*)()>(&System::Runtime::Serialization::SerializationFieldInfo::get_Attributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationFieldInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
