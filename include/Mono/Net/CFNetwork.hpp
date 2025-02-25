// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFStreamClientContext
  struct CFStreamClientContext;
  // Forward declaring type: CFArray
  class CFArray;
  // Forward declaring type: CFUrl
  class CFUrl;
  // Forward declaring type: CFProxy
  class CFProxy;
  // Forward declaring type: CFDictionary
  class CFDictionary;
  // Forward declaring type: CFProxySettings
  class CFProxySettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: AutoResetEvent
  class AutoResetEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork
  // [TokenAttribute] Offset: FFFFFFFF
  class CFNetwork : public ::Il2CppObject {
    public:
    // Nested type: Mono::Net::CFNetwork::GetProxyData
    class GetProxyData;
    // Nested type: Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback
    class CFProxyAutoConfigurationResultCallback;
    // Nested type: Mono::Net::CFNetwork::CFWebProxy
    class CFWebProxy;
    // Nested type: Mono::Net::CFNetwork::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Creating value type constructor for type: CFNetwork
    CFNetwork() noexcept {}
    // Get static field: static private System.Object lock_obj
    static ::Il2CppObject* _get_lock_obj();
    // Set static field: static private System.Object lock_obj
    static void _set_lock_obj(::Il2CppObject* value);
    // Get static field: static private System.Collections.Generic.Queue`1<Mono.Net.CFNetwork/Mono.Net.GetProxyData> get_proxy_queue
    static System::Collections::Generic::Queue_1<Mono::Net::CFNetwork::GetProxyData*>* _get_get_proxy_queue();
    // Set static field: static private System.Collections.Generic.Queue`1<Mono.Net.CFNetwork/Mono.Net.GetProxyData> get_proxy_queue
    static void _set_get_proxy_queue(System::Collections::Generic::Queue_1<Mono::Net::CFNetwork::GetProxyData*>* value);
    // Get static field: static private System.Threading.AutoResetEvent proxy_event
    static System::Threading::AutoResetEvent* _get_proxy_event();
    // Set static field: static private System.Threading.AutoResetEvent proxy_event
    static void _set_proxy_event(System::Threading::AutoResetEvent* value);
    // static private System.Void .cctor()
    // Offset: 0x15EC47C
    static void _cctor();
    // static private System.IntPtr CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr proxyAutoConfigurationScript, System.IntPtr targetURL, out System.IntPtr error)
    // Offset: 0x15EAD8C
    static System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System::IntPtr proxyAutoConfigurationScript, System::IntPtr targetURL, ByRef<System::IntPtr> error);
    // static private System.IntPtr CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr proxyAutoConfigURL, System.IntPtr targetURL, Mono.Net.CFNetwork/Mono.Net.CFProxyAutoConfigurationResultCallback cb, ref Mono.Net.CFStreamClientContext clientContext)
    // Offset: 0x15EAE24
    static System::IntPtr CFNetworkExecuteProxyAutoConfigurationURL(System::IntPtr proxyAutoConfigURL, System::IntPtr targetURL, Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback* cb, ByRef<Mono::Net::CFStreamClientContext> clientContext);
    // static private System.Void CFNetworkCopyProxiesForAutoConfigurationScriptThread()
    // Offset: 0x15EAED4
    static void CFNetworkCopyProxiesForAutoConfigurationScriptThread();
    // static private System.IntPtr CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr proxyAutoConfigurationScript, System.IntPtr targetURL, out System.IntPtr error)
    // Offset: 0x15EB170
    static System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScript(System::IntPtr proxyAutoConfigurationScript, System::IntPtr targetURL, ByRef<System::IntPtr> error);
    // static private Mono.Net.CFArray CopyProxiesForAutoConfigurationScript(System.IntPtr proxyAutoConfigurationScript, Mono.Net.CFUrl targetURL)
    // Offset: 0x15EB588
    static Mono::Net::CFArray* CopyProxiesForAutoConfigurationScript(System::IntPtr proxyAutoConfigurationScript, Mono::Net::CFUrl* targetURL);
    // static public Mono.Net.CFProxy[] GetProxiesForAutoConfigurationScript(System.IntPtr proxyAutoConfigurationScript, Mono.Net.CFUrl targetURL)
    // Offset: 0x15EB650
    static ::Array<Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(System::IntPtr proxyAutoConfigurationScript, Mono::Net::CFUrl* targetURL);
    // static public Mono.Net.CFProxy[] GetProxiesForAutoConfigurationScript(System.IntPtr proxyAutoConfigurationScript, System.Uri targetUri)
    // Offset: 0x15EB8F0
    static ::Array<Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(System::IntPtr proxyAutoConfigurationScript, System::Uri* targetUri);
    // static public Mono.Net.CFProxy[] ExecuteProxyAutoConfigurationURL(System.IntPtr proxyAutoConfigURL, System.Uri targetURL)
    // Offset: 0x15EBAFC
    static ::Array<Mono::Net::CFProxy*>* ExecuteProxyAutoConfigurationURL(System::IntPtr proxyAutoConfigURL, System::Uri* targetURL);
    // static private System.IntPtr CFNetworkCopyProxiesForURL(System.IntPtr url, System.IntPtr proxySettings)
    // Offset: 0x15EBE34
    static System::IntPtr CFNetworkCopyProxiesForURL(System::IntPtr url, System::IntPtr proxySettings);
    // static private Mono.Net.CFArray CopyProxiesForURL(Mono.Net.CFUrl url, Mono.Net.CFDictionary proxySettings)
    // Offset: 0x15EBEC4
    static Mono::Net::CFArray* CopyProxiesForURL(Mono::Net::CFUrl* url, Mono::Net::CFDictionary* proxySettings);
    // static public Mono.Net.CFProxy[] GetProxiesForURL(Mono.Net.CFUrl url, Mono.Net.CFProxySettings proxySettings)
    // Offset: 0x15EBF8C
    static ::Array<Mono::Net::CFProxy*>* GetProxiesForURL(Mono::Net::CFUrl* url, Mono::Net::CFProxySettings* proxySettings);
    // static public Mono.Net.CFProxy[] GetProxiesForUri(System.Uri uri, Mono.Net.CFProxySettings proxySettings)
    // Offset: 0x15EC260
    static ::Array<Mono::Net::CFProxy*>* GetProxiesForUri(System::Uri* uri, Mono::Net::CFProxySettings* proxySettings);
    // static private System.IntPtr CFNetworkCopySystemProxySettings()
    // Offset: 0x15EC378
    static System::IntPtr CFNetworkCopySystemProxySettings();
    // static public Mono.Net.CFProxySettings GetSystemProxySettings()
    // Offset: 0x15EC19C
    static Mono::Net::CFProxySettings* GetSystemProxySettings();
    // static public System.Net.IWebProxy GetDefaultProxy()
    // Offset: 0x15EC418
    static System::Net::IWebProxy* GetDefaultProxy();
  }; // Mono.Net.CFNetwork
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork*, "Mono.Net", "CFNetwork");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNetwork::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFNetwork::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential
// Il2CppName: CFNetworkCopyProxiesForAutoConfigurationScriptSequential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr, ByRef<System::IntPtr>)>(&Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigurationScript = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkCopyProxiesForAutoConfigurationScriptSequential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigurationScript, targetURL, error});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL
// Il2CppName: CFNetworkExecuteProxyAutoConfigurationURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr, Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback*, ByRef<Mono::Net::CFStreamClientContext>)>(&Mono::Net::CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFNetwork/CFProxyAutoConfigurationResultCallback")->byval_arg;
    static auto* clientContext = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFStreamClientContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkExecuteProxyAutoConfigurationURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigURL, targetURL, cb, clientContext});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread
