// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1
  // [CompilerGeneratedAttribute] Offset: DCC458
  template<typename T>
  class NetPacketProcessor::$$c__DisplayClass25_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`1<T> packetConstructor
    // Size: 0x8
    // Offset: 0x0
    System::Func_1<T>* packetConstructor;
    // Field size check
    static_assert(sizeof(System::Func_1<T>*) == 0x8);
    // public LiteNetLib.Utils.NetPacketProcessor <>4__this
    // Size: 0x8
    // Offset: 0x0
    LiteNetLib::Utils::NetPacketProcessor* $$4__this;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetPacketProcessor*) == 0x8);
    // public System.Action`1<T> onReceive
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<T>* onReceive;
    // Field size check
    static_assert(sizeof(System::Action_1<T>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass25_0_1
    $$c__DisplayClass25_0_1(System::Func_1<T>* packetConstructor_ = {}, LiteNetLib::Utils::NetPacketProcessor* $$4__this_ = {}, System::Action_1<T>* onReceive_ = {}) noexcept : packetConstructor{packetConstructor_}, $$4__this{$$4__this_}, onReceive{onReceive_} {}
    // System.Void <Subscribe>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFF
    void $Subscribe$b__0(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1::<Subscribe>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Subscribe>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(userData)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, userData);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::$$c__DisplayClass25_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass25_0_1<T>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass25_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
