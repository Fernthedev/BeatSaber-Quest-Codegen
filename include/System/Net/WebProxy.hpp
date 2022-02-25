// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: AutoWebProxyScriptEngine
  class AutoWebProxyScriptEngine;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebProxy*, "System.Net", "WebProxy");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class WebProxy : public ::Il2CppObject/*, public System::Net::IWebProxy, public System::Runtime::Serialization::ISerializable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean _UseRegistry
    // Size: 0x1
    // Offset: 0x10
    bool UseRegistry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _BypassOnLocal
    // Size: 0x1
    // Offset: 0x11
    bool BypassOnLocal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_EnableAutoproxy
    // Size: 0x1
    // Offset: 0x12
    bool m_EnableAutoproxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EnableAutoproxy and: ProxyAddress
    char __padding2[0x5] = {};
    // private System.Uri _ProxyAddress
    // Size: 0x8
    // Offset: 0x18
    System::Uri* ProxyAddress;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Collections.ArrayList _BypassList
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* BypassList;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Net.ICredentials _Credentials
    // Size: 0x8
    // Offset: 0x28
    System::Net::ICredentials* Credentials;
    // Field size check
    static_assert(sizeof(System::Net::ICredentials*) == 0x8);
    // private System.Text.RegularExpressions.Regex[] _RegExBypassList
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<System::Text::RegularExpressions::Regex*> RegExBypassList;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Text::RegularExpressions::Regex*>) == 0x8);
    // private System.Collections.Hashtable _ProxyHostAddresses
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Hashtable* ProxyHostAddresses;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Net.AutoWebProxyScriptEngine m_ScriptEngine
    // Size: 0x8
    // Offset: 0x40
    System::Net::AutoWebProxyScriptEngine* m_ScriptEngine;
    // Field size check
    static_assert(sizeof(System::Net::AutoWebProxyScriptEngine*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: private System.Boolean _UseRegistry
    bool& dyn__UseRegistry();
    // Get instance field reference: private System.Boolean _BypassOnLocal
    bool& dyn__BypassOnLocal();
    // Get instance field reference: private System.Boolean m_EnableAutoproxy
    bool& dyn_m_EnableAutoproxy();
    // Get instance field reference: private System.Uri _ProxyAddress
    System::Uri*& dyn__ProxyAddress();
    // Get instance field reference: private System.Collections.ArrayList _BypassList
    System::Collections::ArrayList*& dyn__BypassList();
    // Get instance field reference: private System.Net.ICredentials _Credentials
    System::Net::ICredentials*& dyn__Credentials();
    // Get instance field reference: private System.Text.RegularExpressions.Regex[] _RegExBypassList
    ::ArrayW<System::Text::RegularExpressions::Regex*>& dyn__RegExBypassList();
    // Get instance field reference: private System.Collections.Hashtable _ProxyHostAddresses
    System::Collections::Hashtable*& dyn__ProxyHostAddresses();
    // Get instance field reference: private System.Net.AutoWebProxyScriptEngine m_ScriptEngine
    System::Net::AutoWebProxyScriptEngine*& dyn_m_ScriptEngine();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x1BE1994
    System::Net::ICredentials* get_Credentials();
    // public System.Boolean get_UseDefaultCredentials()
    // Offset: 0x1BE199C
    bool get_UseDefaultCredentials();
    // public System.Void set_UseDefaultCredentials(System.Boolean value)
    // Offset: 0x1BE1A20
    void set_UseDefaultCredentials(bool value);
    // System.Net.AutoWebProxyScriptEngine get_ScriptEngine()
    // Offset: 0x1BE28B8
    System::Net::AutoWebProxyScriptEngine* get_ScriptEngine();
    // public System.Void .ctor(System.Uri Address, System.Boolean BypassOnLocal, System.String[] BypassList, System.Net.ICredentials Credentials)
    // Offset: 0x1BE16A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW> BypassList, System::Net::ICredentials* Credentials) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(Address, BypassOnLocal, BypassList, Credentials)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1BE24EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(serializationInfo, streamingContext)));
    }
    // System.Void .ctor(System.Boolean enableAutoproxy)
    // Offset: 0x1BE2928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(bool enableAutoproxy) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(enableAutoproxy)));
    }
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0x1BE1AA8
    System::Uri* GetProxy(System::Uri* destination);
    // private System.Void UpdateRegExList(System.Boolean canThrow)
    // Offset: 0x1BE175C
    void UpdateRegExList(bool canThrow);
    // private System.Boolean IsMatchInBypassList(System.Uri input)
    // Offset: 0x1BE1EC8
    bool IsMatchInBypassList(System::Uri* input);
    // private System.Boolean IsLocal(System.Uri host)
    // Offset: 0x1BE2060
    bool IsLocal(System::Uri* host);
    // private System.Boolean IsLocalInProxyHash(System.Uri host)
    // Offset: 0x1BE21D0
    bool IsLocalInProxyHash(System::Uri* host);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0x1BE22D8
    bool IsBypassed(System::Uri* host);
    // private System.Boolean IsBypassedManual(System.Uri host)
    // Offset: 0x1BE1DE4
    bool IsBypassedManual(System::Uri* host);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1BE27B0
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1BE27BC
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // static public System.Net.IWebProxy CreateDefaultProxy()
    // Offset: 0x1BE28C0
    static System::Net::IWebProxy* CreateDefaultProxy();
    // System.Void UnsafeUpdateFromRegistry()
    // Offset: 0x1BE27A4
    void UnsafeUpdateFromRegistry();
    // private System.Boolean GetProxyAuto(System.Uri destination, out System.Uri proxyUri)
    // Offset: 0x1BE1C48
    bool GetProxyAuto(System::Uri* destination, ByRef<System::Uri*> proxyUri);
    // private System.Boolean IsBypassedAuto(System.Uri destination, out System.Boolean isBypassed)
    // Offset: 0x1BE23CC
    bool IsBypassedAuto(System::Uri* destination, ByRef<bool> isBypassed);
    // static private System.Boolean AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String> proxies, System.Boolean checkFirstOnly)
    // Offset: 0x1BE2960
    static bool AreAllBypassed(System::Collections::Generic::IEnumerable_1<::StringW>* proxies, bool checkFirstOnly);
    // static private System.Uri ProxyUri(System.String proxyName)
    // Offset: 0x1BE2BCC
    static System::Uri* ProxyUri(::StringW proxyName);
    // public System.Void .ctor()
    // Offset: 0x1BE1690
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>()));
    }
  }; // System.Net.WebProxy
  #pragma pack(pop)
  static check_size<sizeof(WebProxy), 64 + sizeof(System::Net::AutoWebProxyScriptEngine*)> __System_Net_WebProxySizeCheck;
  static_assert(sizeof(WebProxy) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebProxy::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials* (System::Net::WebProxy::*)()>(&System::Net::WebProxy::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::get_UseDefaultCredentials
// Il2CppName: get_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)()>(&System::Net::WebProxy::get_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "get_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::set_UseDefaultCredentials
// Il2CppName: set_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebProxy::*)(bool)>(&System::Net::WebProxy::set_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "set_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::get_ScriptEngine
// Il2CppName: get_ScriptEngine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AutoWebProxyScriptEngine* (System::Net::WebProxy::*)()>(&System::Net::WebProxy::get_ScriptEngine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "get_ScriptEngine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebProxy::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::GetProxy)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::UpdateRegExList
// Il2CppName: UpdateRegExList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebProxy::*)(bool)>(&System::Net::WebProxy::UpdateRegExList)> {
  static const MethodInfo* get() {
    static auto* canThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "UpdateRegExList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canThrow});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsMatchInBypassList
// Il2CppName: IsMatchInBypassList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::IsMatchInBypassList)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsMatchInBypassList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsLocal
// Il2CppName: IsLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::IsLocal)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsLocalInProxyHash
// Il2CppName: IsLocalInProxyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::IsLocalInProxyHash)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsLocalInProxyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsBypassed
// Il2CppName: IsBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::IsBypassed)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsBypassedManual
// Il2CppName: IsBypassedManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*)>(&System::Net::WebProxy::IsBypassedManual)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsBypassedManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebProxy::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebProxy::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebProxy::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::CreateDefaultProxy
// Il2CppName: CreateDefaultProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy* (*)()>(&System::Net::WebProxy::CreateDefaultProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "CreateDefaultProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::UnsafeUpdateFromRegistry
// Il2CppName: UnsafeUpdateFromRegistry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebProxy::*)()>(&System::Net::WebProxy::UnsafeUpdateFromRegistry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "UnsafeUpdateFromRegistry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::GetProxyAuto
// Il2CppName: GetProxyAuto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*, ByRef<System::Uri*>)>(&System::Net::WebProxy::GetProxyAuto)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxyUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "GetProxyAuto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, proxyUri});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::IsBypassedAuto
// Il2CppName: IsBypassedAuto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebProxy::*)(System::Uri*, ByRef<bool>)>(&System::Net::WebProxy::IsBypassedAuto)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* isBypassed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "IsBypassedAuto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, isBypassed});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::AreAllBypassed
// Il2CppName: AreAllBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&System::Net::WebProxy::AreAllBypassed)> {
  static const MethodInfo* get() {
    static auto* proxies = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* checkFirstOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "AreAllBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxies, checkFirstOnly});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::ProxyUri
// Il2CppName: ProxyUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (*)(::StringW)>(&System::Net::WebProxy::ProxyUri)> {
  static const MethodInfo* get() {
    static auto* proxyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebProxy*), "ProxyUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyName});
  }
};
// Writing MetadataGetter for method: System::Net::WebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
