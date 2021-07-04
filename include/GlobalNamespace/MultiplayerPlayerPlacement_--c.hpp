// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerPlayerPlacement
#include "GlobalNamespace/MultiplayerPlayerPlacement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayerPlacement/<>c
  // [CompilerGeneratedAttribute] Offset: E122F8
  class MultiplayerPlayerPlacement::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerPlayerPlacement/<>c <>9
    static GlobalNamespace::MultiplayerPlayerPlacement::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerPlayerPlacement/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerPlayerPlacement::$$c* value);
    // Get static field: static public System.Comparison`1<IConnectedPlayer> <>9__4_0
    static System::Comparison_1<GlobalNamespace::IConnectedPlayer*>* _get_$$9__4_0();
    // Set static field: static public System.Comparison`1<IConnectedPlayer> <>9__4_0
    static void _set_$$9__4_0(System::Comparison_1<GlobalNamespace::IConnectedPlayer*>* value);
    // static private System.Void .cctor()
    // Offset: 0x100A820
    static void _cctor();
    // System.Int32 <SortPlayers>b__4_0(IConnectedPlayer p1, IConnectedPlayer p2)
    // Offset: 0x100A88C
    int $SortPlayers$b__4_0(GlobalNamespace::IConnectedPlayer* p1, GlobalNamespace::IConnectedPlayer* p2);
    // public System.Void .ctor()
    // Offset: 0x100A884
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPlayerPlacement::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerPlayerPlacement::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPlayerPlacement::$$c*, creationType>()));
    }
  }; // MultiplayerPlayerPlacement/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerPlacement::$$c*, "", "MultiplayerPlayerPlacement/<>c");
// Writing includes for template specializations
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerPlayerPlacement::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::$$c::$SortPlayers$b__4_0
// Il2CppName: <SortPlayers>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerPlayerPlacement::$$c::*)(GlobalNamespace::IConnectedPlayer*, GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerPlayerPlacement::$$c::$SortPlayers$b__4_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement::$$c*), "<SortPlayers>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IConnectedPlayer*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IConnectedPlayer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
