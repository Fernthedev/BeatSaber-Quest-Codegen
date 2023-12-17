#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowResolutionSettingsController)
namespace GlobalNamespace {
class Vector2IntSO;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class WindowResolutionSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WindowResolutionSettingsController);
// Type: ::WindowResolutionSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5611))
// CS Name: ::WindowResolutionSettingsController*
class CORDL_TYPE WindowResolutionSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::ListSettingsController)]{};

/// @brief Field _windowResolution offset 0x28
 __declspec(property(get=__get__windowResolution, put=__set__windowResolution)) ::GlobalNamespace::Vector2IntSO*  _windowResolution;

/// @brief Field _windowResolutions offset 0x30
 __declspec(property(get=__get__windowResolutions, put=__set__windowResolutions)) ::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>  _windowResolutions;

constexpr void __set__windowResolution(::GlobalNamespace::Vector2IntSO*  value) ;

constexpr ::GlobalNamespace::Vector2IntSO* __get__windowResolution() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> __get__windowResolution() const;

constexpr void __set__windowResolutions(::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>& __get__windowResolutions() ;

constexpr ::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*> const& __get__windowResolutions() const;

/// @brief Method GetInitValues addr 0x22ac288 size 0x214 virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x22ac49c size 0x74 virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method TextForValue addr 0x22ac510 size 0xcc virtual true final false
inline ::StringW TextForValue(int32_t  idx) ;

static inline ::GlobalNamespace::WindowResolutionSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22ac5dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowResolutionSettingsController(WindowResolutionSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowResolutionSettingsController(WindowResolutionSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WindowResolutionSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WindowResolutionSettingsController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WindowResolutionSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
