// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: DiffieHellmanUtility/ElipticalCurveKeyPair
#include "GlobalNamespace/DiffieHellmanUtility_ElipticalCurveKeyPair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public DiffieHellmanUtility/ElipticalCurveKeyPair <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*) == 0x8);
    // public System.Byte[] clientPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* clientPublicKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* $$4__this_ = {}, ::Array<uint8_t>* clientPublicKey_ = {}) noexcept : $$4__this{$$4__this_}, clientPublicKey{clientPublicKey_} {}
    // Get instance field reference: public DiffieHellmanUtility/ElipticalCurveKeyPair <>4__this
    GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] clientPublicKey
    ::Array<uint8_t>*& dyn_clientPublicKey();
    // System.Byte[] <GetPreMasterSecretAsync>b__0()
    // Offset: 0x1325200
    ::Array<uint8_t>* $GetPreMasterSecretAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x1325180
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_DiffieHellmanUtility_ElipticalCurveKeyPair_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::$GetPreMasterSecretAsync$b__0
// Il2CppName: <GetPreMasterSecretAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::$GetPreMasterSecretAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*), "<GetPreMasterSecretAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
