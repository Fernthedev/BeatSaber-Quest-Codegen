// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IVersionedPacketPool`1
#include "GlobalNamespace/IVersionedPacketPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: VersionedPacketPool`2
  template<typename T, typename T2>
  class VersionedPacketPool_2 : public ::Il2CppObject/*, public GlobalNamespace::IVersionedPacketPool_1<T>*/ {
    public:
    // private readonly PacketPool`1<T> _basePool
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::PacketPool_1<T>* basePool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketPool_1<T>*) == 0x8);
    // private readonly PacketPool`1<T2> _overridePool
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::PacketPool_1<T2>* overridePool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketPool_1<T2>*) == 0x8);
    // private readonly System.UInt32 _overrideVersion
    // Size: 0x4
    // Offset: 0x0
    uint overrideVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VersionedPacketPool_2
    VersionedPacketPool_2(GlobalNamespace::PacketPool_1<T>* basePool_ = {}, GlobalNamespace::PacketPool_1<T2>* overridePool_ = {}, uint overrideVersion_ = {}) noexcept : basePool{basePool_}, overridePool{overridePool_}, overrideVersion{overrideVersion_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IVersionedPacketPool_1<T>
    operator GlobalNamespace::IVersionedPacketPool_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IVersionedPacketPool_1<T>*>(this);
    }
    // public System.Void .ctor(System.UInt32 overrideVersion)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionedPacketPool_2<T, T2>* New_ctor(uint overrideVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionedPacketPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionedPacketPool_2<T, T2>*, creationType>(overrideVersion)));
    }
    // public T Obtain(System.UInt32 version)
    // Offset: 0xFFFFFFFF
    T Obtain(uint version) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionedPacketPool_2::Obtain");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(version)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, version);
    }
    // public System.Void Release(T packet)
    // Offset: 0xFFFFFFFF
    void Release(T packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionedPacketPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet);
    }
    // public System.Void Release(System.Object o)
    // Offset: 0xFFFFFFFF
    void Release(::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionedPacketPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, o);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionedPacketPool_2::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // VersionedPacketPool`2
  // Could not write size check! Type: VersionedPacketPool`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::VersionedPacketPool_2, "", "VersionedPacketPool`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
