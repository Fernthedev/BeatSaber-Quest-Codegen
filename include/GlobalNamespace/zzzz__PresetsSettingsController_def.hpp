#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresetsSettingsController)
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class NamedPresetsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PresetsSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresetsSettingsController);
// Type: ::PresetsSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5599))
// CS Name: ::PresetsSettingsController*
class CORDL_TYPE PresetsSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::ListSettingsController)]{};

/// @brief Field _settingsValue offset 0x28
 __declspec(property(get=__get__settingsValue, put=__set__settingsValue)) ::GlobalNamespace::IntSO*  _settingsValue;

/// @brief Field _presets offset 0x30
 __declspec(property(get=__get__presets, put=__set__presets)) ::GlobalNamespace::NamedPresetsSO*  _presets;

/// @brief Field _limitNumberOfElements offset 0x38
 __declspec(property(get=__get__limitNumberOfElements, put=__set__limitNumberOfElements)) bool  _limitNumberOfElements;

/// @brief Field _numberOfElementsLimit offset 0x3c
 __declspec(property(get=__get__numberOfElementsLimit, put=__set__numberOfElementsLimit)) int32_t  _numberOfElementsLimit;

constexpr void __set__settingsValue(::GlobalNamespace::IntSO*  value) ;

constexpr ::GlobalNamespace::IntSO* __get__settingsValue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> __get__settingsValue() const;

constexpr void __set__presets(::GlobalNamespace::NamedPresetsSO*  value) ;

constexpr ::GlobalNamespace::NamedPresetsSO* __get__presets() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedPresetsSO*> __get__presets() const;

constexpr void __set__limitNumberOfElements(bool  value) ;

constexpr bool& __get__limitNumberOfElements() ;

constexpr bool const& __get__limitNumberOfElements() const;

constexpr void __set__numberOfElementsLimit(int32_t  value) ;

constexpr int32_t& __get__numberOfElementsLimit() ;

constexpr int32_t const& __get__numberOfElementsLimit() const;

/// @brief Method GetInitValues addr 0x22ab000 size 0xd8 virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x22ab0d8 size 0x58 virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method TextForValue addr 0x22ab130 size 0x50 virtual true final false
inline ::StringW TextForValue(int32_t  idx) ;

static inline ::GlobalNamespace::PresetsSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22ab180 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PresetsSettingsController(PresetsSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PresetsSettingsController(PresetsSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PresetsSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresetsSettingsController, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresetsSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
