// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnifiedNetworkPlayerModel/<>c <>9
    static GlobalNamespace::UnifiedNetworkPlayerModel::$$c* _get_$$9();
    // Set static field: static public readonly UnifiedNetworkPlayerModel/<>c <>9
    static void _set_$$9(GlobalNamespace::UnifiedNetworkPlayerModel::$$c* value);
    // Get static field: static public System.Comparison`1<UnifiedNetworkPlayerModel/UnifiedNetworkPlayer> <>9__101_0
    static System::Comparison_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*>* _get_$$9__101_0();
    // Set static field: static public System.Comparison`1<UnifiedNetworkPlayerModel/UnifiedNetworkPlayer> <>9__101_0
    static void _set_$$9__101_0(System::Comparison_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*>* value);
    // static private System.Void .cctor()
    // Offset: 0x129971C
    static void _cctor();
    // System.Int32 <PlayerOrderChanged>b__101_0(UnifiedNetworkPlayerModel/UnifiedNetworkPlayer a, UnifiedNetworkPlayerModel/UnifiedNetworkPlayer b)
    // Offset: 0x1299788
    int $PlayerOrderChanged$b__101_0(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* a, GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* b);
    // public System.Void .ctor()
    // Offset: 0x1299780
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$$c*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$$c*, "", "UnifiedNetworkPlayerModel/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c::$PlayerOrderChanged$b__101_0
// Il2CppName: <PlayerOrderChanged>b__101_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::$$c::*)(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*)>(&GlobalNamespace::UnifiedNetworkPlayerModel::$$c::$PlayerOrderChanged$b__101_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("", "UnifiedNetworkPlayerModel/UnifiedNetworkPlayer")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("", "UnifiedNetworkPlayerModel/UnifiedNetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$$c*), "<PlayerOrderChanged>b__101_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
