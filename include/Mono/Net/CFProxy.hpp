// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFDictionary
  class CFDictionary;
  // Forward declaring type: CFProxyType
  struct CFProxyType;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFProxy
  class CFProxy : public ::Il2CppObject {
    public:
    // private Mono.Net.CFDictionary settings
    // Size: 0x8
    // Offset: 0x10
    Mono::Net::CFDictionary* settings;
    // Field size check
    static_assert(sizeof(Mono::Net::CFDictionary*) == 0x8);
    // Creating value type constructor for type: CFProxy
    CFProxy(Mono::Net::CFDictionary* settings_ = {}) noexcept : settings{settings_} {}
    // Creating conversion operator: operator Mono::Net::CFDictionary*
    constexpr operator Mono::Net::CFDictionary*() const noexcept {
      return settings;
    }
    // Get static field: static private System.IntPtr kCFProxyAutoConfigurationJavaScriptKey
    static System::IntPtr _get_kCFProxyAutoConfigurationJavaScriptKey();
    // Set static field: static private System.IntPtr kCFProxyAutoConfigurationJavaScriptKey
    static void _set_kCFProxyAutoConfigurationJavaScriptKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyAutoConfigurationURLKey
    static System::IntPtr _get_kCFProxyAutoConfigurationURLKey();
    // Set static field: static private System.IntPtr kCFProxyAutoConfigurationURLKey
    static void _set_kCFProxyAutoConfigurationURLKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyHostNameKey
    static System::IntPtr _get_kCFProxyHostNameKey();
    // Set static field: static private System.IntPtr kCFProxyHostNameKey
    static void _set_kCFProxyHostNameKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyPasswordKey
    static System::IntPtr _get_kCFProxyPasswordKey();
    // Set static field: static private System.IntPtr kCFProxyPasswordKey
    static void _set_kCFProxyPasswordKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyPortNumberKey
    static System::IntPtr _get_kCFProxyPortNumberKey();
    // Set static field: static private System.IntPtr kCFProxyPortNumberKey
    static void _set_kCFProxyPortNumberKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeKey
    static System::IntPtr _get_kCFProxyTypeKey();
    // Set static field: static private System.IntPtr kCFProxyTypeKey
    static void _set_kCFProxyTypeKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyUsernameKey
    static System::IntPtr _get_kCFProxyUsernameKey();
    // Set static field: static private System.IntPtr kCFProxyUsernameKey
    static void _set_kCFProxyUsernameKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeAutoConfigurationURL
    static System::IntPtr _get_kCFProxyTypeAutoConfigurationURL();
    // Set static field: static private System.IntPtr kCFProxyTypeAutoConfigurationURL
    static void _set_kCFProxyTypeAutoConfigurationURL(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeAutoConfigurationJavaScript
    static System::IntPtr _get_kCFProxyTypeAutoConfigurationJavaScript();
    // Set static field: static private System.IntPtr kCFProxyTypeAutoConfigurationJavaScript
    static void _set_kCFProxyTypeAutoConfigurationJavaScript(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeFTP
    static System::IntPtr _get_kCFProxyTypeFTP();
    // Set static field: static private System.IntPtr kCFProxyTypeFTP
    static void _set_kCFProxyTypeFTP(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeHTTP
    static System::IntPtr _get_kCFProxyTypeHTTP();
    // Set static field: static private System.IntPtr kCFProxyTypeHTTP
    static void _set_kCFProxyTypeHTTP(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeHTTPS
    static System::IntPtr _get_kCFProxyTypeHTTPS();
    // Set static field: static private System.IntPtr kCFProxyTypeHTTPS
    static void _set_kCFProxyTypeHTTPS(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeSOCKS
    static System::IntPtr _get_kCFProxyTypeSOCKS();
    // Set static field: static private System.IntPtr kCFProxyTypeSOCKS
    static void _set_kCFProxyTypeSOCKS(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x15EC86C
    static void _cctor();
    // System.Void .ctor(Mono.Net.CFDictionary settings)
    // Offset: 0x15EA540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFProxy* New_ctor(Mono::Net::CFDictionary* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFProxy*, creationType>(settings)));
    }
    // static private Mono.Net.CFProxyType CFProxyTypeToEnum(System.IntPtr type)
    // Offset: 0x15ECA68
    static Mono::Net::CFProxyType CFProxyTypeToEnum(System::IntPtr type);
    // public System.IntPtr get_AutoConfigurationJavaScript()
    // Offset: 0x15EC168
    System::IntPtr get_AutoConfigurationJavaScript();
    // public System.IntPtr get_AutoConfigurationUrl()
    // Offset: 0x15EC228
    System::IntPtr get_AutoConfigurationUrl();
    // public System.String get_HostName()
    // Offset: 0x15EBACC
    ::Il2CppString* get_HostName();
    // public System.String get_Password()
    // Offset: 0x15EBA08
    ::Il2CppString* get_Password();
    // public System.Int32 get_Port()
    // Offset: 0x15EBB90
    int get_Port();
    // public Mono.Net.CFProxyType get_ProxyType()
    // Offset: 0x15EB880
    Mono::Net::CFProxyType get_ProxyType();
    // public System.String get_Username()
    // Offset: 0x15EB944
    ::Il2CppString* get_Username();
  }; // Mono.Net.CFProxy
  #pragma pack(pop)
  static check_size<sizeof(CFProxy), 16 + sizeof(Mono::Net::CFDictionary*)> __Mono_Net_CFProxySizeCheck;
  static_assert(sizeof(CFProxy) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFProxy*, "Mono.Net", "CFProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFProxy::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFProxy::CFProxyTypeToEnum
// Il2CppName: CFProxyTypeToEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFProxyType (*)(System::IntPtr)>(&Mono::Net::CFProxy::CFProxyTypeToEnum)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "CFProxyTypeToEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_AutoConfigurationJavaScript
// Il2CppName: get_AutoConfigurationJavaScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_AutoConfigurationJavaScript)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_AutoConfigurationJavaScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_AutoConfigurationUrl
// Il2CppName: get_AutoConfigurationUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_AutoConfigurationUrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_AutoConfigurationUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_HostName
// Il2CppName: get_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_HostName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_Password)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_Port)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_ProxyType
// Il2CppName: get_ProxyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFProxyType (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_ProxyType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_ProxyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxy::get_Username
// Il2CppName: get_Username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::CFProxy::*)()>(&Mono::Net::CFProxy::get_Username)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxy*), "get_Username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
