// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer/PendingEncryptionStateList
#include "GlobalNamespace/PacketEncryptionLayer_PendingEncryptionStateList.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public EncryptionUtility/IEncryptionState encryptionState
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EncryptionUtility::IEncryptionState*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::EncryptionUtility::IEncryptionState*
    constexpr operator ::GlobalNamespace::EncryptionUtility::IEncryptionState*() const noexcept {
      return encryptionState;
    }
    // Get instance field reference: public EncryptionUtility/IEncryptionState encryptionState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EncryptionUtility::IEncryptionState*& dyn_encryptionState();
    // public System.Void .ctor()
    // Offset: 0x266E8A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Boolean <Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,EncryptionUtility/IEncryptionState> kvp)
    // Offset: 0x266E9D8
    bool $Remove$b__0(::System::Collections::Generic::KeyValuePair_2<int, ::GlobalNamespace::EncryptionUtility::IEncryptionState*> kvp);
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0), 16 + sizeof(::GlobalNamespace::EncryptionUtility::IEncryptionState*)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateList_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0::$Remove$b__0
// Il2CppName: <Remove>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0::*)(::System::Collections::Generic::KeyValuePair_2<int, ::GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0::$Remove$b__0)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*), "<Remove>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
