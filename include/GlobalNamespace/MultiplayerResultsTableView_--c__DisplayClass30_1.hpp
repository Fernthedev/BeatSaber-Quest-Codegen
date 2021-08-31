// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsTableView/<>c__DisplayClass30_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerResultsTableView::$$c__DisplayClass30_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.RectTransform winnerRectTransform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::RectTransform* winnerRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_1
    $$c__DisplayClass30_1(UnityEngine::RectTransform* winnerRectTransform_ = {}) noexcept : winnerRectTransform{winnerRectTransform_} {}
    // Creating conversion operator: operator UnityEngine::RectTransform*
    constexpr operator UnityEngine::RectTransform*() const noexcept {
      return winnerRectTransform;
    }
    // Get instance field reference: public UnityEngine.RectTransform winnerRectTransform
    UnityEngine::RectTransform*& dyn_winnerRectTransform();
    // System.Void <StartAnimation>b__3(UnityEngine.Vector2 val)
    // Offset: 0x1036774
    void $StartAnimation$b__3(UnityEngine::Vector2 val);
    // public System.Void .ctor()
    // Offset: 0x1036544
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsTableView::$$c__DisplayClass30_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsTableView::$$c__DisplayClass30_1*, creationType>()));
    }
  }; // MultiplayerResultsTableView/<>c__DisplayClass30_1
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsTableView::$$c__DisplayClass30_1), 16 + sizeof(UnityEngine::RectTransform*)> __GlobalNamespace_MultiplayerResultsTableView_$$c__DisplayClass30_1SizeCheck;
  static_assert(sizeof(MultiplayerResultsTableView::$$c__DisplayClass30_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1*, "", "MultiplayerResultsTableView/<>c__DisplayClass30_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1::$StartAnimation$b__3
// Il2CppName: <StartAnimation>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1::*)(UnityEngine::Vector2)>(&GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1::$StartAnimation$b__3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1*), "<StartAnimation>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
