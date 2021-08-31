// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RandomNumberGenerator
#include "System/Security/Cryptography/RandomNumberGenerator.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RNGCryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class RNGCryptoServiceProvider : public System::Security::Cryptography::RandomNumberGenerator {
    public:
    // private System.IntPtr _handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RNGCryptoServiceProvider
    RNGCryptoServiceProvider(System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return handle;
    }
    // Get static field: static private System.Object _lock
    static ::Il2CppObject* _get__lock();
    // Set static field: static private System.Object _lock
    static void _set__lock(::Il2CppObject* value);
    // Get instance field: private System.IntPtr _handle
    System::IntPtr _get__handle();
    // Set instance field: private System.IntPtr _handle
    void _set__handle(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x1B3AA98
    static void _cctor();
    // private System.Void Check()
    // Offset: 0x1B3AB98
    void Check();
    // static private System.Boolean RngOpen()
    // Offset: 0x1B3AB0C
    static bool RngOpen();
    // static private System.IntPtr RngInitialize(System.Byte[] seed)
    // Offset: 0x1B3AB94
    static System::IntPtr RngInitialize(::Array<uint8_t>* seed);
    // static private System.IntPtr RngGetBytes(System.IntPtr handle, System.Byte[] data)
    // Offset: 0x1B3AC3C
    static System::IntPtr RngGetBytes(System::IntPtr handle, ::Array<uint8_t>* data);
    // static private System.Void RngClose(System.IntPtr handle)
    // Offset: 0x1B3AC40
    static void RngClose(System::IntPtr handle);
    // public System.Void .ctor()
    // Offset: 0x1B3AB10
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RNGCryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RNGCryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RNGCryptoServiceProvider*, creationType>()));
    }
    // public override System.Void GetBytes(System.Byte[] data)
    // Offset: 0x1B3AC44
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::GetBytes(System.Byte[] data)
    void GetBytes(::Array<uint8_t>* data);
    // protected override System.Void Finalize()
    // Offset: 0x1B3ADE8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1B3AEB8
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.RNGCryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(RNGCryptoServiceProvider), 16 + sizeof(System::IntPtr)> __System_Security_Cryptography_RNGCryptoServiceProviderSizeCheck;
  static_assert(sizeof(RNGCryptoServiceProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RNGCryptoServiceProvider*, "System.Security.Cryptography", "RNGCryptoServiceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RNGCryptoServiceProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(&System::Security::Cryptography::RNGCryptoServiceProvider::Check)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen
// Il2CppName: RngOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "RngOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize
// Il2CppName: RngInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize)> {
  static const MethodInfo* get() {
    static auto* seed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "RngInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes
// Il2CppName: RngGetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Array<uint8_t>*)>(&System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "RngGetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, data});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::RngClose
// Il2CppName: RngClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&System::Security::Cryptography::RNGCryptoServiceProvider::RngClose)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "RngClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RNGCryptoServiceProvider::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(&System::Security::Cryptography::RNGCryptoServiceProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RNGCryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RNGCryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::RNGCryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RNGCryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
