#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData;
}
// Type: ::RumbleData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13932))
// CS Name: RumbleHapticFeedbackPlayer::RumbleData
class CORDL_TYPE ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData(____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData(____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData& operator=(____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData&& o) noexcept = default;
  constexpr ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData& operator=(____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_active, put=__set_active))  active;

constexpr void __set_active(bool value) ;

constexpr bool __get_active() const;

 bool __declspec(property(get=__get_continuous, put=__set_continuous))  continuous;

constexpr void __set_continuous(bool value) ;

constexpr bool __get_continuous() const;

 float_t __declspec(property(get=__get_strength, put=__set_strength))  strength;

constexpr void __set_strength(float_t value) ;

constexpr float_t __get_strength() const;

 float_t __declspec(property(get=__get_endTime, put=__set_endTime))  endTime;

constexpr void __set_endTime(float_t value) ;

constexpr float_t __get_endTime() const;

 float_t __declspec(property(get=__get_frequency, put=__set_frequency))  frequency;

constexpr void __set_frequency(float_t value) ;

constexpr float_t __get_frequency() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData() ;

/// @brief Method .ctor addr 0x1f8b940 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RumbleHapticFeedbackPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13933))
// CS Name: RumbleHapticFeedbackPlayer
class CORDL_TYPE RumbleHapticFeedbackPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RumbleData = ::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData;

/// @brief Convert operator to ::GlobalNamespace::IHapticFeedbackPlayer
constexpr operator  ::GlobalNamespace::IHapticFeedbackPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RumbleHapticFeedbackPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: " const&", def_value: None }]
constexpr RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
constexpr RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RumbleHapticFeedbackPlayer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RumbleHapticFeedbackPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RumbleHapticFeedbackPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RumbleHapticFeedbackPlayer& operator=(RumbleHapticFeedbackPlayer&& o) noexcept = default;
  constexpr RumbleHapticFeedbackPlayer& operator=(RumbleHapticFeedbackPlayer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

/// @brief Field kContinuousRumbleFrameDuration offset 0
static constexpr float_t  kContinuousRumbleFrameDuration{0.016666668};

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>> __declspec(property(get=__get__rumblesByNode, put=__set__rumblesByNode))  _rumblesByNode;

constexpr void __set__rumblesByNode(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>> __get__rumblesByNode() const;


// Methods

/// @brief Method Awake addr 0x1f8b1b0 size 0xe0 virtual false final false
 void Awake() ;

/// @brief Method PlayHapticFeedback addr 0x1f8b290 size 0xc8 virtual true final true
 void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x1f8b478 size 0x40 virtual true final true
 bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method LateUpdate addr 0x1f8b4b8 size 0x4 virtual false final false
 void LateUpdate() ;

/// @brief Method UpdateRumbles addr 0x1f8b4bc size 0x484 virtual false final false
 void UpdateRumbles() ;

/// @brief Method GetRumble addr 0x1f8b358 size 0x120 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData GetRumble(::UnityEngine::XR::XRNode node, ::bs_hook::Il2CppWrapperType preset) ;

// Ctor Parameters []
explicit RumbleHapticFeedbackPlayer() ;

/// @brief Method .ctor addr 0x1f8b948 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RumbleHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RumbleHapticFeedbackPlayer, "", "RumbleHapticFeedbackPlayer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData, "", "RumbleHapticFeedbackPlayer/RumbleData");
