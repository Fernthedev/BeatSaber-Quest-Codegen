// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlQualifiedName
#include "System/Xml/XmlQualifiedName.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlQualifiedName/System.Xml.HashCodeOfStringDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlQualifiedName::HashCodeOfStringDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HashCodeOfStringDelegate
    HashCodeOfStringDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1964BA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlQualifiedName::HashCodeOfStringDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlQualifiedName::HashCodeOfStringDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x1964504
    int Invoke(::Il2CppString* s, int sLen, int64_t additionalEntropy);
    // public System.IAsyncResult BeginInvoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1964C60
    System::IAsyncResult* BeginInvoke(::Il2CppString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1964D18
    int EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.XmlQualifiedName/System.Xml.HashCodeOfStringDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate*, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::*)(::Il2CppString*, int, int64_t)>(&System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, sLen, additionalEntropy});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::*)(::Il2CppString*, int, int64_t, System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, sLen, additionalEntropy, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::*)(System::IAsyncResult*)>(&System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
