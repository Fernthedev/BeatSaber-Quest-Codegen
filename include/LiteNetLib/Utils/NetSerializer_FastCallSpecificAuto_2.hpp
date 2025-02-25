// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecific`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecific_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecificAuto`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TClass, typename TProperty>
  class NetSerializer::FastCallSpecificAuto_2 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<TClass, TProperty> {
    public:
    // Creating value type constructor for type: FastCallSpecificAuto_2
    FastCallSpecificAuto_2() noexcept {}
    // protected System.Void ElementRead(LiteNetLib.Utils.NetDataReader r, out TProperty prop)
    // Offset: 0xFFFFFFFF
    void ElementRead(LiteNetLib::Utils::NetDataReader* r, ByRef<TProperty> prop) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::ElementRead");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ElementRead", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(r), ::il2cpp_utils::ExtractIndependentType<TProperty&>()})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, r, byref(prop));
    }
    // protected System.Void ElementWrite(LiteNetLib.Utils.NetDataWriter w, ref TProperty prop)
    // Offset: 0xFFFFFFFF
    void ElementWrite(LiteNetLib::Utils::NetDataWriter* w, ByRef<TProperty> prop) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::ElementWrite");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ElementWrite", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(w), ::il2cpp_utils::ExtractType(prop)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, w, byref(prop));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecific`2
    // Base method: System.Void FastCallSpecific_2::.ctor()
    // Base method: System.Void FastCall_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCallSpecificAuto_2<TClass, TProperty>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCallSpecificAuto_2<TClass, TProperty>*, creationType>()));
    }
    // public override System.Void Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void Read(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::Read");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, inf, r);
    }
    // public override System.Void Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::Write");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, inf, w);
    }
    // public override System.Void ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::ReadArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, inf, r);
    }
    // public override System.Void WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2::WriteArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecificAuto`2
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecificAuto`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecificAuto`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
