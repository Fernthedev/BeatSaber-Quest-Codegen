// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapIdentifierNetSerializable
  // [PreserveAttribute] Offset: DE2650
  class BeatmapIdentifierNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE2760
    // private System.String <levelID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE2770
    // private System.String <beatmapCharacteristicSerializedName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE2780
    // private BeatmapDifficulty <difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: BeatmapIdentifierNetSerializable
    BeatmapIdentifierNetSerializable(::Il2CppString* levelID_ = {}, ::Il2CppString* beatmapCharacteristicSerializedName_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}) noexcept : levelID{levelID_}, beatmapCharacteristicSerializedName{beatmapCharacteristicSerializedName_}, difficulty{difficulty_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>
    operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0x23449A8
    ::Il2CppString* get_levelID();
    // private System.Void set_levelID(System.String value)
    // Offset: 0x23449B0
    void set_levelID(::Il2CppString* value);
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x23449B8
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // private System.Void set_beatmapCharacteristicSerializedName(System.String value)
    // Offset: 0x23449C0
    void set_beatmapCharacteristicSerializedName(::Il2CppString* value);
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x23449C8
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // private System.Void set_difficulty(BeatmapDifficulty value)
    // Offset: 0x23449D0
    void set_difficulty(GlobalNamespace::BeatmapDifficulty value);
    // public System.Void .ctor(System.String levelID, System.String beatmapCharacteristicSerializedName, BeatmapDifficulty difficulty)
    // Offset: 0x23449E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor(::Il2CppString* levelID, ::Il2CppString* beatmapCharacteristicSerializedName, GlobalNamespace::BeatmapDifficulty difficulty) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>(levelID, beatmapCharacteristicSerializedName, difficulty)));
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2344A20
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2344A88
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Boolean Equals(BeatmapIdentifierNetSerializable other)
    // Offset: 0x2344AE0
    bool Equals(GlobalNamespace::BeatmapIdentifierNetSerializable* other);
    // public System.Void .ctor()
    // Offset: 0x23449D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2344B54
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2344C64
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2344CCC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // BeatmapIdentifierNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(BeatmapIdentifierNetSerializable), 32 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_BeatmapIdentifierNetSerializableSizeCheck;
  static_assert(sizeof(BeatmapIdentifierNetSerializable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapIdentifierNetSerializable*, "", "BeatmapIdentifierNetSerializable");
// Writing includes for template specializations
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_levelID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_levelID
// Il2CppName: set_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_levelID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_beatmapCharacteristicSerializedName
// Il2CppName: get_beatmapCharacteristicSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_beatmapCharacteristicSerializedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_beatmapCharacteristicSerializedName
// Il2CppName: set_beatmapCharacteristicSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_beatmapCharacteristicSerializedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_difficulty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_difficulty
// Il2CppName: set_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_difficulty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDifficulty>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "LiteNetLib.Utils.INetSerializable.Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "LiteNetLib.Utils.INetSerializable.Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(GlobalNamespace::BeatmapIdentifierNetSerializable*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapIdentifierNetSerializable*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