// Il2CppName: CFNetworkCopyProxiesForAutoConfigurationScriptThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkCopyProxiesForAutoConfigurationScriptThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript
// Il2CppName: CFNetworkCopyProxiesForAutoConfigurationScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr, ByRef<System::IntPtr>)>(&Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigurationScript = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkCopyProxiesForAutoConfigurationScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigurationScript, targetURL, error});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CopyProxiesForAutoConfigurationScript
// Il2CppName: CopyProxiesForAutoConfigurationScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFArray* (*)(System::IntPtr, Mono::Net::CFUrl*)>(&Mono::Net::CFNetwork::CopyProxiesForAutoConfigurationScript)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigurationScript = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFUrl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CopyProxiesForAutoConfigurationScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigurationScript, targetURL});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript
// Il2CppName: GetProxiesForAutoConfigurationScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Net::CFProxy*>* (*)(System::IntPtr, Mono::Net::CFUrl*)>(&Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigurationScript = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFUrl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetProxiesForAutoConfigurationScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigurationScript, targetURL});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript
// Il2CppName: GetProxiesForAutoConfigurationScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Net::CFProxy*>* (*)(System::IntPtr, System::Uri*)>(&Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigurationScript = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetProxiesForAutoConfigurationScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigurationScript, targetUri});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::ExecuteProxyAutoConfigurationURL
// Il2CppName: ExecuteProxyAutoConfigurationURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Net::CFProxy*>* (*)(System::IntPtr, System::Uri*)>(&Mono::Net::CFNetwork::ExecuteProxyAutoConfigurationURL)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetURL = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "ExecuteProxyAutoConfigurationURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigURL, targetURL});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkCopyProxiesForURL
// Il2CppName: CFNetworkCopyProxiesForURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr)>(&Mono::Net::CFNetwork::CFNetworkCopyProxiesForURL)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxySettings = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkCopyProxiesForURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, proxySettings});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CopyProxiesForURL
// Il2CppName: CopyProxiesForURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFArray* (*)(Mono::Net::CFUrl*, Mono::Net::CFDictionary*)>(&Mono::Net::CFNetwork::CopyProxiesForURL)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFUrl")->byval_arg;
    static auto* proxySettings = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CopyProxiesForURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, proxySettings});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxiesForURL
// Il2CppName: GetProxiesForURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Net::CFProxy*>* (*)(Mono::Net::CFUrl*, Mono::Net::CFProxySettings*)>(&Mono::Net::CFNetwork::GetProxiesForURL)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFUrl")->byval_arg;
    static auto* proxySettings = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFProxySettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetProxiesForURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, proxySettings});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxiesForUri
// Il2CppName: GetProxiesForUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Net::CFProxy*>* (*)(System::Uri*, Mono::Net::CFProxySettings*)>(&Mono::Net::CFNetwork::GetProxiesForUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxySettings = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFProxySettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetProxiesForUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, proxySettings});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFNetworkCopySystemProxySettings
// Il2CppName: CFNetworkCopySystemProxySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&Mono::Net::CFNetwork::CFNetworkCopySystemProxySettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "CFNetworkCopySystemProxySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetSystemProxySettings
// Il2CppName: GetSystemProxySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFProxySettings* (*)()>(&Mono::Net::CFNetwork::GetSystemProxySettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetSystemProxySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetDefaultProxy
// Il2CppName: GetDefaultProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy* (*)()>(&Mono::Net::CFNetwork::GetDefaultProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork*), "GetDefaultProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
