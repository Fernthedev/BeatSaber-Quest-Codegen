// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSpectatingSpotManager
#include "GlobalNamespace/MultiplayerSpectatingSpotManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSpectatingSpot
  class IMultiplayerSpectatingSpot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSpectatingSpotManager/<>c
  // [CompilerGeneratedAttribute] Offset: E12338
  class MultiplayerSpectatingSpotManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerSpectatingSpotManager/<>c <>9
    static GlobalNamespace::MultiplayerSpectatingSpotManager::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerSpectatingSpotManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerSpectatingSpotManager::$$c* value);
    // Get static field: static public System.Func`2<IMultiplayerSpectatingSpot,System.Boolean> <>9__3_0
    static System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<IMultiplayerSpectatingSpot,System.Boolean> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1012D0C
    static void _cctor();
    // System.Boolean <get_defaultSpot>b__3_0(IMultiplayerSpectatingSpot s)
    // Offset: 0x1012D78
    bool $get_defaultSpot$b__3_0(GlobalNamespace::IMultiplayerSpectatingSpot* s);
    // public System.Void .ctor()
    // Offset: 0x1012D70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSpectatingSpotManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSpectatingSpotManager::$$c*, creationType>()));
    }
  }; // MultiplayerSpectatingSpotManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatingSpotManager::$$c*, "", "MultiplayerSpectatingSpotManager/<>c");
// Writing includes for template specializations
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::$get_defaultSpot$b__3_0
// Il2CppName: <get_defaultSpot>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::*)(GlobalNamespace::IMultiplayerSpectatingSpot*)>(&GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::$get_defaultSpot$b__3_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotManager::$$c*), "<get_defaultSpot>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IMultiplayerSpectatingSpot*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
