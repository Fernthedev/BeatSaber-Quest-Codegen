// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GameplayServerConfiguration
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct GameplayServerConfiguration/*, public System::ValueType, public System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>*/ {
    public:
    // public readonly BeatmapDifficultyMask difficulties
    // Size: 0x1
    // Offset: 0x0
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding0[0x1] = {};
    // public readonly GameplayModifierMask modifiers
    // Size: 0x2
    // Offset: 0x2
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // Padding between fields: modifiers and: songPacks
    char __padding1[0x4] = {};
    // public readonly SongPackMask songPacks
    // Size: 0x10
    // Offset: 0x8
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // Creating value type constructor for type: GameplayServerConfiguration
    constexpr GameplayServerConfiguration(GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}) noexcept : difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>
    operator System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // public System.Void .ctor(BeatmapDifficultyMask difficulties, GameplayModifierMask modifiers, SongPackMask songPacks)
    // Offset: 0xEE8B08
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GameplayServerConfiguration(GlobalNamespace::BeatmapDifficultyMask difficulties, GlobalNamespace::GameplayModifierMask modifiers, GlobalNamespace::SongPackMask songPacks)
    // public System.Boolean Equals(GameplayServerConfiguration other)
    // Offset: 0xEE8B20
    bool Equals(GlobalNamespace::GameplayServerConfiguration other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xEE8B8C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public GameplayServerConfiguration CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xEE8B94
    GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public GameplayServerConfiguration Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x132E3F0
    static GlobalNamespace::GameplayServerConfiguration Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEE8B18
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEE8B58
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // GameplayServerConfiguration
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerConfiguration), 8 + sizeof(GlobalNamespace::SongPackMask)> __GlobalNamespace_GameplayServerConfigurationSizeCheck;
  static_assert(sizeof(GameplayServerConfiguration) == 0x18);
  // static public System.Boolean op_Equality(GameplayServerConfiguration l, GameplayServerConfiguration r)
  // Offset: 0x132E458
  bool operator ==(const GlobalNamespace::GameplayServerConfiguration& l, const GlobalNamespace::GameplayServerConfiguration& r);
  // static public System.Boolean op_Inequality(GameplayServerConfiguration l, GameplayServerConfiguration r)
  // Offset: 0x132E498
  bool operator !=(const GlobalNamespace::GameplayServerConfiguration& l, const GlobalNamespace::GameplayServerConfiguration& r);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
// Writing includes for template specializations
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::GameplayServerConfiguration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerConfiguration::*)(GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GameplayServerConfiguration::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerConfiguration>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerConfiguration::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::GameplayServerConfiguration::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::GameplayServerConfiguration::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerConfiguration::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerConfiguration::*)(::Il2CppObject*)>(&GlobalNamespace::GameplayServerConfiguration::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayServerConfiguration::*)()>(&GlobalNamespace::GameplayServerConfiguration::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
