// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AuthenticationToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct AuthenticationToken/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>*/ {
    public:
    // Nested type: GlobalNamespace::AuthenticationToken::Platform
    struct Platform;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: AuthenticationToken/Platform
    // [TokenAttribute] Offset: FFFFFFFF
    struct Platform/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Platform
      constexpr Platform(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public AuthenticationToken/Platform Test
      static constexpr const uint8_t Test = 0u;
      // Get static field: static public AuthenticationToken/Platform Test
      static GlobalNamespace::AuthenticationToken::Platform _get_Test();
      // Set static field: static public AuthenticationToken/Platform Test
      static void _set_Test(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusRift
      static constexpr const uint8_t OculusRift = 1u;
      // Get static field: static public AuthenticationToken/Platform OculusRift
      static GlobalNamespace::AuthenticationToken::Platform _get_OculusRift();
      // Set static field: static public AuthenticationToken/Platform OculusRift
      static void _set_OculusRift(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusQuest
      static constexpr const uint8_t OculusQuest = 2u;
      // Get static field: static public AuthenticationToken/Platform OculusQuest
      static GlobalNamespace::AuthenticationToken::Platform _get_OculusQuest();
      // Set static field: static public AuthenticationToken/Platform OculusQuest
      static void _set_OculusQuest(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Steam
      static constexpr const uint8_t Steam = 3u;
      // Get static field: static public AuthenticationToken/Platform Steam
      static GlobalNamespace::AuthenticationToken::Platform _get_Steam();
      // Set static field: static public AuthenticationToken/Platform Steam
      static void _set_Steam(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4
      static constexpr const uint8_t PS4 = 4u;
      // Get static field: static public AuthenticationToken/Platform PS4
      static GlobalNamespace::AuthenticationToken::Platform _get_PS4();
      // Set static field: static public AuthenticationToken/Platform PS4
      static void _set_PS4(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4Dev
      static constexpr const uint8_t PS4Dev = 5u;
      // Get static field: static public AuthenticationToken/Platform PS4Dev
      static GlobalNamespace::AuthenticationToken::Platform _get_PS4Dev();
      // Set static field: static public AuthenticationToken/Platform PS4Dev
      static void _set_PS4Dev(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4Cert
      static constexpr const uint8_t PS4Cert = 6u;
      // Get static field: static public AuthenticationToken/Platform PS4Cert
      static GlobalNamespace::AuthenticationToken::Platform _get_PS4Cert();
      // Set static field: static public AuthenticationToken/Platform PS4Cert
      static void _set_PS4Cert(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Oculus
      static constexpr const uint8_t Oculus = 2u;
      // Get static field: static public AuthenticationToken/Platform Oculus
      static GlobalNamespace::AuthenticationToken::Platform _get_Oculus();
      // Set static field: static public AuthenticationToken/Platform Oculus
      static void _set_Oculus(GlobalNamespace::AuthenticationToken::Platform value);
      // Get instance field reference: public System.Byte value__
      uint8_t& dyn_value__();
    }; // AuthenticationToken/Platform
    #pragma pack(pop)
    static check_size<sizeof(AuthenticationToken::Platform), 0 + sizeof(uint8_t)> __GlobalNamespace_AuthenticationToken_PlatformSizeCheck;
    static_assert(sizeof(AuthenticationToken::Platform) == 0x1);
    // public readonly AuthenticationToken/Platform platform
    // Size: 0x1
    // Offset: 0x0
    GlobalNamespace::AuthenticationToken::Platform platform;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AuthenticationToken::Platform) == 0x1);
    // Padding between fields: platform and: userId
    char __padding0[0x7] = {};
    // public readonly System.String userId
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String userName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Byte[] sessionToken
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* sessionToken;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AuthenticationToken
    constexpr AuthenticationToken(GlobalNamespace::AuthenticationToken::Platform platform_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Array<uint8_t>* sessionToken_ = {}) noexcept : platform{platform_}, userId{userId_}, userName{userName_}, sessionToken{sessionToken_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>*>(this);
    }
    // Get instance field reference: public readonly AuthenticationToken/Platform platform
    GlobalNamespace::AuthenticationToken::Platform& dyn_platform();
    // Get instance field reference: public readonly System.String userId
    ::Il2CppString*& dyn_userId();
    // Get instance field reference: public readonly System.String userName
    ::Il2CppString*& dyn_userName();
    // Get instance field reference: public readonly System.Byte[] sessionToken
    ::Array<uint8_t>*& dyn_sessionToken();
    // public System.Void .ctor(AuthenticationToken/Platform platform, System.String userId, System.String userName, System.Byte[] sessionToken)
    // Offset: 0x1334D94
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AuthenticationToken(GlobalNamespace::AuthenticationToken::Platform platform, ::Il2CppString* userId, ::Il2CppString* userName, ::Array<uint8_t>* sessionToken)
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1334DA4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public AuthenticationToken CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1334E20
    GlobalNamespace::AuthenticationToken CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public AuthenticationToken Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1334E28
    static GlobalNamespace::AuthenticationToken Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // AuthenticationToken
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationToken), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_AuthenticationTokenSizeCheck;
  static_assert(sizeof(AuthenticationToken) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationToken::Platform, "", "AuthenticationToken/Platform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::AuthenticationToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AuthenticationToken::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::AuthenticationToken::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken (GlobalNamespace::AuthenticationToken::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::AuthenticationToken::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::AuthenticationToken::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
