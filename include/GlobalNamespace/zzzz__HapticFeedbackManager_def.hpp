#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HapticFeedbackManager)
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticFeedbackManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticFeedbackManager);
// Type: ::HapticFeedbackManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14409))
// CS Name: ::HapticFeedbackManager*
class CORDL_TYPE HapticFeedbackManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _controllersRumbleEnabled offset 0x18
 __declspec(property(get=__get__controllersRumbleEnabled, put=__set__controllersRumbleEnabled)) ::GlobalNamespace::BoolSO*  _controllersRumbleEnabled;

/// @brief Field _continuousRumblePreset offset 0x20
 __declspec(property(get=__get__continuousRumblePreset, put=__set__continuousRumblePreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _continuousRumblePreset;

/// @brief Field _rumbleHapticFeedbackPlayer offset 0x28
 __declspec(property(get=__get__rumbleHapticFeedbackPlayer, put=__set__rumbleHapticFeedbackPlayer)) ::GlobalNamespace::RumbleHapticFeedbackPlayer*  _rumbleHapticFeedbackPlayer;

/// @brief Field _advancedHapticFeedbackPlayer offset 0x30
 __declspec(property(get=__get__advancedHapticFeedbackPlayer, put=__set__advancedHapticFeedbackPlayer)) ::GlobalNamespace::IHapticFeedbackPlayer*  _advancedHapticFeedbackPlayer;

 __declspec(property(get=get_continuousRumblePreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  continuousRumblePreset;

constexpr void __set__controllersRumbleEnabled(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__controllersRumbleEnabled() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__controllersRumbleEnabled() const;

constexpr void __set__continuousRumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__continuousRumblePreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__continuousRumblePreset() const;

constexpr void __set__rumbleHapticFeedbackPlayer(::GlobalNamespace::RumbleHapticFeedbackPlayer*  value) ;

constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer* __get__rumbleHapticFeedbackPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RumbleHapticFeedbackPlayer*> __get__rumbleHapticFeedbackPlayer() const;

constexpr void __set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer*  value) ;

constexpr ::GlobalNamespace::IHapticFeedbackPlayer* __get__advancedHapticFeedbackPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IHapticFeedbackPlayer*> __get__advancedHapticFeedbackPlayer() const;

/// @brief Method get_continuousRumblePreset addr 0x20f6dc0 size 0x8 virtual false final false
inline ::Libraries::HM::HMLib::VR::HapticPresetSO* get_continuousRumblePreset() ;

/// @brief Method PlayHapticFeedback addr 0x20f6dc8 size 0x17c virtual false final false
inline void PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

static inline ::GlobalNamespace::HapticFeedbackManager* New_ctor() ;

/// @brief Method .ctor addr 0x20f700c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticFeedbackManager(HapticFeedbackManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticFeedbackManager(HapticFeedbackManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HapticFeedbackManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticFeedbackManager, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackManager*, "", "HapticFeedbackManager");
