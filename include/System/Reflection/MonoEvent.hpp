// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeEventInfo
#include "System/Reflection/RuntimeEventInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoEvent
  class MonoEvent : public System::Reflection::RuntimeEventInfo {
    public:
    // private System.IntPtr klass
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr klass;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr handle
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: MonoEvent
    MonoEvent(System::IntPtr klass_ = {}, System::IntPtr handle_ = {}) noexcept : klass{klass_}, handle{handle_} {}
    // Deleting conversion operator: operator System::Reflection::EventInfo::AddEventAdapter*
    constexpr operator System::Reflection::EventInfo::AddEventAdapter*() const noexcept = delete;
    // public override System.Reflection.MethodInfo GetAddMethod(System.Boolean nonPublic)
    // Offset: 0x1C7F100
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetAddMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetRaiseMethod(System.Boolean nonPublic)
    // Offset: 0x1C7F1D8
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetRaiseMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetRemoveMethod(System.Boolean nonPublic)
    // Offset: 0x1C7F268
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetRemoveMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
    // public override System.Type get_DeclaringType()
    // Offset: 0x1C7F2F8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1C7F328
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.String get_Name()
    // Offset: 0x1C7F358
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String ToString()
    // Offset: 0x1C7F388
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7F408
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1C7F488
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7F500
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x1C7F580
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public System.Void .ctor()
    // Offset: 0x1C7F584
    // Implemented from: System.Reflection.RuntimeEventInfo
    // Base method: System.Void RuntimeEventInfo::.ctor()
    // Base method: System.Void EventInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoEvent*, creationType>()));
    }
  }; // System.Reflection.MonoEvent
  #pragma pack(pop)
  static check_size<sizeof(MonoEvent), 32 + sizeof(System::IntPtr)> __System_Reflection_MonoEventSizeCheck;
  static_assert(sizeof(MonoEvent) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoEvent*, "System.Reflection", "MonoEvent");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetAddMethod
// Il2CppName: GetAddMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MonoEvent::*)(bool)>(&System::Reflection::MonoEvent::GetAddMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetAddMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetRaiseMethod
// Il2CppName: GetRaiseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MonoEvent::*)(bool)>(&System::Reflection::MonoEvent::GetRaiseMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetRaiseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetRemoveMethod
// Il2CppName: GetRemoveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MonoEvent::*)(bool)>(&System::Reflection::MonoEvent::GetRemoveMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetRemoveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoEvent::*)()>(&System::Reflection::MonoEvent::get_DeclaringType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoEvent::*)()>(&System::Reflection::MonoEvent::get_ReflectedType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::MonoEvent::*)()>(&System::Reflection::MonoEvent::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::MonoEvent::*)()>(&System::Reflection::MonoEvent::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoEvent::*)(System::Type*, bool)>(&System::Reflection::MonoEvent::IsDefined)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::MonoEvent::*)(bool)>(&System::Reflection::MonoEvent::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::MonoEvent::*)(System::Type*, bool)>(&System::Reflection::MonoEvent::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* (System::Reflection::MonoEvent::*)()>(&System::Reflection::MonoEvent::GetCustomAttributesData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoEvent*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
