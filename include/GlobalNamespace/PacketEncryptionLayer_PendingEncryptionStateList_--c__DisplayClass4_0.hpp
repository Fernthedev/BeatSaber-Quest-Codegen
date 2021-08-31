// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer/PendingEncryptionStateList
#include "GlobalNamespace/PacketEncryptionLayer_PendingEncryptionStateList.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x10
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(int port_ = {}) noexcept : port{port_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return port;
    }
    // Get instance field: public System.Int32 port
    int _get_port();
    // Set instance field: public System.Int32 port
    void _set_port(int value);
    // System.Int32 <GetSortedEncryptionStates>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,EncryptionUtility/IEncryptionState> kvp)
    // Offset: 0x16F2B40
    int $GetSortedEncryptionStates$b__0(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x16F2A80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0), 16 + sizeof(int)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateList_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0::$GetSortedEncryptionStates$b__0
// Il2CppName: <GetSortedEncryptionStates>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0::*)(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0::$GetSortedEncryptionStates$b__0)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0*), "<GetSortedEncryptionStates>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
