#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerSpectatingSpotPickerViewController)
namespace GlobalNamespace {
class StepValuePicker;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatingSpotPickerViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
// Type: ::MultiplayerSpectatingSpotPickerViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5060))
// CS Name: ::MultiplayerSpectatingSpotPickerViewController*
class CORDL_TYPE MultiplayerSpectatingSpotPickerViewController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _stepValuePicker offset 0x18
 __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker)) ::GlobalNamespace::StepValuePicker*  _stepValuePicker;

/// @brief Field _spectatorController offset 0x20
 __declspec(property(get=__get__spectatorController, put=__set__spectatorController)) ::GlobalNamespace::MultiplayerSpectatorController*  _spectatorController;

constexpr void __set__stepValuePicker(::GlobalNamespace::StepValuePicker*  value) ;

constexpr ::GlobalNamespace::StepValuePicker* __get__stepValuePicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> __get__stepValuePicker() const;

constexpr void __set__spectatorController(::GlobalNamespace::MultiplayerSpectatorController*  value) ;

constexpr ::GlobalNamespace::MultiplayerSpectatorController* __get__spectatorController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatorController*> __get__spectatorController() const;

/// @brief Method Start addr 0x23c68c4 size 0x148 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23c6b08 size 0x1b4 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSpectatingSpotDidChangeEvent addr 0x23c6cbc size 0x4 virtual false final false
inline void HandleSpectatingSpotDidChangeEvent(::GlobalNamespace::IMultiplayerSpectatingSpot*  spectatingSpot) ;

/// @brief Method RefreshSpectatingSpotName addr 0x23c6a0c size 0xfc virtual false final false
inline void RefreshSpectatingSpotName() ;

/// @brief Method HandleIncButtonWasPressed addr 0x23c6cc0 size 0x1c virtual false final false
inline void HandleIncButtonWasPressed() ;

/// @brief Method HandleDecButtonWasPressed addr 0x23c6cdc size 0x1c virtual false final false
inline void HandleDecButtonWasPressed() ;

static inline ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController* New_ctor() ;

/// @brief Method .ctor addr 0x23c6cf8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerSpectatingSpotPickerViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*, "", "MultiplayerSpectatingSpotPickerViewController");
