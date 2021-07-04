// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockBeatmapLoader
#include "GlobalNamespace/MockBeatmapLoader.hpp"
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
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapLoader/<>c
  // [CompilerGeneratedAttribute] Offset: E121D8
  class MockBeatmapLoader::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MockBeatmapLoader/<>c <>9
    static GlobalNamespace::MockBeatmapLoader::$$c* _get_$$9();
    // Set static field: static public readonly MockBeatmapLoader/<>c <>9
    static void _set_$$9(GlobalNamespace::MockBeatmapLoader::$$c* value);
    // Get static field: static public System.Func`2<IDifficultyBeatmapSet,System.Collections.Generic.IEnumerable`1<IDifficultyBeatmap>> <>9__2_1
    static System::Func_2<GlobalNamespace::IDifficultyBeatmapSet*, System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap*>*>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<IDifficultyBeatmapSet,System.Collections.Generic.IEnumerable`1<IDifficultyBeatmap>> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<GlobalNamespace::IDifficultyBeatmapSet*, System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x109E6B4
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<IDifficultyBeatmap> <GetBeatmapData>b__2_1(IDifficultyBeatmapSet bds)
    // Offset: 0x109E720
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap*>* $GetBeatmapData$b__2_1(GlobalNamespace::IDifficultyBeatmapSet* bds);
    // public System.Void .ctor()
    // Offset: 0x109E718
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapLoader::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockBeatmapLoader::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapLoader::$$c*, creationType>()));
    }
  }; // MockBeatmapLoader/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapLoader::$$c*, "", "MockBeatmapLoader/<>c");
// Writing includes for template specializations
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MockBeatmapLoader::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c::$GetBeatmapData$b__2_1
// Il2CppName: <GetBeatmapData>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::MockBeatmapLoader::$$c::*)(GlobalNamespace::IDifficultyBeatmapSet*)>(&GlobalNamespace::MockBeatmapLoader::$$c::$GetBeatmapData$b__2_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$$c*), "<GetBeatmapData>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmapSet*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
