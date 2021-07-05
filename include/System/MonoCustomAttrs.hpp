// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: AttributeUsageAttribute
  class AttributeUsageAttribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MonoProperty
  class MonoProperty;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: MonoEvent
  class MonoEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoCustomAttrs
  class MonoCustomAttrs : public ::Il2CppObject {
    public:
    // Nested type: System::MonoCustomAttrs::AttributeInfo
    class AttributeInfo;
    // Creating value type constructor for type: MonoCustomAttrs
    MonoCustomAttrs() noexcept {}
    // Get static field: static private System.Reflection.Assembly corlib
    static System::Reflection::Assembly* _get_corlib();
    // Set static field: static private System.Reflection.Assembly corlib
    static void _set_corlib(System::Reflection::Assembly* value);
    // [ThreadStaticAttribute] Offset: 0xD8117C
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
    static System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* _get_usage_cache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
    static void _set_usage_cache(System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* value);
    // Get static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
    static System::AttributeUsageAttribute* _get_DefaultAttributeUsage();
    // Set static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
    static void _set_DefaultAttributeUsage(System::AttributeUsageAttribute* value);
    // static private System.Boolean IsUserCattrProvider(System.Object obj)
    // Offset: 0x1822B8C
    static bool IsUserCattrProvider(::Il2CppObject* obj);
    // static System.Object[] GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean pseudoAttrs)
    // Offset: 0x1822D6C
    static ::Array<::Il2CppObject*>* GetCustomAttributesInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool pseudoAttrs);
    // static System.Object[] GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType)
    // Offset: 0x1822D74
    static ::Array<::Il2CppObject*>* GetPseudoCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType);
    // static private System.Object[] GetPseudoCustomAttributes(System.Type type)
    // Offset: 0x182305C
    static ::Array<::Il2CppObject*>* GetPseudoCustomAttributes(System::Type* type);
    // static System.Object[] GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inheritedOnly)
    // Offset: 0x18231BC
    static ::Array<::Il2CppObject*>* GetCustomAttributesBase(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inheritedOnly);
    // static System.Object[] GetCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1823374
    static ::Array<::Il2CppObject*>* GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit);
    // static System.Object[] GetCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Boolean inherit)
    // Offset: 0x182408C
    static ::Array<::Il2CppObject*>* GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, bool inherit);
    // static private System.Reflection.CustomAttributeData[] GetCustomAttributesDataInternal(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x1824204
    static ::Array<System::Reflection::CustomAttributeData*>* GetCustomAttributesDataInternal(System::Reflection::ICustomAttributeProvider* obj);
    // static System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x1824208
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData(System::Reflection::ICustomAttributeProvider* obj);
    // static System.Boolean IsDefined(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x18242BC
    static bool IsDefined(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit);
    // static System.Boolean IsDefinedInternal(System.Reflection.ICustomAttributeProvider obj, System.Type AttributeType)
    // Offset: 0x1824578
    static bool IsDefinedInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* AttributeType);
    // static private System.Reflection.PropertyInfo GetBasePropertyDefinition(System.Reflection.MonoProperty property)
    // Offset: 0x182457C
    static System::Reflection::PropertyInfo* GetBasePropertyDefinition(System::Reflection::MonoProperty* property);
    // static private System.Reflection.EventInfo GetBaseEventDefinition(System.Reflection.MonoEvent evt)
    // Offset: 0x1824838
    static System::Reflection::EventInfo* GetBaseEventDefinition(System::Reflection::MonoEvent* evt);
    // static private System.Reflection.ICustomAttributeProvider GetBase(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x1823CC0
    static System::Reflection::ICustomAttributeProvider* GetBase(System::Reflection::ICustomAttributeProvider* obj);
    // static private System.AttributeUsageAttribute RetrieveAttributeUsageNoCache(System.Type attributeType)
    // Offset: 0x1824A00
    static System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(System::Type* attributeType);
    // static private System.AttributeUsageAttribute RetrieveAttributeUsage(System.Type attributeType)
    // Offset: 0x1823EF0
    static System::AttributeUsageAttribute* RetrieveAttributeUsage(System::Type* attributeType);
    // static private System.Void .cctor()
    // Offset: 0x1824C5C
    static void _cctor();
  }; // System.MonoCustomAttrs
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MonoCustomAttrs*, "System", "MonoCustomAttrs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoCustomAttrs::IsUserCattrProvider
// Il2CppName: IsUserCattrProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&System::MonoCustomAttrs::IsUserCattrProvider)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "IsUserCattrProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributesInternal
// Il2CppName: GetCustomAttributesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Reflection::ICustomAttributeProvider*, System::Type*, bool)>(&System::MonoCustomAttrs::GetCustomAttributesInternal)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* pseudoAttrs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, attributeType, pseudoAttrs});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetPseudoCustomAttributes
// Il2CppName: GetPseudoCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Reflection::ICustomAttributeProvider*, System::Type*)>(&System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, attributeType});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetPseudoCustomAttributes
// Il2CppName: GetPseudoCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Type*)>(&System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributesBase
// Il2CppName: GetCustomAttributesBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Reflection::ICustomAttributeProvider*, System::Type*, bool)>(&System::MonoCustomAttrs::GetCustomAttributesBase)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inheritedOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributesBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, attributeType, inheritedOnly});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Reflection::ICustomAttributeProvider*, System::Type*, bool)>(&System::MonoCustomAttrs::GetCustomAttributes)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (*)(System::Reflection::ICustomAttributeProvider*, bool)>(&System::MonoCustomAttrs::GetCustomAttributes)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, inherit});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributesDataInternal
// Il2CppName: GetCustomAttributesDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::CustomAttributeData*>* (*)(System::Reflection::ICustomAttributeProvider*)>(&System::MonoCustomAttrs::GetCustomAttributesDataInternal)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributesDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* (*)(System::Reflection::ICustomAttributeProvider*)>(&System::MonoCustomAttrs::GetCustomAttributesData)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ICustomAttributeProvider*, System::Type*, bool)>(&System::MonoCustomAttrs::IsDefined)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::IsDefinedInternal
// Il2CppName: IsDefinedInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ICustomAttributeProvider*, System::Type*)>(&System::MonoCustomAttrs::IsDefinedInternal)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    static auto* AttributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "IsDefinedInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, AttributeType});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetBasePropertyDefinition
// Il2CppName: GetBasePropertyDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (*)(System::Reflection::MonoProperty*)>(&System::MonoCustomAttrs::GetBasePropertyDefinition)> {
  const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetBasePropertyDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetBaseEventDefinition
// Il2CppName: GetBaseEventDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo* (*)(System::Reflection::MonoEvent*)>(&System::MonoCustomAttrs::GetBaseEventDefinition)> {
  const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetBaseEventDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::GetBase
// Il2CppName: GetBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ICustomAttributeProvider* (*)(System::Reflection::ICustomAttributeProvider*)>(&System::MonoCustomAttrs::GetBase)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "GetBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::RetrieveAttributeUsageNoCache
// Il2CppName: RetrieveAttributeUsageNoCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AttributeUsageAttribute* (*)(System::Type*)>(&System::MonoCustomAttrs::RetrieveAttributeUsageNoCache)> {
  const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "RetrieveAttributeUsageNoCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::RetrieveAttributeUsage
// Il2CppName: RetrieveAttributeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AttributeUsageAttribute* (*)(System::Type*)>(&System::MonoCustomAttrs::RetrieveAttributeUsage)> {
  const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), "RetrieveAttributeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::MonoCustomAttrs::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
