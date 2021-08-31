// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFProxySettings
  // [TokenAttribute] Offset: FFFFFFFF
  class CFProxySettings : public ::Il2CppObject {
    public:
    // private Mono.Net.CFDictionary settings
    // Size: 0x8
    // Offset: 0x10
    Mono::Net::CFDictionary* settings;
    // Field size check
    static_assert(sizeof(Mono::Net::CFDictionary*) == 0x8);
    // Creating value type constructor for type: CFProxySettings
    CFProxySettings(Mono::Net::CFDictionary* settings_ = {}) noexcept : settings{settings_} {}
    // Creating conversion operator: operator Mono::Net::CFDictionary*
    constexpr operator Mono::Net::CFDictionary*() const noexcept {
      return settings;
    }
    // Get static field: static private System.IntPtr kCFNetworkProxiesHTTPEnable
    static System::IntPtr _get_kCFNetworkProxiesHTTPEnable();
    // Set static field: static private System.IntPtr kCFNetworkProxiesHTTPEnable
    static void _set_kCFNetworkProxiesHTTPEnable(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFNetworkProxiesHTTPPort
    static System::IntPtr _get_kCFNetworkProxiesHTTPPort();
    // Set static field: static private System.IntPtr kCFNetworkProxiesHTTPPort
    static void _set_kCFNetworkProxiesHTTPPort(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFNetworkProxiesHTTPProxy
    static System::IntPtr _get_kCFNetworkProxiesHTTPProxy();
    // Set static field: static private System.IntPtr kCFNetworkProxiesHTTPProxy
    static void _set_kCFNetworkProxiesHTTPProxy(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigEnable
    static System::IntPtr _get_kCFNetworkProxiesProxyAutoConfigEnable();
    // Set static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigEnable
    static void _set_kCFNetworkProxiesProxyAutoConfigEnable(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigJavaScript
    static System::IntPtr _get_kCFNetworkProxiesProxyAutoConfigJavaScript();
    // Set static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigJavaScript
    static void _set_kCFNetworkProxiesProxyAutoConfigJavaScript(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigURLString
    static System::IntPtr _get_kCFNetworkProxiesProxyAutoConfigURLString();
    // Set static field: static private System.IntPtr kCFNetworkProxiesProxyAutoConfigURLString
    static void _set_kCFNetworkProxiesProxyAutoConfigURLString(System::IntPtr value);
    // Get instance field reference: private Mono.Net.CFDictionary settings
    Mono::Net::CFDictionary*& dyn_settings();
    // public Mono.Net.CFDictionary get_Dictionary()
    // Offset: 0x15E499C
    Mono::Net::CFDictionary* get_Dictionary();
    // static private System.Void .cctor()
    // Offset: 0x15E4880
    static void _cctor();
    // public System.Void .ctor(Mono.Net.CFDictionary settings)
    // Offset: 0x15E2BB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFProxySettings* New_ctor(Mono::Net::CFDictionary* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFProxySettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFProxySettings*, creationType>(settings)));
    }
  }; // Mono.Net.CFProxySettings
  #pragma pack(pop)
  static check_size<sizeof(CFProxySettings), 16 + sizeof(Mono::Net::CFDictionary*)> __Mono_Net_CFProxySettingsSizeCheck;
  static_assert(sizeof(CFProxySettings) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFProxySettings*, "Mono.Net", "CFProxySettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFProxySettings::get_Dictionary
// Il2CppName: get_Dictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFDictionary* (Mono::Net::CFProxySettings::*)()>(&Mono::Net::CFProxySettings::get_Dictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxySettings*), "get_Dictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxySettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFProxySettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFProxySettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFProxySettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
