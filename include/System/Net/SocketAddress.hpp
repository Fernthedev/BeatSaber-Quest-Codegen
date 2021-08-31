// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SocketAddress
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA71D0
  class SocketAddress : public ::Il2CppObject {
    public:
    // System.Int32 m_Size
    // Size: 0x4
    // Offset: 0x10
    int m_Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Size and: m_Buffer
    char __padding0[0x4] = {};
    // System.Byte[] m_Buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* m_Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean m_changed
    // Size: 0x1
    // Offset: 0x20
    bool m_changed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_changed and: m_hash
    char __padding2[0x3] = {};
    // private System.Int32 m_hash
    // Size: 0x4
    // Offset: 0x24
    int m_hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SocketAddress
    SocketAddress(int m_Size_ = {}, ::Array<uint8_t>* m_Buffer_ = {}, bool m_changed_ = {}, int m_hash_ = {}) noexcept : m_Size{m_Size_}, m_Buffer{m_Buffer_}, m_changed{m_changed_}, m_hash{m_hash_} {}
    // Get instance field reference: System.Int32 m_Size
    int& dyn_m_Size();
    // Get instance field reference: System.Byte[] m_Buffer
    ::Array<uint8_t>*& dyn_m_Buffer();
    // Get instance field reference: private System.Boolean m_changed
    bool& dyn_m_changed();
    // Get instance field reference: private System.Int32 m_hash
    int& dyn_m_hash();
    // public System.Net.Sockets.AddressFamily get_Family()
    // Offset: 0x14A3E98
    System::Net::Sockets::AddressFamily get_Family();
    // public System.Int32 get_Size()
    // Offset: 0x14A3EDC
    int get_Size();
    // public System.Byte get_Item(System.Int32 offset)
    // Offset: 0x14A3EE4
    uint8_t get_Item(int offset);
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family, System.Int32 size)
    // Offset: 0x14A3F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAddress* New_ctor(System::Net::Sockets::AddressFamily family, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SocketAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAddress*, creationType>(family, size)));
    }
    // System.Void .ctor(System.Net.IPAddress ipAddress)
    // Offset: 0x14A40BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAddress* New_ctor(System::Net::IPAddress* ipAddress) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SocketAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAddress*, creationType>(ipAddress)));
    }
    // System.Void .ctor(System.Net.IPAddress ipaddress, System.Int32 port)
    // Offset: 0x14A4310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAddress* New_ctor(System::Net::IPAddress* ipaddress, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SocketAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAddress*, creationType>(ipaddress, port)));
    }
    // System.Net.IPAddress GetIPAddress()
    // Offset: 0x14A4378
    System::Net::IPAddress* GetIPAddress();
    // System.Net.IPEndPoint GetIPEndPoint()
    // Offset: 0x14A4568
    System::Net::IPEndPoint* GetIPEndPoint();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x14A461C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14A4710
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x14A485C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.SocketAddress
  #pragma pack(pop)
  static check_size<sizeof(SocketAddress), 36 + sizeof(int)> __System_Net_SocketAddressSizeCheck;
  static_assert(sizeof(SocketAddress) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SocketAddress*, "System.Net", "SocketAddress");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SocketAddress::get_Family
// Il2CppName: get_Family
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::get_Family)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "get_Family", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Net::SocketAddress::*)(int)>(&System::Net::SocketAddress::get_Item)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SocketAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SocketAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SocketAddress::GetIPAddress
// Il2CppName: GetIPAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::GetIPAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "GetIPAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::GetIPEndPoint
// Il2CppName: GetIPEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::GetIPEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "GetIPEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SocketAddress::*)(::Il2CppObject*)>(&System::Net::SocketAddress::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SocketAddress::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::SocketAddress::*)()>(&System::Net::SocketAddress::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SocketAddress*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
