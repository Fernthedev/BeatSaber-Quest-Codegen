#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RumbleHapticFeedbackPlayer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class __RumbleHapticFeedbackPlayer__RumbleData;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class __RumbleHapticFeedbackPlayer__RumbleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RumbleHapticFeedbackPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData);
// Type: ::RumbleData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14431))
// CS Name: ::RumbleHapticFeedbackPlayer::RumbleData*
class CORDL_TYPE __RumbleHapticFeedbackPlayer__RumbleData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field active offset 0x10
 __declspec(property(get=__get_active, put=__set_active)) bool  active;

/// @brief Field continuous offset 0x11
 __declspec(property(get=__get_continuous, put=__set_continuous)) bool  continuous;

/// @brief Field strength offset 0x14
 __declspec(property(get=__get_strength, put=__set_strength)) float_t  strength;

/// @brief Field endTime offset 0x18
 __declspec(property(get=__get_endTime, put=__set_endTime)) float_t  endTime;

/// @brief Field frequency offset 0x1c
 __declspec(property(get=__get_frequency, put=__set_frequency)) float_t  frequency;

constexpr void __set_active(bool  value) ;

constexpr bool& __get_active() ;

constexpr bool const& __get_active() const;

constexpr void __set_continuous(bool  value) ;

constexpr bool& __get_continuous() ;

constexpr bool const& __get_continuous() const;

constexpr void __set_strength(float_t  value) ;

constexpr float_t& __get_strength() ;

constexpr float_t const& __get_strength() const;

constexpr void __set_endTime(float_t  value) ;

constexpr float_t& __get_endTime() ;

constexpr float_t const& __get_endTime() const;

constexpr void __set_frequency(float_t  value) ;

constexpr float_t& __get_frequency() ;

constexpr float_t const& __get_frequency() const;

static inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* New_ctor() ;

/// @brief Method .ctor addr 0x20fd260 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RumbleHapticFeedbackPlayer__RumbleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RumbleHapticFeedbackPlayer__RumbleData(__RumbleHapticFeedbackPlayer__RumbleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RumbleHapticFeedbackPlayer__RumbleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RumbleHapticFeedbackPlayer__RumbleData(__RumbleHapticFeedbackPlayer__RumbleData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RumbleHapticFeedbackPlayer__RumbleData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RumbleHapticFeedbackPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14432))
// CS Name: ::RumbleHapticFeedbackPlayer*
class CORDL_TYPE RumbleHapticFeedbackPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RumbleData = ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kContinuousRumbleFrameDuration offset 0x0
static constexpr float_t  kContinuousRumbleFrameDuration{0.016666668};

/// @brief Field _vrPlatformHelper offset 0x18
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field _rumblesByNode offset 0x20
 __declspec(property(get=__get__rumblesByNode, put=__set__rumblesByNode)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::System::Object*,::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*  _rumblesByNode;

/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr operator  ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set__rumblesByNode(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::System::Object*,::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::System::Object*,::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>* __get__rumblesByNode() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::System::Collections::Generic::Dictionary_2<::System::Object*,::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*> __get__rumblesByNode() const;

/// @brief Method Awake addr 0x20fcb98 size 0xe0 virtual false final false
inline void Awake() ;

/// @brief Method PlayHapticFeedback addr 0x20f6f44 size 0xc8 virtual true final true
inline void PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x20fcd98 size 0x40 virtual true final true
inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method LateUpdate addr 0x20fcdd8 size 0x4 virtual false final false
inline void LateUpdate() ;

/// @brief Method UpdateRumbles addr 0x20fcddc size 0x484 virtual false final false
inline void UpdateRumbles() ;

/// @brief Method GetRumble addr 0x20fcc78 size 0x120 virtual false final false
inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* GetRumble(::UnityEngine::XR::XRNode  node, ::System::Object*  preset) ;

static inline ::GlobalNamespace::RumbleHapticFeedbackPlayer* New_ctor() ;

/// @brief Method .ctor addr 0x20fd268 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RumbleHapticFeedbackPlayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RumbleHapticFeedbackPlayer, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RumbleHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RumbleHapticFeedbackPlayer*, "", "RumbleHapticFeedbackPlayer");
NEED_NO_BOX(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*, "", "RumbleHapticFeedbackPlayer/RumbleData");
