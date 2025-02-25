// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
// Including type: RemoteProcedureCall/TypeWrapper`1
#include "GlobalNamespace/RemoteProcedureCall_TypeWrapper_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IRemoteProcedureCall because it is already included!
}
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
  // WARNING Size may be invalid!
  // Autogenerated type: RemoteProcedureCall`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1, typename T2>
  class RemoteProcedureCall_3 : public GlobalNamespace::RemoteProcedureCall {
    public:
    // private RemoteProcedureCall/TypeWrapper`1<T0> _value0
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0> value0;
    // private RemoteProcedureCall/TypeWrapper`1<T1> _value1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T1> value1;
    // private RemoteProcedureCall/TypeWrapper`1<T2> _value2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T2> value2;
    // Creating value type constructor for type: RemoteProcedureCall_3
    RemoteProcedureCall_3(GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0> value0_ = {}, GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T1> value1_ = {}, GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T2> value2_ = {}) noexcept : value0{value0_}, value1{value1_}, value2{value2_} {}
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private RemoteProcedureCall/TypeWrapper`1<T0> _value0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0>& dyn__value0() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::dyn__value0");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value0"))->offset;
      return *reinterpret_cast<GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private RemoteProcedureCall/TypeWrapper`1<T1> _value1
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T1>& dyn__value1() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::dyn__value1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value1"))->offset;
      return *reinterpret_cast<GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T1>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private RemoteProcedureCall/TypeWrapper`1<T2> _value2
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T2>& dyn__value2() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::dyn__value2");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value2"))->offset;
      return *reinterpret_cast<GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T2>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T0 get_value0()
    // Offset: 0xFFFFFFFF
    T0 get_value0() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::get_value0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T0, false>(___instance_arg, ___internal__method);
    }
    // public System.Void set_value0(T0 value)
    // Offset: 0xFFFFFFFF
    void set_value0(T0 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::set_value0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public T1 get_value1()
    // Offset: 0xFFFFFFFF
    T1 get_value1() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::get_value1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T1, false>(___instance_arg, ___internal__method);
    }
    // public System.Void set_value1(T1 value)
    // Offset: 0xFFFFFFFF
    void set_value1(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::set_value1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public T2 get_value2()
    // Offset: 0xFFFFFFFF
    T2 get_value2() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::get_value2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T2, false>(___instance_arg, ___internal__method);
    }
    // public System.Void set_value2(T2 value)
    // Offset: 0xFFFFFFFF
    void set_value2(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::set_value2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public IRemoteProcedureCall Init(System.Single syncTime, T0 value0, T1 value1, T2 value2)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IRemoteProcedureCall* Init(float syncTime, T0 value0, T1 value1, T2 value2) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(syncTime), ::il2cpp_utils::ExtractType(value0), ::il2cpp_utils::ExtractType(value1), ::il2cpp_utils::ExtractType(value2)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IRemoteProcedureCall*, false>(___instance_arg, ___internal__method, syncTime, value0, value1, value2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteProcedureCall_3<T0, T1, T2>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteProcedureCall_3<T0, T1, T2>*, creationType>()));
    }
    // protected override System.Void SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    void SerializeData(LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::SerializeData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializeData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, writer);
    }
    // protected override System.Void DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    void DeserializeData(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_3::DeserializeData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DeserializeData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, reader);
    }
  }; // RemoteProcedureCall`3
  // Could not write size check! Type: RemoteProcedureCall`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_3, "", "RemoteProcedureCall`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
