// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreRingItem
  class MultiplayerScoreRingItem : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerScoreRingItem::Pool
    class Pool;
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xE1ECC4
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _nameColorTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Tween_1<UnityEngine::Color>* nameColorTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Color>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _scoreColorTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<UnityEngine::Color>* scoreColorTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: MultiplayerScoreRingItem
    MultiplayerScoreRingItem(TMPro::TextMeshProUGUI* scoreText_ = {}, TMPro::TextMeshProUGUI* nameText_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<UnityEngine::Color>* nameColorTween_ = {}, Tweening::Tween_1<UnityEngine::Color>* scoreColorTween_ = {}) noexcept : scoreText{scoreText_}, nameText{nameText_}, tweeningManager{tweeningManager_}, nameColorTween{nameColorTween_}, scoreColorTween{scoreColorTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1010420
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10105E8
    void OnDestroy();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1010680
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void AnimateColors(UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x10106FC
    void AnimateColors(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType);
    // public System.Void SetName(System.String text)
    // Offset: 0x101082C
    void SetName(::Il2CppString* text);
    // public System.Void SetScore(System.String text)
    // Offset: 0x1010848
    void SetScore(::Il2CppString* text);
    // private System.Void <Awake>b__6_0(UnityEngine.Color val)
    // Offset: 0x101086C
    void $Awake$b__6_0(UnityEngine::Color val);
    // private System.Void <Awake>b__6_1(UnityEngine.Color val)
    // Offset: 0x1010890
    void $Awake$b__6_1(UnityEngine::Color val);
    // public System.Void .ctor()
    // Offset: 0x1010864
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreRingItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreRingItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreRingItem*, creationType>()));
    }
  }; // MultiplayerScoreRingItem
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreRingItem), 56 + sizeof(Tweening::Tween_1<UnityEngine::Color>*)> __GlobalNamespace_MultiplayerScoreRingItemSizeCheck;
  static_assert(sizeof(MultiplayerScoreRingItem) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
// Writing includes for template specializations
#include "Tweening/EaseType.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)()>(&GlobalNamespace::MultiplayerScoreRingItem::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)()>(&GlobalNamespace::MultiplayerScoreRingItem::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::MultiplayerScoreRingItem::SetPositionAndRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::AnimateColors
// Il2CppName: AnimateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(UnityEngine::Color, UnityEngine::Color, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerScoreRingItem::AnimateColors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "AnimateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<Tweening::EaseType>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetName
// Il2CppName: SetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerScoreRingItem::SetName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetScore
// Il2CppName: SetScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerScoreRingItem::SetScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_0
// Il2CppName: <Awake>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(UnityEngine::Color)>(&GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "<Awake>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_1
// Il2CppName: <Awake>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(UnityEngine::Color)>(&GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "<Awake>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
