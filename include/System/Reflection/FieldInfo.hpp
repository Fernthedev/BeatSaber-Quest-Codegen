// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._FieldInfo
#include "System/Runtime/InteropServices/_FieldInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: MarshalAsAttribute
  class MarshalAsAttribute;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.FieldInfo
  // [ComDefaultInterfaceAttribute] Offset: D7C33C
  // [ClassInterfaceAttribute] Offset: D7C33C
  // [ComVisibleAttribute] Offset: D7C33C
  class FieldInfo : public System::Reflection::MemberInfo/*, public System::Runtime::InteropServices::_FieldInfo*/ {
    public:
    // Creating value type constructor for type: FieldInfo
    FieldInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_FieldInfo
    operator System::Runtime::InteropServices::_FieldInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_FieldInfo*>(this);
    }
    // public System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0xFFFFFFFF
    System::Reflection::FieldAttributes get_Attributes();
    // public System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0xFFFFFFFF
    System::RuntimeFieldHandle get_FieldHandle();
    // public System.Type get_FieldType()
    // Offset: 0xFFFFFFFF
    System::Type* get_FieldType();
    // public System.Object GetValue(System.Object obj)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public System.Boolean get_IsLiteral()
    // Offset: 0x1C7AF68
    bool get_IsLiteral();
    // public System.Boolean get_IsStatic()
    // Offset: 0x1C7AF8C
    bool get_IsStatic();
    // public System.Boolean get_IsPublic()
    // Offset: 0x1C7AFB0
    bool get_IsPublic();
    // public System.Boolean get_IsNotSerialized()
    // Offset: 0x1C7AFDC
    bool get_IsNotSerialized();
    // public System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public System.Void SetValue(System.Object obj, System.Object value)
    // Offset: 0x1C7B000
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value);
    // static private System.Reflection.FieldInfo internal_from_handle_type(System.IntPtr field_handle, System.IntPtr type_handle)
    // Offset: 0x1C7B01C
    static System::Reflection::FieldInfo* internal_from_handle_type(System::IntPtr field_handle, System::IntPtr type_handle);
    // static public System.Reflection.FieldInfo GetFieldFromHandle(System.RuntimeFieldHandle handle)
    // Offset: 0x1C7B020
    static System::Reflection::FieldInfo* GetFieldFromHandle(System::RuntimeFieldHandle handle);
    // static public System.Reflection.FieldInfo GetFieldFromHandle(System.RuntimeFieldHandle handle, System.RuntimeTypeHandle declaringType)
    // Offset: 0x1C7B0B8
    static System::Reflection::FieldInfo* GetFieldFromHandle(System::RuntimeFieldHandle handle, System::RuntimeTypeHandle declaringType);
    // System.Int32 GetFieldOffset()
    // Offset: 0x1C7B1DC
    int GetFieldOffset();
    // public System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x1C7B248
    void SetValueDirect(System::TypedReference obj, ::Il2CppObject* value);
    // private System.Runtime.InteropServices.MarshalAsAttribute get_marshal_info()
    // Offset: 0x1C7B2C8
    System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info();
    // System.Object[] GetPseudoCustomAttributes()
    // Offset: 0x1C7B2CC
    ::Array<::Il2CppObject*>* GetPseudoCustomAttributes();
    // public System.Object GetRawConstantValue()
    // Offset: 0x1C7B4D8
    ::Il2CppObject* GetRawConstantValue();
    // protected System.Void .ctor()
    // Offset: 0x1C7AF5C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::FieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldInfo*, creationType>()));
    }
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1C7AF60
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C7B544
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C7B550
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.FieldInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.FieldInfo left, System.Reflection.FieldInfo right)
  // Offset: 0x1C7B190
  bool operator ==(System::Reflection::FieldInfo* left, System::Reflection::FieldInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.FieldInfo left, System.Reflection.FieldInfo right)
  // Offset: 0x1C7B554
  bool operator !=(System::Reflection::FieldInfo* left, System::Reflection::FieldInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::FieldInfo*, "System.Reflection", "FieldInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldAttributes (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_Attributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_FieldHandle
// Il2CppName: get_FieldHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeFieldHandle (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_FieldHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_FieldHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_FieldType
// Il2CppName: get_FieldType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_FieldType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_FieldType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::FieldInfo::*)(::Il2CppObject*)>(&System::Reflection::FieldInfo::GetValue)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_IsLiteral
// Il2CppName: get_IsLiteral
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsLiteral)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_IsLiteral", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_IsStatic
// Il2CppName: get_IsStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsStatic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_IsStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_IsPublic
// Il2CppName: get_IsPublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsPublic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_IsPublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_IsNotSerialized
// Il2CppName: get_IsNotSerialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsNotSerialized)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_IsNotSerialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Globalization::CultureInfo*)>(&System::Reflection::FieldInfo::SetValue)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Reflection::FieldInfo::SetValue)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::internal_from_handle_type
// Il2CppName: internal_from_handle_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo* (*)(System::IntPtr, System::IntPtr)>(&System::Reflection::FieldInfo::internal_from_handle_type)> {
  const MethodInfo* get() {
    static auto* field_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "internal_from_handle_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field_handle, type_handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetFieldFromHandle
// Il2CppName: GetFieldFromHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo* (*)(System::RuntimeFieldHandle)>(&System::Reflection::FieldInfo::GetFieldFromHandle)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "RuntimeFieldHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetFieldFromHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetFieldFromHandle
// Il2CppName: GetFieldFromHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo* (*)(System::RuntimeFieldHandle, System::RuntimeTypeHandle)>(&System::Reflection::FieldInfo::GetFieldFromHandle)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "RuntimeFieldHandle")->byval_arg;
    static auto* declaringType = &::il2cpp_utils::GetClassFromName("System", "RuntimeTypeHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetFieldFromHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, declaringType});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetFieldOffset
// Il2CppName: GetFieldOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetFieldOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetFieldOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::SetValueDirect
// Il2CppName: SetValueDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(System::TypedReference, ::Il2CppObject*)>(&System::Reflection::FieldInfo::SetValueDirect)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "TypedReference")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "SetValueDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_marshal_info
// Il2CppName: get_marshal_info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::MarshalAsAttribute* (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_marshal_info)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_marshal_info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetPseudoCustomAttributes
// Il2CppName: GetPseudoCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetPseudoCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetRawConstantValue
// Il2CppName: GetRawConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetRawConstantValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetRawConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::FieldInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_MemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)(::Il2CppObject*)>(&System::Reflection::FieldInfo::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::FieldInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::FieldInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::FieldInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
